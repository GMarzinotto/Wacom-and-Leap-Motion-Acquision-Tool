#include "Patient_CognitiveDiagnosis.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed
// Constructor
WacomTabletApplication::Patient_CognitiveDiagnosis::Patient_CognitiveDiagnosis() {}

// Methods
void WacomTabletApplication::Patient_CognitiveDiagnosis::printMe(std::ofstream& fout) {
    fout << "Date Cognitive Diagnosis: ";
    if (this->dateCognitiveDiagnosis) {
        fout << this->dateCognitiveDiagnosisValue.tm_mday << "/";
        fout << this->dateCognitiveDiagnosisValue.tm_mon << "/";
        fout << this->dateCognitiveDiagnosisValue.tm_year;
    } else fout << MISSING;
    fout << endl << "Healthy Control: ";
    if (this->absenceCognitiveComplain) fout << "Yes";
    else fout << "No";
    fout << endl << "SCI: ";
    if (this->cognitiveComplain) fout << "Yes";
    else fout << "No";
    fout << endl << "Light Cognitive Problems: ";
    if(this->lightCognitiveProblems) fout << "Yes";
    else fout << "No";
    fout << endl << "Amnesic MCI: ";
    printExtendedBool(fout, this->amnesicMCI);
    fout << "(Dys)Executive MCI: ";
    printExtendedBool(fout, this->executiveMCI);
    fout << "Unique Domain: ";
    printExtendedBool(fout, this->uniqueDomainMCI);
    fout << "Multiple Domain: ";
    printExtendedBool(fout, this->multipleDomainMCI);
    fout << "Psycho-affective Problems: ";
    if (this->psychoaffectiveProblems) fout << "Yes";
    else fout << "No";
    fout << endl << "Anxiety: ";
    printExtendedBool(fout, this->anxiety);
    fout << "Depression: ";
    printExtendedBool(fout, this->depression);
    fout << "Other Psycho-affective Problem: ";
    switch (this->otherPsychoaffectiveProblem) {
    case extended_bool::True: fout << this->otherPsychoaffectiveProblemValue; break;
    case extended_bool::False: fout << "None"; break;
    default: fout << MISSING;
    }
    fout << endl;
    fout << "Dementia: ";
    if (this->dementia) fout << "Yes";
    else fout << "No";
    fout << endl << "MA: ";
    printExtendedBool(fout, this->ma);
    fout << "Mixed Dementia: ";
    printExtendedBool(fout, this->mixedDementia);
    fout << "Vascular Dementia: ";
    printExtendedBool(fout, this->vascularDementia);
    fout << "DCL: ";
    printExtendedBool(fout, this->dcl);
    fout << "DFT: ";
    printExtendedBool(fout, this->dft);
    fout << "PSP: ";
    printExtendedBool(fout, this->psp);
    fout << "DCB: ";
    printExtendedBool(fout, this->dcb);
    fout << "APP: ";
    printExtendedBool(fout, this->app);
    fout << "DS: ";
    printExtendedBool(fout, this->ds);
    fout << "Schizophrenia: ";
    printExtendedBool(fout, this->schizophrenia);
    fout << "Other Dementia: ";
    switch (this->otherDementia) {
    case extended_bool::True: fout << this->otherDementiaValue; break;
    case extended_bool::False: fout << "None"; break;
    default: fout << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setDateCognitiveDiagnosis(bool input, System::DateTime value) {
    this->dateCognitiveDiagnosis = input;
    this->dateCognitiveDiagnosisValue.tm_mday = value.Day;
    this->dateCognitiveDiagnosisValue.tm_mon = value.Month;
    this->dateCognitiveDiagnosisValue.tm_year = value.Year;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setAbscenceCognitiveDiagnosisComplain(bool input) {
    this->absenceCognitiveComplain = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setCognitiveComplain(bool input) {
    this->cognitiveComplain = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setLightCognitiveProblems(bool input) {
    this->lightCognitiveProblems = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setAmnesicMCI(extended_bool input) {
    this->amnesicMCI = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setExecutiveMCI(extended_bool input) {
    this->executiveMCI = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setUniqueDomainMCI(extended_bool input) {
    this->uniqueDomainMCI = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setMultipleDomainMCI(extended_bool input) {
    this->multipleDomainMCI = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setPsychoaffectiveProblems(bool input) {
    this->psychoaffectiveProblems = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setAnxiety(extended_bool input) {
    this->anxiety = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setDepression(extended_bool input) {
    this->depression = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setOtherPsychoaffectiveProblems(extended_bool input, String^ value) {
    msclr::interop::marshal_context context;
    this->otherPsychoaffectiveProblem = input;
    this->otherPsychoaffectiveProblemValue = context.marshal_as<std::string>(value);
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setDementia(bool input) {
    this->dementia = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setMA(extended_bool input) {
    this->ma = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setMixedDementia(extended_bool input) {
    this->mixedDementia = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setVascularDementia(extended_bool input) {
    this->vascularDementia = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setDCL(extended_bool input) {
    this->dcl = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setDFT(extended_bool input) {
    this->dft = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setPSP(extended_bool input) {
    this->psp = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setDCB(extended_bool input) {
    this->dcb = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setAPP(extended_bool input) {
    this->app = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setDS(extended_bool input) {
    this->ds = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setSchizophrenia(extended_bool input) {
    this->schizophrenia = input;
}

void WacomTabletApplication::Patient_CognitiveDiagnosis::setOtherDementia(extended_bool input, String^ value) {
    msclr::interop::marshal_context context;
    this->otherDementia = input;
    this->otherDementiaValue = context.marshal_as<std::string>(value);
}