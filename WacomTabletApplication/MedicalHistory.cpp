#include "MedicalHistory.h"


using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::MedicalHistory::UpdateLanguage_MedicalHistoryForm(String^ language) {
	
	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/FormTitle"));
	MedicalHistory::Text = queryNode(str_title);


	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/Yes"));
	String^ yes = queryNode(str_yes);
	YES_ALZHEIMER_HISTORY_RADIOBUTTON->Text = yes;
	YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_HEART_HISTORY_RADIOBUTTON->Text = yes;
	YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	//YES_WALKING_TOOLS_RADIOBUTTON->Text = yes;
		

	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/No"));
	String^ no = queryNode(str_no);
	NO_ALZHEIMER_HISTORY_RADIOBUTTON->Text = no;
	NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_HEART_HISTORY_RADIOBUTTON->Text = no;
	NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	//NO_WALKING_TOOLS_RADIOBUTTON->Text = no;

	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_HEART_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
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

	pin_ptr<const wchar_t> str_medinfo = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Title"));
	MEDICAL_INFO_LABEL->Text = queryNode(str_medinfo);
	
	pin_ptr<const wchar_t> str_alzh = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Alzheimer"));
	ALZHEIMER_HISTORY_LABEL->Text = queryNode(str_alzh);
	
	pin_ptr<const wchar_t> str_grand = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Grandparents"));
	GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_grand);
	
	pin_ptr<const wchar_t> str_bro = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Brother"));
	BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_bro);
	
	pin_ptr<const wchar_t> str_uncle = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Uncle"));
	UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_uncle);
	
	pin_ptr<const wchar_t> str_cousin = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Cousin"));
	COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_cousin);
	
	pin_ptr<const wchar_t> str_parent = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Parent"));
	PARENT_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_parent);
	
	pin_ptr<const wchar_t> str_fam_cv = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/FamilyCardioVasc"));
	HEART_FAMILY_HISTORY_LABEL->Text = queryNode(str_fam_cv);
	
	pin_ptr<const wchar_t> str_fam_cv_m = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Male"));
	MALE_HEART_HISTORY_CHECKBOX->Text = queryNode(str_fam_cv_m);
	
	pin_ptr<const wchar_t> str_fam_cv_f = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Female"));
	FEMALE_HEART_HISTORY_CHECKBOX->Text = queryNode(str_fam_cv_f);
	
	pin_ptr<const wchar_t> str_per_cv = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/PersonalCardioVasc"));
	HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_per_cv);
	
	pin_ptr<const wchar_t> str_infarction = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Infarction"));
	INFARCTION_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_infarction);
	
	pin_ptr<const wchar_t> str_bypass = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Bypass"));
	BYPASS_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_bypass);
	
	pin_ptr<const wchar_t> str_angio = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Angioplasty"));
	ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_angio);
	
	pin_ptr<const wchar_t> str_arthe = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Artheriopatie"));
	ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_arthe);
	
	pin_ptr<const wchar_t> str_inssuf = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Inssuficiency"));
	INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_inssuf);

	pin_ptr<const wchar_t> str_fibri = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Fibrillation"));
	FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_fibri);
	
	pin_ptr<const wchar_t> str_cva = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/CVA"));
	CVA_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_cva);
	
	pin_ptr<const wchar_t> str_cva_t = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/CVAType"));
	CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_cva_t);
	
	pin_ptr<const wchar_t> str_isch = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Ischemic"));
	ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = queryNode(str_isch);
	
	pin_ptr<const wchar_t> str_hemor = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Hemorrhagic"));
	HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = queryNode(str_hemor);
	
	pin_ptr<const wchar_t> str_dontknow = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/DontKnow"));
	DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = queryNode(str_dontknow);
}

