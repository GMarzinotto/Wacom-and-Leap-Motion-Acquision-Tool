#include "Patient_BasicInfo.h"
#include <ctime>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;
using namespace System::Xml;

#pragma managed

WacomTabletApplication::Patient_BasicInfo::Patient_BasicInfo() {}
WacomTabletApplication::Patient_BasicInfo::Patient_BasicInfo(int a) {}


//void WacomTabletApplication::Patient_BasicInfo::fillInfo(NewPatient^ form) {
//
//	//Complete Name Data
//	this->setID(form->ID_TEXTBOX->Text);
//
//	//Complete Age Data
//	this->setAge(form->AGE_COUNTER->Text);
//	this->setBirthDate(form->BIRTHDATE_DAYPICKER->Value);
//
//	//Complete Civil State Data
//	//if (SINGLE_RADIOBUTTON->Checked) myPatient->setCivilState(civilStates::Single);
//	//else if (MARRIED_RADIOBUTTON->Checked) myPatient->setCivilState(civilStates::Married);
//	//else if (DIVORCED_RADIOBUTTON->Checked) myPatient->setCivilState(civilStates::Divorced);
//	//else if (WIDOW_RADIOBUTTON->Checked) myPatient->setCivilState(civilStates::Widow);
//	//myPatient->setNumChildren(NUMBEROFCHILDREN_COUNTER->Text);
//
//	//Complete Socio Educative Lvl
//	//if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 0) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC1);
//	//else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 1) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC2);
//	//else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 2) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC3);
//	//else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 3) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC4);
//	//else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 4) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC5);
//	//else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 5) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC6);
//	//else if (SOCIOEDUCATIVE_COMBOBOX->SelectedIndex == 6) myPatient->setSocioEducativeLvl(socioEducativeLvls::NC7);
//	//else myPatient->setSocioEducativeLvl(socioEducativeLvls::Unknown);
//
//	//Complete Gender
//	//if (MALEGENDER_RADIOBUTTON->Checked) myPatient->setGender(genders::Male); else  myPatient->setGender(genders::Female);
//
//	//Complete Handedness
//	//if (RIGHT_RADIOBUTTON->Checked) {
//	//	//if (AMBIDEXTER_CHECKBOX->Checked) myPatient->setHandedness(handedness::Right_Ambidexter);
//	//	//else  myPatient->setHandedness(handedness::Right);
//	//}
//	//else {
//	//	/*if (AMBIDEXTER_CHECKBOX->Checked) myPatient->setHandedness(handedness::Left_Ambidexter);
//	//	else  myPatient->setHandedness(handedness::Left);*/
//	//}
//	///*if (FORCEDRIGHT_CHECKBOX->Checked) myPatient->setHandedness(handedness::Forced_Right);
//
//	/*myPatient->setOtherComments_NewPatient(OTHER_COMMENTS_TEXTBOX->Text);
//	myPatient->setVisionProblemInfo(YES_VISION_PROBLEMS_RADIOBUTTON->Checked,PRECISE_VISION_PROBLEMS_TEXTBOX->Text);	*/
//}

