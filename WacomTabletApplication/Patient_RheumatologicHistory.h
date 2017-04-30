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

    class Patient_RheumatologicHistory {
    private:
        // Variables
        extended_bool arthrosis = extended_bool::Missing;
        extended_bool arthritis = extended_bool::Missing;
        extended_bool other = extended_bool::Missing;
        string otherValue;
        bool lowerLimbSurgery = false;
        bool upperLimbSurgery = false;
        bool missingLimbSurgery = false;
        bool lowerLimbPain = false;
        bool upperLimbPain = false;
        bool missingLimbPain = false;

    public:
        // Constructor
        Patient_RheumatologicHistory::Patient_RheumatologicHistory();

        // Methods
        void Patient_RheumatologicHistory::printLimbsSurgery(std::ofstream& fout);
        void Patient_RheumatologicHistory::printLimbsPain(std::ofstream& fout);
        void Patient_RheumatologicHistory::printMe(std::ofstream& fout);
        void Patient_RheumatologicHistory::setArthrosis(extended_bool input);
        void Patient_RheumatologicHistory::setArthritis(extended_bool input);
        void Patient_RheumatologicHistory::setOther(extended_bool input, String^ value);
        void Patient_RheumatologicHistory::setLimbsSurgery(bool lower, bool upper, bool missing);
        void Patient_RheumatologicHistory::setPainLimbs(bool lower, bool upper, bool missing);
    };
}
