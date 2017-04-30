#include "NewPatient.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Xml;

void WacomTabletApplication::NewPatient::UpdateLanguage_NewPatientForm(String^ language) {

    pin_ptr<const wchar_t> str_title	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FormTitle"));
    NewPatient::Text				= queryNode(str_title);

    pin_ptr<const wchar_t> str_register = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Register"));
    REGISTER_BUTTON->Text			= queryNode(str_title);

    pin_ptr<const wchar_t> str_cancel	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Cancel"));
    CANCEL_BUTTON->Text				= queryNode(str_cancel);

    //pin_ptr<const wchar_t> str_civ		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Title"));
    //CIVILSTATE_LABEL->Text			= queryNode(str_civ);
    //pin_ptr<const wchar_t> str_civ_married = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Married"));
    //MARRIED_RADIOBUTTON->Text		= queryNode(str_civ_married);
    //pin_ptr<const wchar_t> str_civ_wido = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Widow"));
    //WIDOW_RADIOBUTTON->Text			= queryNode(str_civ_wido);
    //pin_ptr<const wchar_t> str_civ_div	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Divorced"));
    //DIVORCED_RADIOBUTTON->Text		= queryNode(str_civ_div);
    //pin_ptr<const wchar_t> str_civ_sing = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Single"));
    //SINGLE_RADIOBUTTON->Text		= queryNode(str_civ_sing);
    //pin_ptr<const wchar_t> str_civ_chil	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Children"));
    //NUMBEROFCHILDREN_LABEL->Text	= queryNode(str_civ_chil);

    pin_ptr<const wchar_t> str_birthd	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/BirthDate"));
    BIRTHDATE_LABEL->Text			= queryNode(str_birthd);

    /*pin_ptr<const wchar_t> str_age		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Age"));
    AGE_LABEL->Text					= queryNode(str_age);
*/
    pin_ptr<const wchar_t> str_hand		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Handedness/Title"));
    HANDEDNESS_LABEL->Text			= queryNode(str_hand);
    pin_ptr<const wchar_t> str_hand_l	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Handedness/Left"));
    LEFT_RADIOBUTTON->Text			= queryNode(str_hand_l);
    pin_ptr<const wchar_t> str_hand_r   = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Handedness/Right"));
    RIGHT_RADIOBUTTON->Text			= queryNode(str_hand_r);
    pin_ptr<const wchar_t> str_hand_for = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Handedness/ForcedRight"));
    FORCEDRIGHT_CHECKBOX->Text		= queryNode(str_hand_for);
    pin_ptr<const wchar_t> str_hand_amb = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Handedness/Ambidexter"));
    AMBIDEXTER_CHECKBOX->Text		= queryNode(str_hand_amb);


    pin_ptr<const wchar_t> str_gender	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Gender/Title"));
    GENDER_LABEL->Text				= queryNode(str_gender);
    pin_ptr<const wchar_t> str_gen_m	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Gender/Male"));
    MALEGENDER_RADIOBUTTON->Text	= queryNode(str_gen_m);
    pin_ptr<const wchar_t> str_gen_f	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Gender/Female"));
    FEMALEGENDER_RADIOBUTTON->Text	= queryNode(str_gen_f);


    /*pin_ptr<const wchar_t> str_socioed	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/Title"));
    SOCIOEDUCATIVE_LABEL->Text		= queryNode(str_socioed);
    SOCIOEDUCATIVE_COMBOBOX->Items->Clear();
    pin_ptr<const wchar_t> str_nc1		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC1"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc1));
    pin_ptr<const wchar_t> str_nc2		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC2"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc2));
    pin_ptr<const wchar_t> str_nc3		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC3"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc3));
    pin_ptr<const wchar_t> str_nc4		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC4"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc4));
    pin_ptr<const wchar_t> str_nc5		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC5"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc5));
    pin_ptr<const wchar_t> str_nc6		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC6"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc6));
    pin_ptr<const wchar_t> str_nc7		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC7"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc7));*/

    pin_ptr<const wchar_t> str_vision = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/VisionProblems/Title"));
    VISION_PROBLEMS_LABEL->Text = queryNode(str_vision);
    pin_ptr<const wchar_t> str_vdetail = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/VisionProblems/Details"));
    PRECISE_VISION_PROBLEMS_LABEL->Text = queryNode(str_vdetail);
    pin_ptr<const wchar_t> str_othercom = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/OtherComments"));
    OTHER_COMMENTS_LABEL->Text = queryNode(str_othercom);

    UpdateLanguage_ProfessionCombobox_NewPatientForm(language);
}

