/*----------------------------------------------------------------------------s
	NAME
		WacomRecorder.cpp

	PURPOSE
		This demo shows how to use Wintab to detect/display pen pressure input
		for multiple tablets.  
		
		Can be built for either Wintab system or digitizer contexts.

	COPYRIGHT
		Copyright (C) 1998  LCS/Telegraphics
		Copyright (c) Wacom Company, Ltd. 2015 All Rights Reserved
		All rights reserved.

		The text and information contained in this file may be freely used,
		copied, or distributed without compensation or licensing restrictions.
---------------------------------------------------------------------------- */

#include <windows.h>
#include <windowsx.h>
#include "Dependencies/msgpack.h"
#include "Dependencies/wintab.h"
#define PACKETDATA	(PK_X | PK_Y | PK_BUTTONS | PK_NORMAL_PRESSURE | PK_ORIENTATION | PK_TIME)
#define PACKETMODE	PK_BUTTONS
#include "Dependencies/pktdef.h"
#include "Dependencies/Utils.h"
#include "WacomRecorder.h"
#include <vector>
#include <map>
#include <sstream>
#include <iostream>
#include <fstream>

// Comment the following line if building for tablet digitizer contexts: WTI_DDCTXS
// Uncomment the line if building for system context: WTI_DEFSYSCTX
#define BUILD_FOR_SYSCTX

// Uncomment the following line if using mouse messages and polling for Wintab data.
//#define USE_MOUSE_MESSAGES

#if defined (USE_MOUSE_MESSAGES)
// Keeps track of Wintab context of first tablet found, which will be used
// as the context of the tablet to polled for demo purposes.
// (Note that when relying on Wintab events, the tablet context comes along with
// the WT_PACKET message, so this kind of thing is not needed.)
HCTX g_hCtxUsedForPolling = NULL;

// This is the max number of Wintab data packets queried for at a time
// when using the polling method of getting Wintab data.
#define MAX_PACKETS	20
#endif

// Uncomment the following line if you WANT the pen to move the mouse cursor
//#define PEN_MOVES_SYSTEM_CURSOR

// Uncomment the following line if you WANT the app to receive pen data packet
// messages no matter whether the app is in the foreground or not.
#define APP_ALWAYS_RECEIVES_WT_PACKETS

HINSTANCE g_hInst = NULL;

#if defined(BUILD_FOR_SYSCTX)
static bool g_openSystemContext = true;
#else
static bool g_openSystemContext = false;
#endif

///////////////////////////////////////////////////////////////////////////////
// Hold tablet-specific properties used when responding to tablet data packets.
//
typedef struct 
{
	int		maxPressure;
	COLORREF	penColor;
	char		name[32];
} TabletInfo;


///////////////////////////////////////////////////////////////////////////////
// Cache all opened contexts.  
// This will allow us to close them when the window closes down.
//
std::map<HCTX, TabletInfo> gContextMap;


///////////////////////////////////////////////////////////////////////////////
// Rotate through these colors for all tablets.
//
typedef enum
{
	PenColorRed,
	PenColorGreen,
	PenColorBlue,

	MAX_PEN_COLOR
} EPenColor;

EPenColor gNextPenColor = PenColorBlue;

///////////////////////////////////////////////////////////////////////////////
// Global variables
//
char* gpszProgramName = "WacomRecorder";
std::ofstream myfile;

static int gnOpenContexts = 0;
static int gnAttachedDevices = 0;

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow);
BOOL InitApplication(HINSTANCE hInstance);

static int ScaleX = GetSystemMetrics(SM_CXVIRTUALSCREEN);
static int ScaleY = GetSystemMetrics(SM_CYVIRTUALSCREEN);
static int OffstX = GetSystemMetrics(SM_XVIRTUALSCREEN);
static int OffstY = GetSystemMetrics(SM_YVIRTUALSCREEN);

int max_Time_Recording = 0;

///////////////////////////////////////////////////////////////////////////////

