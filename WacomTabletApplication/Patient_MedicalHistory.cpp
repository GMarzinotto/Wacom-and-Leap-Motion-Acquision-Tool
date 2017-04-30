#include "Patient_MedicalHistory.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed

// Constructor
WacomTabletApplication::Patient_MedicalHistory::Patient_MedicalHistory() {}

// Methods 
void WacomTabletApplication::Patient_MedicalHistory::printAlzheimerHistory(std::ofstream& fout) {
    fout << "Alzheimer History: ";
    printExtendedBool(fout, this->alzheimerHistory);
    fout << "Alzheimer History Grandparents: ";
    printExtendedBool(fout, this->alzheimerHistoryGrandparents);
    fout << "Alzheimer History Parents: ";
    printExtendedBool(fout, this->alzheimerHistoryParents);
    fout << "Alzheimer History Parents Siblings: ";
    printExtendedBool(fout, this->alzheimerHistoryParentsSiblings);
    fout << "Alzheimer History Siblings: ";
    printExtendedBool(fout, this->alzheimerHistorySiblings);
    fout << "Alzheimer History Cousins: ";
    printExtendedBool(fout, this->alzheimerHistoryCousins);
}

void WacomTabletApplication::Patient_MedicalHistory::printHeartProblemHistory(std::ofstream& fout) {
    fout << "Heart Problem History: ";
    printExtendedBool(fout, this->heartProblemHistory);
    fout << "Heart Problem History Male Under 55: ";
    printExtendedBool(fout, this->heartProblemHistoryMale);
    fout << "Heart Problem History Female Under 65: ";
    printExtendedBool(fout, this->heartProblemHistoryFemale);
}

void WacomTabletApplication::Patient_MedicalHistory::printCardiovascularPersonalHistory(std::ofstream& fout) {
    fout << "Myocardial Infarction: ";
    printExtendedBool(fout, this->myocardialInfarction);
    fout << "Coronary Bypass: ";
    printExtendedBool(fout, this->coronaryBypass);
    fout << "Coronary Angioplasty: ";
    printExtendedBool(fout, this->coronaryAngioplasty);
    fout << "Lower Limbs Arterial Disease: ";
    printExtendedBool(fout, this->lowerLimbsArterialDisease);
    fout << "Heart Failure: ";
    printExtendedBool(fout, this->heartFailure);
    fout << "CVA: ";
    printExtendedBool(fout, this->cva);
    fout << "CVA Type: ";
    switch (this->cvaType) {
    case CVAType::Ischemic: fout << "Ischemic"; break;
    case CVAType::Hemorrhagic: fout << "Hemorraghic"; break;
    case CVAType::Unknown: fout << "Unknown"; break;
    case CVAType::None: fout << "None"; break;
    default: fout << "Missing"; break;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_MedicalHistory::printMe(std::ofstream& fout) {
    printAlzheimerHistory(fout);
    printHeartProblemHistory(fout);
    printCardiovascularPersonalHistory(fout);
}

void WacomTabletApplication::Patient_MedicalHistory::setAlzheimerHistory(extended_bool input) {
    this->alzheimerHistory = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setAlzheimerHistoryGrandparents(extended_bool input) {
    this->alzheimerHistoryGrandparents = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setAlzheimerHistoryParents(extended_bool input) {
    this->alzheimerHistoryParents = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setAlzheimerHistoryParentsSiblings(extended_bool input) {
    this->alzheimerHistoryParentsSiblings = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setAlzheimerHistorySiblings(extended_bool input) {
    this->alzheimerHistorySiblings = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setAlzheimerHistoryCousins(extended_bool input) {
    this->alzheimerHistoryCousins = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setHeartProblemHistory(extended_bool input) {
    this->heartProblemHistory = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setHeartProblemHistoryMale(extended_bool input) {
    this->heartProblemHistoryMale = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setHeartProblemHistoryFemale(extended_bool input) {
    this->heartProblemHistoryFemale = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setMyocardialInfarction(extended_bool input) {
    this->myocardialInfarction = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setCoronaryBypass(extended_bool input) {
    this->coronaryBypass = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setCoronaryAngioplasty(extended_bool input) {
    this->coronaryAngioplasty = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setLowerLimbsArterialDisease(extended_bool input) {
    this->lowerLimbsArterialDisease = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setHeartFailure(extended_bool input) {
    this->heartFailure = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setCVA(extended_bool input) {
    this->cva = input;
}

void WacomTabletApplication::Patient_MedicalHistory::setCVAType(CVAType input) {
    this->cvaType = input;
}