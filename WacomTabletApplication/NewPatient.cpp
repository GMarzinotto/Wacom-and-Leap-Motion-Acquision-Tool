#include "NewPatient.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Xml;

void WacomTabletApplication::NewPatient::UpdateLanguage_NewPatientForm(String^ language) {

	pin_ptr<const wchar_t> str_title	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FormTitle"));
	NewPatient::Text				= queryNode(str_title);

	pin_ptr<const wchar_t> str_yes		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Yes"));
	YES_CURRENTLY_WORKING_RADIOBUTTON->Text = queryNode(str_yes);
	YES_VISION_PROBLEMS_RADIOBUTTON->Text = queryNode(str_yes);

	pin_ptr<const wchar_t> str_no		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/No"));
	NO_CURRENTLY_WORKING_RADIOBUTTON->Text = queryNode(str_no);
	NO_VISION_PROBLEMS_RADIOBUTTON->Text = queryNode(str_no);

	pin_ptr<const wchar_t> str_register = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Register"));
	REGISTER_BUTTON->Text			= queryNode(str_title);

	pin_ptr<const wchar_t> str_cancel	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Cancel"));
	CANCEL_BUTTON->Text				= queryNode(str_cancel);

	pin_ptr<const wchar_t> str_med1		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/MedicalDataPT1"));
	MEDICALDATA_PT1_BUTTON->Text	= queryNode(str_med1);
	pin_ptr<const wchar_t> str_med2		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/MedicalDataPT2"));
	MEDICALDATA_PT2_BUTTON->Text	= queryNode(str_med2);
	pin_ptr<const wchar_t> str_med3		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/MedicalDataPT3"));
	MEDICALDATA_PT3_BUTTON->Text	= queryNode(str_med3);
	pin_ptr<const wchar_t> str_med4		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/MedicalDataPT4"));
	MEDICALDATA_PT4_BUTTON->Text	= queryNode(str_med4);

	pin_ptr<const wchar_t> str_lastName = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/LastName"));
	LASTNAME_LABEL->Text			= queryNode(str_lastName);

	pin_ptr<const wchar_t> str_firstNam = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FirstName"));
	FIRSTNAME_LABEL->Text			= queryNode(str_firstNam);

	pin_ptr<const wchar_t> str_civ		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Title"));
	CIVILSTATE_LABEL->Text			= queryNode(str_civ);
	pin_ptr<const wchar_t> str_civ_married = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Married"));
	MARRIED_RADIOBUTTON->Text		= queryNode(str_civ_married);
	pin_ptr<const wchar_t> str_civ_wido = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Widow"));
	WIDOW_RADIOBUTTON->Text			= queryNode(str_civ_wido);
	pin_ptr<const wchar_t> str_civ_div	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Divorced"));
	DIVORCED_RADIOBUTTON->Text		= queryNode(str_civ_div);
	pin_ptr<const wchar_t> str_civ_sing = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Single"));
	SINGLE_RADIOBUTTON->Text		= queryNode(str_civ_sing);
	pin_ptr<const wchar_t> str_civ_chil	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Children"));
	NUMBEROFCHILDREN_LABEL->Text	= queryNode(str_civ_chil);

	pin_ptr<const wchar_t> str_birthd	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/BirthDate"));
	BIRTHDATE_LABEL->Text			= queryNode(str_birthd);

	pin_ptr<const wchar_t> str_age		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Age"));
	AGE_LABEL->Text					= queryNode(str_age);

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


	pin_ptr<const wchar_t> str_socioed	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/Title"));
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
	SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc7));

	pin_ptr<const wchar_t> str_natlang	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/NativeLanguage"));
	NATIVE_LANGUAGE_LABEL->Text = queryNode(str_natlang);

	pin_ptr<const wchar_t> str_fr_lvl	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/Title"));
	FRENCHLEVEL_LABEL->Text			= queryNode(str_fr_lvl);
	FRENCHLEVEL_COMBOBOX->Items->Clear();
	pin_ptr<const wchar_t> str_fr_low	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/Low"));
	FRENCHLEVEL_COMBOBOX->Items->Add(queryNode(str_fr_low));
	pin_ptr<const wchar_t> str_fr_med	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/Medium"));
	FRENCHLEVEL_COMBOBOX->Items->Add(queryNode(str_fr_med));
	pin_ptr<const wchar_t> str_fr_high	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/High"));
	FRENCHLEVEL_COMBOBOX->Items->Add(queryNode(str_fr_high));


	pin_ptr<const wchar_t> str_alphabet = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Title"));
	ALPHABETS_LABEL->Text = queryNode(str_alphabet);
	pin_ptr<const wchar_t> str_latin	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Latin"));
	LATIN_ALPHABET_CHECKBOX->Text = queryNode(str_latin);
	pin_ptr<const wchar_t> str_arab		= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Arab"));
	ARAB_ALPHABET_CHECKBOX->Text = queryNode(str_arab);
	pin_ptr<const wchar_t> str_armenian = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Armenian"));
	ARMENIAN_ALPHABET_CHECKBOX->Text = queryNode(str_armenian);
	pin_ptr<const wchar_t> str_chinese	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Chinese"));
	CHINESE_ALPHABET_CHECKBOX->Text = queryNode(str_chinese);
	pin_ptr<const wchar_t> str_cyrillic = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Cyrillic"));
	CYRILLIC_ALPHABET_CHECKBOX->Text = queryNode(str_cyrillic);
	pin_ptr<const wchar_t> str_devanaga = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Devanagari"));
	DEVANAGARI_ALPHABET_CHECKBOX->Text = queryNode(str_devanaga);
	pin_ptr<const wchar_t> str_etiopic	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Etiopic"));
	ETIOPIC_ALPHABET_CHECKBOX->Text = queryNode(str_etiopic);
	pin_ptr<const wchar_t> str_georgian = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Georgian"));
	GEORGIAN_ALPHABET_CHECKBOX->Text = queryNode(str_georgian);
	pin_ptr<const wchar_t> str_greek	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Greek"));
	GREEK_ALPHABET_CHECKBOX->Text = queryNode(str_greek);
	pin_ptr<const wchar_t> str_hangul	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Hangul"));
	HANGUL_ALPHABET_CHECKBOX->Text = queryNode(str_hangul);
	pin_ptr<const wchar_t> str_hebrew	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Hebrew"));
	HEBREW_ALPHABET_CHECKBOX->Text = queryNode(str_hebrew);
	pin_ptr<const wchar_t> str_japanese = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Japanese"));
	JAPANESE_ALPHABET_CHECKBOX->Text = queryNode(str_japanese);
	pin_ptr<const wchar_t> str_sindic	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/SouthIndic"));
	SOUTHINDIC_ALPHABET_CHECKBOX->Text = queryNode(str_sindic);
	pin_ptr<const wchar_t> str_a_others	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Others"));
	OTHER_ALPHABET_CHECKBOX->Text = queryNode(str_a_others);

	pin_ptr<const wchar_t> str_prinprof	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/PrincipalProfession"));
	PRINCIPAL_PROFESSION_LABEL->Text = queryNode(str_prinprof);
	pin_ptr<const wchar_t> str_lastprof = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/LastProfession"));
	LAST_PROFESSION_LABEL->Text = queryNode(str_lastprof);

	pin_ptr<const wchar_t> str_write_f = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/WritingFrequency/Title"));
	WRITING_FREQ_LABEL->Text = queryNode(str_write_f);
	WRITING_FREQ_COMBOBOX->Items->Clear();
	pin_ptr<const wchar_t> str_write_1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/WritingFrequency/Q1"));
	WRITING_FREQ_COMBOBOX->Items->Add(queryNode(str_write_1));
	pin_ptr<const wchar_t> str_write_2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/WritingFrequency/Q2"));
	WRITING_FREQ_COMBOBOX->Items->Add(queryNode(str_write_2));
	pin_ptr<const wchar_t> str_write_3 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/WritingFrequency/Q3"));
	WRITING_FREQ_COMBOBOX->Items->Add(queryNode(str_write_3));
	pin_ptr<const wchar_t> str_write_4 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/WritingFrequency/Q4"));
	WRITING_FREQ_COMBOBOX->Items->Add(queryNode(str_write_4));
	pin_ptr<const wchar_t> str_write_5 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/WritingFrequency/Q5"));
	WRITING_FREQ_COMBOBOX->Items->Add(queryNode(str_write_5));

	pin_ptr<const wchar_t> str_cwork	= PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CurrentlyWorking/Title"));
	CURRENTLY_WORKING_LABEL->Text = queryNode(str_cwork);
	pin_ptr<const wchar_t> str_lwork = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CurrentlyWorking/Retirement"));
	RETIREMENT_AGE_LABEL->Text = queryNode(str_lwork);

	pin_ptr<const wchar_t> str_vision = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/VisionProblems/Title"));
	VISION_PROBLEMS_LABEL->Text = queryNode(str_vision);
	pin_ptr<const wchar_t> str_vdetail = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/VisionProblems/Details"));
	PRECISE_VISION_PROBLEMS_LABEL->Text = queryNode(str_vdetail);
	pin_ptr<const wchar_t> str_othercom = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/OtherComments"));
	OTHER_COMMENTS_LABEL->Text = queryNode(str_othercom);

	UpdateLanguage_LanguageCombobox_NewPatientForm(language);
	UpdateLanguage_ProfessionCombobox_NewPatientForm(language);

}




