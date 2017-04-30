#include "Patient_NeuropsychologicalAssessment.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed

// Constructor
WacomTabletApplication::Patient_NeuropsychologicalAssessment::Patient_NeuropsychologicalAssessment() {}

// Methods
void WacomTabletApplication::Patient_NeuropsychologicalAssessment::printMe(std::ofstream& fout) {
    fout << "IADL Score: ";
    if (this->iadl) fout << this->iadlValue;
    else fout << "Missing";
    fout << endl << "MMSE Score: ";
    if (this->mmse) fout << this->mmseValue;
    else fout << "Missing";
    fout << endl << "Date of MMSE: ";
    if (this->mmseDate) fout << this->mmseDateValue.tm_mday << "/" << this->mmseDateValue.tm_mon << "/" << this->mmseDateValue.tm_year;
    else fout << "Missing";
    fout << endl << "MMSE Orientation Score: ";
    if (this->mmseOrientation) fout << this->mmseOrientationValue;
    else fout << "Missing";
    fout << endl << "MMSE Learning Score: ";
    if (this->mmseLearning) fout << this->mmseLearningValue;
    else fout << "Missing";
    fout << endl << "MMSE Calcule Score: ";
    if (this->mmseCalcule) fout << this->mmseCalculeValue;
    else fout << "Missing";
    fout << endl << "MMSE Memory Score: ";
    if (this->mmseMemory) fout << this->mmseMemoryValue;
    else fout << "Missing";
    fout << endl << "MMSE Language Score: ";
    if (this->mmseLanguage) fout << this->mmseLanguageValue;
    else fout << "Missing";
    fout << endl << "MMSE Constructive Praxies Score: ";
    if (this->mmsePraxies) fout << this->mmsePraxiesValue;
    else fout << "Missing";
    fout << endl << "MOCA Score: ";
    if (this->moca) fout << this->mocaValue;
    else fout << "Missing";
    fout << endl;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setIADL(bool input) {
    this->iadl = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setIADLValue(String^ input) {
    this->iadlValue = int::Parse(input);
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSE(bool input) {
    this->mmse = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSEValue(String^ input) {
    this->mmseValue = int::Parse(input);
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSEDate(bool input) {
    this->mmseDate = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSEDateValue(System::DateTime input) {
    this->mmseDateValue.tm_mday = input.Day;
    this->mmseDateValue.tm_mon = input.Month;
    this->mmseDateValue.tm_year = input.Year;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSEOrientation(bool input) {
    this->mmseOrientation = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSEOrientationValue(String^ input) {
    this->mmseOrientationValue = int::Parse(input);
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSELearning(bool input) {
    this->mmseLearning = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSELearningValue(String^ input) {
    this->mmseLearningValue = int::Parse(input);
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSECalcule(bool input) {
    this->mmseCalcule = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSECalculeValue(String^ input) {
    this->mmseCalculeValue = int::Parse(input);
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSEMemory(bool input) {
    this->mmseMemory = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSEMemoryValue(String^ input) {
    this->mmseMemoryValue = int::Parse(input);
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSELanguage(bool input) {
    this->mmseLanguage = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSELanguageValue(String^ input) {
    this->mmseLanguageValue = int::Parse(input);
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSEPraxies(bool input) {
    this->mmsePraxies = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMMSEPraxiesValues(String^ input) {
    this->mmsePraxiesValue = int::Parse(input);
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMOCA(bool input) {
    this->moca = input;
}

void WacomTabletApplication::Patient_NeuropsychologicalAssessment::setMOCAValue(String^ input) {
    this->mocaValue = int::Parse(input);
}