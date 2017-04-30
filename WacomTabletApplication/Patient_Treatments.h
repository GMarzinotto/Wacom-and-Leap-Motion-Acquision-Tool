#pragma once
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>

#define MAXTREATMENTS 6

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

    class Patient_Treatments {
    private:
        // Variables
        int numTreatments = 0;
        std::string treatmentName[MAXTREATMENTS];
        std::string treatmentIndication[MAXTREATMENTS];
        std::string treatmentPosology[MAXTREATMENTS];
        tm treatmentStartDate[MAXTREATMENTS];

    public:
        // Constructor
        Patient_Treatments::Patient_Treatments();

        // Methods
        void Patient_Treatments::printMe(std::ofstream& fout);

        void Patient_Treatments::setTreatment(String^ name, String^ indication, String^ posology, System::DateTime startDate);
    };
}