void WacomTabletApplication::Patient_BasicInfo::fillMe(FILE* fp) {

    int edad = 0;
    if (fscanf(fp, "ID: %s\n", this->ID) != 1) perror("Error reading file (ID)");
    
    if (fscanf(fp, "Age: %d\n", &this->age) != 1) perror("Error reading file (Age)");
    if (fscanf(fp, "Birth Date: %d/%d/%d\n", &this->birthDate.tm_mday, &this->birthDate.tm_mon, &this->birthDate.tm_year) != 3) perror("Error reading file (Birth Date)");
    
    char read[80];
    if (fscanf(fp, "Gender: %s\n", read) != 1) perror("Error reading file (Gender)");
    if (strcmp(read, "Female") == 0) this->gender = genders::Female;
    else if (strcmp(read, "Male") == 0) this->gender = genders::Male;
    else perror("Error reading file (Gender)");

    memset(read, 0, 80);
    if (fscanf(fp, "Hand: %s\n", read) != 1) perror("Error reading file (Hand)");
    if (strcmp(read, "Left") == 0) this->hand = handedness::Left;
    else if (strcmp(read, "Left_Ambidexter") == 0) this->hand = handedness::Left_Ambidexter;
    else if (strcmp(read, "Right") == 0) this->hand = handedness::Right;
    else if (strcmp(read, "Right_Ambidexter") == 0) this->hand = handedness::Right_Ambidexter;
    else if (strcmp(read, "Forced_Right") == 0) this->hand = handedness::Forced_Right;
    else perror("Error reading file (Hand)");

    memset(read, 0, 80);
    if (fscanf(fp, "Vision Problems: %s\n", read) != 1) perror("Error reading file (Vision Problems)");
    if (strcmp(read, "Yes") == 0) this->hasVisionProblem = true;
    else if (strcmp(read, "No") == 0) this->hasVisionProblem = false;
    else perror("Error reading file (Vision Problems)");
    memset(read, 0, 80);
    fgets(read, 70, fp);
    strtok(read, " ");
    strtok(NULL, " ");
    strtok(NULL, " ");
    this->detailVisionProblem = strtok(NULL, "\n");

    memset(read, 0, 80);
    if (fscanf(fp, "Arthrosis Problem: %s\n", read) != 1) perror("Error reading file (Arthrosis Problem)");
    if (strcmp(read, "Yes") == 0) this->hasArthrosis = true;
    else if (strcmp(read, "No") == 0) this->hasArthrosis = false;
    else perror("Error reading file (Arthrosis Problem)");
    memset(read, 0, 80);
    fgets(read, 80, fp);
    if (strcmp(read, "") == 0) this->detailArthrosis = "";
    else {
        strtok(read, " ");
        strtok(NULL, " ");
        strtok(NULL, " ");
        this->detailArthrosis = strtok(NULL, "\n");
    }

    memset(read, 0, 80);
    fgets(read, 80, fp);
    strtok(read, " ");
    strtok(NULL, " ");
    this->otherComments_NewPatient = strtok(NULL, "\n");
}

String^ WacomTabletApplication::Patient_BasicInfo::getID() {
    msclr::interop::marshal_context context;
    return context.marshal_as<String^>(this->ID);
}

System::DateTime WacomTabletApplication::Patient_BasicInfo::getBirthdayDate() {

    return DateTime(this->birthDate.tm_year, this->birthDate.tm_mon, this->birthDate.tm_mday);
}

WacomTabletApplication::genders WacomTabletApplication::Patient_BasicInfo::getGender() {
    return this->gender;
}

WacomTabletApplication::handedness WacomTabletApplication::Patient_BasicInfo::getHandedness() {
    return this->hand;
}

bool WacomTabletApplication::Patient_BasicInfo::getVisionProblem() {
    return this->hasVisionProblem;
}

String^ WacomTabletApplication::Patient_BasicInfo::getVisionProblemDetail() {
    msclr::interop::marshal_context context;
    return context.marshal_as<String^>(this->detailVisionProblem);
}

bool WacomTabletApplication::Patient_BasicInfo::getArthrosisProblem() {
    return this->hasArthrosis;
}

String^ WacomTabletApplication::Patient_BasicInfo::getArthrosisProblemDetail() {
    msclr::interop::marshal_context context;
    return context.marshal_as<String^>(this->detailArthrosis);
}

String^ WacomTabletApplication::Patient_BasicInfo::getOtherComment_NewPatient() {
    msclr::interop::marshal_context context;
    return context.marshal_as<String^>(this->otherComments_NewPatient);
}

void WacomTabletApplication::Patient_BasicInfo::printID(std::ofstream& fout) {
    fout << "ID: " << this->ID << endl;
}

void WacomTabletApplication::Patient_BasicInfo::printAge(std::ofstream& fout) {
    fout << "Age: " << this->age << endl;
}

