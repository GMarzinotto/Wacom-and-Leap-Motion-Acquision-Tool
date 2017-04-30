#include "Patient_NeurologicHistory.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed

// Constructor
WacomTabletApplication::Patient_NeurologicHistory::Patient_NeurologicHistory() {}

// Method
void WacomTabletApplication::Patient_NeurologicHistory::printMe(std::ofstream& fout) {
    fout << "Epilepsy: ";
    printExtendedBool(fout, this->epilepsy);
    fout << "Cranial Trauma: ";
    printExtendedBool(fout, this->cranialTrauma);
    fout << "Brain Tumor: ";
    printExtendedBool(fout, this->brainTumor);
    fout << "Parkinson: ";
    printExtendedBool(fout, this->parkinson);
    fout << "Hemiplegia: ";
    printExtendedBool(fout, this->hemiplegia);
    fout << "Aphasia: ";
    printExtendedBool(fout, this->aphasia);
    fout << "Other: ";
    switch (this->otherNeurologicHistory) {
    case extended_bool::True: fout << this->otherNeurologicHistoryValue; break;
    case extended_bool::False: fout << "None"; break;
    default: fout << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_NeurologicHistory::setEpilepsy(extended_bool input) {
    this->epilepsy = input;
}

void WacomTabletApplication::Patient_NeurologicHistory::setCranialTrauma(extended_bool input) {
    this->cranialTrauma = input;
}

void WacomTabletApplication::Patient_NeurologicHistory::setBrainTumor(extended_bool input) {
    this->brainTumor = input;
}

void WacomTabletApplication::Patient_NeurologicHistory::setParkinson(extended_bool input) {
    this->parkinson = input;
}

void WacomTabletApplication::Patient_NeurologicHistory::setHemiplegia(extended_bool input) {
    this->hemiplegia = input;
}

void WacomTabletApplication::Patient_NeurologicHistory::setAphasia(extended_bool input) {
    this->aphasia = input;
}

void WacomTabletApplication::Patient_NeurologicHistory::setOtherNeurologicHistory(extended_bool input, String^ value) {
    msclr::interop::marshal_context context;
    this->otherNeurologicHistory = input;
    this->otherNeurologicHistoryValue = context.marshal_as<std::string>(value);
}