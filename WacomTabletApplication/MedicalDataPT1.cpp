#include "MedicalDataPT1.h"


using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::MedicalDataPT1::UpdateLanguage_MedicalDataPT1Form(String^ language) {
	
	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/FormTitle"));
	MedicalDataPT1::Text = queryNode(str_title);


	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/Yes"));
	String^ yes = queryNode(str_yes);
	YES_ALZHEIMER_HISTORY_RADIOBUTTON->Text = yes;
	YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_CANCER_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_CREATININE_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_FALLING_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_HEART_HISTORY_RADIOBUTTON->Text = yes;
	YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = yes;
	YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_LIVES_IN_HOUSE_RADIOBUTTON->Text = yes;
	YES_OTHER_HISTORY_RADIOBUTTON->Text = yes;
	YES_RISK_FACTOR_DIABETES_RADIOBUTTON->Text = yes;
	YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Text = yes;
	YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Text = yes;
	YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_WALKING_MORBIDITIES_RADIOBUTTON->Text = yes;
	YES_WALKING_TOOLS_RADIOBUTTON->Text = yes;
		

	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/No"));
	String^ no = queryNode(str_no);
	NO_ALZHEIMER_HISTORY_RADIOBUTTON->Text = no;
	NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_CANCER_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_CREATININE_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_FALLING_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_HEART_HISTORY_RADIOBUTTON->Text = no;
	NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = no;
	NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_LIVES_IN_HOUSE_RADIOBUTTON->Text = no;
	NO_OTHER_HISTORY_RADIOBUTTON->Text = no;
	NO_RISK_FACTOR_DIABETES_RADIOBUTTON->Text = no;
	NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Text = no;
	NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Text = no;
	NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_WALKING_MORBIDITIES_RADIOBUTTON->Text = no;
	NO_WALKING_TOOLS_RADIOBUTTON->Text = no;

	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_CANCER_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_FALLING_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_HEART_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Text = miss;
	MISSING_OTHER_HISTORY_RADIOBUTTON->Text = miss;
	MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = miss;
	MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->Text = miss;
	MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Text = miss;
	MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Text = miss;
	MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = miss;
	MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_WALKING_MORBIDITIES_RADIOBUTTON->Text = miss;
	MISSING_WALKING_TOOLS_RADIOBUTTON->Text = miss;

	pin_ptr<const wchar_t> str_register = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/Register"));
	REGISTER_BUTTON->Text = queryNode(str_register);
	pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/Cancel"));
	CANCEL_BUTTON->Text = queryNode(str_cancel);


	pin_ptr<const wchar_t> str_soceval = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/Title"));
	SOCIAL_EVALUATION_LABEL->Text = queryNode(str_soceval);

	pin_ptr<const wchar_t> str_livehome = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/LivesHome"));
	LIVES_IN_HOUSE_LABEL->Text = queryNode(str_livehome);

	pin_ptr<const wchar_t> str_goesout = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/GoesOut"));
	GOES_OUT_OFTEN_LABEL->Text = queryNode(str_goesout);

	pin_ptr<const wchar_t> str_yesalone = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/YesAlone"));
	YES_GOES_OUT_ALONE_RADIOBUTTON->Text = queryNode(str_yesalone);

	pin_ptr<const wchar_t> str_yesacc = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/YesAccompanied"));
	YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Text = queryNode(str_yesacc);

	pin_ptr<const wchar_t> str_walkhelp = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/WalkingHelp"));
	WALKING_TOOLS_LABEL->Text = queryNode(str_walkhelp);

	pin_ptr<const wchar_t> str_inhouse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/InHouse"));
	HOUSE_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_inhouse);

	pin_ptr<const wchar_t> str_outside = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/Outside"));
	OUTSIDE_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_outside);

	pin_ptr<const wchar_t> str_cane = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/Cane"));
	CANE_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_cane);

	pin_ptr<const wchar_t> str_walker = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/Walker"));
	WALKER_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_walker);

	pin_ptr<const wchar_t> str_wheelchair = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/SocialEvaluation/Wheelchair"));
	WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Text = queryNode(str_wheelchair);

	pin_ptr<const wchar_t> str_othermorb = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Title"));
	OTHER_MORBIDITIES_HISTORIC_LABEL->Text = queryNode(str_othermorb);

	pin_ptr<const wchar_t> str_depression = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Depression"));
	DEPRESSION_MORBIDITIES_LABEL->Text = queryNode(str_depression);

	pin_ptr<const wchar_t> str_nutri = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Undernutrition"));
	UNDERNUTRITION_MORBIDITIES_LABEL->Text = queryNode(str_nutri);

	pin_ptr<const wchar_t> str_breath = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Breath"));
	BREATH_INSSUFICIENCY_MORBIDITIES_LABEL->Text = queryNode(str_breath);

	pin_ptr<const wchar_t> str_kidney = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Kidney"));
	KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL->Text = queryNode(str_kidney);

	pin_ptr<const wchar_t> str_creatinine = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Creatinine"));
	CREATININE_MORBIDITIES_LABEL->Text = queryNode(str_creatinine);

	pin_ptr<const wchar_t> str_creatinine2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Creatinine2"));
	CREATININE_MORBIDITIES_DATE_LABEL->Text = queryNode(str_creatinine2);

	pin_ptr<const wchar_t> str_cancer = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Cancer"));
	CANCER_MORBIDITIES_LABEL->Text = queryNode(str_cancer);

	pin_ptr<const wchar_t> str_cancer2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Cancer2"));
	CANCER_MORBIDITIES_DETAIL_LABEL->Text = queryNode(str_cancer2);
	
	pin_ptr<const wchar_t> str_walk = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Walking"));
	WALKING_MORBIDITIES_LABEL->Text = queryNode(str_walk);
	
	pin_ptr<const wchar_t> str_falls = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/Falls"));
	FALLING_MORBIDITIES_LABEL->Text = queryNode(str_falls);
	
	pin_ptr<const wchar_t> str_fallsap = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherMorbidities/FallsAp"));
	FALLING_APPREHENSION_MORBIDITIES_LABEL->Text = queryNode(str_fallsap);
	
	pin_ptr<const wchar_t> str_otherant = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/OtherAntecedents"));
	OTHER_HISTORY_LABEL->Text = queryNode(str_otherant);
	
	pin_ptr<const wchar_t> str_medinfo = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Title"));
	MEDICAL_INFO_LABEL->Text = queryNode(str_medinfo);
	
	pin_ptr<const wchar_t> str_alzh = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Alzheimer"));
	ALZHEIMER_HISTORY_LABEL->Text = queryNode(str_alzh);
	
	pin_ptr<const wchar_t> str_grand = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Grandparents"));
	GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_grand);
	
	pin_ptr<const wchar_t> str_bro = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Brother"));
	BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_bro);
	
	pin_ptr<const wchar_t> str_uncle = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Uncle"));
	UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_uncle);
	
	pin_ptr<const wchar_t> str_cousin = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Cousin"));
	COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_cousin);
	
	pin_ptr<const wchar_t> str_parent = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Parent"));
	PARENT_ALZHEIMER_HISTORY_CHECKBOX->Text = queryNode(str_parent);
	
	pin_ptr<const wchar_t> str_fam_cv = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/FamilyCardioVasc"));
	HEART_FAMILY_HISTORY_LABEL->Text = queryNode(str_fam_cv);
	
	pin_ptr<const wchar_t> str_fam_cv_m = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Male"));
	MALE_HEART_HISTORY_CHECKBOX->Text = queryNode(str_fam_cv_m);
	
	pin_ptr<const wchar_t> str_fam_cv_f = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Female"));
	FEMALE_HEART_HISTORY_CHECKBOX->Text = queryNode(str_fam_cv_f);
	
	pin_ptr<const wchar_t> str_per_cv = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/PersonalCardioVasc"));
	HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_per_cv);
	
	pin_ptr<const wchar_t> str_infarction = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Infarction"));
	INFARCTION_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_infarction);
	
	pin_ptr<const wchar_t> str_bypass = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Bypass"));
	BYPASS_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_bypass);
	
	pin_ptr<const wchar_t> str_angio = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Angioplasty"));
	ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_angio);
	
	pin_ptr<const wchar_t> str_arthe = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Artheriopatie"));
	ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_arthe);
	
	pin_ptr<const wchar_t> str_inssuf = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Inssuficiency"));
	INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_inssuf);

	pin_ptr<const wchar_t> str_fibri = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Fibrillation"));
	FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_fibri);
	
	pin_ptr<const wchar_t> str_cva = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/CVA"));
	CVA_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_cva);
	
	pin_ptr<const wchar_t> str_cva_t = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/CVAType"));
	CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL->Text = queryNode(str_cva_t);
	
	pin_ptr<const wchar_t> str_isch = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Ischemic"));
	ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = queryNode(str_isch);
	
	pin_ptr<const wchar_t> str_hemor = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Hemorrhagic"));
	HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = queryNode(str_hemor);
	
	pin_ptr<const wchar_t> str_dontknow = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/DontKnow"));
	DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = queryNode(str_dontknow);
	
	pin_ptr<const wchar_t> str_lifestyle = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/LifeStyle"));
	LIFESTYLE_LABEL->Text = queryNode(str_lifestyle);
	
	pin_ptr<const wchar_t> str_active = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Active"));
	ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = queryNode(str_active);
	ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = queryNode(str_active);

	pin_ptr<const wchar_t> str_stop = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Stop"));
	STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = queryNode(str_stop);
	STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = queryNode(str_stop);
	
	pin_ptr<const wchar_t> str_hyper = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Hypertention"));
	RISK_FACTOR_HYPERTENTION_LABEL->Text = queryNode(str_hyper);
	
	pin_ptr<const wchar_t> str_diabetes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Diabetes"));
	RISK_FACTOR_DIABETES_LABEL->Text = queryNode(str_diabetes);
	
	pin_ptr<const wchar_t> str_hyperlip = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Hyperlipidemia"));
	RISK_FACTOR_HYPERLIPIDEMIA_LABEL->Text = queryNode(str_hyperlip);
	
	pin_ptr<const wchar_t> str_smoking = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Smoking"));
	RISK_FACTOR_SMOKING_LABEL->Text = queryNode(str_smoking);
	
	pin_ptr<const wchar_t> str_dontsmoke = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/DontSmoke"));
	NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = queryNode(str_dontsmoke);
	
	pin_ptr<const wchar_t> str_smokepack = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/NumberPackages"));
	RISK_FACTOR_SMOKING_PACKAGES_LABEL->Text = queryNode(str_smokepack);
	
	pin_ptr<const wchar_t> str_smokeyears = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/NumberYears"));
	RISK_FACTOR_SMOKING_YEARS_LABEL->Text = queryNode(str_smokeyears);
	
	pin_ptr<const wchar_t> str_alcohol = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/Alcohol"));
	RISK_FACTOR_ALCOHOL_LABEL->Text = queryNode(str_alcohol);
	
	pin_ptr<const wchar_t> str_dontdrink = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/DontDrink"));
	NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = queryNode(str_dontdrink);
	
	pin_ptr<const wchar_t> str_numunits = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT1Form/MedicalInfo/NumberUnits"));
	RISK_FACTOR_ALCOHOL_UNITS_LABEL->Text = queryNode(str_numunits);

}