void WacomTabletApplication::Patient_BasicInfo::printGender(std::ofstream& fout) {
    fout << "Gender: ";
    if (gender == genders::Male) fout << "Male" << endl;
    else fout << "Female" << endl;
}

void WacomTabletApplication::Patient_BasicInfo::printHandedness(std::ofstream& fout) {
    fout << "Hand: ";
    if (hand == handedness::Left) fout << "Left";
    else if (hand == handedness::Right) fout << "Right";
    else if (hand == handedness::Forced_Right) fout << "Forced_Right";
    else if (hand == handedness::Left_Ambidexter) fout << "Left_Ambidexter";
    else if (hand == handedness::Right_Ambidexter) fout << "Right_Ambidexter";
    fout << endl;
}

//void WacomTabletApplication::Patient_BasicInfo::printCivilState(std::ofstream& fout) {
//    fout << "Civil State: ";
//    switch (this->civilState) {
//    case civilStates::Single: fout << "Single" << endl; break;
//    case civilStates::Married: fout << "Married" << endl; break;
//    case civilStates::Widow: fout << "Widow" << endl; break;
//    case civilStates::Divorced: fout << "Divorced" << endl; break;
//    default: fout << "Unknown" << endl;
//    }
//}

//void WacomTabletApplication::Patient_BasicInfo::printNumChildren(std::ofstream& fout) {
//    fout << "Number of Children: " << numChildren << endl;
//}

//void WacomTabletApplication::Patient_BasicInfo::printSocioEducativeLvl(std::ofstream& fout) {
//    fout << "Socio Educative Level: ";
//    switch (this->socioEducativeLvl) {
//    case socioEducativeLvls::NC1: fout << "NC1_Illiterate" << endl; break;
//    case socioEducativeLvls::NC2: fout << "NC2_Reads_Writes_Counts" << endl; break;
//    case socioEducativeLvls::NC3: fout << "NC3_Elementary_School" << endl; break;
//    case socioEducativeLvls::NC4: fout << "NC4_CAP_BEP_Brevet" << endl; break;
//    case socioEducativeLvls::NC5: fout << "NC5_Terminal_Class" << endl; break;
//    case socioEducativeLvls::NC6: fout << "NC6_BAC" << endl; break;
//    case socioEducativeLvls::NC7: fout << "NC7_University_Diploma" << endl; break;
//    default: fout << "Unknown" << endl;
//    }
//}

//void WacomTabletApplication::Patient_BasicInfo::printFrenchLvl(std::ofstream& fout) {
//	fout << "French Level: ";
//	switch (this->frenchLvl) {
//	case frenchLvls::Elementary: fout << "Elementary" << endl; break;
//	case frenchLvls::Intermediate: fout << "Intermediate" << endl; break;
//	case frenchLvls::Advanced: fout << "Advanced" << endl; break;
//	default: fout << "Unknown" << endl;
//	}
//}

//void WacomTabletApplication::Patient_BasicInfo::printWritingFrequency(std::ofstream& fout) {
//	fout << "Writing Frequency: ";
//	switch (this->writeFreq) {
//	case writeFrequencies::Less_than_once_a_week: fout << "Less than once a week" << endl; break;
//	case writeFrequencies::times_per_week_1_or_2: fout << "1-2 times per week" << endl; break;
//	case writeFrequencies::times_per_week_3_or_5: fout << "3-5 times per week" << endl; break;
//	case writeFrequencies::times_per_week_6_or_7: fout << "6-7 times per week" << endl; break;
//	case writeFrequencies::everyday_several_times: fout << "Everyday, several times a day" << endl; break;
//	default: fout << "Unknown" << endl;
//	}
//}

