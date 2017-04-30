#include "Patient_Treatments.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace std;

// Constructor
WacomTabletApplication::Patient_Treatments::Patient_Treatments() {}

// Methods
void WacomTabletApplication::Patient_Treatments::printMe(std::ofstream& fout) {
    int i;
    msclr::interop::marshal_context context;
    for (i = 0; i < numTreatments; i++) {
        fout << "Treatment" << (i+1) << " Name: ";
        if (treatmentName[i].compare("") == 0) fout << "Missing";
        else fout << treatmentName[i];
        fout << endl << "Treatment" << (i+1) << " Indication: ";
        if (treatmentIndication[i].compare("") == 0) fout << "Missing";
        else fout << treatmentIndication[i];
        fout << endl << "Treatment" << (i+1) << " Posology: ";
        if (treatmentPosology[i].compare("") == 0) fout << "Missing";
        else fout << treatmentPosology[i];
        fout << endl << "Treatment" << (i+1) << " Start Date: " << treatmentStartDate[i].tm_mday << "/" 
                                                                << treatmentStartDate[i].tm_mon << "/" 
                                                                << treatmentStartDate[i].tm_year << endl;
    }
    for (i = numTreatments; i < MAXTREATMENTS; i++) {
        fout << "Treatment" << (i+1) << " Name: None" << endl;
        fout << "Treatment" << (i+1) << " Indication: None" << endl;
        fout << "Treatment" << (i+1) << " Posology: None" << endl;
        fout << "Treatment" << (i+1) << " Start Date: None" << endl;
    }
}

void WacomTabletApplication::Patient_Treatments::setTreatment(String^ name, String^ indication, String^ posology, System::DateTime startDate) {
    if (numTreatments < 6) {
        msclr::interop::marshal_context context;
        treatmentName[numTreatments] = context.marshal_as<std::string>(name);
        treatmentIndication[numTreatments] = context.marshal_as<std::string>(indication);
        treatmentPosology[numTreatments] = context.marshal_as<std::string>(posology);
        treatmentStartDate[numTreatments].tm_mday = startDate.Day;
        treatmentStartDate[numTreatments].tm_mon = startDate.Month;
        treatmentStartDate[numTreatments].tm_year = startDate.Year;
        numTreatments++;
    }
}