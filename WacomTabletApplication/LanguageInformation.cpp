#include "LanguageInformation.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Xml;

void WacomTabletApplication::LanguageInformation::UpdateLanguage_LanguageInformationForm(String^ language) {

    pin_ptr<const wchar_t> str_natlang = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/NativeLanguage"));
    NATIVE_LANGUAGE_LABEL->Text = queryNode(str_natlang);

    pin_ptr<const wchar_t> str_fr_lvl = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/Title"));
    FRENCHLEVEL_LABEL->Text = queryNode(str_fr_lvl);
    
    //Cleaning the comboboxes
    FRENCHLEVEL_ORAL_COMBOBOX->Items->Clear();
    FRENCHLEVEL_READ_COMBOBOX->Items->Clear();
    FRENCHLEVEL_WRITTEN_COMBOBOX->Items->Clear();
    ARABELEVEL_ORAL_COMBOBOX->Items->Clear();
    ARABELEVEL_READ_COMBOBOX->Items->Clear();
    ARABELEVEL_WRITTEN_COMBOBOX->Items->Clear();

    // Level: missing
    FRENCHLEVEL_ORAL_COMBOBOX->Items->Add("");
    FRENCHLEVEL_READ_COMBOBOX->Items->Add("");
    FRENCHLEVEL_WRITTEN_COMBOBOX->Items->Add("");
    ARABELEVEL_ORAL_COMBOBOX->Items->Add("");
    ARABELEVEL_READ_COMBOBOX->Items->Add("");
    ARABELEVEL_WRITTEN_COMBOBOX->Items->Add("");

    // Level: none
    pin_ptr<const wchar_t> str_fr_none = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/None"));
    FRENCHLEVEL_ORAL_COMBOBOX->Items->Add(queryNode(str_fr_none));
    FRENCHLEVEL_READ_COMBOBOX->Items->Add(queryNode(str_fr_none));
    FRENCHLEVEL_WRITTEN_COMBOBOX->Items->Add(queryNode(str_fr_none));
    ARABELEVEL_ORAL_COMBOBOX->Items->Add(queryNode(str_fr_none));
    ARABELEVEL_READ_COMBOBOX->Items->Add(queryNode(str_fr_none));
    ARABELEVEL_WRITTEN_COMBOBOX->Items->Add(queryNode(str_fr_none));

    // Level: low
    pin_ptr<const wchar_t> str_fr_low = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/Low"));
    FRENCHLEVEL_ORAL_COMBOBOX->Items->Add(queryNode(str_fr_low));
    FRENCHLEVEL_READ_COMBOBOX->Items->Add(queryNode(str_fr_low));
    FRENCHLEVEL_WRITTEN_COMBOBOX->Items->Add(queryNode(str_fr_low));
    ARABELEVEL_ORAL_COMBOBOX->Items->Add(queryNode(str_fr_low));
    ARABELEVEL_READ_COMBOBOX->Items->Add(queryNode(str_fr_low));
    ARABELEVEL_WRITTEN_COMBOBOX->Items->Add(queryNode(str_fr_low));

    // Level: med
    pin_ptr<const wchar_t> str_fr_med = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/Medium"));
    FRENCHLEVEL_ORAL_COMBOBOX->Items->Add(queryNode(str_fr_med));
    FRENCHLEVEL_READ_COMBOBOX->Items->Add(queryNode(str_fr_med));
    FRENCHLEVEL_WRITTEN_COMBOBOX->Items->Add(queryNode(str_fr_med));
    ARABELEVEL_ORAL_COMBOBOX->Items->Add(queryNode(str_fr_med));
    ARABELEVEL_READ_COMBOBOX->Items->Add(queryNode(str_fr_med));
    ARABELEVEL_WRITTEN_COMBOBOX->Items->Add(queryNode(str_fr_med));
    
    // Level: high
    pin_ptr<const wchar_t> str_fr_high = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/High"));
    FRENCHLEVEL_ORAL_COMBOBOX->Items->Add(queryNode(str_fr_high));
    FRENCHLEVEL_READ_COMBOBOX->Items->Add(queryNode(str_fr_high));
    FRENCHLEVEL_WRITTEN_COMBOBOX->Items->Add(queryNode(str_fr_high));
    ARABELEVEL_ORAL_COMBOBOX->Items->Add(queryNode(str_fr_high));
    ARABELEVEL_READ_COMBOBOX->Items->Add(queryNode(str_fr_high));
    ARABELEVEL_WRITTEN_COMBOBOX->Items->Add(queryNode(str_fr_high));
    
    //pin_ptr<const wchar_t> str_ar_lvl = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/Title"));
    //ARABELEVEL_LABEL->Text = queryNode(str_ar_lvl);
    
    /*pin_ptr<const wchar_t> str_ar_none = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/None"));
    ARABELEVEL_COMBOBOX->Items->Add(queryNode(str_ar_none));
    pin_ptr<const wchar_t> str_ar_low = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/Low"));
    ARABELEVEL_COMBOBOX->Items->Add(queryNode(str_ar_low));
    pin_ptr<const wchar_t> str_ar_med = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/Medium"));
    ARABELEVEL_COMBOBOX->Items->Add(queryNode(str_ar_med));
    pin_ptr<const wchar_t> str_ar_high = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/FrenchLevel/High"));
    ARABELEVEL_COMBOBOX->Items->Add(queryNode(str_ar_high));
*/
    pin_ptr<const wchar_t> str_alphabet = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Title"));
    ALPHABETS_LABEL->Text = queryNode(str_alphabet);
    pin_ptr<const wchar_t> str_latin = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Latin"));
    LATIN_ALPHABET_CHECKBOX->Text = queryNode(str_latin);
    pin_ptr<const wchar_t> str_arab = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Arab"));
    ARAB_ALPHABET_CHECKBOX->Text = queryNode(str_arab);
    pin_ptr<const wchar_t> str_armenian = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Armenian"));
    ARMENIAN_ALPHABET_CHECKBOX->Text = queryNode(str_armenian);
    pin_ptr<const wchar_t> str_chinese = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Chinese"));
    CHINESE_ALPHABET_CHECKBOX->Text = queryNode(str_chinese);
    pin_ptr<const wchar_t> str_cyrillic = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Cyrillic"));
    CYRILLIC_ALPHABET_CHECKBOX->Text = queryNode(str_cyrillic);
    pin_ptr<const wchar_t> str_devanaga = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Devanagari"));
    DEVANAGARI_ALPHABET_CHECKBOX->Text = queryNode(str_devanaga);
    pin_ptr<const wchar_t> str_etiopic = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Etiopic"));
    ETIOPIC_ALPHABET_CHECKBOX->Text = queryNode(str_etiopic);
    pin_ptr<const wchar_t> str_georgian = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Georgian"));
    GEORGIAN_ALPHABET_CHECKBOX->Text = queryNode(str_georgian);
    pin_ptr<const wchar_t> str_greek = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Greek"));
    GREEK_ALPHABET_CHECKBOX->Text = queryNode(str_greek);
    pin_ptr<const wchar_t> str_hangul = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Hangul"));
    HANGUL_ALPHABET_CHECKBOX->Text = queryNode(str_hangul);
    pin_ptr<const wchar_t> str_hebrew = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Hebrew"));
    HEBREW_ALPHABET_CHECKBOX->Text = queryNode(str_hebrew);
    pin_ptr<const wchar_t> str_japanese = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Japanese"));
    JAPANESE_ALPHABET_CHECKBOX->Text = queryNode(str_japanese);
    pin_ptr<const wchar_t> str_sindic = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/SouthIndic"));
    SOUTHINDIC_ALPHABET_CHECKBOX->Text = queryNode(str_sindic);
    pin_ptr<const wchar_t> str_a_others = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/NewPatientForm/Alphabets/Others"));
    OTHER_ALPHABET_CHECKBOX->Text = queryNode(str_a_others);

    UpdateLanguage_LanguageCombobox_LanguageInformation(language);
}


