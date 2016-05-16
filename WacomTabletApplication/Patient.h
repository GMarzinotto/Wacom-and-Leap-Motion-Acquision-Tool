#pragma once

#include <cstddef> // NULL
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <strsafe.h>

/*
#include <boost\archive\tmpdir.hpp>

#include <boost\archive\text_iarchive.hpp>
#include <boost\archive\text_oarchive.hpp>

#include <boost\serialization\base_object.hpp>
#include <boost\serialization\utility.hpp>
#include <boost\serialization\list.hpp>
#include <boost\serialization\assume_abstract.hpp>
*/

#include <msclr\marshal_cppstd.h>
#include "Dependencies/queryNodes.h"

namespace WacomTabletApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	enum class genders { Male, Female };
	enum class handedness { Right, Left, Forced_Right, Right_Ambidexter, Left_Ambidexter };
	enum class writeFrequencies { Less_than_once_a_week, times_per_week_1_or_2, times_per_week_3_or_5, times_per_week_6_or_7, everyday_several_times, Unknown };
	enum class socioEducativeLvls { NC1, NC2, NC3, NC4, NC5, NC6, NC7, Unknown };
	enum class frenchLvls { Elementary, Intermediate, Advanced, Unknown	};
	enum class civilStates {Married, Divorced, Single, Widow};



	class Patient {

	public:
		
		//Name Variables
		std::string firstName;
		std::string lastName;

		//Civil State Variables
		civilStates civilState;
		short int numChildren;

		//Gender Variables
		genders gender;

		//Age Variables
		tm birthDate;
		short int age;

		//Writing Variables
		handedness hand;
		writeFrequencies writeFreq;

		//Socio Educative Variables
		socioEducativeLvls socioEducativeLvl;
		
		//Language Variables
		std::string nativeLanguage;
		frenchLvls frenchLvl;
		bool writesLatin;
		bool writesArab;
		bool writesArmenian;
		bool writesChinese;
		bool writesCyrillic;
		bool writesDevanagari;
		bool writesEtiopic;
		bool writesGeorgian;
		bool writesGreek;
		bool writesHangul;
		bool writesHebrew;
		bool writesJapanese;
		bool writesSouthIndic;
		bool writesOthers;

		//Professional Variables
		std::string principalProfession;
		std::string lastProfession;
		bool stillWorks;
		short int retirementAge;

		//Vision Problem Variables
		bool hasVisionProblem;
		std::string detailVisionProblem;

		//Other Comments Variables
		std::string otherComments_NewPatient;


	public: Patient::Patient();
			Patient::Patient(int a);

	//friend	istream& Patient::operator >> (istream& is, WacomTabletApplication::Patient& myPatient);
	//friend	ostream& Patient::operator << (ostream& os, WacomTabletApplication::Patient& myPatient);

	public:
		void Patient::printFirstName(std::ofstream& fout);
		void Patient::printLastName(std::ofstream& fout);
		void Patient::printAge(std::ofstream& fout);
		void Patient::printGender(std::ofstream& fout);
		void Patient::printCivilState(std::ofstream& fout);
		void Patient::printNumChildren(std::ofstream& fout);
		void Patient::printHandedness(std::ofstream& fout);
		void Patient::printSocioEducativeLvl(std::ofstream& fout);
		void Patient::printFrenchLvl(std::ofstream& fout);
		void Patient::printWritingFrequency(std::ofstream& fout);
		void Patient::printKnownAlphabets(std::ofstream& fout);
		void Patient::printBirthDate(std::ofstream& fout);
		void Patient::printNativeLanguage(std::ofstream& fout);
		void Patient::printPrincipalProfession(std::ofstream& fout);
		void Patient::printLastProfession(std::ofstream& fout);
		void Patient::printRetirementInfo(std::ofstream& fout);
		void Patient::printVisionProblemInfo(std::ofstream& fout);
		void Patient::printOtherComments_NewPatient(std::ofstream& fout);

		void Patient::printMe(LPCTSTR path);

		void Patient::setFirstName(String^ input);
		void Patient::setLastName(String^ input);
		void Patient::setAge(String^ input);
		void Patient::setBirthDate(System::DateTime input);
		void Patient::setGender(genders input);
		void Patient::setCivilState(civilStates input);
		void Patient::setNumChildren(String^ input);
		void Patient::setHandedness(handedness input);
		void Patient::setSocioEducativeLvl(socioEducativeLvls input);
		void Patient::setWritingFrequency(writeFrequencies input);
		void Patient::setFrenchLvl(frenchLvls input);
		void Patient::setWritesLatin(bool input);
		void Patient::setWritesArab(bool input);
		void Patient::setWritesArmenian(bool input);
		void Patient::setWritesChinese(bool input);
		void Patient::setWritesCyrillic(bool input);
		void Patient::setWritesDevanagari(bool input);
		void Patient::setWritesEtiopic(bool input);
		void Patient::setWritesGeorgian(bool input);
		void Patient::setWritesGreek(bool input);
		void Patient::setWritesHangul(bool input);
		void Patient::setWritesHebrew(bool input);
		void Patient::setWritesJapanese(bool input);
		void Patient::setWritesSouthIndic(bool input);
		void Patient::setWritesOthers(bool input);
		void Patient::setNativeLanguage(String^ nativeLang, String^ appLanguage);
		void Patient::setPrincipalProfession(String^ profession, String^ appLanguage);
		void Patient::setLastProfession(String^ profession, String^ appLanguage);
		void Patient::setRetirementInfo(bool stillWorks, String^ retirementAge);
		void Patient::setVisionProblemInfo(bool hasProblem, String^ detailProblem);
		void Patient::setOtherComments_NewPatient(String^ detailComment);

	private: String^ WacomTabletApplication::Patient::translateLanguageToEnglish(String^ nativeLang, String^ appLanguage);
	private: String^ WacomTabletApplication::Patient::translateProfessionToEnglish(String^ nativeLang, String^ appLanguage);



	};

	

}