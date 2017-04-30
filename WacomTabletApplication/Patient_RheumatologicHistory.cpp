#include "Patient_RheumatologicHistory.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed
// Constructor
WacomTabletApplication::Patient_RheumatologicHistory::Patient_RheumatologicHistory() {}

// Methods
void WacomTabletApplication::Patient_RheumatologicHistory::printLimbsSurgery(std::ofstream& fout) {
    fout << "Lower Limbs Surgery: ";
    if (this->missingLimbSurgery) {
        fout << MISSING << endl << "Upper Limbs Surgery: " << MISSING;

    } else {
        if (this->lowerLimbSurgery) fout << "Yes";
        else fout << "No";
        fout << endl << "Upper Limbs Surgery: ";
        if (this->upperLimbSurgery) fout << "Yes";
        else fout << "No";
    }
    fout << endl;
}

void WacomTabletApplication::Patient_RheumatologicHistory::printLimbsPain(std::ofstream& fout) {
    fout << "Lower Limbs Pain: ";
    if (this->missingLimbPain) {
        fout << MISSING << endl << "Upper Limbs Pain: " << MISSING;

    } else {
        if (this->lowerLimbPain) fout << "Yes";
        else fout << "No";
        fout << endl << "Upper Limbs Pain: ";
        if (this->upperLimbPain) fout << "Yes";
        else fout << "No";
    }
    fout << endl;
}

void WacomTabletApplication::Patient_RheumatologicHistory::printMe(std::ofstream& fout) {
    fout << "Arthrosis: ";
    printExtendedBool(fout, this->arthrosis);
    fout << "Arthritis: ";
    printExtendedBool(fout, this->arthritis);
    fout << "Other: ";
    switch (this->other) {
    case extended_bool::True: fout << this->otherValue; break;
    case extended_bool::False: fout << "None"; break;
    default: fout << "Missing";
    }
    fout << endl;
    printLimbsSurgery(fout);
    printLimbsPain(fout);
}
void WacomTabletApplication::Patient_RheumatologicHistory::setArthrosis(extended_bool input) {
    this->arthrosis = input;
}

void WacomTabletApplication::Patient_RheumatologicHistory::setArthritis(extended_bool input) {
    this->arthritis = input;
}

void WacomTabletApplication::Patient_RheumatologicHistory::setOther(extended_bool input, String^ value) {
    msclr::interop::marshal_context context;
    this->other = input;
    this->otherValue = context.marshal_as<std::string>(value);
}

void WacomTabletApplication::Patient_RheumatologicHistory::setLimbsSurgery(bool lower, bool upper, bool missing) {
    this->lowerLimbSurgery = lower;
    this->upperLimbSurgery = upper;
    this->missingLimbSurgery = missing;
}

void WacomTabletApplication::Patient_RheumatologicHistory::setPainLimbs(bool lower, bool upper, bool missing) {
    this->lowerLimbPain = lower;
    this->upperLimbPain = upper;
    this->missingLimbPain = missing;
}