#include "Patient_SocialSituation.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;
using namespace System::Xml;

#pragma managed

WacomTabletApplication::Patient_SocialSituation::Patient_SocialSituation() {}

void WacomTabletApplication::Patient_SocialSituation::printCivilState(std::ofstream& fout) {
    fout << "Civil State: ";
    switch (this->civilState) {
    case civilStates::Single: fout << "Single" << endl; break;
    case civilStates::Married: fout << "Married" << endl; break;
    case civilStates::Widow: fout << "Widow" << endl; break;
    case civilStates::Divorced: fout << "Divorced" << endl; break;
    default: fout << "Missing" << endl;
    }
}

void WacomTabletApplication::Patient_SocialSituation::printNumChildren(std::ofstream& fout) {
    fout << "Number of Children: " << numChildren << endl;
}

void WacomTabletApplication::Patient_SocialSituation::printSocioEducativeLvl(std::ofstream& fout) {
    fout << "Socio Educative Level: ";
    switch (this->socioEducativeLvl) {
    case socioEducativeLvls::NC1: fout << "NC1_Illiterate" << endl; break;
    case socioEducativeLvls::NC2: fout << "NC2_Reads_Writes_Counts" << endl; break;
    case socioEducativeLvls::NC3: fout << "NC3_Elementary_School" << endl; break;
    case socioEducativeLvls::NC4: fout << "NC4_CAP_BEP_Brevet" << endl; break;
    case socioEducativeLvls::NC5: fout << "NC5_Terminal_Class" << endl; break;
    case socioEducativeLvls::NC6: fout << "NC6_BAC" << endl; break;
    case socioEducativeLvls::NC7: fout << "NC7_University_Diploma" << endl; break;
    default: fout << "Missing" << endl;
    }
}

void WacomTabletApplication::Patient_SocialSituation::printPrincipalProfession(std::ofstream& fout) {
	fout << "Principal Profession: " << principalProfession << endl;
}

void WacomTabletApplication::Patient_SocialSituation::printLastProfession(std::ofstream& fout) {
	fout << "Last Profession: " << lastProfession << endl;
}

void WacomTabletApplication::Patient_SocialSituation::printRetirementInfo(std::ofstream& fout) {
	fout << "Retired: ";
	if (stillWorks) { fout << " No\nAge of Retirement: None" << endl; }
	else fout << " Yes\nAge of Retirement: " << this->retirementAge << endl;
}

void WacomTabletApplication::Patient_SocialSituation::printWritingFrequency(std::ofstream& fout) {
	fout << "Writing Frequency: ";
	switch (this->writeFreq) {
	case writeFrequencies::Less_than_once_a_week: fout << "Less than once a week" << endl; break;
	case writeFrequencies::times_per_week_1_or_2: fout << "1-2 times per week" << endl; break;
	case writeFrequencies::times_per_week_3_or_5: fout << "3-5 times per week" << endl; break;
	case writeFrequencies::times_per_week_6_or_7: fout << "6-7 times per week" << endl; break;
	case writeFrequencies::everyday_several_times: fout << "Everyday, several times a day" << endl; break;
	default: fout << "Missing" << endl;
	}
}

