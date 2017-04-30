#include "SocialSituation.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Xml;

void WacomTabletApplication::SocialSituation::UpdateLanguage_SocialSituationForm(String^ language) {

    pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Yes"));
    YES_CURRENTLY_WORKING_RADIOBUTTON->Text = queryNode(str_yes);

    pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/No"));
    NO_CURRENTLY_WORKING_RADIOBUTTON->Text = queryNode(str_no);
    
    pin_ptr<const wchar_t> str_register = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Register"));
    REGISTER_BUTTON->Text = queryNode(str_register);

    pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Cancel"));
    CANCEL_BUTTON->Text = queryNode(str_cancel);

    pin_ptr<const wchar_t> str_civ = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Title"));
    CIVILSTATE_LABEL->Text = queryNode(str_civ);
    pin_ptr<const wchar_t> str_civ_married = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Married"));
    MARRIED_RADIOBUTTON->Text = queryNode(str_civ_married);
    pin_ptr<const wchar_t> str_civ_wido = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Widow"));
    WIDOW_RADIOBUTTON->Text = queryNode(str_civ_wido);
    pin_ptr<const wchar_t> str_civ_div = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Divorced"));
    DIVORCED_RADIOBUTTON->Text = queryNode(str_civ_div);
    pin_ptr<const wchar_t> str_civ_sing = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Single"));
    SINGLE_RADIOBUTTON->Text = queryNode(str_civ_sing);
    pin_ptr<const wchar_t> str_civ_chil = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CivilStatus/Children"));
    NUMBEROFCHILDREN_LABEL->Text = queryNode(str_civ_chil);

    pin_ptr<const wchar_t> str_socioed = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/Title"));
    SOCIOEDUCATIVE_LABEL->Text = queryNode(str_socioed);
    SOCIOEDUCATIVE_COMBOBOX->Items->Clear();
    pin_ptr<const wchar_t> str_nc1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC1"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc1));
    pin_ptr<const wchar_t> str_nc2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC2"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc2));
    pin_ptr<const wchar_t> str_nc3 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC3"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc3));
    pin_ptr<const wchar_t> str_nc4 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC4"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc4));
    pin_ptr<const wchar_t> str_nc5 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC5"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc5));
    pin_ptr<const wchar_t> str_nc6 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC6"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc6));
    pin_ptr<const wchar_t> str_nc7 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/SocioEducative/NC7"));
    SOCIOEDUCATIVE_COMBOBOX->Items->Add(queryNode(str_nc7));

    pin_ptr<const wchar_t> str_prinprof = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/PrincipalProfession"));
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

    pin_ptr<const wchar_t> str_cwork = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CurrentlyWorking/Title"));
    CURRENTLY_WORKING_LABEL->Text = queryNode(str_cwork);
    pin_ptr<const wchar_t> str_lwork = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/CurrentlyWorking/Retirement"));
    RETIREMENT_AGE_LABEL->Text = queryNode(str_lwork);

    UpdateLanguage_ProfessionCombobox_SocialSituationForm(language);
}


void WacomTabletApplication::SocialSituation::UpdateLanguage_ProfessionCombobox_SocialSituationForm(String^ language) {
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
                if (reader->NodeType == XmlNodeType::Text) { LAST_PROFESSION_COMBOBOX->Items->Add(reader->Value);  PRINCIPAL_PROFESSION_COMBOBOX->Items->Add(reader->Value); }
            }
        }
    }
}

