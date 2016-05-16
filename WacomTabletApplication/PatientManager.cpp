#include "PatientManager.h"


using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::PatientManager::UpdateLanguage_PatientManagerForm(String^ language) {

	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/PatientManagerForm/FormTitle"));
	pin_ptr<const wchar_t> str_chosepatient = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/PatientManagerForm/ChosePatient"));
	pin_ptr<const wchar_t> str_newpatient = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/PatientManagerForm/NewPatient"));
	pin_ptr<const wchar_t> str_delpatient = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/PatientManagerForm/DeletePatient"));
	pin_ptr<const wchar_t> str_newexBrocaFr = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/PatientManagerForm/NewExerciseBrocaFrench"));
	pin_ptr<const wchar_t> str_newexBrocaAr = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/PatientManagerForm/NewExerciseBrocaArab"));
	pin_ptr<const wchar_t> str_newexSignature = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/PatientManagerForm/NewExerciseSignatures"));
	pin_ptr<const wchar_t> str_update = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/PatientManagerForm/UpdateInfo"));
	pin_ptr<const wchar_t> str_history = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/PatientManagerForm/History"));

	PatientManager::Text = queryNode(str_title);
	LABEL_SELECT_PATIENT->Text = queryNode(str_chosepatient);
	NEW_PATIENT_BUTTON->Text = queryNode(str_newpatient);
	DELETE_PATIENT_BUTTON->Text = queryNode(str_delpatient);
	NEW_EXERCISE_BROCA_FRENCH->Text = queryNode(str_newexBrocaFr);
	NEW_EXERCISE_BROCA_ARAB->Text = queryNode(str_newexBrocaAr);
	NEW_EXERCISE_SIGNATURE->Text = queryNode(str_newexSignature);
	UPDATE_INFO_BUTTON->Text = queryNode(str_update);
	EXERCISE_HISTORY->Text = queryNode(str_history);

}


void WacomTabletApplication::PatientManager::DeletePatient() {

	msclr::interop::marshal_context context;

	String^ arabPatientPath		= "Patients Records\\HW-ARAB\\"    + COMBOBOX_SELECT_PATIENT->Text;
	String^ frenchPatientPath	= "Patients Records\\HW-FRENCH\\"  + COMBOBOX_SELECT_PATIENT->Text;
	String^ leapTPatientPath	= "Patients Records\\LEAP-TOOLS\\" + COMBOBOX_SELECT_PATIENT->Text;
	String^ leapHPatientPath	= "Patients Records\\LEAP-HAND\\"  + COMBOBOX_SELECT_PATIENT->Text;
	String^ signPatientPath		= "Patients Records\\SIGNATURES\\" + COMBOBOX_SELECT_PATIENT->Text;

	pin_ptr<const wchar_t> arab = PtrToStringChars(arabPatientPath);
	pin_ptr<const wchar_t> french = PtrToStringChars(frenchPatientPath);
	pin_ptr<const wchar_t> leapT = PtrToStringChars(leapTPatientPath);
	pin_ptr<const wchar_t> leapH = PtrToStringChars(leapHPatientPath);
	pin_ptr<const wchar_t> sign = PtrToStringChars(signPatientPath);

	DeleteDirectoryAndAllSubfolders(arab);
	DeleteDirectoryAndAllSubfolders(french);
	DeleteDirectoryAndAllSubfolders(leapT);
	DeleteDirectoryAndAllSubfolders(leapH);
	DeleteDirectoryAndAllSubfolders(sign);

	removePatientFromList(COMBOBOX_SELECT_PATIENT->Text);
	COMBOBOX_SELECT_PATIENT->Text = "";

}