bool WacomTabletApplication::NewPatient::isFormularyOk() {
	
	if (LASTNAME_TEXTBOX->Text->Length == 0 || FIRSTNAME_TEXTBOX->Text->Length == 0) {
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
	if (AGE_COUNTER->Text == L"0") {
		MessageBox::Show("Merci de remplir l'âge du patient", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return false;
	}
	if (SOCIOEDUCATIVE_COMBOBOX->Text->Length == 0) {
		MessageBox::Show("Merci de préciser le niveau d'études du patient", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return false;
	}
	if (WRITING_FREQ_COMBOBOX->Text->Length == 0) {
		MessageBox::Show("Merci de préciser le fréquence avec laquelle le patient écris", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return false;
	}
	if (NATIVE_LANGUAGE_COMBOBOX->Text->Length == 0) {
		MessageBox::Show("Merci de préciser la langue maternelle du patient", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return false;
	}
	if (FRENCHLEVEL_COMBOBOX->Text->Length == 0) {
		MessageBox::Show("Merci de préciser le niveau du français du patient", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return false;
	}
	if ((!LATIN_ALPHABET_CHECKBOX->Checked)      && (!ARAB_ALPHABET_CHECKBOX->Checked)       && (!ARMENIAN_ALPHABET_CHECKBOX->Checked) && (!CHINESE_ALPHABET_CHECKBOX->Checked)  && 
	    (!CYRILLIC_ALPHABET_CHECKBOX->Checked)   && (!DEVANAGARI_ALPHABET_CHECKBOX->Checked) && (!ETIOPIC_ALPHABET_CHECKBOX->Checked)  && (!GEORGIAN_ALPHABET_CHECKBOX->Checked) && 
		(!GREEK_ALPHABET_CHECKBOX->Checked)      && (!HANGUL_ALPHABET_CHECKBOX->Checked)     && (!HEBREW_ALPHABET_CHECKBOX->Checked)   && (!JAPANESE_ALPHABET_CHECKBOX->Checked) &&
		(!SOUTHINDIC_ALPHABET_CHECKBOX->Checked) && (!OTHER_ALPHABET_CHECKBOX->Checked)) {
		MessageBox::Show("Merci de selectioner au moins un alphabet", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return false;
	}
	
	return true;

}

void WacomTabletApplication::NewPatient::UpdateLanguage_LanguageCombobox_NewPatientForm(String^ language) {
	XmlTextReader^ reader = gcnew XmlTextReader("XML/strings_languages.xml");
	language = String::Concat(language, L"List");
	NATIVE_LANGUAGE_COMBOBOX->Items->Clear();
	//Read the XML till reach the Language Part
	while (reader->Read() && ((reader->NodeType == XmlNodeType::Element && reader->Name != language) || (reader->NodeType != XmlNodeType::Element)));
	//Check if reader is in the Language Part of the XML
	if (reader->NodeType == XmlNodeType::Element && reader->Name == language) {
		//Read the whole Language Section
		while (reader->Read() && ((reader->NodeType == XmlNodeType::EndElement && reader->Name != language) || (reader->NodeType != XmlNodeType::EndElement))) {
			//Check for each element of the List in the XML file and add them to the combobox
			if (reader->NodeType == XmlNodeType::Element) {
				reader->Read();
				if (reader->NodeType == XmlNodeType::Text) { NATIVE_LANGUAGE_COMBOBOX->Items->Add(reader->Value); }
			}
		}
	}
}

void WacomTabletApplication::NewPatient::UpdateLanguage_ProfessionCombobox_NewPatientForm(String^ language) {
	XmlTextReader^ reader = gcnew XmlTextReader("XML/strings_professions.xml");
	language = String::Concat(language, L"List");
	LAST_PROFESSION_COMBOBOX->Items->Clear();
	PRINCIPAL_PROFESSION_COMBOBOX->Items->Clear();
	//Read the XML till reach the Language Part
	while (reader->Read() && ((reader->NodeType == XmlNodeType::Element && reader->Name != language) || (reader->NodeType != XmlNodeType::Element)));
	//Check if reader is in the Language Part of the XML
	if (reader->NodeType == XmlNodeType::Element && reader->Name == language) {
		//Read the whole Language Section
		while (reader->Read() && ((reader->NodeType == XmlNodeType::EndElement && reader->Name != language) || (reader->NodeType != XmlNodeType::EndElement))) {
			//Check for each element of the List in the XML file and add them to the combobox
			if (reader->NodeType == XmlNodeType::Element) {
				reader->Read();
				if (reader->NodeType == XmlNodeType::Text) { LAST_PROFESSION_COMBOBOX->Items->Add(reader->Value);  PRINCIPAL_PROFESSION_COMBOBOX->Items->Add(reader->Value);	}
			}
		}
	}
}

void WacomTabletApplication::NewPatient::completePatientInformationObject() {

	//Complete Age Data
	myPatient->setAge(AGE_COUNTER->Text);
	myPatient->setBirthDate(BIRTHDATE_DAYPICKER->Value);

	//Complete Civil State Data
	if (SINGLE_RADIOBUTTON->Checked) myPatient->setCivilState(civilStates::Single);
	else if (MARRIED_RADIOBUTTON->Checked) myPatient->setCivilState(civilStates::Married);
	else if (DIVORCED_RADIOBUTTON->Checked) myPatient->setCivilState(civilStates::Divorced);
	else if (WIDOW_RADIOBUTTON->Checked) myPatient->setCivilState(civilStates::Widow);
	myPatient->setNumChildren(NUMBEROFCHILDREN_COUNTER->Text);

	//Complete Socio Educative Lvl
	if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 0) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC1);
	else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 1) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC2);
	else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 2) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC3);
	else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 3) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC4);
	else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 4) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC5);
	else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 5) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC6);
	else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 6) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC7);
	else myPatient->setSocioEducativeLvl(socioEducativeLvls::Unknown);

	//Complete Writing Frequency
	if (WRITING_FREQ_COMBOBOX->SelectedIndex == 0) myPatient->setWritingFrequency(writeFrequencies::Less_than_once_a_week);
	else if (WRITING_FREQ_COMBOBOX->SelectedIndex == 1) myPatient->setWritingFrequency(writeFrequencies::times_per_week_1_or_2);
	else if (WRITING_FREQ_COMBOBOX->SelectedIndex == 2) myPatient->setWritingFrequency(writeFrequencies::times_per_week_3_or_5);
	else if (WRITING_FREQ_COMBOBOX->SelectedIndex == 3) myPatient->setWritingFrequency(writeFrequencies::times_per_week_6_or_7);
	else if (WRITING_FREQ_COMBOBOX->SelectedIndex == 4) myPatient->setWritingFrequency(writeFrequencies::everyday_several_times);
	else myPatient->setWritingFrequency(writeFrequencies::Unknown);


	//Complete French Level
	if (FRENCHLEVEL_COMBOBOX->SelectedIndex == 0) myPatient->setFrenchLvl(frenchLvls::Elementary);
	else if (FRENCHLEVEL_COMBOBOX->SelectedIndex == 1) myPatient->setFrenchLvl(frenchLvls::Intermediate);
	else if (FRENCHLEVEL_COMBOBOX->SelectedIndex == 2) myPatient->setFrenchLvl(frenchLvls::Advanced);
	else myPatient->setFrenchLvl(frenchLvls::Unknown);

	//Complete Name Data
	myPatient->setFirstName(FIRSTNAME_TEXTBOX->Text);
	myPatient->setLastName(LASTNAME_TEXTBOX->Text);

	//Complete Gender
	if (MALEGENDER_RADIOBUTTON->Checked) myPatient->setGender(genders::Male); else  myPatient->setGender(genders::Female);
	
	//Complete Handedness
	if (RIGHT_RADIOBUTTON->Checked) {
		if (AMBIDEXTER_CHECKBOX->Checked) myPatient->setHandedness(handedness::Right_Ambidexter);
		else  myPatient->setHandedness(handedness::Right);
	}
	else {
		if (AMBIDEXTER_CHECKBOX->Checked) myPatient->setHandedness(handedness::Left_Ambidexter);
		else  myPatient->setHandedness(handedness::Left);
	}
	if (FORCEDRIGHT_CHECKBOX->Checked) myPatient->setHandedness(handedness::Forced_Right);

	//Complete Native Language
	myPatient->setNativeLanguage(NATIVE_LANGUAGE_COMBOBOX->Text, currentLanguage);

	//Complete Profession Data
	myPatient->setPrincipalProfession(PRINCIPAL_PROFESSION_COMBOBOX->Text, currentLanguage);
	myPatient->setLastProfession(LAST_PROFESSION_COMBOBOX->Text, currentLanguage);

	//Complete Alphabets
	myPatient->setWritesArab(ARAB_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesArmenian(ARMENIAN_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesChinese(CHINESE_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesCyrillic(CYRILLIC_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesDevanagari(DEVANAGARI_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesEtiopic(ETIOPIC_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesGeorgian(GEORGIAN_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesGreek(GREEK_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesHangul(HANGUL_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesHebrew(HEBREW_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesJapanese(JAPANESE_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesLatin(LATIN_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesOthers(OTHER_ALPHABET_CHECKBOX->Checked);
	myPatient->setWritesSouthIndic(SOUTHINDIC_ALPHABET_CHECKBOX->Checked);
	
	myPatient->setOtherComments_NewPatient(OTHER_COMMENTS_TEXTBOX->Text);
	myPatient->setRetirementInfo(YES_CURRENTLY_WORKING_RADIOBUTTON->Checked,RETIREMENT_AGE_COUNTER->Text);
	myPatient->setVisionProblemInfo(YES_VISION_PROBLEMS_RADIOBUTTON->Checked,PRECISE_VISION_PROBLEMS_TEXTBOX->Text);

	
}

void WacomTabletApplication::NewPatient::fillFormWithPreviousPatientData() {
	//Complete Age Data
	//myPatient->setAge(AGE_COUNTER->Text);
	//myPatient->setBirthDate(BIRTHDATE_DAYPICKER->Value);

	//Complete Civil State Data
	switch (myPatient->civilState) {
	case civilStates::Single: SINGLE_RADIOBUTTON->Checked = true; break;
	case civilStates::Married: MARRIED_RADIOBUTTON->Checked = true; break;
	case civilStates::Divorced: DIVORCED_RADIOBUTTON->Checked = true; break;
	case civilStates::Widow: WIDOW_RADIOBUTTON->Checked = true; break;
	default: break;
	}
	//myPatient->setNumChildren(NUMBEROFCHILDREN_COUNTER->Text);

	//Complete Socio Educative Lvl
	switch(myPatient->socioEducativeLvl) {
	case socioEducativeLvls::NC1: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 0; break;
	case socioEducativeLvls::NC2: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 1; break;
	case socioEducativeLvls::NC3: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 2; break;
	case socioEducativeLvls::NC4: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 3; break;
	case socioEducativeLvls::NC5: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 4; break;
	case socioEducativeLvls::NC6: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 5; break;
	case socioEducativeLvls::NC7: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 6; break;
	case socioEducativeLvls::Unknown: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = -1; break;
	default: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = -1; break;
	}


	//Complete Writing Frequency
	switch (myPatient->writeFreq) {
	case writeFrequencies::Less_than_once_a_week: WRITING_FREQ_COMBOBOX->SelectedIndex = 0; break;
	case writeFrequencies::times_per_week_1_or_2: WRITING_FREQ_COMBOBOX->SelectedIndex = 1; break;
	case writeFrequencies::times_per_week_3_or_5: WRITING_FREQ_COMBOBOX->SelectedIndex = 2; break;
	case writeFrequencies::times_per_week_6_or_7: WRITING_FREQ_COMBOBOX->SelectedIndex = 3; break;
	case writeFrequencies::everyday_several_times: WRITING_FREQ_COMBOBOX->SelectedIndex = 4; break;
	case writeFrequencies::Unknown: WRITING_FREQ_COMBOBOX->SelectedIndex = -1; break;
	default: WRITING_FREQ_COMBOBOX->SelectedIndex = -1; break;
	}


	//Complete French Level
	switch (myPatient->frenchLvl) {
	case frenchLvls::Elementary: FRENCHLEVEL_COMBOBOX->SelectedIndex = 0; break;
	case frenchLvls::Intermediate: FRENCHLEVEL_COMBOBOX->SelectedIndex = 1; break;
	case frenchLvls::Advanced: FRENCHLEVEL_COMBOBOX->SelectedIndex = 2; break;
	case frenchLvls::Unknown: FRENCHLEVEL_COMBOBOX->SelectedIndex = -1; break;
	default: FRENCHLEVEL_COMBOBOX->SelectedIndex = -1; break;
	}

	//Complete Name Data
	FIRSTNAME_TEXTBOX->Text = gcnew String(myPatient->firstName.c_str());
	LASTNAME_TEXTBOX->Text  = gcnew String(myPatient->lastName.c_str());

	//Complete Gender
	switch (myPatient->gender) {
	case genders::Male: MALEGENDER_RADIOBUTTON->Checked = true; break;
	case genders::Female: FEMALEGENDER_RADIOBUTTON->Checked = true; break;
	default:  break;
	}

	//Complete Handedness
	switch (myPatient->hand) {
	case handedness::Left: LEFT_RADIOBUTTON->Checked = true; break;
	case handedness::Right: RIGHT_RADIOBUTTON->Checked = true; break;
	case handedness::Forced_Right: RIGHT_RADIOBUTTON->Checked = true; FORCEDRIGHT_CHECKBOX->Checked = true; break;
	case handedness::Left_Ambidexter: LEFT_RADIOBUTTON->Checked = true; AMBIDEXTER_CHECKBOX->Checked = true; break;
	case handedness::Right_Ambidexter: RIGHT_RADIOBUTTON->Checked = true; AMBIDEXTER_CHECKBOX->Checked = true;  break;
	default:  break;
	}

	//Complete Native Language
	//myPatient->setNativeLanguage(NATIVE_LANGUAGE_COMBOBOX->Text, currentLanguage);

	//Complete Profession Data
	//myPatient->setPrincipalProfession(PRINCIPAL_PROFESSION_COMBOBOX->Text, currentLanguage);
	//myPatient->setLastProfession(LAST_PROFESSION_COMBOBOX->Text, currentLanguage);

	//Complete Alphabets
	ARAB_ALPHABET_CHECKBOX->Checked = myPatient->writesArab;
	ARMENIAN_ALPHABET_CHECKBOX->Checked = myPatient->writesArmenian;
	CHINESE_ALPHABET_CHECKBOX->Checked = myPatient->writesChinese;
	CYRILLIC_ALPHABET_CHECKBOX->Checked = myPatient->writesCyrillic;
	DEVANAGARI_ALPHABET_CHECKBOX->Checked = myPatient->writesDevanagari;
	ETIOPIC_ALPHABET_CHECKBOX->Checked = myPatient->writesEtiopic;
	GEORGIAN_ALPHABET_CHECKBOX->Checked = myPatient->writesGeorgian;
	GREEK_ALPHABET_CHECKBOX->Checked = myPatient->writesGreek;
	HANGUL_ALPHABET_CHECKBOX->Checked = myPatient->writesHangul;
	HEBREW_ALPHABET_CHECKBOX->Checked = myPatient->writesHebrew;
	JAPANESE_ALPHABET_CHECKBOX->Checked = myPatient->writesJapanese;
	LATIN_ALPHABET_CHECKBOX->Checked = myPatient->writesLatin;
	OTHER_ALPHABET_CHECKBOX->Checked = myPatient->writesOthers;
	SOUTHINDIC_ALPHABET_CHECKBOX->Checked = myPatient->writesSouthIndic;


	OTHER_COMMENTS_TEXTBOX->Text = gcnew String(myPatient->otherComments_NewPatient.c_str());

	//myPatient->setRetirementInfo(YES_CURRENTLY_WORKING_RADIOBUTTON->Checked, RETIREMENT_AGE_COUNTER->Text);
	//myPatient->setVisionProblemInfo(YES_VISION_PROBLEMS_RADIOBUTTON->Checked, PRECISE_VISION_PROBLEMS_TEXTBOX->Text);

}

void WacomTabletApplication::NewPatient::RegisterNewPatient() {

}

BOOL WacomTabletApplication::NewPatient::PatientAlreadyExist() {

	msclr::interop::marshal_context context;
	LPCTSTR pathArab   = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\HW-ARAB\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));
	LPCTSTR pathFrench = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\HW-FRENCH\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));
	LPCTSTR pathLeapT  = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\LEAP-TOOLS\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));
	LPCTSTR pathLeapH  = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\LEAP-HAND\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));
	LPCTSTR pathSign   = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\SIGNATURES\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));

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
	std::string searchString = context.marshal_as<std::string>(String::Concat(LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));

	
	while (getline(fpatientlist, newLine)) { 
		curLine++;
		if (newLine.find(searchString, 0) != string::npos) return true;
	}
	
	return false;
}

BOOL WacomTabletApplication::NewPatient::createAndPrintPatientSubdirectories() {

	msclr::interop::marshal_context context;

	LPCTSTR infoPathArab = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\HW-ARAB\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));
	LPCTSTR infoPathFrench = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\HW-FRENCH\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));
	LPCTSTR infoPathLeapT = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\LEAP-TOOLS\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));
	LPCTSTR infoPathLeapH = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\LEAP-HAND\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));
	LPCTSTR infoPathSign = context.marshal_as<const TCHAR*>(String::Concat(L"Patients Records\\SIGNATURES\\", LASTNAME_TEXTBOX->Text->ToUpperInvariant(), L" ", FIRSTNAME_TEXTBOX->Text->ToUpperInvariant()));
	

	if (CreateDirectory(infoPathArab, NULL) && CreateDirectory(infoPathFrench, NULL) &&
		CreateDirectory(infoPathLeapT, NULL) && CreateDirectory(infoPathLeapH, NULL) && CreateDirectory(infoPathSign, NULL)) {
		
		myPatient->printMe(infoPathArab);
		myPatient->printMe(infoPathFrench);
		myPatient->printMe(infoPathLeapT);
		myPatient->printMe(infoPathLeapH);
		myPatient->printMe(infoPathSign);

		ofstream patientListFile("Patients Records\\PatientList.txt", std::ofstream::app);
		patientListFile << endl << context.marshal_as<std::string>(LASTNAME_TEXTBOX->Text->ToUpperInvariant()) << " " << context.marshal_as<std::string>(FIRSTNAME_TEXTBOX->Text->ToUpperInvariant());
		patientListFile.close();

		return true;
	}

	return false;

}