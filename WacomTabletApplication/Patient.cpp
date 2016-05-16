#include "Patient.h"
#include <ctime>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;
using namespace System::Xml;

#pragma managed




WacomTabletApplication::Patient::Patient() {}
WacomTabletApplication::Patient::Patient(int a) {}


void WacomTabletApplication::Patient::printFirstName(std::ofstream& fout) {
	fout << "Firstname: " << this->firstName << endl;
}
void WacomTabletApplication::Patient::printLastName(std::ofstream& fout) {
	fout << "Lastname: " << this->lastName << endl;
}
void WacomTabletApplication::Patient::printAge(std::ofstream& fout) {
	fout << "Age: " << this->age << endl;
}
void WacomTabletApplication::Patient::printGender(std::ofstream& fout) {
	fout << "Gender: ";
	if (gender == genders::Male) fout << "Male" << endl; 
	else fout << "Female" << endl;
}
void WacomTabletApplication::Patient::printHandedness(std::ofstream& fout) {
	fout << "Hand: ";
	if (hand == handedness::Left) fout << "Left"; 
	else if (hand == handedness::Right) fout << "Right";
		else if (hand == handedness::Forced_Right) fout << "Forced_Right";
			else if (hand == handedness::Left_Ambidexter) fout << "Left_Ambidexter";
				else if (hand == handedness::Right_Ambidexter) fout << "Right_Ambidexter";
	fout << endl;
}
void WacomTabletApplication::Patient::printCivilState(std::ofstream& fout) {
	fout << "Civil State: ";
	switch (this->civilState) {
	case civilStates::Single: fout << "Single" << endl; break;
	case civilStates::Married: fout << "Married" << endl; break;
	case civilStates::Widow: fout << "Widow" << endl; break;
	case civilStates::Divorced: fout << "Divorced" << endl; break;
	default: fout << "Unknown" << endl;
	}
}
void WacomTabletApplication::Patient::printNumChildren(std::ofstream& fout) {
	fout << "Number of Children: " << numChildren << endl;
}
void WacomTabletApplication::Patient::printSocioEducativeLvl(std::ofstream& fout) {
	fout << "Socio Educative Level: "; 
	switch (this->socioEducativeLvl) {
		case socioEducativeLvls::NC1: fout << "NC1_Illiterate" << endl; break;
		case socioEducativeLvls::NC2: fout << "NC2_Reads_Writes_Counts" << endl; break;
		case socioEducativeLvls::NC3: fout << "NC3_Elementary_School" << endl; break;
		case socioEducativeLvls::NC4: fout << "NC4_CAP_BEP_Brevet" << endl; break;
		case socioEducativeLvls::NC5: fout << "NC5_Terminal_Class" << endl; break;
		case socioEducativeLvls::NC6: fout << "NC6_BAC" << endl; break;
		case socioEducativeLvls::NC7: fout << "NC7_University_Diploma" << endl; break;
		default: fout << "Unknown" << endl; 
	}
}
void WacomTabletApplication::Patient::printFrenchLvl(std::ofstream& fout) {
	fout << "French Level: ";
	switch (this->frenchLvl) {
	case frenchLvls::Elementary: fout << "Elementary" << endl; break;
	case frenchLvls::Intermediate: fout << "Intermediate" << endl; break;
	case frenchLvls::Advanced: fout << "Advanced" << endl; break;
	default: fout << "Unknown" << endl;
	}
}
void WacomTabletApplication::Patient::printWritingFrequency(std::ofstream& fout) {
	fout << "Writing Frequency: ";
	switch (this->writeFreq) {
	case writeFrequencies::Less_than_once_a_week: fout << "Less than once a week" << endl; break;
	case writeFrequencies::times_per_week_1_or_2: fout << "1-2 times per week" << endl; break;
	case writeFrequencies::times_per_week_3_or_5: fout << "3-5 times per week" << endl; break;
	case writeFrequencies::times_per_week_6_or_7: fout << "6-7 times per week" << endl; break;
	case writeFrequencies::everyday_several_times: fout << "Everyday, several times a day" << endl; break;
	default: fout << "Unknown" << endl;
	}
}
void WacomTabletApplication::Patient::printKnownAlphabets(std::ofstream& fout) {
	fout << "Alphabets: ";
	bool noAlphabets = !(writesLatin | writesArab | writesArmenian | writesChinese | writesCyrillic | writesDevanagari | writesEtiopic | writesGeorgian | writesHangul | writesGreek | writesHebrew | writesJapanese | writesSouthIndic | writesOthers);
	if (noAlphabets) { fout << "None"; }
	else {
		if (writesLatin) { fout << "Latin "; }
		if (writesArab) { fout << "Arab "; }
		if (writesArmenian) { fout << "Armenian ";  }
		if (writesChinese) { fout << "Chinese ";  }
		if (writesCyrillic) { fout << "Cyrilic "; }
		if (writesDevanagari) { fout << "Devanagari "; }
		if (writesEtiopic) { fout << "Etiopic "; }
		if (writesGeorgian) { fout << "Georgian "; }		
		if (writesGreek) { fout << "Grek "; }
		if (writesHangul) { fout << "Hangul "; }
		if (writesHebrew) { fout << "Hebrew "; }
		if (writesJapanese) { fout << "Japanise "; }
		if (writesSouthIndic) { fout << "SouthIndic "; }
		if (writesOthers) { fout << "Others "; }
	}
	fout << endl;
}
void WacomTabletApplication::Patient::printBirthDate(std::ofstream& fout) {
	//printed as DD/MM/YYYY
	fout << "Birth Date: ";
	fout << std::to_string(birthDate.tm_mday) << "/" << std::to_string(birthDate.tm_mon) << "/" << std::to_string(birthDate.tm_year) << endl;
}
void WacomTabletApplication::Patient::printNativeLanguage(std::ofstream& fout) {
	fout << "Native Language: " << nativeLanguage << endl;
}
void WacomTabletApplication::Patient::printPrincipalProfession(std::ofstream& fout) {
	fout << "Principal Profession: " << principalProfession << endl;
}
void WacomTabletApplication::Patient::printLastProfession(std::ofstream& fout) {
	fout << "Last Profession: " << lastProfession << endl;
}
void WacomTabletApplication::Patient::printRetirementInfo(std::ofstream& fout) {
	fout << "Retired: ";
	if (stillWorks) { fout << " No " << endl; }
	else fout << " Yes ( " << retirementAge << " Years )" << endl;
}
void WacomTabletApplication::Patient::printVisionProblemInfo(std::ofstream& fout) {
	fout << "Vision Problems: ";
	if (hasVisionProblem) { fout << " Yes ( " << detailVisionProblem << " )" << endl; }
	else fout << " No " << endl;
}
void WacomTabletApplication::Patient::printOtherComments_NewPatient(std::ofstream& fout) {
	fout << "Other Comments: ";
	if (otherComments_NewPatient != "" ) { fout << otherComments_NewPatient << endl; }
	else fout << " None" << endl;
}



