#include "Patient_DataM12.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

#pragma managed

// Constructor
WacomTabletApplication::Patient_DataM12::Patient_DataM12() {}

// Methods
void WacomTabletApplication::Patient_DataM12::printSurgery(std::ofstream& fout) {
    fout << "Surgery (M12): ";
    switch (this->surgery) {
    case extended_bool::True:
        fout << "Yes" << endl;
        fout << "Surgery Detail (M12): " << this->surgeryDetail;
        break;
    case extended_bool::False:
        fout << "No" << endl;
        fout << "Surgery Detail (M12): None";
        break;
    default:
        fout << MISSING << endl;
        fout << "Surgery Detail (M12): " << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_DataM12::printHospitalization(std::ofstream& fout) {
    fout << "Hospitalization (M12):";
    switch (this->hospitalization) {
    case extended_bool::True:
        fout << "Yes" << endl;
        fout << "Hospitalization Detail (M12): " << this->hospitalizationDetail;
        break;
    case extended_bool::False:
        fout << "No" << endl;
        fout << "Hospitalization Detail (M12): None";
        break;
    default:
        fout << MISSING << endl;
        fout << "Hospitalization Detail (M12): " << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_DataM12::printPathology(std::ofstream& fout) {
    fout << "Appearance of a Pathology (M12): ";
    switch (this->pathology) {
    case extended_bool::True:
        fout << "Yes" << endl;
        fout << "Appearance of a Pathology Details (M12): " << this->pathologyDetail;
        break;
    case extended_bool::False:
        fout << "No" << endl;
        fout << "Appearance of a Pathology Details (M12): None";
        break;
    default:
        fout << MISSING << endl;
        fout << "Appearance of a Pathology Details (M12): " << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_DataM12::printNewDiagnostic(std::ofstream& fout) {
    fout << "New Diagnostic (M12): ";
    switch (this->newDiagnostic) {
    case extended_bool::True:
        fout << "Yes" << endl;
        fout << "New Diagnostic Details (M12): " << this->newDiagnosticDetail;
        break;
    case extended_bool::False:
        fout << "No" << endl;
        fout << "New Diagnostic Details (M12): None";
        break;
    default:
        fout << MISSING << endl;
        fout << "New Diagnostic Details (M12): " << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_DataM12::printNewTreatment(std::ofstream& fout) {
    fout << "New Treatment: ";
    switch (this->newTreatment) {
    case extended_bool::True:
        fout << "Yes" << endl;
        fout << "New Treatment (M12): " << this->newTreatmentDetail;
        break;
    case extended_bool::False:
        fout << "No" << endl;
        fout << "New Treatment (M12): None";
        break;
    default:
        fout << MISSING << endl;
        fout << "New Treatment (M12): " << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_DataM12::printAlcohol(std::ofstream& fout) {
    fout << "Important Change in Alcohol Consumption (M12): ";
    switch (this->alcohol) {
    case extended_bool::True:
        fout << "Yes" << endl;
        fout << "Important Change in Alcohol Consumption Details (M12): " << this->alcoholDetail;
        break;
    case extended_bool::False:
        fout << "No" << endl;
        fout << "Important Change in Alcohol Consumption Details (M12): None";
        break;
    default:
        fout << MISSING << endl;
        fout << "Important Change in Alcohol Consumption Details (M12): " << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_DataM12::printEmotionalState(std::ofstream& fout) {
    fout << "Important Change in Emotional State (M12): ";
    switch (this->emotionalState) {
    case extended_bool::True:
        fout << "Yes" << endl;
        fout << "Important Change in Emotional State (M12): " << this->emotionalStateDetail;
        break;
    case extended_bool::False:
        fout << "No" << endl;
        fout << "Important Change in Emotional State (M12): None";
        break;
    default:
        fout << MISSING << endl;
        fout << "Important Change in Emotional State (M12): " << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_DataM12::printOther(std::ofstream& fout) {
    fout << "Other Important Details (M12): ";
    switch (this->other) {
    case extended_bool::True:
        fout << this->otherDetail;
        break;
    case extended_bool::False:
        fout << "None";
        break;
    default:
        fout << MISSING;
    }
    fout << endl;
}

void WacomTabletApplication::Patient_DataM12::printMe(std::ofstream& fout) {
    printSurgery(fout);
    printHospitalization(fout);
    printPathology(fout);
    printNewDiagnostic(fout);
    printNewTreatment(fout);
    printAlcohol(fout);
    printEmotionalState(fout);
    printOther(fout);
}

void WacomTabletApplication::Patient_DataM12::setSurgery(extended_bool input, String^ detail) {
    msclr::interop::marshal_context context;
    this->surgery = input;
    this->surgeryDetail = context.marshal_as<std::string>(detail);
}

void WacomTabletApplication::Patient_DataM12::setHospitalization(extended_bool input, String^ detail) {
    msclr::interop::marshal_context context;
    this->hospitalization = input;
    this->hospitalizationDetail = context.marshal_as<std::string>(detail);
}

void WacomTabletApplication::Patient_DataM12::setPathology(extended_bool input, String^ detail) {
    msclr::interop::marshal_context context;
    this->pathology = input;
    this->pathologyDetail = context.marshal_as<std::string>(detail);
}

void WacomTabletApplication::Patient_DataM12::setNewDiagnostic(extended_bool input, String^ detail) {
    msclr::interop::marshal_context context;
    this->newDiagnostic = input;
    this->newDiagnosticDetail = context.marshal_as<std::string>(detail);
}

void WacomTabletApplication::Patient_DataM12::setNewTreatment(extended_bool input, String^ detail) {
    msclr::interop::marshal_context context;
    this->newTreatment = input;
    this->newTreatmentDetail = context.marshal_as<std::string>(detail);
}

void WacomTabletApplication::Patient_DataM12::setAlcohol(extended_bool input, String^ detail) {
    msclr::interop::marshal_context context;
    this->alcohol = input;
    this->alcoholDetail = context.marshal_as<std::string>(detail);
}

void WacomTabletApplication::Patient_DataM12::setEmotionalState(extended_bool input, String^ detail) {
    msclr::interop::marshal_context context;
    this->emotionalState = input;
    this->emotionalStateDetail = context.marshal_as<std::string>(detail);
}

void WacomTabletApplication::Patient_DataM12::setOther(extended_bool input, String^ detail) {
    msclr::interop::marshal_context context;
    this->other = input;
    this->otherDetail = context.marshal_as<std::string>(detail);
}