void WacomTabletApplication::SocialSituation::completePatientInformationObject() {

    //Complete Profession Data
    myPatient->socialSituation.setPrincipalProfession(PRINCIPAL_PROFESSION_COMBOBOX->Text, currentLanguage);
    
    //Complete Civil State Data
    if (SINGLE_RADIOBUTTON->Checked) myPatient->socialSituation.setCivilState(civilStates::Single);
    else if (MARRIED_RADIOBUTTON->Checked) myPatient->socialSituation.setCivilState(civilStates::Married);
    else if (DIVORCED_RADIOBUTTON->Checked) myPatient->socialSituation.setCivilState(civilStates::Divorced);
    else if (WIDOW_RADIOBUTTON->Checked) myPatient->socialSituation.setCivilState(civilStates::Widow);
    myPatient->socialSituation.setNumChildren(NUMBEROFCHILDREN_COUNTER->Text);

    //Complete Socio Educative Lvl
    if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 0) myPatient->socialSituation.setSocioEducativeLvl(socioEducativeLvls::NC1);
    else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 1) myPatient->socialSituation.setSocioEducativeLvl(socioEducativeLvls::NC2);
    else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 2) myPatient->socialSituation.setSocioEducativeLvl(socioEducativeLvls::NC3);
    else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 3) myPatient->socialSituation.setSocioEducativeLvl(socioEducativeLvls::NC4);
    else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 4) myPatient->socialSituation.setSocioEducativeLvl(socioEducativeLvls::NC5);
    else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 5) myPatient->socialSituation.setSocioEducativeLvl(socioEducativeLvls::NC6);
    else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 6) myPatient->socialSituation.setSocioEducativeLvl(socioEducativeLvls::NC7);
    else myPatient->socialSituation.setSocioEducativeLvl(socioEducativeLvls::Missing);

    ////Complete Writing Frequency
    if (WRITING_FREQ_COMBOBOX->SelectedIndex == 0) myPatient->socialSituation.setWritingFrequency(writeFrequencies::Less_than_once_a_week);
    else if (WRITING_FREQ_COMBOBOX->SelectedIndex == 1) myPatient->socialSituation.setWritingFrequency(writeFrequencies::times_per_week_1_or_2);
    else if (WRITING_FREQ_COMBOBOX->SelectedIndex == 2) myPatient->socialSituation.setWritingFrequency(writeFrequencies::times_per_week_3_or_5);
    else if (WRITING_FREQ_COMBOBOX->SelectedIndex == 3) myPatient->socialSituation.setWritingFrequency(writeFrequencies::times_per_week_6_or_7);
    else if (WRITING_FREQ_COMBOBOX->SelectedIndex == 4) myPatient->socialSituation.setWritingFrequency(writeFrequencies::everyday_several_times);
    else myPatient->socialSituation.setWritingFrequency(writeFrequencies::Missing);

    myPatient->socialSituation.setLastProfession(LAST_PROFESSION_COMBOBOX->Text, currentLanguage);

    myPatient->socialSituation.setRetirementInfo(YES_CURRENTLY_WORKING_RADIOBUTTON->Checked, RETIREMENT_AGE_COUNTER->Text);
    
    // Lives at home
    if (YES_LIVES_IN_HOUSE_RADIOBUTTON->Checked) myPatient->socialSituation.setLivesInHouse(extended_bool::True);
    else if (NO_LIVES_IN_HOUSE_RADIOBUTTON->Checked) myPatient->socialSituation.setLivesInHouse(extended_bool::False);
    else myPatient->socialSituation.setLivesInHouse(extended_bool::Missing);

    // Goes out regularly
    if (YES_GOES_OUT_ALONE_RADIOBUTTON->Checked) myPatient->socialSituation.setGoesOutOfHomeRegularly(goesOutOfHomeType::Yes_alone);
    else if (YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Checked) myPatient->socialSituation.setGoesOutOfHomeRegularly(goesOutOfHomeType::Yes_accompanied);
    else if (NO_GOES_OUT_RADIOBUTTON->Checked) myPatient->socialSituation.setGoesOutOfHomeRegularly(goesOutOfHomeType::No);
    else myPatient->socialSituation.setGoesOutOfHomeRegularly(goesOutOfHomeType::Missing);

    // Uses Walking Tools
    if (YES_WALKING_TOOLS_RADIOBUTTON->Checked) {
        myPatient->socialSituation.setUseWalkingTools(extended_bool::True);
        if (HOUSE_WALKING_TOOLS_CHECKBOX->Checked) myPatient->socialSituation.setUseWalkingToolsInHouse(extended_bool::True);
        else myPatient->socialSituation.setUseWalkingToolsInHouse(extended_bool::False);

        if (OUTSIDE_WALKING_TOOLS_CHECKBOX->Checked) myPatient->socialSituation.setUseWalkingToolsOutside(extended_bool::True);
        else myPatient->socialSituation.setUseWalkingToolsOutside(extended_bool::False);

        if (CANE_WALKING_TOOLS_CHECKBOX->Checked) myPatient->socialSituation.setUseCane(extended_bool::True);
        else myPatient->socialSituation.setUseCane(extended_bool::False);

        if (WALKER_WALKING_TOOLS_CHECKBOX->Checked) myPatient->socialSituation.setUseWalker(extended_bool::True);
        else myPatient->socialSituation.setUseWalker(extended_bool::False);

        if (WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Checked) myPatient->socialSituation.setUseWheelchair(extended_bool::True);
        else myPatient->socialSituation.setUseWheelchair(extended_bool::False);

    }
    else if (NO_WALKING_TOOLS_RADIOBUTTON->Checked) {
        myPatient->socialSituation.setUseWalkingTools(extended_bool::False);
        myPatient->socialSituation.setUseWalkingToolsInHouse(extended_bool::False);
        myPatient->socialSituation.setUseWalkingToolsOutside(extended_bool::False);
        myPatient->socialSituation.setUseCane(extended_bool::False);
        myPatient->socialSituation.setUseWalker(extended_bool::False);
        myPatient->socialSituation.setUseWheelchair(extended_bool::False);
    } else {
        myPatient->socialSituation.setUseWalkingTools(extended_bool::Missing);
        myPatient->socialSituation.setUseWalkingToolsInHouse(extended_bool::Missing);
        myPatient->socialSituation.setUseWalkingToolsOutside(extended_bool::Missing);
        myPatient->socialSituation.setUseCane(extended_bool::Missing);
        myPatient->socialSituation.setUseWalker(extended_bool::Missing);
        myPatient->socialSituation.setUseWheelchair(extended_bool::Missing);
    }

    // Other Protocols
    myPatient->socialSituation.setParticipationLEOPOLD(LEOPOLD_CHECKBOX->Checked);
    myPatient->socialSituation.setParticipationBALTAZAR(BALTAZAR_CHECKBOX->Checked);
    myPatient->socialSituation.setParticipationMEMENTO(MEMENTO_CHECKBOX->Checked);
}

