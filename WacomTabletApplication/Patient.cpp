#include "Patient.h"
#include <ctime>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;
using namespace System::Xml;

#pragma managed




WacomTabletApplication::Patient::Patient() {

	this->basicInfo = Patient_BasicInfo();
}

//WacomTabletApplication::Patient::Patient(int a) {
//
//	this->basicInfo = Patient_BasicInfo();
//}


//void WacomTabletApplication::Patient::printFirstName(std::ofstream& fout) {
//	fout << "Firstname: " << this->firstName << endl;
//}
//void WacomTabletApplication::Patient::printLastName(std::ofstream& fout) {
//	fout << "Lastname: " << this->lastName << endl;
//}
//void WacomTabletApplication::Patient::printAge(std::ofstream& fout) {
//	fout << "Age: " << this->age << endl;
//}
//void WacomTabletApplication::Patient::printGender(std::ofstream& fout) {
//	fout << "Gender: ";
//	if (gender == genders::Male) fout << "Male" << endl; 
//	else fout << "Female" << endl;
//}
//void WacomTabletApplication::Patient::printHandedness(std::ofstream& fout) {
//	fout << "Hand: ";
//	if (hand == handedness::Left) fout << "Left"; 
//	else if (hand == handedness::Right) fout << "Right";
//		else if (hand == handedness::Forced_Right) fout << "Forced_Right";
//			else if (hand == handedness::Left_Ambidexter) fout << "Left_Ambidexter";
//				else if (hand == handedness::Right_Ambidexter) fout << "Right_Ambidexter";
//	fout << endl;
//}
//void WacomTabletApplication::Patient::printCivilState(std::ofstream& fout) {
//	fout << "Civil State: ";
//	switch (this->civilState) {
//	case civilStates::Single: fout << "Single" << endl; break;
//	case civilStates::Married: fout << "Married" << endl; break;
//	case civilStates::Widow: fout << "Widow" << endl; break;
//	case civilStates::Divorced: fout << "Divorced" << endl; break;
//	default: fout << "Unknown" << endl;
//	}
//}
//void WacomTabletApplication::Patient::printNumChildren(std::ofstream& fout) {
//	fout << "Number of Children: " << numChildren << endl;
//}
//void WacomTabletApplication::Patient::printSocioEducativeLvl(std::ofstream& fout) {
//	fout << "Socio Educative Level: "; 
//	switch (this->socioEducativeLvl) {
//		case socioEducativeLvls::NC1: fout << "NC1_Illiterate" << endl; break;
//		case socioEducativeLvls::NC2: fout << "NC2_Reads_Writes_Counts" << endl; break;
//		case socioEducativeLvls::NC3: fout << "NC3_Elementary_School" << endl; break;
//		case socioEducativeLvls::NC4: fout << "NC4_CAP_BEP_Brevet" << endl; break;
//		case socioEducativeLvls::NC5: fout << "NC5_Terminal_Class" << endl; break;
//		case socioEducativeLvls::NC6: fout << "NC6_BAC" << endl; break;
//		case socioEducativeLvls::NC7: fout << "NC7_University_Diploma" << endl; break;
//		default: fout << "Unknown" << endl; 
//	}
//}
//void WacomTabletApplication::Patient::printFrenchLvl(std::ofstream& fout) {
//	fout << "French Level: ";
//	switch (this->frenchLvl) {
//	case frenchLvls::Elementary: fout << "Elementary" << endl; break;
//	case frenchLvls::Intermediate: fout << "Intermediate" << endl; break;
//	case frenchLvls::Advanced: fout << "Advanced" << endl; break;
//	default: fout << "Unknown" << endl;
//	}
//}
//void WacomTabletApplication::Patient::printWritingFrequency(std::ofstream& fout) {
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
//void WacomTabletApplication::Patient::printKnownAlphabets(std::ofstream& fout) {
//	fout << "Alphabets: ";
//	bool noAlphabets = !(writesLatin | writesArab | writesArmenian | writesChinese | writesCyrillic | writesDevanagari | writesEtiopic | writesGeorgian | writesHangul | writesGreek | writesHebrew | writesJapanese | writesSouthIndic | writesOthers);
//	if (noAlphabets) { fout << "None"; }
//	else {
//		if (writesLatin) { fout << "Latin "; }
//		if (writesArab) { fout << "Arab "; }
//		if (writesArmenian) { fout << "Armenian ";  }
//		if (writesChinese) { fout << "Chinese ";  }
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
//void WacomTabletApplication::Patient::printBirthDate(std::ofstream& fout) {
//	//printed as DD/MM/YYYY
//	fout << "Birth Date: ";
//	fout << std::to_string(birthDate.tm_mday) << "/" << std::to_string(birthDate.tm_mon) << "/" << std::to_string(birthDate.tm_year) << endl;
//}
//void WacomTabletApplication::Patient::printNativeLanguage(std::ofstream& fout) {
//	fout << "Native Language: " << nativeLanguage << endl;
//}
//void WacomTabletApplication::Patient::printPrincipalProfession(std::ofstream& fout) {
//	fout << "Principal Profession: " << principalProfession << endl;
//}
//void WacomTabletApplication::Patient::printLastProfession(std::ofstream& fout) {
//	fout << "Last Profession: " << lastProfession << endl;
//}
//void WacomTabletApplication::Patient::printRetirementInfo(std::ofstream& fout) {
//	fout << "Retired: ";
//	if (stillWorks) { fout << " No " << endl; }
//	else fout << " Yes ( " << retirementAge << " Years )" << endl;
//}
//void WacomTabletApplication::Patient::printVisionProblemInfo(std::ofstream& fout) {
//	fout << "Vision Problems: ";
//	if (hasVisionProblem) { fout << " Yes ( " << detailVisionProblem << " )" << endl; }
//	else fout << " No " << endl;
//}
//void WacomTabletApplication::Patient::printOtherComments_NewPatient(std::ofstream& fout) {
//	fout << "Other Comments: ";
//	if (otherComments_NewPatient != "" ) { fout << otherComments_NewPatient << endl; }
//	else fout << " None" << endl;
//}

void WacomTabletApplication::Patient::fillMe(const char* path) {
    
    FILE* fp = fopen(path, "r");
    this->basicInfo.fillMe(fp);
    fclose(fp);
}

void WacomTabletApplication::Patient::printMe(LPCTSTR path) {
	
	TCHAR newpath[260] = _T("");
	StringCchCat(newpath, 260, path);
	StringCchCat(newpath, 260, _T("\\Info.txt"));


	ofstream fout(newpath);
	this->basicInfo.printMe(fout);
	this->languageInformation.printMe(fout);
    this->socialSituation.printMe(fout);
    this->medicalHistory.printMe(fout);
    this->otherAntecedents.printMe(fout);
    this->riskFactor.printMe(fout);
    this->treatments.printMe(fout);
    this->neuropsychologicalAssessment.printMe(fout);
    this->bilanNeuropsychologic.printMe(fout);
    this->cognitiveDiagnosis.printMe(fout);
    this->neurologicHistory.printMe(fout);
    this->psychiatricHistory.printMe(fout);
    this->rheumatologicHistory.printMe(fout);
    this->dataM12.printMe(fout);
	fout.close();
}