#include "Patient_RiskFactor.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed

// Constructor
WacomTabletApplication::Patient_RiskFactor::Patient_RiskFactor() {}

// Methods
void WacomTabletApplication::Patient_RiskFactor::printSmoking(std::ofstream& fout) {
    fout << "Smoke: ";
    switch (this->smoking) {
    case habitsType::Never: fout << "Never"; break;
    case habitsType::Active: fout << "Active"; break;
    case habitsType::Stopped: fout << "Stopped"; break;
    default: fout << "Missing"; break;
    }
    fout << endl << "Number of Packets: ";
    if (this->smoking == habitsType::Missing) fout << "Missing";
    else fout << this->numPackets;
    fout << endl << "Years Smoking: ";
    if (this->smoking == habitsType::Missing) fout << "Missing";
    else fout << this->yearsSmoking;
    fout << endl;
}

void WacomTabletApplication::Patient_RiskFactor::printDrinking(std::ofstream& fout) {
    fout << "Drinks: ";
    switch (this->drinking) {
    case habitsType::Never: fout << "Never"; break;
    case habitsType::Active: fout << "Active"; break;
    case habitsType::Stopped: fout << "Stopped"; break;
    default: fout << "Missing"; break;
    }
    fout << endl << "Unities per week: ";
    if (this->drinking == habitsType::Missing) fout << "Missing";
    else fout << this->unitiesPerWeek;
    fout << endl;
}

void WacomTabletApplication::Patient_RiskFactor::printMe(std::ofstream& fout) {
    fout << "Arterial Hypertension: ";
    printExtendedBool(fout, this->arterialHypertension);
    fout << "Diabetes: ";
    printExtendedBool(fout, this->diabetes);
    fout << "Hyperlipidemia: ";
    printExtendedBool(fout, this->hyperlipidemia);
    // Smoking
    printSmoking(fout);
    // Drinking
    printDrinking(fout);
}

void WacomTabletApplication::Patient_RiskFactor::setArterialHypertension(extended_bool input) {
    this->arterialHypertension = input;
}

void WacomTabletApplication::Patient_RiskFactor::setDiabetes(extended_bool input) {
    this->diabetes = input;
}

void WacomTabletApplication::Patient_RiskFactor::setHyperlipidemia(extended_bool input) {
    this->hyperlipidemia = input;
}

void WacomTabletApplication::Patient_RiskFactor::setSmoking(habitsType input) {
    this->smoking = input;
}

void WacomTabletApplication::Patient_RiskFactor::setNumPackets(String^ input) {
    this->numPackets = int::Parse(input);
}

void WacomTabletApplication::Patient_RiskFactor::setYearsSmoking(String^ input) {
    this->yearsSmoking = int::Parse(input);
}

void WacomTabletApplication::Patient_RiskFactor::setDrinking(habitsType input) {
    this->drinking = input;
}

void WacomTabletApplication::Patient_RiskFactor::setUnitiesPerWeek(String^ input) {
    this->unitiesPerWeek = int::Parse(input);
}