//void WacomTabletApplication::Patient_BasicInfo::printKnownAlphabets(std::ofstream& fout) {
//	fout << "Alphabets: ";
//	bool noAlphabets = !(writesLatin | writesArab | writesArmenian | writesChinese | writesCyrillic | writesDevanagari | writesEtiopic | writesGeorgian | writesHangul | writesGreek | writesHebrew | writesJapanese | writesSouthIndic | writesOthers);
//	if (noAlphabets) { fout << "None"; }
//	else {
//		if (writesLatin) { fout << "Latin "; }
//		if (writesArab) { fout << "Arab "; }
//		if (writesArmenian) { fout << "Armenian "; }
//		if (writesChinese) { fout << "Chinese "; }
//		if (writesCyrillic) { fout << "Cyrilic "; }
//		if (writesDevanagari) { fout << "Devanagari "; }
//		if (writesEtiopic) { fout << "Etiopic "; }
//		if (writesGeorgian) { fout << "Georgian "; }
//		if (writesGreek) { fout << "Grek "; }
//		if (writesHangul) { fout << "Hangul "; }
//		if (writesHebrew) { fout << "Hebrew "; }
//		if (writesJapanese) { fout << "Japanise "; }
//		if (writesSouthIndic) { fout << "SouthIndic "; }
//		if (writesOthers) { fout << "Others "; }
//	}
//	fout << endl;
//}

void WacomTabletApplication::Patient_BasicInfo::printBirthDate(std::ofstream& fout) {
    //printed as DD/MM/YYYY
    fout << "Birth Date: ";
    fout << std::to_string(birthDate.tm_mday) << "/" << std::to_string(birthDate.tm_mon) << "/" << std::to_string(birthDate.tm_year) << endl;
}

//void WacomTabletApplication::Patient_BasicInfo::printNativeLanguage(std::ofstream& fout) {
//	fout << "Native Language: " << nativeLanguage << endl;
//}

//void WacomTabletApplication::Patient_BasicInfo::printPrincipalProfession(std::ofstream& fout) {
//	fout << "Principal Profession: " << principalProfession << endl;
//}

//void WacomTabletApplication::Patient_BasicInfo::printLastProfession(std::ofstream& fout) {
//	fout << "Last Profession: " << lastProfession << endl;
//}

//void WacomTabletApplication::Patient_BasicInfo::printRetirementInfo(std::ofstream& fout) {
//	fout << "Retired: ";
//	if (stillWorks) { fout << " No " << endl; }
//	else fout << " Yes ( " << retirementAge << " Years )" << endl;
//}

void WacomTabletApplication::Patient_BasicInfo::printVisionProblemInfo(std::ofstream& fout) {
    fout << "Vision Problems: ";
    if (hasVisionProblem) { fout << " Yes" << endl << "Vision Problem Comment: " << detailVisionProblem << endl; }
    else fout << " No " << endl << "Vision Problem Comment: None" << endl;
}

void WacomTabletApplication::Patient_BasicInfo::printArthrosisProblemInfo(std::ofstream& fout) {
    fout << "Arthrosis Problem: ";
    if (hasArthrosis) { fout << " Yes " << endl << "Arthrosis Problem Comment: " << detailArthrosis << endl; }
    else fout << " No " << endl << "Arthrosis Problem Comment: None" << endl;
}

void WacomTabletApplication::Patient_BasicInfo::printOtherComments_NewPatient(std::ofstream& fout) {
    fout << "Other Comments: ";
    if (otherComments_NewPatient != "") { fout << otherComments_NewPatient << endl; }
    else fout << " None" << endl;
}

void WacomTabletApplication::Patient_BasicInfo::printMe(ofstream& fout) {

    printID(fout);
    printAge(fout);
    printBirthDate(fout);
    printGender(fout);
    printHandedness(fout);
    //printCivilState(fout);
    //printNumChildren(fout);
    //printSocioEducativeLvl(fout);
    //printWritingFrequency(fout);
    //printNativeLanguage(fout);
    //printFrenchLvl(fout);
    //printKnownAlphabets(fout);
    //printPrincipalProfession(fout);
    //printLastProfession(fout);
    //printRetirementInfo(fout);
    printVisionProblemInfo(fout);
    printArthrosisProblemInfo(fout);
    printOtherComments_NewPatient(fout);
}

void WacomTabletApplication::Patient_BasicInfo::setID(String^ input) {
    msclr::interop::marshal_context context;
    this->ID = context.marshal_as<std::string>(input);
}