#if defined(USE_MOUSE_MESSAGES)
/// Asks Wintab for a data packet.  Normally would use this in response to 
/// a non-Wintab event, such as a mouse event.  If new data received, the
/// drawing area is invalidated so that the data can be drawn.
///
void PollForPenData(HCTX hCtx_I, HWND hWnd_I, POINT& ptOld_I, UINT& prsOld_I, POINT& ptNew_O, UINT& prsNew_O)
{
	PACKET pkts[MAX_PACKETS] = {0};

	// Get up to MAX_PACKETS from Wintab data packet cache per request.
	int numPackets = gpWTPacketsGet(hCtx_I, MAX_PACKETS, (LPVOID)pkts);

	for (int idx = 0; idx < numPackets; idx++)
	{
		PACKET* pkt = &pkts[idx];

		//WacomTrace("pkt: x,y,p: %i,%i,%i\n", pkt->pkX, pkt->pkY, pkt->pkNormalPressure);

		ptOld_I = ptNew_O;
		prsOld_I = prsNew_O;

		ptNew_O.x = pkt->pkX;
		ptNew_O.y = pkt->pkY;

		prsNew_O = pkt->pkNormalPressure;

		if (ptNew_O.x != ptOld_I.x ||
				ptNew_O.y != ptOld_I.y ||
				prsNew_O != prsOld_I) 
		{
			InvalidateRect(hWnd_I, NULL, FALSE);
		}
	}
}
#endif //USE_MOUSE_MESSAGES

///////////////////////////////////////////////////////////////////////////////
int PASCAL TabletLaunch(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int Time)
{
	MSG msg;
	max_Time_Recording = Time;

	if (!hPrevInstance)
		if (!InitApplication(hInstance)) {
			DWORD dw = GetLastError();
			if(dw != ERROR_CLASS_ALREADY_EXISTS)
				return (FALSE);
		}

	/* Perform initializations that apply to a specific instance */

	if (!InitInstance(hInstance, SW_SHOWDEFAULT))
	{
		return (FALSE);
	}

	/* Acquire and dispatch messages until a WM_QUIT message is received. */

	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	// Return Wintab resources.
	Cleanup();

	return (msg.wParam);
}



///////////////////////////////////////////////////////////////////////////////
BOOL InitApplication(HINSTANCE hInstance)
{
	WNDCLASS  wc;

	/* Fill in window class structure with parameters that describe the       */
	/* main window.                                                           */

	wc.style = 0;
	wc.lpfnWndProc = MainWndProc;

	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_APPWORKSPACE + 1);
	wc.lpszMenuName =  L"WacomRecorderMenu";
	wc.lpszClassName = L"WacomRecorderWClass";

	/* Register the window class and return success/failure code. */

	return (RegisterClass(&wc));

}



///////////////////////////////////////////////////////////////////////////////
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow){
	HWND hWnd;
	char	buf[50];
	

	/* Save the instance handle in static variable, which will be used in  */
	/* many subsequence calls from this application to Windows.            */

	g_hInst = hInstance;

	if ( !LoadWintab( ) )
	{
		ShowError( "Wintab not available" );
		return FALSE;
	}

	/* check if WinTab available. */
	if (!gpWTInfoA(0, 0, NULL)) 
	{
		ShowError( "WinTab Services Not Available." );
		return FALSE;
	}

	/* Create a main window for this application instance.  */

	hWnd = CreateWindow(
		L"WacomRecorderWClass",
		L"Wacom Tablet Recorder",
		WS_DISABLED | WS_MAXIMIZE ,
		0,
		0,
		ScaleX,
		ScaleY,
		NULL,
		NULL,
		hInstance,
		NULL
	);

	/* If window could not be created, return "failure" */

	if (!hWnd)
	{
		ShowError( "Could not create window!");
		return (FALSE);
	}

	/* Make the window visible; update its client area; and return "success" */

	ShowWindow(hWnd, nCmdShow);
	SetWindowPos(hWnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE | SWP_NOACTIVATE);
	UpdateWindow(hWnd);
	return (TRUE);

}

