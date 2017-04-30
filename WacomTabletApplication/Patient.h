#pragma once

#include <cstddef> // NULL
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <strsafe.h>
#include <msclr\marshal_cppstd.h>
#include "Dependencies/queryNodes.h"
#include "Patient_BasicInfo.h" 
#include "Patient_LanguageInformation.h"
#include "Patient_SocialSituation.h"
#include "Patient_MedicalHistory.h"
#include "Patient_OtherAntecedents.h"
#include "Patient_RiskFactor.h"
#include "Patient_Treatments.h"
#include "Patient_NeuropsychologicalAssessment.h"
#include "Patient_BilanNeuropsychologic.h"
#include "Patient_CognitiveDiagnosis.h"
#include "Patient_NeurologicHistory.h"
#include "Patient_PsychiatricHistory.h"
#include "Patient_RheumatologicHistory.h"
#include "Patient_DataM12.h"

namespace WacomTabletApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	class Patient {

	public:	
		Patient_BasicInfo basicInfo;
		Patient_LanguageInformation languageInformation;
        Patient_SocialSituation socialSituation;
        Patient_MedicalHistory medicalHistory;
        Patient_OtherAntecedents otherAntecedents;
        Patient_RiskFactor riskFactor;
        Patient_Treatments treatments;
        Patient_NeuropsychologicalAssessment neuropsychologicalAssessment;
        Patient_BilanNeuropsychologic bilanNeuropsychologic;
        Patient_CognitiveDiagnosis cognitiveDiagnosis;
        Patient_NeurologicHistory neurologicHistory;
        Patient_PsychiatricHistory psychiatricHistory;
        Patient_RheumatologicHistory rheumatologicHistory;
        Patient_DataM12 dataM12;

	public:  
        Patient::Patient();
        void Patient::fillMe(const char* path);
		void Patient::printMe(LPCTSTR path);
	    //private: String^ WacomTabletApplication::Patient::translateLanguageToEnglish(String^ nativeLang, String^ appLanguage);
	    //private: String^ WacomTabletApplication::Patient::translateProfessionToEnglish(String^ nativeLang, String^ appLanguage);
	};
}