void WacomTabletApplication::MedicalHistory::completePatientInformationObject() {
    // Alzheimer History
    if (YES_ALZHEIMER_HISTORY_RADIOBUTTON->Checked) {
        myPatient->medicalHistory.setAlzheimerHistory(extended_bool::True);

        if (GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Checked) myPatient->medicalHistory.setAlzheimerHistoryGrandparents(extended_bool::True);
        else myPatient->medicalHistory.setAlzheimerHistoryGrandparents(extended_bool::False);

        if (PARENT_ALZHEIMER_HISTORY_CHECKBOX->Checked) myPatient->medicalHistory.setAlzheimerHistoryParents(extended_bool::True);
        else myPatient->medicalHistory.setAlzheimerHistoryParents(extended_bool::False);

        if (UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Checked) myPatient->medicalHistory.setAlzheimerHistoryParentsSiblings(extended_bool::True);
        else myPatient->medicalHistory.setAlzheimerHistoryParentsSiblings(extended_bool::False);

        if (BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Checked) myPatient->medicalHistory.setAlzheimerHistorySiblings(extended_bool::True);
        else myPatient->medicalHistory.setAlzheimerHistorySiblings(extended_bool::False);

        if (COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Checked) myPatient->medicalHistory.setAlzheimerHistoryCousins(extended_bool::True);
        else myPatient->medicalHistory.setAlzheimerHistoryCousins(extended_bool::False);

    } else if (NO_ALZHEIMER_HISTORY_RADIOBUTTON->Checked) {
        myPatient->medicalHistory.setAlzheimerHistory(extended_bool::False);
        myPatient->medicalHistory.setAlzheimerHistoryGrandparents(extended_bool::False);
        myPatient->medicalHistory.setAlzheimerHistoryParents(extended_bool::False);
        myPatient->medicalHistory.setAlzheimerHistoryParentsSiblings(extended_bool::False);
        myPatient->medicalHistory.setAlzheimerHistorySiblings(extended_bool::False);
        myPatient->medicalHistory.setAlzheimerHistoryCousins(extended_bool::False);
    } else {
        myPatient->medicalHistory.setAlzheimerHistory(extended_bool::Missing);
        myPatient->medicalHistory.setAlzheimerHistoryGrandparents(extended_bool::Missing);
        myPatient->medicalHistory.setAlzheimerHistoryParents(extended_bool::Missing);
        myPatient->medicalHistory.setAlzheimerHistoryParentsSiblings(extended_bool::Missing);
        myPatient->medicalHistory.setAlzheimerHistorySiblings(extended_bool::Missing);
        myPatient->medicalHistory.setAlzheimerHistoryCousins(extended_bool::Missing);

    }

    // Heart Disease History
    if (YES_HEART_HISTORY_RADIOBUTTON->Checked) {
        myPatient->medicalHistory.setHeartProblemHistory(extended_bool::True);

        if (MALE_HEART_HISTORY_CHECKBOX->Checked) myPatient->medicalHistory.setHeartProblemHistoryMale(extended_bool::True);
        else myPatient->medicalHistory.setHeartProblemHistoryMale(extended_bool::False);

        if (FEMALE_HEART_HISTORY_CHECKBOX->Checked) myPatient->medicalHistory.setHeartProblemHistoryFemale(extended_bool::True);
        else myPatient->medicalHistory.setHeartProblemHistoryFemale(extended_bool::False);

    } else if(NO_HEART_HISTORY_RADIOBUTTON->Checked) {
        myPatient->medicalHistory.setHeartProblemHistory(extended_bool::False);
        myPatient->medicalHistory.setHeartProblemHistoryMale(extended_bool::False);
        myPatient->medicalHistory.setHeartProblemHistoryFemale(extended_bool::False);

    } else {
        myPatient->medicalHistory.setHeartProblemHistory(extended_bool::Missing);
        myPatient->medicalHistory.setHeartProblemHistoryMale(extended_bool::Missing);
        myPatient->medicalHistory.setHeartProblemHistoryFemale(extended_bool::Missing);

    }

    // Cardiovascular Personal History
    // Myocardial Infarction
    if (YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setMyocardialInfarction(extended_bool::True);
    else if (NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setMyocardialInfarction(extended_bool::False);
    else myPatient->medicalHistory.setMyocardialInfarction(extended_bool::Missing);

    // Coronary Bypass
    if (YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setCoronaryBypass(extended_bool::True);
    else if (NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setCoronaryBypass(extended_bool::False);
    else myPatient->medicalHistory.setCoronaryBypass(extended_bool::Missing);

    // Coronary Angioplasty
    if (YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setCoronaryAngioplasty(extended_bool::True);
    else if (NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setCoronaryAngioplasty(extended_bool::False);
    else myPatient->medicalHistory.setCoronaryAngioplasty(extended_bool::Missing);

    // Lower Limbs Arterial Disease
    if (YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setLowerLimbsArterialDisease(extended_bool::True);
    else if (NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setLowerLimbsArterialDisease(extended_bool::False);
    else myPatient->medicalHistory.setLowerLimbsArterialDisease(extended_bool::Missing);
    
    // Heart Failure
    if (YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setHeartFailure(extended_bool::True);
    else if (NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setHeartFailure(extended_bool::False);
    else myPatient->medicalHistory.setHeartFailure(extended_bool::Missing);
    
    // CVA
    if (YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) {
        myPatient->medicalHistory.setCVA(extended_bool::True);
        if (ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setCVAType(CVAType::Ischemic);
        else if (HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setCVAType(CVAType::Hemorrhagic);
        else if (DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) myPatient->medicalHistory.setCVAType(CVAType::Unknown);

    } else if (NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) {
        myPatient->medicalHistory.setCVA(extended_bool::False);
        myPatient->medicalHistory.setCVAType(CVAType::None);

    } else {
        myPatient->medicalHistory.setCVA(extended_bool::Missing);
        myPatient->medicalHistory.setCVAType(CVAType::Missing);
    }
}