void WacomTabletApplication::PatientManager::BeginTest(TestTypes type) {
	if (COMBOBOX_SELECT_PATIENT->Text->Length > 0) {
		SYSTEMTIME timeOfTest;
		GetSystemTime(&timeOfTest);
		pin_ptr<const wchar_t> fullname;

		switch (type) {
		case TestTypes::Broca_French: fullname = PtrToStringChars(String::Concat(L"Patients Records\\HW-FRENCH\\", COMBOBOX_SELECT_PATIENT->Text, "\\TestDay", System::Convert::ToString(timeOfTest.wDay), "-", System::Convert::ToString(timeOfTest.wMonth), "-", System::Convert::ToString(timeOfTest.wYear))); break;
		case TestTypes::Broca_Arab:   fullname = PtrToStringChars(String::Concat(L"Patients Records\\HW-ARAB\\", COMBOBOX_SELECT_PATIENT->Text, "\\TestDay", System::Convert::ToString(timeOfTest.wDay), "-", System::Convert::ToString(timeOfTest.wMonth), "-", System::Convert::ToString(timeOfTest.wYear))); break;
		case TestTypes::Signatures:   fullname = PtrToStringChars(String::Concat(L"Patients Records\\SIGNATURES\\", COMBOBOX_SELECT_PATIENT->Text, "\\TestDay", System::Convert::ToString(timeOfTest.wDay), "-", System::Convert::ToString(timeOfTest.wMonth), "-", System::Convert::ToString(timeOfTest.wYear))); break;
		case TestTypes::LeapHand:	  fullname = PtrToStringChars(String::Concat(L"Patients Records\\LEAP-HAND\\", COMBOBOX_SELECT_PATIENT->Text, "\\TestDay", System::Convert::ToString(timeOfTest.wDay), "-", System::Convert::ToString(timeOfTest.wMonth), "-", System::Convert::ToString(timeOfTest.wYear))); break;
		case TestTypes::LeapTools:	  fullname = PtrToStringChars(String::Concat(L"Patients Records\\LEAP-TOOLS\\", COMBOBOX_SELECT_PATIENT->Text, "\\TestDay", System::Convert::ToString(timeOfTest.wDay), "-", System::Convert::ToString(timeOfTest.wMonth), "-", System::Convert::ToString(timeOfTest.wYear))); break;
		default: break;
		}

		if (!CreateDirectory(fullname, NULL)) {
			//TODO: Handle Case where Person is Already Registered. Show Log
			if (GetLastError() == ERROR_ALREADY_EXISTS) {
				String^ fullnameString = gcnew String(fullname);
				Patient *a = new Patient();
				AlreadyOneTest ^formAlreadyOneTest = gcnew AlreadyOneTest(a, currentLanguage, COMBOBOX_SELECT_PATIENT->Text, &timeOfTest, type);
				formAlreadyOneTest->ShowDialog();
			}
		}
		else {
			String^ fullnameString = gcnew String(fullname);
			TestManager ^form = gcnew TestManager(currentLanguage, COMBOBOX_SELECT_PATIENT->Text, &timeOfTest, type, 1);
			form->ShowDialog();
		}
	}
}


LONG WacomTabletApplication::PatientManager::DeleteDirectoryAndAllSubfolders(LPCWSTR wzDirectory)
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


void WacomTabletApplication::PatientManager::removePatientFromList(String^ removePatient)
{
	std::string removePat = msclr::interop::marshal_as<std::string>(removePatient);
	std::string patient;
	vector<string> classlist;
	vector<string> patients;
	string line;
	bool found;

	ifstream ifile;
	ofstream ofile;

	ifile.open("Patients Records\\PatientList.txt");
	if (!ifile)
		return;

	found = false;
	while (getline(ifile, line))
	{
		istringstream iss(line);
		if (line == removePat)
			found = true;
		else
			patients.push_back(line);
	}

	ifile.close();

	if (!found)
	{
		cout << "Patient Doesn't Exist! O.O" << endl;
		return;
	}

	/*
	TODO: to avoid corrupting your files, you should write new data to a separate
	temp file first, and then replace the original file with the temp file only if
	everything is successful.  If something goes wrong, you can simply delete the
	temp file and the original will not have been touched...
	*/

	ofile.open("Patients Records\\PatientList.txt");
	if (!ofile)
		return;

	for (vector<string>::iterator i = patients.begin(); i != patients.end(); ++i)
	{
		ofile << *i << endl;
	}

	ofile.close();

}