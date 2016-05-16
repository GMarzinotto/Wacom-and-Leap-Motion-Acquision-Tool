#include "AlreadyOneTest.h"

using namespace System;
using namespace System::Windows::Forms;



BOOL WacomTabletApplication::AlreadyOneTest::DirectoryExists(LPCTSTR szPath){
	DWORD dwAttrib = GetFileAttributes(szPath);
	return (dwAttrib != INVALID_FILE_ATTRIBUTES && 	(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
}


int WacomTabletApplication::AlreadyOneTest::getLastTestIDXFolder() {
	
	int k = 1;
	msclr::interop::marshal_context context;
	LPCTSTR path_trial;

	do {
		k++;
		path_trial = context.marshal_as<const TCHAR*>(String::Concat(previousTestFolderPath, L" (", System::Convert::ToString(k),L")"));
	} while (DirectoryExists(path_trial));

	return (k - 1);
}

LONG WacomTabletApplication::AlreadyOneTest::DeleteDirectoryAndAllSubfolders(LPCWSTR wzDirectory)
{
	WCHAR szDir[MAX_PATH + 1];  // +1 for the double null terminate
	SHFILEOPSTRUCTW fos = { 0 };

	StringCchCopy(szDir, MAX_PATH, wzDirectory);
	int len = lstrlenW(szDir);
	szDir[len + 1] = 0; // double null terminate for SHFileOperation

						// delete the folder and everything inside
	fos.wFunc = FO_DELETE;
	fos.pFrom = szDir;
	fos.fFlags = FOF_NO_UI;
	return SHFileOperation(&fos);
}

void WacomTabletApplication::AlreadyOneTest::DeletePreviousRecording() {

	msclr::interop::marshal_context context;

	int lastFolderIDX = getLastTestIDXFolder();
	if (lastFolderIDX>1) previousTestFolderPath = previousTestFolderPath + " (" + System::Convert::ToString(lastFolderIDX) + ")";

	pin_ptr<const wchar_t> wname = PtrToStringChars(previousTestFolderPath);

	DeleteDirectoryAndAllSubfolders(wname);
	CreateDirectory(context.marshal_as<const TCHAR*>(previousTestFolderPath), NULL);

}