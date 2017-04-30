#pragma once

#include <cstddef> // NULL
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
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
    enum class frenchLvls { None, Elementary, Intermediate, Advanced, Missing };
    enum class bilingualismType { Missing, No, Yes_early, Yes_late};

    class Patient_LanguageInformation {

    private:

        // Language Variables
        std::string nativeLanguage = "Missing";
        frenchLvls frenchLvlOral = frenchLvls::Missing;
        frenchLvls frenchLvlRead = frenchLvls::Missing;
        frenchLvls frenchLvlWritten = frenchLvls::Missing;
        frenchLvls arabeLvlOral = frenchLvls::Missing;
        frenchLvls arabeLvlRead = frenchLvls::Missing;
        frenchLvls arabeLvlWritten = frenchLvls::Missing;

        bilingualismType bilingualism = bilingualismType::Missing;

        /*writeFrequencies writeFreq;*/
        bool writesLatin = false;
        bool writesArab= false;
        bool writesArmenian= false;
        bool writesChinese= false;
        bool writesCyrillic= false;
        bool writesDevanagari= false;
        bool writesEtiopic= false;
        bool writesGeorgian= false;
        bool writesGreek= false;
        bool writesHangul= false;
        bool writesHebrew= false;
        bool writesJapanese= false;
        bool writesSouthIndic= false;
        bool writesOthers= false;

    public:

        // Constructors
        Patient_LanguageInformation::Patient_LanguageInformation();
        Patient_LanguageInformation::Patient_LanguageInformation(int a);

        // Methods
        void Patient_LanguageInformation::printNativeLanguage(std::ofstream& fout);
        void Patient_LanguageInformation::printFrenchLvl(std::ofstream& fout);
        void Patient_LanguageInformation::printArabeLvl(std::ofstream& fout);
        void Patient_LanguageInformation::printBilingualismType(std::ofstream& fout);

        /*void Patient_LanguageInformation::printWritingFrequency(std::ofstream& fout);*/
        void Patient_LanguageInformation::printKnownAlphabets(std::ofstream& fout);
        
        void Patient_LanguageInformation::printMe(ofstream& fout);

        void Patient_LanguageInformation::setBilingualismType(bilingualismType input);

        //void Patient_LanguageInformation::setWritingFrequency(writeFrequencies input);
        void Patient_LanguageInformation::setFrenchLvlOral(frenchLvls input);
        void Patient_LanguageInformation::setFrenchLvlRead(frenchLvls input);
        void Patient_LanguageInformation::setFrenchLvlWritten(frenchLvls input);
        void Patient_LanguageInformation::setArabeLvlOral(frenchLvls input);
        void Patient_LanguageInformation::setArabeLvlRead(frenchLvls input);
        void Patient_LanguageInformation::setArabeLvlWritten(frenchLvls input);
        void Patient_LanguageInformation::setWritesLatin(bool input);
        void Patient_LanguageInformation::setWritesArab(bool input);
        void Patient_LanguageInformation::setWritesArmenian(bool input);
        void Patient_LanguageInformation::setWritesChinese(bool input);
        void Patient_LanguageInformation::setWritesCyrillic(bool input);
        void Patient_LanguageInformation::setWritesDevanagari(bool input);
        void Patient_LanguageInformation::setWritesEtiopic(bool input);
        void Patient_LanguageInformation::setWritesGeorgian(bool input);
        void Patient_LanguageInformation::setWritesGreek(bool input);
        void Patient_LanguageInformation::setWritesHangul(bool input);
        void Patient_LanguageInformation::setWritesHebrew(bool input);
        void Patient_LanguageInformation::setWritesJapanese(bool input);
        void Patient_LanguageInformation::setWritesSouthIndic(bool input);
        void Patient_LanguageInformation::setWritesOthers(bool input);
        void Patient_LanguageInformation::setNativeLanguage(String^ nativeLang, String^ appLanguage);

        private: String^ WacomTabletApplication::Patient_LanguageInformation::translateLanguageToEnglish(String^ nativeLang, String^ appLanguage);

    };
}