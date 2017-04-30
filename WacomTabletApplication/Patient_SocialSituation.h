#pragma once

//#include <cstddef> // NULL
//#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <strsafe.h>
#include <msclr\marshal_cppstd.h>
#include "Dependencies/queryNodes.h"
#include "extended_bool.h"

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
    enum class writeFrequencies { Missing, Less_than_once_a_week, times_per_week_1_or_2, times_per_week_3_or_5, times_per_week_6_or_7, everyday_several_times };
    enum class socioEducativeLvls { NC1, NC2, NC3, NC4, NC5, NC6, NC7, Missing };
    enum class civilStates { Missing, Married, Divorced, Single, Widow };
    enum class goesOutOfHomeType { Yes_alone, Yes_accompanied, No, Missing };
    
    class Patient_SocialSituation {

    private:
        // Civil State Variables
        civilStates civilState = civilStates::Missing;
        short int numChildren = 0;

        // Writing Frequency
        writeFrequencies writeFreq = writeFrequencies::Missing;

        //Socio Educative Variables
        socioEducativeLvls socioEducativeLvl = socioEducativeLvls::Missing;

        //Professional Variables
        std::string principalProfession;
        std::string lastProfession;
        bool stillWorks = true;
        short int retirementAge = 0;

        // Social Evaluation
        extended_bool livesInHouse = extended_bool::Missing;
        goesOutOfHomeType goesOutOfHomeRegularly = goesOutOfHomeType::Missing;

        // Use of walking tools
        extended_bool useWalkingTools;
        extended_bool useWalkingToolsInHouse;
        extended_bool useWalkingToolsOutside;
        extended_bool useCane;
        extended_bool useWalker;
        extended_bool useWheelchair;

        // Other protocols
        bool participationLEOPOLD = false;
        bool participationBALTAZAR = false;
        bool participationMEMENTO = false;

    public:
        // Constructors
        Patient_SocialSituation::Patient_SocialSituation();

        // Methods
        void Patient_SocialSituation::printCivilState(std::ofstream& fout);
        void Patient_SocialSituation::printNumChildren(std::ofstream& fout);
        void Patient_SocialSituation::printSocioEducativeLvl(std::ofstream& fout);
        void Patient_SocialSituation::printWritingFrequency(std::ofstream& fout);
        void Patient_SocialSituation::printPrincipalProfession(std::ofstream& fout);
        void Patient_SocialSituation::printLastProfession(std::ofstream& fout);
        void Patient_SocialSituation::printRetirementInfo(std::ofstream& fout);
        void Patient_SocialSituation::printLivesInHouse(std::ofstream& fout);
        void Patient_SocialSituation::printGoesOutOfHomeRegularly(std::ofstream& fout);
 /*       void printExtendedBool(ofstream & fout, extended_bool input);*/
        void Patient_SocialSituation::printUseWalkingTools(std::ofstream& fout);
        void Patient_SocialSituation::printParticipationOtherProtocols(std::ofstream& fout);

        void Patient_SocialSituation::printMe(ofstream& fout);

        void Patient_SocialSituation::setCivilState(civilStates input);
        void Patient_SocialSituation::setNumChildren(String^ input);
        void Patient_SocialSituation::setSocioEducativeLvl(socioEducativeLvls input);
        void Patient_SocialSituation::setWritingFrequency(writeFrequencies input);
        void Patient_SocialSituation::setPrincipalProfession(String^ profession, String^ appLanguage);
        void Patient_SocialSituation::setLastProfession(String^ profession, String^ appLanguage);
        void Patient_SocialSituation::setRetirementInfo(bool stillWorks, String^ retirementAge);
        void Patient_SocialSituation::setLivesInHouse(extended_bool input);
        void Patient_SocialSituation::setGoesOutOfHomeRegularly(goesOutOfHomeType input);
        void Patient_SocialSituation::setUseWalkingTools(extended_bool input);
        void Patient_SocialSituation::setUseWalkingToolsInHouse(extended_bool input);
        void Patient_SocialSituation::setUseWalkingToolsOutside(extended_bool input);
        void Patient_SocialSituation::setUseCane(extended_bool input);
        void Patient_SocialSituation::setUseWalker(extended_bool input);
        void Patient_SocialSituation::setUseWheelchair(extended_bool input);
        void Patient_SocialSituation::setParticipationLEOPOLD(bool input);
        void Patient_SocialSituation::setParticipationBALTAZAR(bool input);
        void Patient_SocialSituation::setParticipationMEMENTO(bool input);

        private: String^ WacomTabletApplication::Patient_SocialSituation::translateProfessionToEnglish(String^ nativeLang, String^ appLanguage);
    };
}