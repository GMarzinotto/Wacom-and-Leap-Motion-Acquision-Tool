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

    // Enums

    class Patient_NeurologicHistory {
    private:
        // Variables
        extended_bool epilepsy = extended_bool::Missing;
        extended_bool cranialTrauma = extended_bool::Missing;
        extended_bool brainTumor = extended_bool::Missing;
        extended_bool parkinson = extended_bool::Missing;
        extended_bool hemiplegia = extended_bool::Missing;
        extended_bool aphasia = extended_bool::Missing;
        extended_bool otherNeurologicHistory = extended_bool::Missing;
        std::string otherNeurologicHistoryValue;

    public:
        // Constructor
        Patient_NeurologicHistory::Patient_NeurologicHistory();

        //Methods
        void Patient_NeurologicHistory::printMe(std::ofstream& fout);
        void Patient_NeurologicHistory::setEpilepsy(extended_bool input);
        void Patient_NeurologicHistory::setCranialTrauma(extended_bool input);
        void Patient_NeurologicHistory::setBrainTumor(extended_bool input);
        void Patient_NeurologicHistory::setParkinson(extended_bool input);
        void Patient_NeurologicHistory::setHemiplegia(extended_bool input);
        void Patient_NeurologicHistory::setAphasia(extended_bool input);
        void Patient_NeurologicHistory::setOtherNeurologicHistory(extended_bool input, String^ value);
    };
}