void WacomTabletApplication::Patient::printMe(LPCTSTR path) {
	
	TCHAR newpath[260] = _T("");
	StringCchCat(newpath, 260, path);
	StringCchCat(newpath, 260, _T("\\Info.txt"));


	ofstream fout(newpath);

	printFirstName(fout);
	printLastName(fout);
	printAge(fout);
	printBirthDate(fout);
	printGender(fout);
	printHandedness(fout);
	printCivilState(fout);
	printNumChildren(fout);
	printSocioEducativeLvl(fout);
	printWritingFrequency(fout);
	printNativeLanguage(fout);
	printFrenchLvl(fout);
	printKnownAlphabets(fout);
	printPrincipalProfession(fout);
	printLastProfession(fout);
	printRetirementInfo(fout);
	printVisionProblemInfo(fout);
	printOtherComments_NewPatient(fout);

	fout.close();
}




void WacomTabletApplication::Patient::setFirstName(String^ input){
	msclr::interop::marshal_context context;
	this->firstName = context.marshal_as<std::string>(input);
}
void WacomTabletApplication::Patient::setLastName(String^ input) {
	msclr::interop::marshal_context context;
	this->lastName = context.marshal_as<std::string>(input);
}
void WacomTabletApplication::Patient::setAge(String^ input) { 
	this->age = int::Parse(input); 
}
void WacomTabletApplication::Patient::setBirthDate(System::DateTime input) {
	this->birthDate.tm_year = input.Year;
	this->birthDate.tm_mon = input.Month;
	this->birthDate.tm_mday = input.Day;
}
void WacomTabletApplication::Patient::setGender(genders input) { 
	this->gender = input; 
}
void WacomTabletApplication::Patient::setCivilState(civilStates input) {
	this->civilState = input;
}
void WacomTabletApplication::Patient::setNumChildren(String^ input) {
	this->numChildren = int::Parse(input);
}
void WacomTabletApplication::Patient::setHandedness(handedness input) { 
	this->hand = input; 
}
void WacomTabletApplication::Patient::setSocioEducativeLvl(socioEducativeLvls input) {
	this->socioEducativeLvl = input;
}
void WacomTabletApplication::Patient::Patient::setFrenchLvl(frenchLvls input) {
	this->frenchLvl = input;
}
void WacomTabletApplication::Patient::setWritesLatin(bool input){ 
	this->writesLatin = input;
}
void WacomTabletApplication::Patient::setWritesArab(bool input) { 
	this->writesArab = input; 
}
void WacomTabletApplication::Patient::setWritesArmenian(bool input) {
	this->writesArmenian = input;
}
void WacomTabletApplication::Patient::setWritesChinese(bool input) {
	this->writesChinese = input; 
}
void WacomTabletApplication::Patient::setWritesCyrillic(bool input) { 
	this->writesCyrillic = input; 
}
void WacomTabletApplication::Patient::setWritesDevanagari(bool input) {
	this->writesDevanagari = input;
}
void WacomTabletApplication::Patient::setWritesEtiopic(bool input) { 
	this->writesEtiopic = input; 
}
void WacomTabletApplication::Patient::setWritesGeorgian(bool input) { 
	this->writesGeorgian = input; 
}
void WacomTabletApplication::Patient::setWritesGreek(bool input) { 
	this->writesGreek = input; 
}
void WacomTabletApplication::Patient::setWritesHangul(bool input) { 
	this->writesHangul = input; 
}
void WacomTabletApplication::Patient::setWritesHebrew(bool input) { 
	this->writesHebrew = input; 
}
void WacomTabletApplication::Patient::setWritesJapanese(bool input) {
	this->writesJapanese = input; 
}
void WacomTabletApplication::Patient::setWritesSouthIndic(bool input) { 
	this->writesSouthIndic = input; 
}
void WacomTabletApplication::Patient::setWritesOthers(bool input) {
	this->writesOthers = input; 
}
void WacomTabletApplication::Patient::setWritingFrequency(writeFrequencies input){
	this->writeFreq = input;
}
void WacomTabletApplication::Patient::setNativeLanguage(String^ nativeLang,String^ appLanguage) {
	msclr::interop::marshal_context context;
	
	if (appLanguage != "English") {
		nativeLang = translateLanguageToEnglish(nativeLang, appLanguage);
	}
	this->nativeLanguage = context.marshal_as<std::string>(nativeLang);
}
void WacomTabletApplication::Patient::setPrincipalProfession(String^ profession, String^ appLanguage) {
	msclr::interop::marshal_context context;

	if (appLanguage != "English") {
		profession = translateProfessionToEnglish(profession, appLanguage);
	}
	this->principalProfession = context.marshal_as<std::string>(profession);
}
void WacomTabletApplication::Patient::setLastProfession(String^ profession, String^ appLanguage) {
	msclr::interop::marshal_context context;

	if (appLanguage != "English") {
		profession = translateProfessionToEnglish(profession, appLanguage);
	}
	this->lastProfession = context.marshal_as<std::string>(profession);
}
void WacomTabletApplication::Patient::setRetirementInfo(bool stillWorks, String^ retirementAge) {
	this->stillWorks = stillWorks;
	if (stillWorks) this->retirementAge = -1;
	else this->retirementAge = int::Parse(retirementAge);
}
void WacomTabletApplication::Patient::setVisionProblemInfo(bool hasProblem, String^ detailProblem) {
	msclr::interop::marshal_context context;
	this->hasVisionProblem = hasProblem;
	this->detailVisionProblem = context.marshal_as<std::string>(detailProblem);
}
void WacomTabletApplication::Patient::setOtherComments_NewPatient(String^ detailComment) {
	msclr::interop::marshal_context context;
	this->otherComments_NewPatient = context.marshal_as<std::string>(detailComment);
}