void WacomTabletApplication::SocialSituation::fillFormWithPreviousPatientData() {
    
    //Complete Civil State Data
    /*switch (myPatient->civilState) {
    case civilStates::Single: SINGLE_RADIOBUTTON->Checked = true; break;
    case civilStates::Married: MARRIED_RADIOBUTTON->Checked = true; break;
    case civilStates::Divorced: DIVORCED_RADIOBUTTON->Checked = true; break;
    case civilStates::Widow: WIDOW_RADIOBUTTON->Checked = true; break;
    default: break;
    }*/
    //myPatient->setNumChildren(NUMBEROFCHILDREN_COUNTER->Text);

    //Complete Socio Educative Lvl
    /*switch (myPatient->socioEducativeLvl) {
    case socioEducativeLvls::NC1: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 0; break;
    case socioEducativeLvls::NC2: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 1; break;
    case socioEducativeLvls::NC3: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 2; break;
    case socioEducativeLvls::NC4: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 3; break;
    case socioEducativeLvls::NC5: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 4; break;
    case socioEducativeLvls::NC6: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 5; break;
    case socioEducativeLvls::NC7: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = 6; break;
    case socioEducativeLvls::Unknown: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = -1; break;
    default: SOCIOEDUCATIVE_COMBOBOX->SelectedIndex = -1; break;
    }*/

    //Complete Writing Frequency
    /*switch (myPatient->writeFreq) {
    case writeFrequencies::Less_than_once_a_week: WRITING_FREQ_COMBOBOX->SelectedIndex = 0; break;
    case writeFrequencies::times_per_week_1_or_2: WRITING_FREQ_COMBOBOX->SelectedIndex = 1; break;
    case writeFrequencies::times_per_week_3_or_5: WRITING_FREQ_COMBOBOX->SelectedIndex = 2; break;
    case writeFrequencies::times_per_week_6_or_7: WRITING_FREQ_COMBOBOX->SelectedIndex = 3; break;
    case writeFrequencies::everyday_several_times: WRITING_FREQ_COMBOBOX->SelectedIndex = 4; break;
    case writeFrequencies::Unknown: WRITING_FREQ_COMBOBOX->SelectedIndex = -1; break;
    default: WRITING_FREQ_COMBOBOX->SelectedIndex = -1; break;
    }*/

    //Complete Profession Data
    //myPatient->setPrincipalProfession(PRINCIPAL_PROFESSION_COMBOBOX->Text, currentLanguage);
    //myPatient->setLastProfession(LAST_PROFESSION_COMBOBOX->Text, currentLanguage);

    //myPatient->setRetirementInfo(YES_CURRENTLY_WORKING_RADIOBUTTON->Checked, RETIREMENT_AGE_COUNTER->Text);
}