void WacomTabletApplication::LanguageInformation::UpdateLanguage_LanguageCombobox_LanguageInformation(String^ language) {
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

void WacomTabletApplication::LanguageInformation::completePatientInformationObject() {

    // Complete Native Language
    myPatient->languageInformation.setNativeLanguage(NATIVE_LANGUAGE_COMBOBOX->Text, currentLanguage);

    // Complete Bilingualism
    if (YES_EARLY_BILINGUALISM_RADIOBUTTON->Checked) myPatient->languageInformation.setBilingualismType(bilingualismType::Yes_early);
    else if (YES_LATE_BILINGUALISM_RADIOBUTTON->Checked) myPatient->languageInformation.setBilingualismType(bilingualismType::Yes_late);
    else if (NO_BILINGUALISM_RADIOBUTTON->Checked) myPatient->languageInformation.setBilingualismType(bilingualismType::No);
    else myPatient->languageInformation.setBilingualismType(bilingualismType::Missing);

    // Complete French Oral Level
    if (FRENCHLEVEL_ORAL_COMBOBOX->SelectedIndex == 1) myPatient->languageInformation.setFrenchLvlOral(frenchLvls::None);
    else if (FRENCHLEVEL_ORAL_COMBOBOX->SelectedIndex == 2) myPatient->languageInformation.setFrenchLvlOral(frenchLvls::Elementary);
    else if (FRENCHLEVEL_ORAL_COMBOBOX->SelectedIndex == 3) myPatient->languageInformation.setFrenchLvlOral(frenchLvls::Intermediate);
    else if (FRENCHLEVEL_ORAL_COMBOBOX->SelectedIndex == 4) myPatient->languageInformation.setFrenchLvlOral(frenchLvls::Advanced);
    else myPatient->languageInformation.setFrenchLvlOral(frenchLvls::Missing);

    // Complete French Read Level
    if(FRENCHLEVEL_READ_COMBOBOX->SelectedIndex == 1) myPatient->languageInformation.setFrenchLvlRead(frenchLvls::None);
    else if (FRENCHLEVEL_READ_COMBOBOX->SelectedIndex == 2) myPatient->languageInformation.setFrenchLvlRead(frenchLvls::Elementary);
    else if (FRENCHLEVEL_READ_COMBOBOX->SelectedIndex == 3) myPatient->languageInformation.setFrenchLvlRead(frenchLvls::Intermediate);
    else if (FRENCHLEVEL_READ_COMBOBOX->SelectedIndex == 4) myPatient->languageInformation.setFrenchLvlRead(frenchLvls::Advanced);
    else myPatient->languageInformation.setFrenchLvlRead(frenchLvls::Missing);

    // Complete French Written Level
    if (FRENCHLEVEL_WRITTEN_COMBOBOX->SelectedIndex == 1) myPatient->languageInformation.setFrenchLvlWritten(frenchLvls::None);
    else if (FRENCHLEVEL_WRITTEN_COMBOBOX->SelectedIndex == 2) myPatient->languageInformation.setFrenchLvlWritten(frenchLvls::Elementary);
    else if (FRENCHLEVEL_WRITTEN_COMBOBOX->SelectedIndex == 3) myPatient->languageInformation.setFrenchLvlWritten(frenchLvls::Intermediate);
    else if (FRENCHLEVEL_WRITTEN_COMBOBOX->SelectedIndex == 4) myPatient->languageInformation.setFrenchLvlWritten(frenchLvls::Advanced);
    else myPatient->languageInformation.setFrenchLvlWritten(frenchLvls::Missing);

    // Complete Arabe Oral Level
    if (ARABELEVEL_ORAL_COMBOBOX->SelectedIndex == 1) myPatient->languageInformation.setArabeLvlOral(frenchLvls::None);
    else if (ARABELEVEL_ORAL_COMBOBOX->SelectedIndex == 2) myPatient->languageInformation.setArabeLvlOral(frenchLvls::Elementary);
    else if (ARABELEVEL_ORAL_COMBOBOX->SelectedIndex == 3) myPatient->languageInformation.setArabeLvlOral(frenchLvls::Intermediate);
    else if (ARABELEVEL_ORAL_COMBOBOX->SelectedIndex == 4) myPatient->languageInformation.setArabeLvlOral(frenchLvls::Advanced);
    else myPatient->languageInformation.setArabeLvlOral(frenchLvls::Missing);

    // Complete Arabe Read Level
    if (ARABELEVEL_READ_COMBOBOX->SelectedIndex == 1) myPatient->languageInformation.setArabeLvlRead(frenchLvls::None);
    else if (ARABELEVEL_READ_COMBOBOX->SelectedIndex == 2) myPatient->languageInformation.setArabeLvlRead(frenchLvls::Elementary);
    else if (ARABELEVEL_READ_COMBOBOX->SelectedIndex == 3) myPatient->languageInformation.setArabeLvlRead(frenchLvls::Intermediate);
    else if (ARABELEVEL_READ_COMBOBOX->SelectedIndex == 4) myPatient->languageInformation.setArabeLvlRead(frenchLvls::Advanced);
    else myPatient->languageInformation.setArabeLvlRead(frenchLvls::Missing);

    // Complete Arabe Written Level
    if (ARABELEVEL_WRITTEN_COMBOBOX->SelectedIndex == 1) myPatient->languageInformation.setArabeLvlWritten(frenchLvls::None);
    else if (ARABELEVEL_WRITTEN_COMBOBOX->SelectedIndex == 2) myPatient->languageInformation.setArabeLvlWritten(frenchLvls::Elementary);
    else if (ARABELEVEL_WRITTEN_COMBOBOX->SelectedIndex == 3) myPatient->languageInformation.setArabeLvlWritten(frenchLvls::Intermediate);
    else if (ARABELEVEL_WRITTEN_COMBOBOX->SelectedIndex == 4) myPatient->languageInformation.setArabeLvlWritten(frenchLvls::Advanced);
    else myPatient->languageInformation.setArabeLvlWritten(frenchLvls::Missing);
    
    // Complete Alphabets
    myPatient->languageInformation.setWritesArab(ARAB_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesArmenian(ARMENIAN_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesChinese(CHINESE_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesCyrillic(CYRILLIC_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesDevanagari(DEVANAGARI_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesEtiopic(ETIOPIC_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesGeorgian(GEORGIAN_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesGreek(GREEK_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesHangul(HANGUL_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesHebrew(HEBREW_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesJapanese(JAPANESE_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesLatin(LATIN_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesOthers(OTHER_ALPHABET_CHECKBOX->Checked);
    myPatient->languageInformation.setWritesSouthIndic(SOUTHINDIC_ALPHABET_CHECKBOX->Checked);
}

void WacomTabletApplication::LanguageInformation::fillFormWithPreviousPatientData() {
    //Complete French Level
    //switch (myPatient->frenchLvl) {
    //case frenchLvls::Elementary: FRENCHLEVEL_COMBOBOX->SelectedIndex = 0; break;
    //case frenchLvls::Intermediate: FRENCHLEVEL_COMBOBOX->SelectedIndex = 1; break;
    //case frenchLvls::Advanced: FRENCHLEVEL_COMBOBOX->SelectedIndex = 2; break;
    //case frenchLvls::Unknown: FRENCHLEVEL_COMBOBOX->SelectedIndex = -1; break;
    //default: FRENCHLEVEL_COMBOBOX->SelectedIndex = -1; break;
    //}

    //Complete Native Language
    //myPatient->setNativeLanguage(NATIVE_LANGUAGE_COMBOBOX->Text, currentLanguage);

    //Complete Alphabets
    //ARAB_ALPHABET_CHECKBOX->Checked = myPatient->writesArab;
    //ARMENIAN_ALPHABET_CHECKBOX->Checked = myPatient->writesArmenian;
    //CHINESE_ALPHABET_CHECKBOX->Checked = myPatient->writesChinese;
    //CYRILLIC_ALPHABET_CHECKBOX->Checked = myPatient->writesCyrillic;
    //DEVANAGARI_ALPHABET_CHECKBOX->Checked = myPatient->writesDevanagari;
    //ETIOPIC_ALPHABET_CHECKBOX->Checked = myPatient->writesEtiopic;
    //GEORGIAN_ALPHABET_CHECKBOX->Checked = myPatient->writesGeorgian;
    //GREEK_ALPHABET_CHECKBOX->Checked = myPatient->writesGreek;
    //HANGUL_ALPHABET_CHECKBOX->Checked = myPatient->writesHangul;
    //HEBREW_ALPHABET_CHECKBOX->Checked = myPatient->writesHebrew;
    //JAPANESE_ALPHABET_CHECKBOX->Checked = myPatient->writesJapanese;
    //LATIN_ALPHABET_CHECKBOX->Checked = myPatient->writesLatin;
    //OTHER_ALPHABET_CHECKBOX->Checked = myPatient->writesOthers;
    //SOUTHINDIC_ALPHABET_CHECKBOX->Checked = myPatient->writesSouthIndic;
}