///////////////////////////////////////////////////////////////////////////////
// Open contexts for all attached tablets.
// Returns true if any tablet(s) configured.
//
BOOL static NEAR OpenTabletContexts(HWND hWnd)
{
	int ctxIndex = 0;
	gnOpenContexts = 0;
	gnAttachedDevices = 0;
	std::stringstream szTabletName;

	gContextMap.clear();

	gpWTInfoA(WTI_INTERFACE, IFC_NDEVICES, &gnAttachedDevices);
	WacomTrace("Number of attached devices: %i\n", gnAttachedDevices);

	// Open/save contexts until first failure to open a context.
	// Note that gpWTInfoA(WTI_STATUS, STA_CONTEXTS, &nOpenContexts);
	// will not always let you enumerate through all contexts.
	do
	{
		int foundCtx = 0;
		LOGCONTEXTA lcMine = {0};
		UINT wWTInfoRetVal = 0;
		AXIS TabletX = {0};
		AXIS TabletY = {0};
		AXIS Pressure = {0};

		WacomTrace("Getting info on contextIndex: %i ...\n", ctxIndex);

		if ( g_openSystemContext )
		{
			// Opens a system context; XY returned as pixels for all 
			// attached tablets.
			foundCtx = gpWTInfoA(WTI_DEFSYSCTX, 0, &lcMine);
		}
		else
		{
			// Opens a digitizer context; XY returned as tablet coordinates for 
			// each attached tablet.
			foundCtx = gpWTInfoA(WTI_DDCTXS + ctxIndex, 0, &lcMine);
		}

		if ( foundCtx > 0 )
		{
			lcMine.lcPktData = PACKETDATA;
			lcMine.lcOptions |= CXO_MESSAGES;

#if defined(PEN_MOVES_SYSTEM_CURSOR)
			lcMine.lcOptions |= CXO_SYSTEM;	// move system cursor
#else
			lcMine.lcOptions &= ~CXO_SYSTEM;	// don't move system cursor
#endif //PEN_MOVES_SYSTEM_CURSOR

			lcMine.lcPktMode = PACKETMODE;
			lcMine.lcMoveMask = PACKETDATA;
			lcMine.lcBtnUpMask = lcMine.lcBtnDnMask;

			// Set the entire tablet as active
			wWTInfoRetVal = gpWTInfoA( WTI_DEVICES + ctxIndex, DVC_X, &TabletX );
			if (  wWTInfoRetVal != sizeof( AXIS ) )
			{
				WacomTrace("This context should not be opened.\n");
				continue;
			}

			wWTInfoRetVal = gpWTInfoA( WTI_DEVICES + ctxIndex, DVC_Y, &TabletY );

			gpWTInfoA( WTI_DEVICES + ctxIndex, DVC_NPRESSURE, &Pressure );
			WacomTrace("Pressure: %i, %i\n", Pressure.axMin, Pressure.axMax);

			if ( g_openSystemContext )
			{
				// leave lcIn* and lcOut* as-is except for reversing lcOutExtY.

				// In Wintab, the tablet origin is lower left.  Move origin to upper left
				// so that it coincides with screen origin.
				// COMENTE ESTO PERRO lcMine.lcOutExtY = -lcMine.lcOutExtY;
				lcMine.lcOutOrgX = 0;
				lcMine.lcOutOrgY = 0;
				lcMine.lcOutExtX = TabletX.axMax;
				lcMine.lcOutExtY = -TabletY.axMax;
			}
			else
			{
				lcMine.lcInOrgX = 0;
				lcMine.lcInOrgY = 0;
				lcMine.lcInExtX = TabletX.axMax;
				lcMine.lcInExtY = TabletY.axMax;

				// Guarantee the output coordinate space to be in screen coordinates.  
				lcMine.lcOutOrgX = GetSystemMetrics( SM_XVIRTUALSCREEN );
				lcMine.lcOutOrgY = GetSystemMetrics( SM_YVIRTUALSCREEN );
				lcMine.lcOutExtX = GetSystemMetrics( SM_CXVIRTUALSCREEN );

				// In Wintab, the tablet origin is lower left.  Move origin to upper left
				// so that it coincides with screen origin.
				lcMine.lcOutExtY = -GetSystemMetrics( SM_CYVIRTUALSCREEN );
			}
			
			// Leave the system origin and extents as received:
			// lcSysOrgX, lcSysOrgY, lcSysExtX, lcSysExtY

			// Open the context enabled.
			HCTX hCtx = gpWTOpenA(hWnd, &lcMine, TRUE);

#if defined(USE_MOUSE_MESSAGES)
			// Save the first context, to be used to poll first tablet found when
			// mouse messages are received.
			if ( !g_hCtxUsedForPolling && hCtx)
			{
				g_hCtxUsedForPolling = hCtx;
			}
#endif //USE_MOUSE_MESSAGES

			if ( hCtx )
			{
				// Save context
				COLORREF penColor = MAX_PEN_COLOR;

				switch (gNextPenColor)
				{
					case PenColorRed:	penColor = RGB(255,0,0);	gNextPenColor = PenColorGreen; break;
					case PenColorGreen:	penColor = RGB(0,255,0);	gNextPenColor = PenColorBlue; break;
					case PenColorBlue:	penColor = RGB(0,0,255);	gNextPenColor = PenColorRed; break;
					default:
						WACOM_ASSERT( !"Bad pen color" );
				}

				TabletInfo info = { Pressure.axMax, penColor };
				sprintf(info.name, "Tablet: %i\n", ctxIndex);
				gContextMap[hCtx] = info;
				WacomTrace("Opened context: 0x%X for ctxIndex: %i\n", hCtx, ctxIndex);
				gnOpenContexts++;
			}
			else
			{
				WacomTrace("Did NOT open context for ctxIndex: %i\n", ctxIndex);
			}
		}
		else
		{
			WacomTrace("No context info for ctxIndex: %i, bailing out...\n", ctxIndex);
			break;
		}

		if ( g_openSystemContext )
		{
			break;	// we're done; only the one context; bail out...
		}

		ctxIndex++;
	} while (TRUE);

	if ( gnOpenContexts < gnAttachedDevices && !g_openSystemContext)
	{
		ShowError("Oops - did not open a context for each attached device");
	}

	/*{
		std::stringstream szTitle; szTitle.flush();
		szTitle << gpszProgramName << ": #tablet(s) attached: " << gnAttachedDevices;
		SetWindowText(hWnd, szTitle.str().c_str());
	}*/

	return gnAttachedDevices > 0;
}


