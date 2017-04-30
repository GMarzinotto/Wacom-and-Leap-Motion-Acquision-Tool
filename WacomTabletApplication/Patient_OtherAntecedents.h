#pragma once
#include <iostream>
#include "extended_bool.h"
#include <msclr\marshal_cppstd.h>

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

    class Patient_OtherAntecedents {
    private:
        // Variables
        extended_bool depressionTreatmentHistory = extended_bool::Missing;
        extended_bool malnutrition = extended_bool::Missing;
        extended_bool breathInsufficiency = extended_bool::Missing;
        extended_bool kidneyInsufficiency = extended_bool::Missing;
        extended_bool creatininePreviousDosage = extended_bool::Missing;
        tm creatininePreviousDosageDate;
        std::string creatinineResult;
        extended_bool cancerHistory = extended_bool::Missing;
        std::string cancerHistoryDetail;
        extended_bool problemsWalking = extended_bool::Missing;
        extended_bool recentFall = extended_bool::Missing;
        extended_bool fallTrauma = extended_bool::Missing;
        extended_bool other = extended_bool::Missing;
        std::string otherComment;

    public:
        // Constructor
        Patient_OtherAntecedents::Patient_OtherAntecedents();

        // Methods
        //void Patient_OtherAntecedents::printDepressionTreatmentHistory(std::ofstream& fout);
        //void Patient_OtherAntecedents::printMalnutrition(std::ofstream& fout);
        //void Patient_OtherAntecedents::printBreathInsufficiency(std::ofstream& fout);
        //void Patient_OtherAntecedents::printKidneyInsufficiency(std::ofstream& fout);
        //void Patient_OtherAntecedents::printCreatininePreviousDosage(std::ofstream& fout);
        void Patient_OtherAntecedents::printCreatininePreviousDosage(std::ofstream& fout);
        void Patient_OtherAntecedents::printCancerHistory(std::ofstream& fout);
        //void Patient_OtherAntecedents::printProblemsWalking(std::ofstream& fout);
        //void Patient_OtherAntecedents::printRecentFalls(std::ofstream& fout);
        //void Patient_OtherAntecedents::printFallTrauma(std::ofstream& fout);
        void Patient_OtherAntecedents::printOther(std::ofstream& fout);
        void Patient_OtherAntecedents::printMe(ofstream& fout);
        void Patient_OtherAntecedents::setDepressionTreatmentHistory(extended_bool input);
        void Patient_OtherAntecedents::setMalnutrition(extended_bool input);
        void Patient_OtherAntecedents::setBreathInsufficiency(extended_bool input);
        void Patient_OtherAntecedents::setKidneyInsufficiency(extended_bool input);
        void Patient_OtherAntecedents::setCreatininePreviousDosage(extended_bool input, String^ result);
        void Patient_OtherAntecedents::setCreatininePreviousDosageDate(System::DateTime input);
        void Patient_OtherAntecedents::setCancerHistory(extended_bool input, String^ detail);
        void Patient_OtherAntecedents::setProblemsWalking(extended_bool input);
        void Patient_OtherAntecedents::setRecentFalls(extended_bool input);
        void Patient_OtherAntecedents::setFallTrauma(extended_bool input);
        void Patient_OtherAntecedents::setOther(extended_bool input, String^ comment);
    };
}