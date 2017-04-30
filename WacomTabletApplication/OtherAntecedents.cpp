#include "OtherAntecedents.h"

using namespace System;
using namespace System::Windows::Forms;

void WacomTabletApplication::OtherAntecedents::UpdateLanguage_OtherAntecedentsForm(String^ language) {

	//pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/FormTitle"));
	//MedicalHistory::Text = queryNode(str_title);


	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/Yes"));
	String^ yes = queryNode(str_yes);
	YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_CANCER_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_CREATININE_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_FALLING_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_OTHER_HISTORY_RADIOBUTTON->Text = yes;
	YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_WALKING_MORBIDITIES_RADIOBUTTON->Text = yes;
	

	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/No"));
	String^ no = queryNode(str_no);
	NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_CANCER_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_CREATININE_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_FALLING_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_OTHER_HISTORY_RADIOBUTTON->Text = no;
	NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_WALKING_MORBIDITIES_RADIOBUTTON->Text = no;
	//NO_WALKING_TOOLS_RADIOBUTTON->Text = no;

	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_CANCER_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_FALLING_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_OTHER_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_WALKING_MORBIDITIES_RADIOBUTTON->Text = miss;
	//MISSING_WALKING_TOOLS_RADIOBUTTON->Text = miss;

	pin_ptr<const wchar_t> str_register = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/Register"));
	REGISTER_BUTTON->Text = queryNode(str_register);
	pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/Cancel"));
	CANCEL_BUTTON->Text = queryNode(str_cancel);


	/*pin_ptr<const wchar_t> str_soceval = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/Title"));
	SOCIAL_EVALUATION_LABEL->Text = queryNode(str_soceval);

	pin_ptr<const wchar_t> str_livehome = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/LivesHome"));
	LIVES_IN_HOUSE_LABEL->Text = queryNode(str_livehome);

	pin_ptr<const wchar_t> str_goesout = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/GoesOut"));
	GOES_OUT_OFTEN_LABEL->Text = queryNode(str_goesout);

	pin_ptr<const wchar_t> str_yesalone = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/YesAlone"));
	YES_GOES_OUT_ALONE_RADIOBUTTON->Text = queryNode(str_yesalone);

	pin_ptr<const wchar_t> str_yesacc = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/YesAccompanied"));
	YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Text = queryNode(str_yesacc);

	pin_ptr<const wchar_t> str_walkhelp = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/WalkingHelp"));
	WALKING_TOOLS_LABEL->Text = queryNode(str_walkhelp);

	pin_ptr<const wchar_t> str_inhouse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/InHouse"));
	HOUSE_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_inhouse);

	pin_ptr<const wchar_t> str_outside = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/Outside"));
	OUTSIDE_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_outside);

	pin_ptr<const wchar_t> str_cane = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/Cane"));
	CANE_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_cane);

	pin_ptr<const wchar_t> str_walker = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/Walker"));
	WALKER_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_walker);

	pin_ptr<const wchar_t> str_wheelchair = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/SocialEvaluation/Wheelchair"));
	WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_wheelchair);*/

	pin_ptr<const wchar_t> str_othermorb = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Title"));
	OTHER_MORBIDITIES_HISTORIC_LABEL->Text = queryNode(str_othermorb);

	pin_ptr<const wchar_t> str_depression = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Depression"));
	DEPRESSION_MORBIDITIES_LABEL->Text = queryNode(str_depression);

	pin_ptr<const wchar_t> str_nutri = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Undernutrition"));
	UNDERNUTRITION_MORBIDITIES_LABEL->Text = queryNode(str_nutri);

	pin_ptr<const wchar_t> str_breath = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Breath"));
	BREATH_INSSUFICIENCY_MORBIDITIES_LABEL->Text = queryNode(str_breath);

	pin_ptr<const wchar_t> str_kidney = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Kidney"));
	KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL->Text = queryNode(str_kidney);

	pin_ptr<const wchar_t> str_creatinine = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Creatinine"));
	CREATININE_MORBIDITIES_LABEL->Text = queryNode(str_creatinine);

	pin_ptr<const wchar_t> str_creatinine2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Creatinine2"));
	CREATININE_MORBIDITIES_DATE_LABEL->Text = queryNode(str_creatinine2);

	pin_ptr<const wchar_t> str_cancer = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Cancer"));
	CANCER_MORBIDITIES_LABEL->Text = queryNode(str_cancer);

	pin_ptr<const wchar_t> str_cancer2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Cancer2"));
	CANCER_MORBIDITIES_DETAIL_LABEL->Text = queryNode(str_cancer2);

	pin_ptr<const wchar_t> str_walk = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Walking"));
	WALKING_MORBIDITIES_LABEL->Text = queryNode(str_walk);

	pin_ptr<const wchar_t> str_falls = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/Falls"));
	FALLING_MORBIDITIES_LABEL->Text = queryNode(str_falls);

	pin_ptr<const wchar_t> str_fallsap = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherMorbidities/FallsAp"));
	FALLING_APPREHENSION_MORBIDITIES_LABEL->Text = queryNode(str_fallsap);

	pin_ptr<const wchar_t> str_otherant = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/OtherAntecedents"));
	OTHER_HISTORY_LABEL->Text = queryNode(str_otherant);
}