String^ WacomTabletApplication::Patient::translateLanguageToEnglish(String^ nativeLang, String^ appLanguage) {
	XmlTextReader^ reader = gcnew XmlTextReader("XML/strings_languages.xml");
	String^ fullAppLanguage = String::Concat(appLanguage, L"List");
	//Read the XML till reach the Language Part
	while (reader->Read() && ((reader->NodeType == XmlNodeType::Element && reader->Name != fullAppLanguage) || (reader->NodeType != XmlNodeType::Element)));
	//Check if reader is in the Language Part of the XML
	if (reader->NodeType == XmlNodeType::Element && reader->Name == fullAppLanguage) {
		//Read the whole Language Section Searching for the nativeLang
		while (reader->Read() && ((reader->NodeType == XmlNodeType::EndElement && reader->Name != fullAppLanguage) || (reader->NodeType != XmlNodeType::EndElement))) {
			//Check for each element of the List in the XML file and add them to the combobox
			if (reader->NodeType == XmlNodeType::Text && reader->Value == nativeLang) {
				while (reader->Read() && reader->NodeType != XmlNodeType::EndElement);
				//If Found the EndElement of my nativeLang => Search the same node in the English XML
				if (reader->NodeType == XmlNodeType::EndElement) { 
					pin_ptr<const wchar_t> str_search = PtrToStringChars(String::Concat(L"Root/EnglishList/" , reader->Name));
					return queryNode_lang(str_search);
				}
			}
		}
	}
	return "";
}