//void WacomTabletApplication::Patient_BasicInfo::setAge(String^ input) {
void WacomTabletApplication::Patient_BasicInfo::setAge(int input) {
    //this->age = int::Parse(input);
    this->age = input;
}

void WacomTabletApplication::Patient_BasicInfo::setBirthDate(System::DateTime input) {
    this->birthDate.tm_year = input.Year;
    this->birthDate.tm_mon = input.Month;
    this->birthDate.tm_mday = input.Day;

    time_t timer;
    timer = time(NULL);
    struct tm* today;
    today = localtime(&timer);
    int age = 1900 + today->tm_year - this->birthDate.tm_year;
    if (this->birthDate.tm_mon > today->tm_mon + 1 || (this->birthDate.tm_mon == today->tm_mon + 1 && this->birthDate.tm_mday > today->tm_mday)) {
        age--;
    }
    setAge(age);
}

void WacomTabletApplication::Patient_BasicInfo::setGender(genders input) {
    this->gender = input;
}

//void WacomTabletApplication::Patient_BasicInfo::setCivilState(civilStates input) {
//    this->civilState = input;
//}
//
//void WacomTabletApplication::Patient_BasicInfo::setNumChildren(String^ input) {
//    this->numChildren = int::Parse(input);
//}

void WacomTabletApplication::Patient_BasicInfo::setHandedness(handedness input) {
    this->hand = input;
}

//void WacomTabletApplication::Patient_BasicInfo::setSocioEducativeLvl(socioEducativeLvls input) {
//    this->socioEducativeLvl = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::Patient_BasicInfo::setFrenchLvl(frenchLvls input) {
//	this->frenchLvl = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesLatin(bool input) {
//	this->writesLatin = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesArab(bool input) {
//	this->writesArab = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesArmenian(bool input) {
//	this->writesArmenian = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesChinese(bool input) {
//	this->writesChinese = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesCyrillic(bool input) {
//	this->writesCyrillic = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesDevanagari(bool input) {
//	this->writesDevanagari = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesEtiopic(bool input) {
//	this->writesEtiopic = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesGeorgian(bool input) {
//	this->writesGeorgian = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesGreek(bool input) {
//	this->writesGreek = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesHangul(bool input) {
//	this->writesHangul = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesHebrew(bool input) {
//	this->writesHebrew = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesJapanese(bool input) {
//	this->writesJapanese = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesSouthIndic(bool input) {
//	this->writesSouthIndic = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritesOthers(bool input) {
//	this->writesOthers = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setWritingFrequency(writeFrequencies input) {
//	this->writeFreq = input;
//}

//void WacomTabletApplication::Patient_BasicInfo::setNativeLanguage(String^ nativeLang, String^ appLanguage) {
//	msclr::interop::marshal_context context;
//
//	if (appLanguage != "English") {
//		nativeLang = translateLanguageToEnglish(nativeLang, appLanguage);
//	}
//	this->nativeLanguage = context.marshal_as<std::string>(nativeLang);
//}

//void WacomTabletApplication::Patient_BasicInfo::setPrincipalProfession(String^ profession, String^ appLanguage) {
//	msclr::interop::marshal_context context;
//
//	if (appLanguage != "English") {
//		profession = translateProfessionToEnglish(profession, appLanguage);
//	}
//	this->principalProfession = context.marshal_as<std::string>(profession);
//}

//void WacomTabletApplication::Patient_BasicInfo::setLastProfession(String^ profession, String^ appLanguage) {
//	msclr::interop::marshal_context context;
//
//	if (appLanguage != "English") {
//		profession = translateProfessionToEnglish(profession, appLanguage);
//	}
//	this->lastProfession = context.marshal_as<std::string>(profession);
//}

//void WacomTabletApplication::Patient_BasicInfo::setRetirementInfo(bool stillWorks, String^ retirementAge) {
//	this->stillWorks = stillWorks;
//	if (stillWorks) this->retirementAge = -1;
//	else this->retirementAge = int::Parse(retirementAge);
//}

