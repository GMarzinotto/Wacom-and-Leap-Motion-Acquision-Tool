#pragma once
#include <iostream>
#include <fstream>
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
    enum class cubePraxiesType { Success, Fail, Missing };
    enum class reyFigureType { Type_1, Type_2, Missing };
    enum class fluencesType { One_min, Two_min, Missing };

    class Patient_BilanNeuropsychologic {
    private:
        // Variables
        bool dateLastBilan = false;
        tm dateLastBilanValue;

        // Episodic Memory
        bool shortMemory = false;
        short int shortMemoryValue = 0;
        bool freeMemory[3] = {false, false, false};
        short int freeMemoryValue[3] = {0, 0, 0};
        bool totalMemory[3] = {false, false, false};
        short int totalMemoryValue[3] = {0, 0, 0};
        bool recognition = false;
        short int recognitionValue = 0;
        bool sensibility = false;
        short int sensibilityValue = 0;
        bool delayedFreeRecall = false;
        short int delayedFreeRecallValue = 0;
        bool delayedTotalRecall = false;
        short int delayedTotalRecallValue = 0;
        bool rlt = false;
        short int rltValue = 0;
        bool rtt = false;
        short int rttValue = 0;

        // Executive Tests
        bool bref = false;
        short int brefValue = 0;
        bool tmtATime = false;
        short int tmtATimeValue = 0;
        bool tmtAErrors = false;
        short int tmtAErrorsValue = 0;
        bool tmtBTime = false;
        short int tmtBTimeValue = 0;
        bool tmtBErrors = false;
        short int tmtBErrorsValue = 0;
        bool empanENDROIT = false;
        short int empanENDROITValue = 0;
        bool empanENVERS = false;
        short int empanENVERSValue = 0;
        
        // Praxies
        bool clock = false;
        short int clockValue = 0;
        bool cube = false;
        cubePraxiesType cubeValue = cubePraxiesType::Missing;

        // Rey Figure
        bool reyCopy = false;
        short int reyCopyValue = 0;
        bool reyTime = false;
        short int reyTimeValue = 0;
        bool reyType = false;
        reyFigureType reyTypeValue = reyFigureType::Missing;

        // Psycho-affective State
        bool depression = false;
        short int depressionValue = 0;
        bool anxietyScore = false;
        short int anxietyScoreValue = 0;
        bool anxietyYN = false;
        extended_bool anxietyYNValue = extended_bool::Missing;

        // Gestures
        bool symbolicGestures = false;
        short int symbolicGesturesValue = 0;
        bool mimeGestures = false;
        short int mimeGesturesValue = 0;
        bool abstractGestures = false;
        short int abstractGesturesValue = 0;

        // Language
        bool fluences = false;
        fluencesType fluencesValue = fluencesType::Missing;
        bool words = false;
        short int wordsValue = 0;
        bool do80 = false;
        short int do80Value = 0;
        bool animals = false;
        short int animalsValue = 0;

    public:
        // Constructor
        Patient_BilanNeuropsychologic::Patient_BilanNeuropsychologic();

        // Methods
        void Patient_BilanNeuropsychologic::printDateLastBilan(std::ofstream& fout);
        void Patient_BilanNeuropsychologic::printEpisodicMemory(std::ofstream& fout);
        void Patient_BilanNeuropsychologic::printExecutiveTests(std::ofstream& fout);
        void Patient_BilanNeuropsychologic::printPraxies(std::ofstream& fout);
        void Patient_BilanNeuropsychologic::printReyFigure(std::ofstream& fout);
        void Patient_BilanNeuropsychologic::printPsychoAffectiveState(std::ofstream& fout);
        void Patient_BilanNeuropsychologic::printGestures(std::ofstream& fout);
        void Patient_BilanNeuropsychologic::printLanguage(std::ofstream& fout);

        void Patient_BilanNeuropsychologic::printMe(std::ofstream& fout);

        void Patient_BilanNeuropsychologic::setDateLastBilan(bool input, System::DateTime date);
        void Patient_BilanNeuropsychologic::setShortMemory(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setFreeMemory(bool input1, String^ value1, bool input2, String^ value2, bool input3, String^ value3);
        void Patient_BilanNeuropsychologic::setTotalMemory(bool input1, String^ value1, bool input2, String^ value2, bool input3, String^ value3);
        void Patient_BilanNeuropsychologic::setRecognition(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setSensibility(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setDelayedFreeRecall(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setDelayedTotalRecall(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setRLT(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setRTT(bool input, String^ value);
        
        // Executive Tests
        void Patient_BilanNeuropsychologic::setBREF(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setTMTA(bool time, String^ timeValue, bool errors, String^ errorsValue);
        void Patient_BilanNeuropsychologic::setTMTB(bool time, String^ timeValue, bool errors, String^ errorsValue);
        void Patient_BilanNeuropsychologic::setEMPANENDROIT(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setEMPANENVERS(bool input, String^ value);
        
        //Praxies
        void Patient_BilanNeuropsychologic::setClock(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setCube(bool input, cubePraxiesType value);

        // Rey Figure
        void Patient_BilanNeuropsychologic::setReyCopy(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setReyTime(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setReyType(bool input, reyFigureType value);

        // Psycho-affective State
        void Patient_BilanNeuropsychologic::setDepression(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setAnxietyScore(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setAnxietyYN(bool input, extended_bool value);

        // Gestures
        void Patient_BilanNeuropsychologic::setSymbolicGestures(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setMimeGestures(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setAbstractGestures(bool input, String^ value);

        // Language
        void Patient_BilanNeuropsychologic::setFluences(bool input, fluencesType value);
        void Patient_BilanNeuropsychologic::setWords(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setDO80(bool input, String^ value);
        void Patient_BilanNeuropsychologic::setAnimals(bool input, String^ value);
    };
}