String^ WacomTabletApplication::Patient::translateProfessionToEnglish(String^ profession, String^ appLanguage) {
	XmlTextReader^ reader = gcnew XmlTextReader("XML/strings_professions.xml");
	String^ fullAppLanguage = String::Concat(appLanguage, L"List");
	//Read the XML till reach the Language Part
	while (reader->Read() && ((reader->NodeType == XmlNodeType::Element && reader->Name != fullAppLanguage) || (reader->NodeType != XmlNodeType::Element)));
	//Check if reader is in the Language Part of the XML
	if (reader->NodeType == XmlNodeType::Element && reader->Name == fullAppLanguage) {
		//Read the whole Language Section Searching for the nativeLang
		while (reader->Read() && ((reader->NodeType == XmlNodeType::EndElement && reader->Name != fullAppLanguage) || (reader->NodeType != XmlNodeType::EndElement))) {
			//Check for each element of the List in the XML file and add them to the combobox
			if (reader->NodeType == XmlNodeType::Text && reader->Value == profession) {
				while (reader->Read() && reader->NodeType != XmlNodeType::EndElement);
				//If Found the EndElement of my nativeLang => Search the same node in the English XML
				if (reader->NodeType == XmlNodeType::EndElement) {
					pin_ptr<const wchar_t> str_search = PtrToStringChars(String::Concat(L"Root/EnglishList/", reader->Name));
					return queryNode_prof(str_search);
				}
			}
		}
	}
	return "";
}

/*
istream & operator >> (istream & is, WacomTabletApplication::Patient & myPatient)
{
	is >> myPatient.firstName;
	is >> myPatient.lastName;
	return is;
}


ostream& operator << (ostream& os, const WacomTabletApplication::Patient& myPatient)
{
	os << myPatient.firstName << " " << myPatient.lastName ;
	//<< " " << (int) myPatient.civilState << " " << myPatient.firstName << " " << myPatient.firstName << " " << myPatient.firstName << " "
	return os;
}
*/