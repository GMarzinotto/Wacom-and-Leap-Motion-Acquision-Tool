#pragma once
#include <iostream>
#include <fstream>

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

    class Patient_NeuropsychologicalAssessment {
    private:
        // Variables
        bool iadl = false;
        short int iadlValue;
        bool mmse = false;
        short int mmseValue;
        bool mmseDate = false;
        tm mmseDateValue;
        bool mmseOrientation = false;
        short int mmseOrientationValue;
        bool mmseLearning = false;
        short int mmseLearningValue;
        bool mmseCalcule = false;
        short int mmseCalculeValue;
        bool mmseMemory = false;
        short int mmseMemoryValue;
        bool mmseLanguage = false;
        short int mmseLanguageValue;
        bool mmsePraxies = false;
        short int mmsePraxiesValue;
        bool moca = false;
        short int mocaValue;

    public:
        // Constructor
        Patient_NeuropsychologicalAssessment::Patient_NeuropsychologicalAssessment();

        // Methods
        void Patient_NeuropsychologicalAssessment::printMe(ofstream& fout);
        void Patient_NeuropsychologicalAssessment::setIADL(bool input);
        void Patient_NeuropsychologicalAssessment::setIADLValue(String^ input);
        void Patient_NeuropsychologicalAssessment::setMMSE(bool input);
        void Patient_NeuropsychologicalAssessment::setMMSEValue(String^ input);
        void Patient_NeuropsychologicalAssessment::setMMSEDate(bool input);
        void Patient_NeuropsychologicalAssessment::setMMSEDateValue(System::DateTime input);
        void Patient_NeuropsychologicalAssessment::setMMSEOrientation(bool input);
        void Patient_NeuropsychologicalAssessment::setMMSEOrientationValue(String^ input);
        void Patient_NeuropsychologicalAssessment::setMMSELearning(bool input);
        void Patient_NeuropsychologicalAssessment::setMMSELearningValue(String^ input);
        void Patient_NeuropsychologicalAssessment::setMMSECalcule(bool input);
        void Patient_NeuropsychologicalAssessment::setMMSECalculeValue(String^ input);
        void Patient_NeuropsychologicalAssessment::setMMSEMemory(bool input);
        void Patient_NeuropsychologicalAssessment::setMMSEMemoryValue(String^ input);
        void Patient_NeuropsychologicalAssessment::setMMSELanguage(bool input);
        void Patient_NeuropsychologicalAssessment::setMMSELanguageValue(String^ input);
        void Patient_NeuropsychologicalAssessment::setMMSEPraxies(bool input);
        void Patient_NeuropsychologicalAssessment::setMMSEPraxiesValues(String^ input);
        void Patient_NeuropsychologicalAssessment::setMOCA(bool input);
        void Patient_NeuropsychologicalAssessment::setMOCAValue(String^ input);
    };
}