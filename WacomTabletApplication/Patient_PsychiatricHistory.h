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

    class Patient_PsychiatricHistory {
    private:
        // Variables
        // Hospitalization
        extended_bool psychiatricHospitalization = extended_bool::Missing;
        bool howManyTimes = false;
        short int howManyTimesValue = 0;
        bool lastTimeHospitalization = false;
        tm lastTimeHospitalizationValue;
        bool indication = false;
        string indicationValue;
        // Psychotropes
        extended_bool usePsychotropes = extended_bool::Missing;
        bool lastTimeUsePsychotropes = false;
        tm lastTimeUsePsychotropesValue;
        // Treatment with antidepressants
        extended_bool treatmentWithAntidepressants = extended_bool::Missing;
        bool lastTimeTreatmentWithAntidepressants = false;
        tm lastTimeTreatmentWithAntidepressantsValue;

    public:
        // Constructor
        Patient_PsychiatricHistory::Patient_PsychiatricHistory();

        // Methods
        void Patient_PsychiatricHistory::printPsychiatricHospitalization(std::ofstream& fout);
        void Patient_PsychiatricHistory::printUsePsychotropes(std::ofstream& fout);
        void Patient_PsychiatricHistory::printTreatmentWithAntidepressants(std::ofstream& fout);
        void Patient_PsychiatricHistory::printMe(std::ofstream& fout);
        void Patient_PsychiatricHistory::setPsychiatricHospitalization(extended_bool input);
        void Patient_PsychiatricHistory::setPsychiatricHospitalizationHowManyTimes(bool input, String^ value);
        void Patient_PsychiatricHistory::setPsychiatricHospitalizationLastTime(bool input, System::DateTime value);
        void Patient_PsychiatricHistory::setPsychiatricHospitalizationIndication(bool input, String^ value);
        void Patient_PsychiatricHistory::setUsePsychotropes(extended_bool input);
        void Patient_PsychiatricHistory::setUsePsychotropesLastTime(bool input, System::DateTime value);
        void Patient_PsychiatricHistory::setTreatmentWithAntidepressants(extended_bool input);
        void Patient_PsychiatricHistory::setTreatmentWithAntidepressantsLastTime(bool input, System::DateTime value);
    };
}