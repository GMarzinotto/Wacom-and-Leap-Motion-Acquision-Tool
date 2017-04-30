#pragma once
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "extended_bool.h"

namespace WacomTabletApplication {

    // Namespaces
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;
    using namespace std;

    class Patient_DataM12 {
    private:
        // Variables
        extended_bool surgery = extended_bool::Missing;
        string surgeryDetail;
        extended_bool hospitalization = extended_bool::Missing;
        string hospitalizationDetail;
        extended_bool pathology = extended_bool::Missing;
        string pathologyDetail;
        extended_bool newDiagnostic = extended_bool::Missing;
        string newDiagnosticDetail;
        extended_bool newTreatment = extended_bool::Missing;
        string newTreatmentDetail;
        extended_bool alcohol = extended_bool::Missing;
        string alcoholDetail;
        extended_bool emotionalState = extended_bool::Missing;
        string emotionalStateDetail;
        extended_bool other = extended_bool::Missing;
        string otherDetail;
    public:
        // Constructor
        Patient_DataM12::Patient_DataM12();

        // Methods
        void Patient_DataM12::printSurgery(std::ofstream& fout);
        void Patient_DataM12::printHospitalization(std::ofstream& fout);
        void Patient_DataM12::printPathology(std::ofstream& fout);
        void Patient_DataM12::printNewDiagnostic(std::ofstream& fout);
        void Patient_DataM12::printNewTreatment(std::ofstream& fout);
        void Patient_DataM12::printAlcohol(std::ofstream& fout);
        void Patient_DataM12::printEmotionalState(std::ofstream& fout);
        void Patient_DataM12::printOther(std::ofstream& fout);

        void Patient_DataM12::printMe(std::ofstream& fout);

        void Patient_DataM12::setSurgery(extended_bool input, String^ detail);
        void Patient_DataM12::setHospitalization(extended_bool input, String^ detail);
        void Patient_DataM12::setPathology(extended_bool input, String^ detail);
        void Patient_DataM12::setNewDiagnostic(extended_bool input, String^ detail);
        void Patient_DataM12::setNewTreatment(extended_bool input, String^ detail);
        void Patient_DataM12::setAlcohol(extended_bool input, String^ detail);
        void Patient_DataM12::setEmotionalState(extended_bool input, String^ detail);
        void Patient_DataM12::setOther(extended_bool input, String^ detail);
    };
}