#pragma once
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
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

    class Patient_CognitiveDiagnosis {
    private:
        // Variables
        bool dateCognitiveDiagnosis = false;
        tm dateCognitiveDiagnosisValue;
        bool absenceCognitiveComplain = false;
        bool cognitiveComplain = false;
        bool lightCognitiveProblems = false;
        extended_bool amnesicMCI = extended_bool::Missing;
        extended_bool executiveMCI = extended_bool::Missing;
        extended_bool uniqueDomainMCI = extended_bool::Missing;
        extended_bool multipleDomainMCI = extended_bool::Missing;
        bool psychoaffectiveProblems = false;
        extended_bool anxiety = extended_bool::Missing;
        extended_bool depression = extended_bool::Missing;
        extended_bool otherPsychoaffectiveProblem = extended_bool::Missing;
        std::string otherPsychoaffectiveProblemValue;
        bool dementia = false;
        extended_bool ma = extended_bool::Missing;
        extended_bool mixedDementia = extended_bool::Missing;
        extended_bool vascularDementia = extended_bool::Missing;
        extended_bool dcl = extended_bool::Missing;
        extended_bool dft = extended_bool::Missing;
        extended_bool psp = extended_bool::Missing;
        extended_bool dcb = extended_bool::Missing;
        extended_bool app = extended_bool::Missing;
        extended_bool ds = extended_bool::Missing;
        extended_bool schizophrenia = extended_bool::Missing;
        extended_bool otherDementia = extended_bool::Missing;
        std::string otherDementiaValue;

    public:
        // Constructor
        Patient_CognitiveDiagnosis::Patient_CognitiveDiagnosis();

        // Methods
        void Patient_CognitiveDiagnosis::printMe(std::ofstream& fout);

        void Patient_CognitiveDiagnosis::setDateCognitiveDiagnosis(bool input, System::DateTime value);
        void Patient_CognitiveDiagnosis::setAbscenceCognitiveDiagnosisComplain(bool input);
        void Patient_CognitiveDiagnosis::setCognitiveComplain(bool input);
        void Patient_CognitiveDiagnosis::setLightCognitiveProblems(bool input);
        void Patient_CognitiveDiagnosis::setAmnesicMCI(extended_bool input);
        void Patient_CognitiveDiagnosis::setExecutiveMCI(extended_bool input);
        void Patient_CognitiveDiagnosis::setUniqueDomainMCI(extended_bool input);
        void Patient_CognitiveDiagnosis::setMultipleDomainMCI(extended_bool input);
        void Patient_CognitiveDiagnosis::setPsychoaffectiveProblems(bool input);
        void Patient_CognitiveDiagnosis::setAnxiety(extended_bool input);
        void Patient_CognitiveDiagnosis::setDepression(extended_bool input);
        void Patient_CognitiveDiagnosis::setOtherPsychoaffectiveProblems(extended_bool input, String^ value);
        void Patient_CognitiveDiagnosis::setDementia(bool input);
        void Patient_CognitiveDiagnosis::setMA(extended_bool input);
        void Patient_CognitiveDiagnosis::setMixedDementia(extended_bool input);
        void Patient_CognitiveDiagnosis::setVascularDementia(extended_bool input);
        void Patient_CognitiveDiagnosis::setDCL(extended_bool input);
        void Patient_CognitiveDiagnosis::setDFT(extended_bool input);
        void Patient_CognitiveDiagnosis::setPSP(extended_bool input);
        void Patient_CognitiveDiagnosis::setDCB(extended_bool input);
        void Patient_CognitiveDiagnosis::setAPP(extended_bool input);
        void Patient_CognitiveDiagnosis::setDS(extended_bool input);
        void Patient_CognitiveDiagnosis::setSchizophrenia(extended_bool input);
        void Patient_CognitiveDiagnosis::setOtherDementia(extended_bool input, String^ value);
    };
}