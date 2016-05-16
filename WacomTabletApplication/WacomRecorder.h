/*----------------------------------------------------------------------------s
	NAME
		WacomRecorder.h

	PURPOSE
		This demo shows how to use Wintab to detect/display pen pressure input
		for multiple tablets.

	COPYRIGHT
		Copyright (C) 1998  LCS/Telegraphics
		Copyright (c) Wacom Company, Ltd. 2014 All Rights Reserved
		All rights reserved.

		The text and information contained in this file may be freely used,
		copied, or distributed without compensation or licensing restrictions.

---------------------------------------------------------------------------- */

#define IDM_ABOUT 100
#define NO_TIME_LIMIT_WACOM -1
#define TIME_LIMIT_15SEG_WACOM 15000

int PASCAL TabletLaunch(HINSTANCE, HINSTANCE, LPSTR, int);
BOOL InitApplication(HANDLE);
BOOL InitInstance(HINSTANCE, int);
LRESULT FAR PASCAL MainWndProc(HWND, unsigned, WPARAM, LPARAM);
BOOL FAR PASCAL About(HWND, unsigned, WPARAM, LPARAM);
void Cleanup( void );