///////////////////////////////////////////////////////////////////////////////
// Close all opened tablet contexts.
//
void CloseTabletContexts(void)
{
	// Close all contexts we opened so we don't have them lying around in prefs.
	for (std::map<HCTX, TabletInfo>::iterator it = gContextMap.begin();
			it != gContextMap.end(); ++it)
	{
		HCTX hCtx = it->first;
		WacomTrace("Closing context: 0x%X\n", hCtx);

		gpWTClose(hCtx);
	}

	gContextMap.clear();

	gnOpenContexts = 0;
	gnAttachedDevices = 0;
}

///////////////////////////////////////////////////////////////////////////////
LRESULT FAR PASCAL MainWndProc(HWND hWnd, unsigned message ,WPARAM wParam, LPARAM lParam)
{
	static POINT ptOld = {0};
	static POINT ptNew = {0};
	static UINT prsOld = 0;
	static UINT prsNew = 0;
	static RECT rcClient = {0};
	static HCTX hctx = NULL;

	static ORIENTATION ortOld, ortNew;
	static DWORD timeOld=0, timeNew=0, firstTime = 0, firstTimeOnTablet = 0;

	DLGPROC lpProcAbout = NULL;
	PAINTSTRUCT psPaint = {0};
	HDC hDC = NULL;
	BOOL fHandled = TRUE;
	LRESULT lResult = 0L;

	switch (message) 
	{
		case WM_CREATE:
			// Initialize a Wintab context for each connected tablet.
			myfile.open("lastRecording.txt");
			firstTime = 0;
			if ( !OpenTabletContexts(hWnd) )
			{
				ShowError("No tablets found.");
				SendMessage(hWnd, WM_DESTROY, 0, 0L);
			}
			break;

		case WM_MOVE:
		case WM_SIZE:
			GetClientRect(hWnd, &rcClient);
			InvalidateRect(hWnd, NULL, TRUE);
			break;

		case WM_COMMAND:
			if (GET_WM_COMMAND_ID(wParam, lParam) == IDM_ABOUT) {
				lpProcAbout = MakeProcInstance(About, g_hInst);

				DialogBox(g_hInst, L"AboutBox", hWnd, lpProcAbout);

				FreeProcInstance(lpProcAbout);
			}
			else
				fHandled = FALSE;
			break;

#if defined(USE_MOUSE_MESSAGES)
		//
		// Get Wintab data by polling Wintab when mouse messages received. 
		//
		case WM_LBUTTONDOWN:
			PollForPenData(g_hCtxUsedForPolling, hWnd, ptOld, prsOld, ptNew, prsNew);
			break;

		case WM_LBUTTONUP:
			PollForPenData(g_hCtxUsedForPolling, hWnd, ptOld, prsOld, ptNew, prsNew);
			break;

		case WM_MOUSEMOVE:
			PollForPenData(g_hCtxUsedForPolling, hWnd, ptOld, prsOld, ptNew, prsNew);
			break;
#else
		//
		// Get Wintab data by waiting for Wintab to send data packets.
		//
		case WT_PACKET:
			{
				hctx = (HCTX)lParam;
				PACKET pkt = {0};
				

				// Wintab X/Y data is in screen coordinates. These will have to
				// be converted to client coordinates in the WM_PAINT handler.
				if (gpWTPacket(hctx, wParam, &pkt))
				{
					WacomTrace("hctx[0x%X], pkt: x,y,p: %i,%i,%i,%i,%i\n",
						hctx, pkt.pkX, pkt.pkY, pkt.pkNormalPressure, pkt.pkOrientation.orAzimuth, pkt.pkOrientation.orAltitude);

					if (firstTime == 0) {
						firstTime = pkt.pkTime;
						myfile << "Time X  Y  P  Az  Al \n";
					}

					if (firstTimeOnTablet == 0 && pkt.pkNormalPressure > 0) {
						firstTimeOnTablet = pkt.pkTime - firstTime;
					}

					timeOld = timeNew;
					ortOld = ortNew;
					timeNew = pkt.pkTime - firstTime;

					ptOld = ptNew;
					prsOld = prsNew;

					ptNew.x = pkt.pkX;
					ptNew.y = pkt.pkY;

					prsNew = pkt.pkNormalPressure;
					ortNew = pkt.pkOrientation;

					if (timeNew != timeOld || ptNew.x != ptOld.x || ptNew.y != ptOld.y || prsNew != prsOld ||
						ortNew.orAzimuth != ortOld.orAzimuth ||	ortNew.orAltitude != ortOld.orAltitude)
					{
						InvalidateRect(hWnd, NULL, FALSE);
					}

					if ((max_Time_Recording!= NO_TIME_LIMIT_WACOM)&&(firstTimeOnTablet != 0) && (timeNew  > max_Time_Recording + firstTimeOnTablet)) {
						MessageBeep(0);
						DestroyWindow(hWnd);
					}
					myfile << timeNew << " " << ptNew.x << " " << ptNew.y << " " << prsNew << " " << ortNew.orAzimuth << " " << ortNew.orAltitude << "\n";
				}
				else 	{ WacomTrace("Oops - got pinged by an unknown context: 0x%X", hctx);	}
			}
			break;
#endif // USE_MOUSE_MESSAGES

      case WT_INFOCHANGE:
         {
            int nAttachedDevices = 0;
            gpWTInfoA(WTI_INTERFACE, IFC_NDEVICES, &nAttachedDevices);

            WacomTrace("WT_INFOCHANGE detected; number of connected tablets is now: %i\n", nAttachedDevices);

				if (nAttachedDevices != gnAttachedDevices )
				{
					// kill all current tablet contexts
					CloseTabletContexts();

					// Add some delay to give driver a chance to catch up in configuring
					// to the current attached tablets.  
					// 1 second seems to work - your mileage may vary...
					::Sleep(1000);

					// re-enumerate attached tablets
					OpenTabletContexts(hWnd);
				}

				if ( gnAttachedDevices == 0 )
				{
					ShowError("No tablets found.");
					SendMessage(hWnd, WM_DESTROY, 0, 0L);
				}
         }
         break;

		case WT_PROXIMITY:
			{
				hctx = (HCTX)wParam;

				bool entering = (HIWORD(lParam) != 0);

				if ( entering )
				{
					if ( gContextMap.count(hctx) > 0 )
					{
						TabletInfo info = gContextMap[hctx];

						std::stringstream szTitle;	szTitle.flush();
						if ( g_openSystemContext )
						{
							szTitle << gpszProgramName << "; #tablet(s) attached: " << gnAttachedDevices << "; drawing on: virtual system context";
						}
						else
						{
							szTitle << gpszProgramName << "; #tablet(s) attached: " << gnAttachedDevices << "; drawing on: " << info.name;
						}
						WacomTrace("Tablet name: %s\n", szTitle.str().c_str());
					}
					else { WacomTrace("Oops - couldn't find context: 0x%X\n", hctx);}
				}
			}
			break;


	//case WM_ACTIVATE:
		//	if (GET_WM_ACTIVATE_STATE(wParam, lParam))
		//		InvalidateRect(hWnd, NULL, TRUE);

		//	/* if switching in the middle, disable the region */
		//	if (hCtx) {
		//		gpWTEnable(hCtx, GET_WM_ACTIVATE_STATE(wParam, lParam));
		//		if (hCtx && GET_WM_ACTIVATE_STATE(wParam, lParam))
		//			gpWTOverlap(hCtx, TRUE);
		//	}
		//	break;

#if defined(APP_ALWAYS_RECEIVES_WT_PACKETS)
		case WT_CTXOVERLAP:
			// Force context to always be on top so that it will
			// get the data, even if out of focus.
			if (hctx) 
			{
				gpWTOverlap(hctx, TRUE);
			}
			break;
#endif //APP_ALWAYS_RECEIVES_WT_PACKETS

		case WM_DESTROY:
			CloseTabletContexts();
			myfile.close();
			PostQuitMessage(0);
			break;

		case WM_PAINT:
			if (hDC = BeginPaint(hWnd, &psPaint)) 
			{
				if ( prsNew > 0 )
				{
					HGDIOBJ original = SelectObject(hDC,GetStockObject(DC_PEN));

#if defined(USE_MOUSE_MESSAGES)
					int penWidth = (int)(1 + std::floor(10 * (double)prsNew / (double)1024));
					COLORREF penColor = RGB(0,0,255);	// blue
#else
					int penWidth = (int)(1 + std::floor(10 * (double)prsNew / (double)gContextMap[hctx].maxPressure));
					COLORREF penColor = gContextMap[hctx].penColor;
#endif

					HPEN hPen = CreatePen(PS_SOLID,penWidth,penColor);
					SelectObject(hDC, hPen);

					POINT oldPoint = { (ptOld.x*ScaleX) / 65000 + OffstX, (ptOld.y *ScaleY) / 45000 + OffstY + 0.05*ScaleY };
					POINT newPoint = { (ptNew.x*ScaleX) / 65000 + OffstX, (ptNew.y *ScaleY) / 45000 + OffstY + 0.05*ScaleY };
					
					ScreenToClient(hWnd, &oldPoint);
					ScreenToClient(hWnd, &newPoint);

					MoveToEx(hDC, oldPoint.x, oldPoint.y, NULL);
					LineTo(hDC, newPoint.x, newPoint.y);

					DeleteObject(hPen);
					SelectObject(hDC,original);
					EndPaint(hWnd, &psPaint);
				}
			}
			break;

		default:
			fHandled = FALSE;
			break;
	}
	if (fHandled)
		return (lResult);
	else
		return (DefWindowProc(hWnd, message, wParam, lParam));
}



///////////////////////////////////////////////////////////////////////////////
BOOL FAR PASCAL About(HWND hDlg, unsigned message, WPARAM wParam, LPARAM lParam)
{
	switch (message) {
	case WM_INITDIALOG:
		return (TRUE);

	case WM_COMMAND:
		if (GET_WM_COMMAND_ID(wParam, lParam) == IDOK
				|| GET_WM_COMMAND_ID(wParam, lParam) == IDCANCEL) {
		EndDialog(hDlg, TRUE);
		return (TRUE);
		}
		break;
	}
	return (FALSE);
}



///////////////////////////////////////////////////////////////////////////////
// Purpose
//		Release resources we used in this example.
//
void Cleanup( void )
{
	WACOM_TRACE( "Cleanup()\n" );

	UnloadWintab( );
}


