#include "Patient_LanguageInformation.h"
#include <ctime>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;
using namespace System::Xml;

#pragma managed

WacomTabletApplication::Patient_LanguageInformation::Patient_LanguageInformation() {}
WacomTabletApplication::Patient_LanguageInformation::Patient_LanguageInformation(int a) {}

void WacomTabletApplication::Patient_LanguageInformation::printFrenchLvl(std::ofstream& fout) {
	fout << "French Level Oral: ";
	switch (this->frenchLvlOral) {
	case frenchLvls::None: fout << "None" << endl; break;
	case frenchLvls::Elementary: fout << "Elementary" << endl; break;
	case frenchLvls::Intermediate: fout << "Intermediate" << endl; break;
	case frenchLvls::Advanced: fout << "Advanced" << endl; break;
	default: fout << "Missing" << endl;
	}
	fout << "French Level Read: ";
	switch (this->frenchLvlRead) {
	case frenchLvls::None: fout << "None" << endl; break;
	case frenchLvls::Elementary: fout << "Elementary" << endl; break;
	case frenchLvls::Intermediate: fout << "Intermediate" << endl; break;
	case frenchLvls::Advanced: fout << "Advanced" << endl; break;
	default: fout << "Missing" << endl;
	}
	fout << "French Level Written: ";
	switch (this->frenchLvlWritten) {
	case frenchLvls::None: fout << "None" << endl; break;
	case frenchLvls::Elementary: fout << "Elementary" << endl; break;
	case frenchLvls::Intermediate: fout << "Intermediate" << endl; break;
	case frenchLvls::Advanced: fout << "Advanced" << endl; break;
	default: fout << "Missing" << endl;
	}
}

void WacomTabletApplication::Patient_LanguageInformation::printArabeLvl(std::ofstream& fout) {
	fout << "Arabe Level Oral: ";
	switch (this->arabeLvlOral) {
	case frenchLvls::None: fout << "None" << endl; break;
	case frenchLvls::Elementary: fout << "Elementary" << endl; break;
	case frenchLvls::Intermediate: fout << "Intermediate" << endl; break;
	case frenchLvls::Advanced: fout << "Advanced" << endl; break;
	default: fout << "Missing" << endl;
	}
	fout << "Arabe Level Read: ";
	switch (this->arabeLvlRead) {
	case frenchLvls::None: fout << "None" << endl; break;
	case frenchLvls::Elementary: fout << "Elementary" << endl; break;
	case frenchLvls::Intermediate: fout << "Intermediate" << endl; break;
	case frenchLvls::Advanced: fout << "Advanced" << endl; break;
	default: fout << "Missing" << endl;
	}
	fout << "Arabe Level Written: ";
	switch (this->arabeLvlWritten) {
	case frenchLvls::None: fout << "None" << endl; break;
	case frenchLvls::Elementary: fout << "Elementary" << endl; break;
	case frenchLvls::Intermediate: fout << "Intermediate" << endl; break;
	case frenchLvls::Advanced: fout << "Advanced" << endl; break;
	default: fout << "Missing" << endl;
	}
}

void WacomTabletApplication::Patient_LanguageInformation::printBilingualismType(std::ofstream& fout) {
	fout << "Bilingualism Type: ";
	switch (this->bilingualism) {
	case bilingualismType::Missing: fout << "Missing" << endl; break;
	case bilingualismType::No: fout << "No" << endl; break;
	case bilingualismType::Yes_early: fout << "Yes_early" << endl; break;
	case bilingualismType::Yes_late: fout << "Yes_late" << endl; break;
	}
}

//void WacomTabletApplication::Patient_LanguageInformation::printWritingFrequency(std::ofstream& fout) {
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

void WacomTabletApplication::Patient_LanguageInformation::printKnownAlphabets(std::ofstream& fout) {
	fout << "Alphabets: ";
	bool noAlphabets = !(writesLatin | writesArab | writesArmenian | writesChinese | writesCyrillic | writesDevanagari | writesEtiopic | writesGeorgian | writesHangul | writesGreek | writesHebrew | writesJapanese | writesSouthIndic | writesOthers);
	if (noAlphabets) { fout << "None"; }
	else {
		if (writesLatin) { fout << "Latin "; }
		if (writesArab) { fout << "Arab "; }
		if (writesArmenian) { fout << "Armenian "; }
		if (writesChinese) { fout << "Chinese "; }
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

void WacomTabletApplication::Patient_LanguageInformation::printNativeLanguage(std::ofstream& fout) {
	fout << "Native Language: " << nativeLanguage << endl;
}

void WacomTabletApplication::Patient_LanguageInformation::printMe(ofstream& fout) {

	//printWritingFrequency(fout);
	printNativeLanguage(fout);
	printBilingualismType(fout);
	printFrenchLvl(fout);
	printArabeLvl(fout);
	printKnownAlphabets(fout);
}

void WacomTabletApplication::Patient_LanguageInformation::setBilingualismType(bilingualismType input) {
	this->bilingualism = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setFrenchLvlOral(frenchLvls input) {
	this->frenchLvlOral = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setFrenchLvlRead(frenchLvls input) {
	this->frenchLvlRead = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setFrenchLvlWritten(frenchLvls input) {
	this->frenchLvlWritten = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setArabeLvlOral(frenchLvls input) {
	this->arabeLvlOral = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setArabeLvlRead(frenchLvls input) {
	this->arabeLvlRead = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setArabeLvlWritten(frenchLvls input) {
	this->arabeLvlWritten = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesLatin(bool input) {
	this->writesLatin = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesArab(bool input) {
	this->writesArab = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesArmenian(bool input) {
	this->writesArmenian = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesChinese(bool input) {
	this->writesChinese = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesCyrillic(bool input) {
	this->writesCyrillic = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesDevanagari(bool input) {
	this->writesDevanagari = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesEtiopic(bool input) {
	this->writesEtiopic = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesGeorgian(bool input) {
	this->writesGeorgian = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesGreek(bool input) {
	this->writesGreek = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesHangul(bool input) {
	this->writesHangul = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesHebrew(bool input) {
	this->writesHebrew = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesJapanese(bool input) {
	this->writesJapanese = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesSouthIndic(bool input) {
	this->writesSouthIndic = input;
}

void WacomTabletApplication::Patient_LanguageInformation::setWritesOthers(bool input) {
	this->writesOthers = input;
}

//void WacomTabletApplication::Patient_LanguageInformation::setWritingFrequency(writeFrequencies input) {
//	this->writeFreq = input;
//}

void WacomTabletApplication::Patient_LanguageInformation::setNativeLanguage(String^ nativeLang, String^ appLanguage) {
	msclr::interop::marshal_context context;

	if (appLanguage != "English") {
		nativeLang = translateLanguageToEnglish(nativeLang, appLanguage);
	}
	this->nativeLanguage = context.marshal_as<std::string>(nativeLang);
}

String^ WacomTabletApplication::Patient_LanguageInformation::translateLanguageToEnglish(String^ nativeLang, String^ appLanguage) {
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
					pin_ptr<const wchar_t> str_search = PtrToStringChars(String::Concat(L"Root/EnglishList/", reader->Name));
					return queryNode_lang(str_search);
				}
			}
		}
	}
	return "";
}