#include "Patient_PsychiatricHistory.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed
// Constructor
WacomTabletApplication::Patient_PsychiatricHistory::Patient_PsychiatricHistory() {}

// Methods
void WacomTabletApplication::Patient_PsychiatricHistory::printPsychiatricHospitalization(std::ofstream& fout) {
    fout << "Hospitalization in a Psychiatric Center: ";
    switch (this->psychiatricHospitalization) {
    case extended_bool::True:
        fout << "Yes\nNumber of Times Hospitalized in a Psychiatric Center: ";
        if (this->howManyTimes) fout << this->howManyTimesValue;
        else fout << MISSING;
        fout << endl << "Last Time Hospitalized in a Psychiatric Center: ";
        if (this->lastTimeHospitalization) {
            fout << this->lastTimeHospitalizationValue.tm_mday << "/";
            fout << this->lastTimeHospitalizationValue.tm_mon << "/";
            fout << this->lastTimeHospitalizationValue.tm_year;
        } else fout << MISSING;
        fout << endl << "Indications From Psychiatric Hospitalization Center: ";
        if (this->indication) fout << this->indicationValue;
        else "None";
        break;
    case extended_bool::False: 
        fout << "No\nNumber of Times Hospitalized in a Psychiatric Center: 0\nLast Time Hospitalized in a Psychiatric Center: None\nIndications From Psychiatric Hospitalization Center: None";
        break;
    default: 
        fout << MISSING << endl;
        fout << "Number of Times Hospitalized in a Psychiatric Center: " << MISSING << endl;
        fout << "Last Time Hospitalized in a Psychiatric Center: " << MISSING << endl;
        fout << "Indications From Psychiatric Hospitalization Center: " << MISSING;
        break;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_PsychiatricHistory::printUsePsychotropes(std::ofstream& fout) {
    fout << "Use of Psychotropes: ";
    switch (this->usePsychotropes) {
    case extended_bool::True:
        fout << "Yes\nLast Time Use of Psychotropes: ";
        if (this->lastTimeUsePsychotropes) {
            fout << this->lastTimeUsePsychotropesValue.tm_mday << "/";
            fout << this->lastTimeUsePsychotropesValue.tm_mon << "/";
            fout << this->lastTimeUsePsychotropesValue.tm_year;
        } else fout << MISSING;
        break;
    case extended_bool::False:
        fout << "No\nLast Time Use of Psychotropes: None";
        break;
    default:
        fout << MISSING << endl;
        fout << "Last Time Use of Psychotropes: " << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_PsychiatricHistory::printTreatmentWithAntidepressants(std::ofstream& fout) {
    fout << "Treatment With Antidepressants: " ;
    switch (this->treatmentWithAntidepressants) {
    case extended_bool::True:
        fout << "Yes\nLast Time Use of Antidepressants: ";
        if (this->lastTimeTreatmentWithAntidepressants) {
            fout << this->lastTimeTreatmentWithAntidepressantsValue.tm_mday << "/";
            fout << this->lastTimeTreatmentWithAntidepressantsValue.tm_mon << "/";
            fout << this->lastTimeTreatmentWithAntidepressantsValue.tm_year;
        } else fout << MISSING;
        break;
    case extended_bool::False:
        fout << "No\nLast Time Use of Antidepressants: None";
        break;
    default:
        fout << MISSING << endl;
        fout << "Last Time Use of Antidepressants: " << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_PsychiatricHistory::printMe(std::ofstream& fout) {
    printPsychiatricHospitalization(fout);
    printUsePsychotropes(fout);
    printTreatmentWithAntidepressants(fout);
}

void WacomTabletApplication::Patient_PsychiatricHistory::setPsychiatricHospitalization(extended_bool input) {
    this->psychiatricHospitalization = input;
}

void WacomTabletApplication::Patient_PsychiatricHistory::setPsychiatricHospitalizationHowManyTimes(bool input, String^ value) {
    this->howManyTimes = input;
    this->howManyTimesValue = int::Parse(value);
}

void WacomTabletApplication::Patient_PsychiatricHistory::setPsychiatricHospitalizationLastTime(bool input, System::DateTime value) {
    this->lastTimeHospitalization = input;
    this->lastTimeHospitalizationValue.tm_mday = value.Day;
    this->lastTimeHospitalizationValue.tm_mon = value.Month;
    this->lastTimeHospitalizationValue.tm_year = value.Year;
}

void WacomTabletApplication::Patient_PsychiatricHistory::setPsychiatricHospitalizationIndication(bool input, String^ value) {
    msclr::interop::marshal_context context;
    this->indication = input;
    this->indicationValue = context.marshal_as<std::string>(value);
}

void WacomTabletApplication::Patient_PsychiatricHistory::setUsePsychotropes(extended_bool input) {
    this->usePsychotropes = input;
}

void WacomTabletApplication::Patient_PsychiatricHistory::setUsePsychotropesLastTime(bool input, System::DateTime value) {
    this->lastTimeUsePsychotropes = input;
    this->lastTimeUsePsychotropesValue.tm_mday = value.Day;
    this->lastTimeUsePsychotropesValue.tm_mon = value.Month;
    this->lastTimeUsePsychotropesValue.tm_year = value.Year;
}

void WacomTabletApplication::Patient_PsychiatricHistory::setTreatmentWithAntidepressants(extended_bool input) {
    this->treatmentWithAntidepressants = input;
}

void WacomTabletApplication::Patient_PsychiatricHistory::setTreatmentWithAntidepressantsLastTime(bool input, System::DateTime value) {
    this->lastTimeTreatmentWithAntidepressants = input;
    this->lastTimeTreatmentWithAntidepressantsValue.tm_mday = value.Day;
    this->lastTimeTreatmentWithAntidepressantsValue.tm_mon = value.Month;
    this->lastTimeTreatmentWithAntidepressantsValue.tm_year = value.Year;
}