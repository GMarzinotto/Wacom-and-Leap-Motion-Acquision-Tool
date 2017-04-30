#include "Patient_BilanNeuropsychologic.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed

// Constructor
WacomTabletApplication::Patient_BilanNeuropsychologic::Patient_BilanNeuropsychologic() {}

// Methods
void WacomTabletApplication::Patient_BilanNeuropsychologic::printDateLastBilan(std::ofstream& fout) {
    fout << "Date Last Bilan: ";
    if (this->dateLastBilan) {
        fout << this->dateLastBilanValue.tm_mday << "/";
        fout << this->dateLastBilanValue.tm_mon << "/";
        fout << this->dateLastBilanValue.tm_year;
    } else {
        fout << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::printEpisodicMemory(std::ofstream& fout) {
    fout << "Short Memory: ";
    if (this->shortMemory) fout << this->shortMemoryValue;
    else fout << MISSING;

    // Free Memory and Total Memory
    for (int i = 0; i < 3; i++) {
        fout << endl << "Free Memory " << (i + 1) << ": ";
        if (this->freeMemory[i]) fout << this->freeMemoryValue[i];
        else fout << MISSING;
        fout << endl << "Total Memory " << (i + 1) << ": ";
        if (this->totalMemory[i]) fout << this->totalMemoryValue[i];
        else fout << MISSING;
    }
    fout << endl << "Recognition: ";
    if (this->recognition) fout << this->recognitionValue;
    else fout << MISSING;
    fout << endl << "Sensibility: ";
    if (this->sensibility) fout << this->sensibilityValue;
    else fout << MISSING;
    fout << endl << "Delayed Free Recall: ";
    if (this->delayedFreeRecall) fout << this->delayedFreeRecallValue;
    else fout << MISSING;
    fout << endl << "Delayed Total Recall: ";
    if (this->delayedTotalRecall) fout << this->delayedTotalRecallValue;
    else fout << MISSING;
    fout << endl << "RLT: ";
    if (this->rlt) fout << this->rltValue;
    else fout << MISSING;
    fout << endl << "RTT: ";
    if (this->rtt) fout << this->rttValue;
    else fout << MISSING;
    fout << endl;
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::printExecutiveTests(std::ofstream& fout) {
    fout << "BREF: ";
    if (this->bref) fout << this->brefValue;
    else fout << MISSING;
    fout << endl << "TMT A Time: ";
    if (this->tmtATime) fout << this->tmtATimeValue;
    else fout << MISSING;
    fout << endl << "TMT A Errors: ";
    if(this->tmtAErrors) fout << this->tmtAErrorsValue; 
    else fout << MISSING;
    fout << endl << "TMT B Time: ";
    if (this->tmtBTime) fout << this->tmtBTimeValue;
    else fout << MISSING;
    fout << endl << "TMT B Errors: ";
    if (this->tmtBErrors) fout << this->tmtBErrorsValue;
    else fout << MISSING;
    fout << endl << "EMPAN ENDROIT: ";
    if (this->empanENDROIT) fout << this->empanENDROITValue;
    else fout << MISSING;
    fout << endl << "EMPANT ENVERS: ";
    if (this->empanENVERS) fout << this->empanENVERSValue;
    else fout << MISSING;
    fout << endl;
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::printPraxies(std::ofstream& fout) {
    fout << "Clock: ";
    if (this->clock) fout << this->clockValue;
    else fout << MISSING;
    fout << endl << "Cube: ";
    if (this->cube) {
        switch (this->cubeValue) {
        case cubePraxiesType::Success: fout << "Success"; break;
        case cubePraxiesType::Fail: fout << "Fail"; break;
        default: fout << MISSING;
        }
    } else fout << MISSING;
    fout << endl;
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::printReyFigure(std::ofstream& fout) {
    fout << "Rey Figure Copy: ";
    if (this->reyCopy) fout << this->reyCopyValue;
    else fout << MISSING;
    fout << endl << "Rey Figure Time: ";
    if (this->reyTime) fout << this->reyTimeValue;
    else fout << MISSING;
    fout << endl << "Rey Figure Type: ";
    if (this->reyType) {
        switch (this->reyTypeValue) {
        case reyFigureType::Type_1: fout << "Type_1"; break;
        case reyFigureType::Type_2: fout << "Type_2"; break;
        default: fout << MISSING;
        }
    } else fout << MISSING;
    fout << endl;
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::printPsychoAffectiveState(std::ofstream& fout) {
    fout << "Depression: ";
    if (this->depression) fout << this->depressionValue;
    else fout << MISSING;
    fout << endl << "Anxiety Score: ";
    if (this->anxietyScore) fout << this->anxietyScoreValue;
    else fout << MISSING;
    fout << endl << "Anxiety YES/NO: ";
    if(this->anxietyYN) printExtendedBool(fout, this->anxietyYNValue);
    else fout << MISSING << endl;
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::printGestures(std::ofstream& fout) {
    fout << "Symbolic Gestures: ";
    if (this->symbolicGestures) fout << this->symbolicGesturesValue;
    else fout << MISSING;
    fout << endl << "Mime Gestures: ";
    if (this->mimeGestures) fout << this->mimeGesturesValue;
    else fout << MISSING;
    fout << endl << "Abstract Gestures: ";
    if (this->abstractGestures) fout << this->abstractGesturesValue;
    else fout << MISSING;
    fout << endl;
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::printLanguage(std::ofstream& fout) {
    fout << "Fluences Type: ";
    if (this->fluences) {
        switch (this->fluencesValue) {
        case fluencesType::One_min: fout << "1_min"; break;
        case fluencesType::Two_min: fout << "2_min"; break;
        default: fout << MISSING;
        }
    } else fout << MISSING;
    fout << endl << "Words: ";
    if (this->words) fout << this->wordsValue;
    else fout << MISSING;
    fout << endl << "DO80: ";
    if (this->do80) fout << this->do80Value;
    else fout << MISSING;
    fout << endl << "Animals: ";
    if (this->animals) fout << this->animalsValue;
    else fout << MISSING;
    fout << endl;
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::printMe(std::ofstream& fout){
    printDateLastBilan(fout);
    printEpisodicMemory(fout);
    printExecutiveTests(fout);
    printPraxies(fout);
    printReyFigure(fout);
    printPsychoAffectiveState(fout);
    printGestures(fout);
    printLanguage(fout);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setDateLastBilan(bool input, System::DateTime date) {
    this->dateLastBilan = input;
    this->dateLastBilanValue.tm_mday = date.Day;
    this->dateLastBilanValue.tm_mon = date.Month;
    this->dateLastBilanValue.tm_year = date.Year;
}

// Methods: Episodic Memory
void WacomTabletApplication::Patient_BilanNeuropsychologic::setShortMemory(bool input, String^ value) {
    this->shortMemory = input;
    this->shortMemoryValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setFreeMemory(bool input1, String^ value1, bool input2, String^ value2, bool input3, String^ value3) {
    this->freeMemory[0] = input1;
    this->freeMemory[1] = input2;
    this->freeMemory[2] = input3;
    this->freeMemoryValue[0] = int::Parse(value1);
    this->freeMemoryValue[1] = int::Parse(value2);
    this->freeMemoryValue[2] = int::Parse(value3);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setTotalMemory(bool input1, String^ value1, bool input2, String^ value2, bool input3, String^ value3) {
    this->totalMemory[0] = input1;
    this->totalMemory[1] = input2;
    this->totalMemory[2] = input3;
    this->totalMemoryValue[0] = int::Parse(value1);
    this->totalMemoryValue[1] = int::Parse(value2);
    this->totalMemoryValue[2] = int::Parse(value3);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setRecognition(bool input, String^ value) {
    this->recognition = input;
    this->recognitionValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setSensibility(bool input, String^ value) {
    this->sensibility = input;
    this->sensibilityValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setDelayedFreeRecall(bool input, String^ value) {
    this->delayedFreeRecall = input;
    this->delayedFreeRecallValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setDelayedTotalRecall(bool input, String^ value) {
    this->delayedTotalRecall = input;
    this->delayedTotalRecallValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setRLT(bool input, String^ value) {
    this->rlt = input;
    this->rltValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setRTT(bool input, String^ value) {
    this->rtt = input;
    this->rttValue = int::Parse(value);
}

// Executive Tests
void WacomTabletApplication::Patient_BilanNeuropsychologic::setBREF(bool input, String^ value) {
    this->bref = input;
    this->brefValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setTMTA(bool time, String^ timeValue, bool errors, String^ errorsValue) {
    this->tmtATime = time;
    this->tmtATimeValue = int::Parse(timeValue);
    this->tmtAErrors = errors;
    this->tmtAErrorsValue = int::Parse(errorsValue);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setTMTB(bool time, String^ timeValue, bool errors, String^ errorsValue) {
    this->tmtBTime = time;
    this->tmtBTimeValue = int::Parse(timeValue);
    this->tmtBErrors = errors;
    this->tmtBErrorsValue = int::Parse(errorsValue);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setEMPANENDROIT(bool input, String^ value) {
    this->empanENDROIT = input;
    this->empanENDROITValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setEMPANENVERS(bool input, String^ value) {
    this->empanENVERS = input;
    this->empanENVERSValue = int::Parse(value);
}

// Praxies
void WacomTabletApplication::Patient_BilanNeuropsychologic::setClock(bool input, String^ value) {
    this->clock = input;
    this->clockValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setCube(bool input, cubePraxiesType value) {
    this->cube = input;
    this->cubeValue = value;
}

// Rey Figure
void WacomTabletApplication::Patient_BilanNeuropsychologic::setReyCopy(bool input, String^ value) {
    this->reyCopy = input;
    this->reyCopyValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setReyTime(bool input, String^ value) {
    this->reyTime = input;
    this->reyTimeValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setReyType(bool input, reyFigureType value) {
    this->reyType = input;
    this->reyTypeValue = value;
}

// Psycho-affective State
void WacomTabletApplication::Patient_BilanNeuropsychologic::setDepression(bool input, String^ value) {
    this->depression = input;
    this->depressionValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setAnxietyScore(bool input, String^ value) {
    this->anxietyScore = input;
    this->anxietyScoreValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setAnxietyYN(bool input, extended_bool value) {
    this->anxietyYN = input;
    this->anxietyYNValue = value;
}

// Gestures
void WacomTabletApplication::Patient_BilanNeuropsychologic::setSymbolicGestures(bool input, String^ value) {
    this->symbolicGestures = input;
    this->symbolicGesturesValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setMimeGestures(bool input, String^ value) {
    this->mimeGestures = input;
    this->mimeGesturesValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setAbstractGestures(bool input, String^ value) {
    this->abstractGestures = input;
    this->abstractGesturesValue = int::Parse(value);
}

// Language
void WacomTabletApplication::Patient_BilanNeuropsychologic::setFluences(bool input, fluencesType value) {
    this->fluences = input;
    this->fluencesValue = value;
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setWords(bool input, String^ value) {
    this->words = input;
    this->wordsValue = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setDO80(bool input, String^ value) {
    this->do80 = input;
    this->do80Value = int::Parse(value);
}

void WacomTabletApplication::Patient_BilanNeuropsychologic::setAnimals(bool input, String^ value) {
    this->animals = input;
    this->animalsValue = int::Parse(value);
}