#pragma once
#include <iostream>
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
    enum class habitsType { Never, Active, Stopped, Missing };

    class Patient_RiskFactor {
    private:
        // Variables
        extended_bool arterialHypertension = extended_bool::Missing;
        extended_bool diabetes = extended_bool::Missing;
        extended_bool hyperlipidemia = extended_bool::Missing;
        habitsType smoking = habitsType::Missing;
        short int numPackets;
        short int yearsSmoking;
        habitsType drinking = habitsType::Missing;
        short int unitiesPerWeek;

    public:
        // Constructor
        Patient_RiskFactor::Patient_RiskFactor();

        // Methods
        void Patient_RiskFactor::printSmoking(ofstream& fout);
        void Patient_RiskFactor::printDrinking(ofstream& fout);
        void Patient_RiskFactor::printMe(ofstream& fout);
        void Patient_RiskFactor::setArterialHypertension(extended_bool input);
        void Patient_RiskFactor::setDiabetes(extended_bool input);
        void Patient_RiskFactor::setHyperlipidemia(extended_bool input);
        void Patient_RiskFactor::setSmoking(habitsType input);
        void Patient_RiskFactor::setNumPackets(String^ input);
        void Patient_RiskFactor::setYearsSmoking(String^ input);
        void Patient_RiskFactor::setDrinking(habitsType input);
        void Patient_RiskFactor::setUnitiesPerWeek(String^ input);
    };
}