void WacomTabletApplication::Patient_BasicInfo::setVisionProblemInfo(bool hasProblem, String^ detailProblem) {
    msclr::interop::marshal_context context;
    this->hasVisionProblem = hasProblem;
    this->detailVisionProblem = context.marshal_as<std::string>(detailProblem);
}

void WacomTabletApplication::Patient_BasicInfo::setArthrosisProblemInfo(bool hasProblem, String^ detailProblem) {
    msclr::interop::marshal_context context;
    this->hasArthrosis = hasProblem;
    this->detailArthrosis = context.marshal_as<std::string>(detailProblem);
}

void WacomTabletApplication::Patient_BasicInfo::setOtherComments_NewPatient(String^ detailComment) {
    msclr::interop::marshal_context context;
    this->otherComments_NewPatient = context.marshal_as<std::string>(detailComment);
}

//String^ WacomTabletApplication::Patient_BasicInfo::translateLanguageToEnglish(String^ nativeLang, String^ appLanguage) {
//	XmlTextReader^ reader = gcnew XmlTextReader("XML/strings_languages.xml");
//	String^ fullAppLanguage = String::Concat(appLanguage, L"List");
//	//Read the XML till reach the Language Part
//	while (reader->Read() && ((reader->NodeType == XmlNodeType::Element && reader->Name != fullAppLanguage) || (reader->NodeType != XmlNodeType::Element)));
//	//Check if reader is in the Language Part of the XML
//	if (reader->NodeType == XmlNodeType::Element && reader->Name == fullAppLanguage) {
//		//Read the whole Language Section Searching for the nativeLang
//		while (reader->Read() && ((reader->NodeType == XmlNodeType::EndElement && reader->Name != fullAppLanguage) || (reader->NodeType != XmlNodeType::EndElement))) {
//			//Check for each element of the List in the XML file and add them to the combobox
//			if (reader->NodeType == XmlNodeType::Text && reader->Value == nativeLang) {
//				while (reader->Read() && reader->NodeType != XmlNodeType::EndElement);
//				//If Found the EndElement of my nativeLang => Search the same node in the English XML
//				if (reader->NodeType == XmlNodeType::EndElement) {
//					pin_ptr<const wchar_t> str_search = PtrToStringChars(String::Concat(L"Root/EnglishList/", reader->Name));
//					return queryNode_lang(str_search);
//				}
//			}
//		}
//	}
//	return "";
//}

//String^ WacomTabletApplication::Patient_BasicInfo::translateProfessionToEnglish(String^ profession, String^ appLanguage) {
//	XmlTextReader^ reader = gcnew XmlTextReader("XML/strings_professions.xml");
//	String^ fullAppLanguage = String::Concat(appLanguage, L"List");
//	//Read the XML till reach the Language Part
//	while (reader->Read() && ((reader->NodeType == XmlNodeType::Element && reader->Name != fullAppLanguage) || (reader->NodeType != XmlNodeType::Element)));
//	//Check if reader is in the Language Part of the XML
//	if (reader->NodeType == XmlNodeType::Element && reader->Name == fullAppLanguage) {
//		//Read the whole Language Section Searching for the nativeLang
//		while (reader->Read() && ((reader->NodeType == XmlNodeType::EndElement && reader->Name != fullAppLanguage) || (reader->NodeType != XmlNodeType::EndElement))) {
//			//Check for each element of the List in the XML file and add them to the combobox
//			if (reader->NodeType == XmlNodeType::Text && reader->Value == profession) {
//				while (reader->Read() && reader->NodeType != XmlNodeType::EndElement);
//				//If Found the EndElement of my nativeLang => Search the same node in the English XML
//				if (reader->NodeType == XmlNodeType::EndElement) {
//					pin_ptr<const wchar_t> str_search = PtrToStringChars(String::Concat(L"Root/EnglishList/", reader->Name));
//					return queryNode_prof(str_search);
//				}
//			}
//		}
//	}
//	return "";
//}