void WacomTabletApplication::OtherAntecedents::completePatientInformationObject() {

    // Depression Treatment History
    if (YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setDepressionTreatmentHistory(extended_bool::True);
    else if (NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setDepressionTreatmentHistory(extended_bool::False);
    else myPatient->otherAntecedents.setDepressionTreatmentHistory(extended_bool::Missing);

    // Malnutrition
    if (YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setMalnutrition(extended_bool::True);
    else if (NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setMalnutrition(extended_bool::False);
    else myPatient->otherAntecedents.setMalnutrition(extended_bool::Missing);
    
    // Breath Insufficiency
    if (YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setBreathInsufficiency(extended_bool::True);
    else if (NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setBreathInsufficiency(extended_bool::False);
    else myPatient->otherAntecedents.setBreathInsufficiency(extended_bool::Missing);

    // Kidney Insufficiency
    if (YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setKidneyInsufficiency(extended_bool::True);
    else if (NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setKidneyInsufficiency(extended_bool::False);
    else myPatient->otherAntecedents.setKidneyInsufficiency(extended_bool::Missing);

    // Creatinine Previous Dosage
    if (YES_CREATININE_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setCreatininePreviousDosage(extended_bool::True, CREATININE_MORBIDITIES_DATE_TEXTBOX->Text);
    else if (NO_CREATININE_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setCreatininePreviousDosage(extended_bool::False, "");
    else myPatient->otherAntecedents.setCreatininePreviousDosage(extended_bool::Missing, "");
    myPatient->otherAntecedents.setCreatininePreviousDosageDate(CREATININE_MORBIDITIES_DATE_DATEPICKER->Value);

    // Cancer History
    if (YES_CANCER_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setCancerHistory(extended_bool::True, CANCER_DETAIL_TEXTBOX->Text);
    else if (NO_CANCER_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setCancerHistory(extended_bool::False, "");
    else myPatient->otherAntecedents.setCancerHistory(extended_bool::Missing, "");

    // Walking Problems
    if (YES_WALKING_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setProblemsWalking(extended_bool::True);
    else if (NO_WALKING_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setProblemsWalking(extended_bool::False);
    else myPatient->otherAntecedents.setProblemsWalking(extended_bool::Missing);

    // Recent Falls
    if (YES_FALLING_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setRecentFalls(extended_bool::True);
    else if (NO_FALLING_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setRecentFalls(extended_bool::False);
    else myPatient->otherAntecedents.setRecentFalls(extended_bool::Missing);

    // Fall Trauma
    if (YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setFallTrauma(extended_bool::True);
    else if (NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Checked) myPatient->otherAntecedents.setFallTrauma(extended_bool::False);
    else myPatient->otherAntecedents.setFallTrauma(extended_bool::Missing);

    // Other
    if (YES_OTHER_HISTORY_RADIOBUTTON->Checked) myPatient->otherAntecedents.setOther(extended_bool::True, OTHER_HISTORY_TEXTBOX->Text);
    else if (NO_OTHER_HISTORY_RADIOBUTTON->Checked) myPatient->otherAntecedents.setOther(extended_bool::False, "");
    else myPatient->otherAntecedents.setOther(extended_bool::Missing, "");
}