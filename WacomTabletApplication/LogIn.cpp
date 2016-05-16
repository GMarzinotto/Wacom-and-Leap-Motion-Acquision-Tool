#include "LogIn.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Xml;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WacomTabletApplication::LogIn initWind;
	Application::Run(%initWind);
	return 0;
}


void WacomTabletApplication::LogIn::UpdateLanguage_LogInForm(String^ language) {

	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/LogInForm/FormTitle"));
	pin_ptr<const wchar_t> str_username = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/LogInForm/Username"));
	pin_ptr<const wchar_t> str_password = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/LogInForm/Password"));
	pin_ptr<const wchar_t> str_login = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/LogInForm/LogIn"));

	LogIn::Text = queryNode(str_title);
	LABEL_USERNAME->Text = queryNode(str_username);
	LABEL_PASSWORD->Text = queryNode(str_password);
	LOG_IN_BUTTON->Text = queryNode(str_login);
	
}


bool WacomTabletApplication::LogIn::checkUsernamePassword() {

	if (USERNAME_TEXTBOX->Text == "TelecomSudParis" && PASSWORD_TEXTBOX->Text == "123") {
		return true;
	}
	else {
		IncorrectPasswordMessage(currentLanguage);
		PASSWORD_TEXTBOX->Text = "";
		return false;
	}
	return false;
}


void WacomTabletApplication::LogIn::IncorrectPasswordMessage(String^ language) {
	XmlTextReader^ reader = gcnew XmlTextReader("XML/strings.xml");
	//Read the XML till reach the Spanish Part
	while (reader->Read() && ((reader->NodeType == XmlNodeType::Element && reader->Name != language) || (reader->NodeType != XmlNodeType::Element)));
	//Check if reader is in the Spanish Part of the XML
	if (reader->NodeType == XmlNodeType::Element && reader->Name == language) {
		//If True Read the XML till reach the LogInForm
		while (reader->Read() && ((reader->NodeType == XmlNodeType::Element && reader->Name != "LogInForm") || (reader->NodeType != XmlNodeType::Element)));
		//Check if reader is in the LogInForm
		if (reader->NodeType == XmlNodeType::Element && reader->Name == "LogInForm") {
			//Read the whole LogInForm Section
			while (reader->Read() && ((reader->NodeType == XmlNodeType::EndElement && reader->Name != "LogInForm") || (reader->NodeType != XmlNodeType::EndElement))) {
				//Check for each element of the LogInForm in the XML file and replace accordingly
				if (reader->NodeType == XmlNodeType::Element && reader->Name == "IncorrectPass") {
					reader->Read();
					if (reader->NodeType == XmlNodeType::Text) { label1->Text = reader->Value; }
				}
			}
		}
	}
}


void WacomTabletApplication::LogIn::checkFileSystem() {

	if (DirectoryExists(L"Patients Records")) {
		if (!DirectoryExists(L"Patients Records\\HW-ARAB")) 	CreateDirectory(L"Patients Records\\HW-ARAB", NULL);
		if (!DirectoryExists(L"Patients Records\\HW-FRENCH"))	CreateDirectory(L"Patients Records\\HW-FRENCH", NULL);
		if (!DirectoryExists(L"Patients Records\\LEAP-HAND"))	CreateDirectory(L"Patients Records\\LEAP-HAND", NULL);
		if (!DirectoryExists(L"Patients Records\\LEAP-TOOLS"))	CreateDirectory(L"Patients Records\\LEAP-TOOLS", NULL);
		if (!DirectoryExists(L"Patients Records\\SIGNATURES"))	CreateDirectory(L"Patients Records\\SIGNATURES", NULL);
	}
	else {
		CreateDirectory(L"Patients Records", NULL);
		CreateDirectory(L"Patients Records\\HW-ARAB", NULL);
		CreateDirectory(L"Patients Records\\HW-FRENCH", NULL);
		CreateDirectory(L"Patients Records\\LEAP-HAND", NULL);
		CreateDirectory(L"Patients Records\\LEAP-TOOLS", NULL);
		CreateDirectory(L"Patients Records\\SIGNATURES", NULL);
	}

}


BOOL WacomTabletApplication::LogIn::DirectoryExists(LPCTSTR szPath) {
	DWORD dwAttrib = GetFileAttributes(szPath);
	return (dwAttrib != INVALID_FILE_ATTRIBUTES && (dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
}