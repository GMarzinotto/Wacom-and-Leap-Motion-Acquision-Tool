#include "Patient_OtherAntecedents.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed

// Constructor
WacomTabletApplication::Patient_OtherAntecedents::Patient_OtherAntecedents() {}

// Methods
void WacomTabletApplication::Patient_OtherAntecedents::printCreatininePreviousDosage(std::ofstream& fout) {
    fout << "Previous Creatinine Dosage: ";
    printExtendedBool(fout, this->creatininePreviousDosage);
    switch (this->creatininePreviousDosage) {
    case extended_bool::True:
        //printed as DD/MM/YYYY
        fout << "Creatinine Previous Dosage Date: ";
        fout << std::to_string(creatininePreviousDosageDate.tm_mday) << "/";
        fout << std::to_string(creatininePreviousDosageDate.tm_mon) << "/";
        fout << std::to_string(creatininePreviousDosageDate.tm_year) << endl;
        fout << "Creatine Previous Dosage Result: " << this->creatinineResult << endl;
        break;
    case extended_bool::False:
        fout << "Creatinine Previous Dosage Date: None \n Creatinine Previous Dosage Result: None" << endl;
        break;
    default:
        fout << "Creatinine Previous Dosage Date: Missing \n Creatinine Previous Dosage Result: Missing" << endl;
        break;
    }
}

void WacomTabletApplication::Patient_OtherAntecedents::printCancerHistory(std::ofstream& fout) {
    fout << "Cancer History: ";
    printExtendedBool(fout, this->cancerHistory);
    fout << "Type of Cancer: ";
    switch(this->cancerHistory) {
    case extended_bool::True: fout << this->cancerHistoryDetail; break;
    case extended_bool::False: fout << "None"; break;
    default: fout << "Missing"; break;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_OtherAntecedents::printOther(std::ofstream& fout) {
    fout << "Other History: ";
    printExtendedBool(fout, this->other);
    fout << "Other History Comments: ";
    if(this->other == extended_bool::True) fout << this->otherComment;
    else fout << "None";
    fout << endl;
}

void WacomTabletApplication::Patient_OtherAntecedents::printMe(std::ofstream& fout) {
    fout << "Depression Treatment History: ";
    printExtendedBool(fout, this->depressionTreatmentHistory);
    fout << "Malnutrition: ";
    printExtendedBool(fout, this->malnutrition);
    fout << "Breath Insufficiency: ";
    printExtendedBool(fout, this->breathInsufficiency);
    fout << "Kidney Insufficiency: ";
    printExtendedBool(fout, this->kidneyInsufficiency);
    // Creatinine Previous Dosage
    printCreatininePreviousDosage(fout);
    // Cancer History
    printCancerHistory(fout);
    fout << "Problem Walking: ";
    printExtendedBool(fout, this->problemsWalking);
    fout << "Recent Falls: ";
    printExtendedBool(fout, this->recentFall);
    fout << "Fall Trauma: ";
    printExtendedBool(fout, this->fallTrauma);
    // Other History
    printOther(fout);
}

void WacomTabletApplication::Patient_OtherAntecedents::setDepressionTreatmentHistory(extended_bool input) {
    this->depressionTreatmentHistory = input;
}

void WacomTabletApplication::Patient_OtherAntecedents::setMalnutrition(extended_bool input) {
    this->malnutrition = input;
}

void WacomTabletApplication::Patient_OtherAntecedents::setBreathInsufficiency(extended_bool input) {
    this->breathInsufficiency = input;
}

void WacomTabletApplication::Patient_OtherAntecedents::setKidneyInsufficiency(extended_bool input) {
    this->kidneyInsufficiency = input;
}

void WacomTabletApplication::Patient_OtherAntecedents::setCreatininePreviousDosage(extended_bool input, String^ result) {
    msclr::interop::marshal_context context;
    this->creatininePreviousDosage = input;
    this->creatinineResult = context.marshal_as<std::string>(result);
}

void WacomTabletApplication::Patient_OtherAntecedents::setCreatininePreviousDosageDate(System::DateTime input) {
    this->creatininePreviousDosageDate.tm_mday = input.Day;
    this->creatininePreviousDosageDate.tm_mon = input.Month;
    this->creatininePreviousDosageDate.tm_year = input.Year;
}

void WacomTabletApplication::Patient_OtherAntecedents::setCancerHistory(extended_bool input, String^ detail) {
    msclr::interop::marshal_context context;
    this->cancerHistory = input;
    this->cancerHistoryDetail = context.marshal_as<std::string>(detail);
}

void WacomTabletApplication::Patient_OtherAntecedents::setProblemsWalking(extended_bool input) {
    this->problemsWalking = input;
}

void WacomTabletApplication::Patient_OtherAntecedents::setRecentFalls(extended_bool input) {
    this->recentFall = input;
}

void WacomTabletApplication::Patient_OtherAntecedents::setFallTrauma(extended_bool input) {
    this->fallTrauma = input;
}

void WacomTabletApplication::Patient_OtherAntecedents::setOther(extended_bool input, String^ comment) {
    msclr::interop::marshal_context context;
    this->other = input;
    this->otherComment = context.marshal_as<std::string>(comment);
}