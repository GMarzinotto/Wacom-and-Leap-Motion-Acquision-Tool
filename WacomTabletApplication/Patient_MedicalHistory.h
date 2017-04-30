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
    enum class CVAType { Ischemic, Hemorrhagic, Unknown, None, Missing };

    class Patient_MedicalHistory {
    private:
        // Variables
        // Alzheimer History
        extended_bool alzheimerHistory = extended_bool::Missing;
        extended_bool alzheimerHistoryGrandparents = extended_bool::Missing;
        extended_bool alzheimerHistoryCousins = extended_bool::Missing;
        extended_bool alzheimerHistorySiblings = extended_bool::Missing;
        extended_bool alzheimerHistoryParents = extended_bool::Missing;
        extended_bool alzheimerHistoryParentsSiblings = extended_bool::Missing;

        // Heart Problem History
        extended_bool heartProblemHistory = extended_bool::Missing;
        extended_bool heartProblemHistoryMale = extended_bool::Missing;
        extended_bool heartProblemHistoryFemale = extended_bool::Missing;

        // Cardiovascular Persona History
        extended_bool myocardialInfarction = extended_bool::Missing;
        extended_bool coronaryBypass = extended_bool::Missing;
        extended_bool coronaryAngioplasty = extended_bool::Missing;
        extended_bool lowerLimbsArterialDisease = extended_bool::Missing;
        extended_bool heartFailure = extended_bool::Missing;
        extended_bool cva = extended_bool::Missing;
        CVAType cvaType = CVAType::Missing;

    public:
        // Constructor
        Patient_MedicalHistory::Patient_MedicalHistory();

        // Methods
        void Patient_MedicalHistory::printAlzheimerHistory(ofstream& fout);
        void Patient_MedicalHistory::printHeartProblemHistory(ofstream& fout);
        void Patient_MedicalHistory::printCardiovascularPersonalHistory(ofstream& fout);
        void Patient_MedicalHistory::printMe(ofstream& fout);
        void Patient_MedicalHistory::setAlzheimerHistory(extended_bool input);
        void Patient_MedicalHistory::setAlzheimerHistoryGrandparents(extended_bool input);
        void Patient_MedicalHistory::setAlzheimerHistoryParents(extended_bool input);
        void Patient_MedicalHistory::setAlzheimerHistoryParentsSiblings(extended_bool input);
        void Patient_MedicalHistory::setAlzheimerHistorySiblings(extended_bool input);
        void Patient_MedicalHistory::setAlzheimerHistoryCousins(extended_bool input);
        void Patient_MedicalHistory::setHeartProblemHistory(extended_bool input);
        void Patient_MedicalHistory::setHeartProblemHistoryMale(extended_bool input);
        void Patient_MedicalHistory::setHeartProblemHistoryFemale(extended_bool input);
        void Patient_MedicalHistory::setMyocardialInfarction(extended_bool input);
        void Patient_MedicalHistory::setCoronaryBypass(extended_bool input);
        void Patient_MedicalHistory::setCoronaryAngioplasty(extended_bool input);
        void Patient_MedicalHistory::setLowerLimbsArterialDisease(extended_bool input);
        void Patient_MedicalHistory::setHeartFailure(extended_bool input);
        void Patient_MedicalHistory::setCVA(extended_bool input);
        void Patient_MedicalHistory::setCVAType(CVAType input);
    };
}