bool WacomTabletApplication::NewPatient::isFormularyOk() {
    
    if (ID_TEXTBOX->Text->Length == 0) {
        MessageBox::Show("Merci de remplir le nom et prenom du patient", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return false;
    }
    if (!(MALEGENDER_RADIOBUTTON->Checked || FEMALEGENDER_RADIOBUTTON->Checked)) {
        MessageBox::Show("Merci de préciser le gendre du patient", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return false;
    }
    if (!(RIGHT_RADIOBUTTON->Checked || LEFT_RADIOBUTTON->Checked)) {
        MessageBox::Show("Merci de préciser si le patient est droitier ou graucher", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return false;
    }
    /*if (AGE_COUNTER->Text == L"0") {
        MessageBox::Show("Merci de remplir l'âge du patient", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return false;
    }*/
    //if (SOCIOEDUCATIVE_COMBOBOX->Text->Length == 0) {
    //	MessageBox::Show("Merci de préciser le niveau d'études du patient", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
    //	return false;
    //}
    
}

void WacomTabletApplication::NewPatient::UpdateLanguage_ProfessionCombobox_NewPatientForm(String^ language) {
    XmlTextReader^ reader = gcnew XmlTextReader("XML/strings_professions.xml");
    language = String::Concat(language, L"List");
    //LAST_PROFESSION_COMBOBOX->Items->Clear();
    //PRINCIPAL_PROFESSION_COMBOBOX->Items->Clear();
    //Read the XML till reach the Language Part
    while (reader->Read() && ((reader->NodeType == XmlNodeType::Element && reader->Name != language) || (reader->NodeType != XmlNodeType::Element)));
    //Check if reader is in the Language Part of the XML
    if (reader->NodeType == XmlNodeType::Element && reader->Name == language) {
        //Read the whole Language Section
        while (reader->Read() && ((reader->NodeType == XmlNodeType::EndElement && reader->Name != language) || (reader->NodeType != XmlNodeType::EndElement))) {
            //Check for each element of the List in the XML file and add them to the combobox
            if (reader->NodeType == XmlNodeType::Element) {
                reader->Read();
            }
        }
    }
}

void WacomTabletApplication::NewPatient::completePatientInformationObject() {

    // Complete ID
    myPatient->basicInfo.setID(ID_TEXTBOX->Text->ToUpperInvariant());

    //Complete Age Data
    myPatient->basicInfo.setBirthDate(BIRTHDATE_DAYPICKER->Value);

    //Complete Gender
    if (MALEGENDER_RADIOBUTTON->Checked) myPatient->basicInfo.setGender(genders::Male); else  myPatient->basicInfo.setGender(genders::Female);
    
    //Complete Handedness
    if (RIGHT_RADIOBUTTON->Checked) {
        if (AMBIDEXTER_CHECKBOX->Checked) myPatient->basicInfo.setHandedness(handedness::Right_Ambidexter);
        else  myPatient->basicInfo.setHandedness(handedness::Right);
    }
    else {
        if (AMBIDEXTER_CHECKBOX->Checked) myPatient->basicInfo.setHandedness(handedness::Left_Ambidexter);
        else  myPatient->basicInfo.setHandedness(handedness::Left);
    }
    if (FORCEDRIGHT_CHECKBOX->Checked) myPatient->basicInfo.setHandedness(handedness::Forced_Right);

    // Vision Problems
    myPatient->basicInfo.setVisionProblemInfo(YES_VISION_PROBLEMS_RADIOBUTTON->Checked,PRECISE_VISION_PROBLEMS_TEXTBOX->Text);
    // Arthrosis Problems
    myPatient->basicInfo.setArthrosisProblemInfo(YES_ARTHROSIS_RADIOBUTTON->Checked, PRECISE_ARTHROSIS_TEXTBOX->Text);
    // Other Comments
    myPatient->basicInfo.setOtherComments_NewPatient(OTHER_COMMENTS_TEXTBOX->Text);
}

void WacomTabletApplication::NewPatient::fillFormWithPreviousPatientData() {

    //Complete Civil State Data
    /*switch (myPatient->civilState) {
    case civilStates::Single: SINGLE_RADIOBUTTON->Checked = true; break;
    case civilStates::Married: MARRIED_RADIOBUTTON->Checked = true; break;
    case civilStates::Divorced: DIVORCED_RADIOBUTTON->Checked = true; break;
    case civilStates::Widow: WIDOW_RADIOBUTTON->Checked = true; break;
    default: break;
    }*/

    //Complete Socio Educative Lvl
    //switch(myPatient->socioEducativeLvl) {
    //case socioEducativeLvls::NC1: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 0; break;
    //case socioEducativeLvls::NC2: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 1; break;
    //case socioEducativeLvls::NC3: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 2; break;
    //case socioEducativeLvls::NC4: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 3; break;
    //case socioEducativeLvls::NC5: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 4; break;
    //case socioEducativeLvls::NC6: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 5; break;
    //case socioEducativeLvls::NC7: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 6; break;
    //case socioEducativeLvls::Unknown: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = -1; break;
    //default: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = -1; break;
    //}

    //Complete Name Data
    /*ID_TEXTBOX->Text = gcnew String(myPatient->firstName.c_str());*/
    /*LASTNAME_TEXTBOX->Text  = gcnew String(myPatient->lastName.c_str());*/
    ID_TEXTBOX->Text = gcnew String(myPatient->basicInfo.getID());
    BIRTHDATE_DAYPICKER->Value = myPatient->basicInfo.getBirthdayDate();
    switch (myPatient->basicInfo.getGender()) {
    case genders::Female: FEMALEGENDER_RADIOBUTTON->Checked = true; break;
    case genders::Male: MALEGENDER_RADIOBUTTON->Checked = true; break;
    default: perror("Error loading Gender information");
    }

    switch (myPatient->basicInfo.getHandedness()) {
    case handedness::Left:
        LEFT_RADIOBUTTON->Checked = true;
        break;
    case handedness::Left_Ambidexter:
        LEFT_RADIOBUTTON->Checked = true;
        AMBIDEXTER_CHECKBOX->Checked = true;
        break;
    case handedness::Right:
        RIGHT_RADIOBUTTON->Checked = true;
        break;
    case handedness::Right_Ambidexter:
        RIGHT_RADIOBUTTON->Checked = true;
        AMBIDEXTER_CHECKBOX->Checked = true;
        break;
    case handedness::Forced_Right:
        RIGHT_RADIOBUTTON->Checked = true;
        FORCEDRIGHT_CHECKBOX->Checked = true;
        break;
    default:
        perror("Error loading Handedness information");
    }

    if (myPatient->basicInfo.getVisionProblem()) {
        YES_VISION_PROBLEMS_RADIOBUTTON->Checked = true;
        PRECISE_VISION_PROBLEMS_TEXTBOX->Text = myPatient->basicInfo.getVisionProblemDetail();
    }
    else NO_VISION_PROBLEMS_RADIOBUTTON->Checked = true;

    if (myPatient->basicInfo.getArthrosisProblem()) {
        YES_ARTHROSIS_RADIOBUTTON->Checked = true;
        PRECISE_ARTHROSIS_TEXTBOX->Text = myPatient->basicInfo.getArthrosisProblemDetail();
    }
    else NO_ARTHROSIS_RADIOBUTTON->Checked = true;

    OTHER_COMMENTS_TEXTBOX->Text = myPatient->basicInfo.getOtherComment_NewPatient();
    //Complete Gender
    /*switch (myPatient->gender) {
    case genders::Male: MALEGENDER_RADIOBUTTON->Checked = true; break;
    case genders::Female: FEMALEGENDER_RADIOBUTTON->Checked = true; break;
    default:  break;
    }*/

    //Complete Handedness
    /*switch (myPatient->hand) {
    case handedness::Left: LEFT_RADIOBUTTON->Checked = true; break;
    case handedness::Right: RIGHT_RADIOBUTTON->Checked = true; break;
    case handedness::Forced_Right: RIGHT_RADIOBUTTON->Checked = true; FORCEDRIGHT_CHECKBOX->Checked = true; break;
    case handedness::Left_Ambidexter: LEFT_RADIOBUTTON->Checked = true; AMBIDEXTER_CHECKBOX->Checked = true; break;
    case handedness::Right_Ambidexter: RIGHT_RADIOBUTTON->Checked = true; AMBIDEXTER_CHECKBOX->Checked = true;  break;
    default:  break;
    }

    OTHER_COMMENTS_TEXTBOX->Text = gcnew String(myPatient->otherComments_NewPatient.c_str());*/
}

void WacomTabletApplication::NewPatient::RegisterNewPatient() {

}

BOOL WacomTabletApplication::NewPatient::PatientAlreadyExist() {

    msclr::interop::marshal_context context;
    LPCTSTR pathArab   = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\HW-ARAB\\", ID_TEXTBOX->Text->ToUpperInvariant()));
    LPCTSTR pathFrench = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\HW-FRENCH\\", ID_TEXTBOX->Text->ToUpperInvariant()));
    LPCTSTR pathLeapT  = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\LEAP-TOOLS\\", ID_TEXTBOX->Text->ToUpperInvariant()));
    LPCTSTR pathLeapH  = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\LEAP-HAND\\", ID_TEXTBOX->Text->ToUpperInvariant()));
    LPCTSTR pathSign   = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\SIGNATURES\\", ID_TEXTBOX->Text->ToUpperInvariant()));

    return (DirectoryExists(pathArab) || DirectoryExists(pathFrench) || DirectoryExists(pathLeapT) || DirectoryExists(pathLeapH) || DirectoryExists(pathSign) || PatientIsInPatientList());
}

BOOL WacomTabletApplication::NewPatient::DirectoryExists(LPCTSTR szPath) {
    DWORD dwAttrib = GetFileAttributes(szPath);
    return (dwAttrib != INVALID_FILE_ATTRIBUTES && (dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
}

BOOL WacomTabletApplication::NewPatient::PatientIsInPatientList() {

    string newLine;
    unsigned int curLine = 0;

    msclr::interop::marshal_context context;
    ifstream fpatientlist("Patients Records\\PatientList.txt");
    std::string searchString = context.marshal_as<std::string>(String::Concat(ID_TEXTBOX->Text->ToUpperInvariant()));

    
    while (getline(fpatientlist, newLine)) { 
        curLine++;
        if (newLine.find(searchString, 0) != string::npos) return true;
    }
    
    return false;
}

BOOL WacomTabletApplication::NewPatient::ReadPatientInfoFile(String^ patientID) {
    msclr::interop::marshal_context context;
    const char* infoPath = context.marshal_as<const char*>(String::Concat(L"Patients Records\\HW-FRENCH\\", patientID->ToUpperInvariant(), L"\\Info.txt"));

    myPatient->fillMe(infoPath);
    return true;
}

BOOL WacomTabletApplication::NewPatient::createAndPrintPatientSubdirectories() {

    msclr::interop::marshal_context context;

    LPCTSTR infoPathArab = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\HW-ARAB\\", ID_TEXTBOX->Text->ToUpperInvariant()));
    LPCTSTR infoPathFrench = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\HW-FRENCH\\", ID_TEXTBOX->Text->ToUpperInvariant()));
    LPCTSTR infoPathLeapT = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\LEAP-TOOLS\\", ID_TEXTBOX->Text->ToUpperInvariant()));
    LPCTSTR infoPathLeapH = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\LEAP-HAND\\", ID_TEXTBOX->Text->ToUpperInvariant()));
    LPCTSTR infoPathSign = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\SIGNATURES\\", ID_TEXTBOX->Text->ToUpperInvariant()));
    

    if (!newPatient || CreateDirectory(infoPathArab, NULL) && CreateDirectory(infoPathFrench, NULL) &&
        CreateDirectory(infoPathLeapT, NULL) && CreateDirectory(infoPathLeapH, NULL) && CreateDirectory(infoPathSign, NULL)) {
        
        myPatient->printMe(infoPathArab);
        myPatient->printMe(infoPathFrench);
        myPatient->printMe(infoPathLeapT);
        myPatient->printMe(infoPathLeapH);
        myPatient->printMe(infoPathSign);

        ofstream patientListFile("Patients Records\\PatientList.txt", std::ofstream::app);
        patientListFile << endl << context.marshal_as<std::string>(ID_TEXTBOX->Text->ToUpperInvariant());
        patientListFile.close();

        return true;
    }

    return false;
}