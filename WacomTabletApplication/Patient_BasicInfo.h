#pragma once

#include <cstddef> // NULL
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string.h>
#include <strsafe.h>
#include <msclr\marshal_cppstd.h>
#include "Dependencies/queryNodes.h"

namespace WacomTabletApplication {

	// Namespaces
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	// Enums
	enum class genders { Male, Female };
	enum class handedness { Right, Left, Forced_Right, Right_Ambidexter, Left_Ambidexter };
	// enum class writeFrequencies { Less_than_once_a_week, times_per_week_1_or_2, times_per_week_3_or_5, times_per_week_6_or_7, everyday_several_times, Unknown };
	//enum class socioEducativeLvls { NC1, NC2, NC3, NC4, NC5, NC6, NC7, Unknown };
	// enum class frenchLvls { Elementary, Intermediate, Advanced, Unknown };
	//enum class civilStates { Married, Divorced, Single, Widow };


	class Patient_BasicInfo {

	private:

		//ID Variables
		std::string ID;
		
		//Civil State Variables
		//civilStates civilState;
		//short int numChildren;

		//Gender Variables
		genders gender;

		//Age Variables
		tm birthDate;
		short int age;

		//Writing Variables
		handedness hand;
		//writeFrequencies writeFreq;

		//Socio Educative Variables
		//socioEducativeLvls socioEducativeLvl;

		//Language Variables
		//std::string nativeLanguage;
		//frenchLvls frenchLvl;
		//bool writesLatin;
		//bool writesArab;
		//bool writesArmenian;
		//bool writesChinese;
		//bool writesCyrillic;
		//bool writesDevanagari;
		//bool writesEtiopic;
		//bool writesGeorgian;
		//bool writesGreek;
		//bool writesHangul;
		//bool writesHebrew;
		//bool writesJapanese;
		//bool writesSouthIndic;
		//bool writesOthers;

		////Professional Variables
		//std::string principalProfession;
		//std::string lastProfession;
		//bool stillWorks;
		//short int retirementAge;

		//Vision Problem Variables
		bool hasVisionProblem;
		std::string detailVisionProblem;

		// Arthrosis Problem Variables
		bool hasArthrosis;
		std::string detailArthrosis;

		//Other Comments Variables
		std::string otherComments_NewPatient;


	public: 

		// Constructors
		Patient_BasicInfo::Patient_BasicInfo();
		Patient_BasicInfo::Patient_BasicInfo(int a);

		// Methods
        void Patient_BasicInfo::fillMe(FILE* fp);
		//void Patient_BasicInfo::fillInfo(NewPatient^ form);
        String^ Patient_BasicInfo::getID();
        System::DateTime Patient_BasicInfo::getBirthdayDate();
        genders Patient_BasicInfo::getGender();
        handedness Patient_BasicInfo::getHandedness();
        bool Patient_BasicInfo::getVisionProblem();
        String^ Patient_BasicInfo::getVisionProblemDetail();
        bool Patient_BasicInfo::getArthrosisProblem();
        String^ Patient_BasicInfo::getArthrosisProblemDetail();
        String^ Patient_BasicInfo::getOtherComment_NewPatient();

		void Patient_BasicInfo::printID(std::ofstream& fout);
		void Patient_BasicInfo::printAge(std::ofstream& fout);
		void Patient_BasicInfo::printGender(std::ofstream& fout);
		//void Patient_BasicInfo::printCivilState(std::ofstream& fout);
		//void Patient_BasicInfo::printNumChildren(std::ofstream& fout);
		void Patient_BasicInfo::printHandedness(std::ofstream& fout);
		//void Patient_BasicInfo::printSocioEducativeLvl(std::ofstream& fout);

		/*
		void Patient_BasicInfo::printFrenchLvl(std::ofstream& fout);
		void Patient_BasicInfo::printWritingFrequency(std::ofstream& fout);
		void Patient_BasicInfo::printKnownAlphabets(std::ofstream& fout);
		*/
		void Patient_BasicInfo::printBirthDate(std::ofstream& fout);
		/*
		void Patient_BasicInfo::printNativeLanguage(std::ofstream& fout);
		void Patient_BasicInfo::printPrincipalProfession(std::ofstream& fout);
		void Patient_BasicInfo::printLastProfession(std::ofstream& fout);
		void Patient_BasicInfo::printRetirementInfo(std::ofstream& fout);
		*/
		void Patient_BasicInfo::printVisionProblemInfo(std::ofstream& fout);
		void Patient_BasicInfo::printArthrosisProblemInfo(std::ofstream& fout);
		void Patient_BasicInfo::printOtherComments_NewPatient(std::ofstream& fout);

		void Patient_BasicInfo::printMe(ofstream& fout);

		void Patient_BasicInfo::setID(String^ input);
		//void Patient_BasicInfo::setAge(String^ input);
		void Patient_BasicInfo::setAge(int input);
		void Patient_BasicInfo::setBirthDate(System::DateTime input);
		void Patient_BasicInfo::setGender(genders input);
		//void Patient_BasicInfo::setCivilState(civilStates input);
		//void Patient_BasicInfo::setNumChildren(String^ input);
		void Patient_BasicInfo::setHandedness(handedness input);
		//void Patient_BasicInfo::setSocioEducativeLvl(socioEducativeLvls input);
		/*void Patient_BasicInfo::setWritingFrequency(writeFrequencies input);
		void Patient_BasicInfo::setFrenchLvl(frenchLvls input);
		void Patient_BasicInfo::setWritesLatin(bool input);
		void Patient_BasicInfo::setWritesArab(bool input);
		void Patient_BasicInfo::setWritesArmenian(bool input);
		void Patient_BasicInfo::setWritesChinese(bool input);
		void Patient_BasicInfo::setWritesCyrillic(bool input);
		void Patient_BasicInfo::setWritesDevanagari(bool input);
		void Patient_BasicInfo::setWritesEtiopic(bool input);
		void Patient_BasicInfo::setWritesGeorgian(bool input);
		void Patient_BasicInfo::setWritesGreek(bool input);
		void Patient_BasicInfo::setWritesHangul(bool input);
		void Patient_BasicInfo::setWritesHebrew(bool input);
		void Patient_BasicInfo::setWritesJapanese(bool input);
		void Patient_BasicInfo::setWritesSouthIndic(bool input);
		void Patient_BasicInfo::setWritesOthers(bool input);
		void Patient_BasicInfo::setNativeLanguage(String^ nativeLang, String^ appLanguage);
		void Patient_BasicInfo::setPrincipalProfession(String^ profession, String^ appLanguage);
		void Patient_BasicInfo::setLastProfession(String^ profession, String^ appLanguage);
		void Patient_BasicInfo::setRetirementInfo(bool stillWorks, String^ retirementAge);*/
		void Patient_BasicInfo::setVisionProblemInfo(bool hasProblem, String^ detailProblem);
		void Patient_BasicInfo::setArthrosisProblemInfo(bool hasProblem, String^ detailProblem);
		void Patient_BasicInfo::setOtherComments_NewPatient(String^ detailComment);

	//private: String^ WacomTabletApplication::Patient_BasicInfo::translateLanguageToEnglish(String^ nativeLang, String^ appLanguage);
	//private: String^ WacomTabletApplication::Patient_BasicInfo::translateProfessionToEnglish(String^ nativeLang, String^ appLanguage);
	};
}