void WacomTabletApplication::Patient_SocialSituation::printLivesInHouse(std::ofstream& fout) {
    fout << "Lives In House: ";
    switch (this->livesInHouse) {
    case extended_bool::True: fout << "Yes"; break;
    case extended_bool::False: fout << "No"; break;
    default: fout << "Missing"; break;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_SocialSituation::printGoesOutOfHomeRegularly(std::ofstream& fout) {
    fout << "Goes Out of Home Regularly: ";
    switch (this->goesOutOfHomeRegularly) {
    case goesOutOfHomeType::Yes_alone: fout << "Yes_alone"; break;
    case goesOutOfHomeType::Yes_accompanied: fout << "Yes_accompanied"; break;
    case goesOutOfHomeType::No: fout << "No"; break;
    default: fout << "Missing";
    }
    fout << endl;
}

//void WacomTabletApplication::Patient_SocialSituation::printExtendedBool(ofstream& fout, extended_bool input) {
//    if (input == extended_bool::True) fout << "Yes";
//    else if (input == extended_bool::False) fout << "No";
//    else fout << "Missing";
//    fout << endl;
//}

void WacomTabletApplication::Patient_SocialSituation::printUseWalkingTools(ofstream& fout) {
    fout << "Use Walking Tools: ";
    printExtendedBool(fout, this->useWalkingTools);
    fout << "Use Walking Tools In House: ";
    printExtendedBool(fout, this->useWalkingToolsInHouse);
    fout << "Use Walking Tools Outside: ";
    printExtendedBool(fout, this->useWalkingToolsOutside);
    fout << "Use Cane: ";
    printExtendedBool(fout, this->useCane);
    fout << "Use Walker: ";
    printExtendedBool(fout, this->useWalker);
    fout << "Use Wheelchair: ";
    printExtendedBool(fout, this->useWheelchair);
}

void WacomTabletApplication::Patient_SocialSituation::printParticipationOtherProtocols(ofstream& fout) {

    fout << "LEOPOLD: ";
    if (participationLEOPOLD) fout << "Yes"; else fout << "No";
    fout << endl << "BALTAZAR: ";
    if (participationBALTAZAR) fout << "Yes"; else fout << "No";
    fout << endl << "MEMENTO: ";
    if (participationMEMENTO) fout << "Yes"; else fout << "No";
    fout << endl;
}

void WacomTabletApplication::Patient_SocialSituation::printMe(ofstream& fout) {

    printCivilState(fout);
    printNumChildren(fout);
    printSocioEducativeLvl(fout);
    printWritingFrequency(fout);
    printPrincipalProfession(fout);
    printLastProfession(fout);
    printRetirementInfo(fout);
    printLivesInHouse(fout);
    printGoesOutOfHomeRegularly(fout);
    printUseWalkingTools(fout);
    printParticipationOtherProtocols(fout);
}

void WacomTabletApplication::Patient_SocialSituation::setCivilState(civilStates input) {
    this->civilState = input;
}

void WacomTabletApplication::Patient_SocialSituation::setNumChildren(String^ input) {
    this->numChildren = int::Parse(input);
}

void WacomTabletApplication::Patient_SocialSituation::setSocioEducativeLvl(socioEducativeLvls input) {
    this->socioEducativeLvl = input;
}

void WacomTabletApplication::Patient_SocialSituation::setWritingFrequency(writeFrequencies input) {
	this->writeFreq = input;
}

void WacomTabletApplication::Patient_SocialSituation::setPrincipalProfession(String^ profession, String^ appLanguage) {
	msclr::interop::marshal_context context;

	if (appLanguage != "English") {
		profession = translateProfessionToEnglish(profession, appLanguage);
	}
	this->principalProfession = context.marshal_as<std::string>(profession);
}

void WacomTabletApplication::Patient_SocialSituation::setLastProfession(String^ profession, String^ appLanguage) {
	msclr::interop::marshal_context context;

	if (appLanguage != "English") {
		profession = translateProfessionToEnglish(profession, appLanguage);
	}
	this->lastProfession = context.marshal_as<std::string>(profession);
}

void WacomTabletApplication::Patient_SocialSituation::setRetirementInfo(bool stillWorks, String^ retirementAge) {
	this->stillWorks = stillWorks;
	if (stillWorks) this->retirementAge = -1;
	else this->retirementAge = int::Parse(retirementAge);
}

void WacomTabletApplication::Patient_SocialSituation::setLivesInHouse(extended_bool input) {
    this->livesInHouse = input;
}

void WacomTabletApplication::Patient_SocialSituation::setGoesOutOfHomeRegularly(goesOutOfHomeType input) {
    this->goesOutOfHomeRegularly = input;
}

void WacomTabletApplication::Patient_SocialSituation::setUseWalkingTools(extended_bool input) {
    this->useWalkingTools = input;
}

void WacomTabletApplication::Patient_SocialSituation::setUseWalkingToolsInHouse(extended_bool input) {
    this->useWalkingToolsInHouse = input;
}

void WacomTabletApplication::Patient_SocialSituation::setUseWalkingToolsOutside(extended_bool input) {
    this->useWalkingToolsOutside = input;
}

void WacomTabletApplication::Patient_SocialSituation::setUseCane(extended_bool input) {
    this->useCane = input;
}

void WacomTabletApplication::Patient_SocialSituation::setUseWalker(extended_bool input) {
    this->useWalker = input;
}

void WacomTabletApplication::Patient_SocialSituation::setUseWheelchair(extended_bool input) {
    this->useWheelchair = input;
}

void WacomTabletApplication::Patient_SocialSituation::setParticipationLEOPOLD(bool input) {
    this->participationLEOPOLD = input;
}

void WacomTabletApplication::Patient_SocialSituation::setParticipationBALTAZAR(bool input) {
    this->participationBALTAZAR = input;
}

void WacomTabletApplication::Patient_SocialSituation::setParticipationMEMENTO(bool input) {
    this->participationMEMENTO = input;
}

String^ WacomTabletApplication::Patient_SocialSituation::translateProfessionToEnglish(String^ profession, String^ appLanguage) {
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