#include "MedicalDataPT2.h"


using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::MedicalDataPT2::UpdateLanguage_MedicalDataPT2Form(String^ language) {

	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/FormTitle"));
	MedicalDataPT2::Text = queryNode(str_title);

	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Yes"));
	ANXIETY_YES_RADIOBUTTON->Text = queryNode(str_yes);

	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/No"));
	ANXIETY_NO_RADIOBUTTON->Text = queryNode(str_no);

	pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Cancel"));
	CANCEL_BUTTON->Text = queryNode(str_cancel);

	pin_ptr<const wchar_t> str_register = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Register"));
	REGISTER_BUTTON->Text = queryNode(str_register);

	pin_ptr<const wchar_t> str_time = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Time"));
	TMT_A_TIME_CHECKBOX->Text = queryNode(str_time);
	TMT_B_TIME_CHECKBOX->Text = queryNode(str_time);
	REY_FIGURE_TIME_CHECKBOX->Text = queryNode(str_time);

	pin_ptr<const wchar_t> str_errors = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Errors"));
	TMT_A_ERRORS_CHECKBOX->Text = queryNode(str_errors);
	TMT_B_ERRORS_CHECKBOX->Text = queryNode(str_errors);
	
	pin_ptr<const wchar_t> str_second = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Seconds"));
	TMT_A_TIME_SEC_LABEL->Text = queryNode(str_second);
	TMT_B_TIME_SEC_LABEL->Text = queryNode(str_second);

	pin_ptr<const wchar_t> str_treatment_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Treatments/Title"));
	TREATEMENT_LIST_LABEL->Text = queryNode(str_treatment_title);

	pin_ptr<const wchar_t> str_treatment_name = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Treatments/Name"));
	TREATEMENT_NAME_LABEL->Text = queryNode(str_treatment_name);

	pin_ptr<const wchar_t> str_treatment_indication = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Treatments/Indication"));
	TREATEMENT_INDICATION_LABEL->Text = queryNode(str_treatment_indication);

	pin_ptr<const wchar_t> str_treatment_posology = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Treatments/Posology"));
	TREATMENT_POSOLOGY_LABEL->Text = queryNode(str_treatment_posology);

	pin_ptr<const wchar_t> str_treatment_date = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/Treatments/Date"));
	TREATEMENT_DATE_LABEL->Text = queryNode(str_treatment_date);

	pin_ptr<const wchar_t> str_pseval_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/Title"));
	NEUROPSYCOLOGIC_EVALUATION_LABEL->Text = queryNode(str_pseval_title);
	
	pin_ptr<const wchar_t> str_aidl = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/IADL"));
	IADL_CHECKBOX->Text = queryNode(str_aidl);

	pin_ptr<const wchar_t> str_mmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/MMSE"));
	MMSE_CHECKBOX->Text = queryNode(str_mmse);
	
	pin_ptr<const wchar_t> str_datemmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/DateMMSE"));
	DATE_MMSE_CHECKBOX->Text = queryNode(str_datemmse);

	pin_ptr<const wchar_t> str_orient_mmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/OrientationMMSE"));
	ORIENTATION_MMSE_CHECKBOX->Text = queryNode(str_orient_mmse);
	
	pin_ptr<const wchar_t> str_calcmmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/CalculMMSE"));
	CALCULE_MMSE_CHECKBOX->Text = queryNode(str_calcmmse);
	
	pin_ptr<const wchar_t> str_langmmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/LanguageMMSE"));
	LANGUAGE_MMSE_CHECKBOX->Text = queryNode(str_langmmse);
	
	pin_ptr<const wchar_t> str_learnmmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/LearningMMSE"));
	LEARNING_MMSE_CHECKBOX->Text = queryNode(str_learnmmse);
	
	pin_ptr<const wchar_t> str_memmmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/MemoryMMSE"));
	MEMORY_MMSE_CHECKBOX->Text = queryNode(str_memmmse);
	
	pin_ptr<const wchar_t> str_praximmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/PraxiesMMSE"));
	PRAXIES_MMSE_CHECKBOX->Text = queryNode(str_praximmse);
	
	pin_ptr<const wchar_t> str_moca = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoEval/MOCA"));
	MOCA_CHECKBOX->Text = queryNode(str_moca);

	pin_ptr<const wchar_t> str_psresume = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Title"));
	NEUROPSYCHOLOGICAL_BALANCE_LABEL->Text = queryNode(str_psresume);

	pin_ptr<const wchar_t> str_psresume_date = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Date"));
	LAST_BALANCE_CHECKBOX->Text = queryNode(str_psresume_date);

	pin_ptr<const wchar_t> str_epis = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Title"));
	EPISODIC_MEMORY_LABEL->Text = queryNode(str_epis);

	pin_ptr<const wchar_t> str_epis_st = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Shortmem"));
	SHORT_MEM_CHECKBOX->Text = queryNode(str_epis_st);

	pin_ptr<const wchar_t> str_epis_f1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Freemem1"));
	FREE_MEM_1_CHECKBOX->Text = queryNode(str_epis_f1);

	pin_ptr<const wchar_t> str_epis_t1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Totalmem1"));
	TOTAL_MEM_1_CHECKBOX->Text = queryNode(str_epis_t1);

	pin_ptr<const wchar_t> str_epis_f2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Freemem2"));
	FREE_MEM_2_CHECKBOX->Text = queryNode(str_epis_f2);

	pin_ptr<const wchar_t> str_epis_t2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Totalmem2"));
	TOTAL_MEM_1_CHECKBOX->Text = queryNode(str_epis_t2);
	
	pin_ptr<const wchar_t> str_epis_f3 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Freemem3"));
	FREE_MEM_3_CHECKBOX->Text = queryNode(str_epis_f3);

	pin_ptr<const wchar_t> str_epis_t3 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Totalmem3"));
	TOTAL_MEM_1_CHECKBOX->Text = queryNode(str_epis_t3);
	
	pin_ptr<const wchar_t> str_epis_rec = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Recognition"));
	RECOGNITION_CHECKBOX->Text = queryNode(str_epis_rec);
	
	pin_ptr<const wchar_t> str_epis_sen = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/Sensibility"));
	SENSIBILITY_CHECKBOX->Text = queryNode(str_epis_sen);
	
	pin_ptr<const wchar_t> str_free_d = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/FreememD"));
	FREE_MEM_D_CHECKBOX->Text = queryNode(str_free_d);

	pin_ptr<const wchar_t> str_total_d = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/TotalmemD"));
	TOTAL_MEM_D_CHECKBOX->Text = queryNode(str_total_d);

	pin_ptr<const wchar_t> str_rlt = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/RLT"));
	RLT_MEM_CHECKBOX->Text = queryNode(str_rlt);

	pin_ptr<const wchar_t> str_rtt = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Episodic/RTT"));
	RTT_MEM_CHECKBOX->Text = queryNode(str_rtt);

	pin_ptr<const wchar_t> str_ex_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Executive/Title"));
	EXECUTIVE_TEST_LABEL->Text = queryNode(str_ex_title);

	pin_ptr<const wchar_t> str_ex_bref = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Executive/Bref"));
	BREF_CHECKBOX->Text = queryNode(str_ex_bref);

	pin_ptr<const wchar_t> str_tmta = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Executive/TMTA"));
	TMT_A_LABEL->Text = queryNode(str_tmta);

	pin_ptr<const wchar_t> str_tmtb = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Executive/TMTB"));
	TMT_B_LABEL->Text = queryNode(str_tmtb);

	pin_ptr<const wchar_t> str_endroit = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Executive/Endroit"));
	EMPAN_ENDROIT_CHECKBOX->Text = queryNode(str_endroit);

	pin_ptr<const wchar_t> str_envers = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Executive/Envers"));
	EMPAN_ENVERS_CHECKBOX->Text = queryNode(str_envers);

	pin_ptr<const wchar_t> str_prax_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Praxies/Title"));
	PRAXIES_LABEL->Text = queryNode(str_prax_title);

	pin_ptr<const wchar_t> str_clock = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Praxies/Clock"));
	CLOCK_PRAXIES_CHECKBOX->Text = queryNode(str_clock);

	pin_ptr<const wchar_t> str_cube = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Praxies/Cube"));
	CUBE_PRAXIES_CHECKBOX->Text = queryNode(str_cube);

	pin_ptr<const wchar_t> str_fail = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Praxies/Fail"));
	CUBE_PRAXIES_FAIL_RADIOBUTTON->Text = queryNode(str_fail);

	pin_ptr<const wchar_t> str_success = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Praxies/Success"));
	CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Text = queryNode(str_success);

	pin_ptr<const wchar_t> str_rey_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Rey/Title"));
	REY_FIGURE_LABEL->Text = queryNode(str_rey_title);

	pin_ptr<const wchar_t> str_rey_copy = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Rey/Copy"));
	REY_FIGURE_COPIE_CHECKBOX->Text = queryNode(str_rey_copy);

	pin_ptr<const wchar_t> str_rey_type = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Rey/Type"));
	REY_FIGURE_TYPE_CHECKBOX->Text = queryNode(str_rey_type);

	pin_ptr<const wchar_t> str_rey_type1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Rey/Type1"));
	REY_FIGURE_TYPE1_RADIOBUTTON->Text = queryNode(str_rey_type1);

	pin_ptr<const wchar_t> str_rey_type2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Rey/Type2"));
	REY_FIGURE_TYPE2_RADIOBUTTON->Text = queryNode(str_rey_type2);

	pin_ptr<const wchar_t> str_psa_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/PsychoAffective/Title"));
	PSYCHO_AFFECTIVE_LABEL->Text = queryNode(str_psa_title);

	pin_ptr<const wchar_t> str_dep_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/PsychoAffective/Depression"));
	DEPRESSION_CHECKBOX->Text = queryNode(str_dep_title);
	
	pin_ptr<const wchar_t> str_anx_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/PsychoAffective/Anxiety"));
	ANXIETY_CHECKBOX->Text = queryNode(str_anx_title);

	pin_ptr<const wchar_t> str_anx_yn_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/PsychoAffective/AnxietyYN"));
	ANXIETY_YN_CHECKBOX->Text = queryNode(str_anx_yn_title);

	pin_ptr<const wchar_t> str_gest_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Gesture/Title"));
	GESTURE_LABEL->Text = queryNode(str_gest_title);

	pin_ptr<const wchar_t> str_gest_sym = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Gesture/Symbolic"));
	SYMBOLIC_GESTURE_CHECKBOX->Text = queryNode(str_gest_sym);

	pin_ptr<const wchar_t> str_gest_mime = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Gesture/Mime"));
	MIME_GESTURE_CHECKBOX->Text = queryNode(str_gest_mime);

	pin_ptr<const wchar_t> str_gest_abs = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Gesture/Abstracts"));
	ABSTRACT_GESTURE_CHECKBOX->Text = queryNode(str_gest_abs);

	pin_ptr<const wchar_t> str_lang_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Language/Title"));
	LANGUAGE_LABEL->Text = queryNode(str_lang_title);

	pin_ptr<const wchar_t> str_fluen_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Language/Fluence"));
	FLUENCES_CHECKBOX->Text = queryNode(str_fluen_title);

	pin_ptr<const wchar_t> str_fluen_m1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Language/Min1"));
	FLUENCSE_1_RADIOBUTTON->Text = queryNode(str_fluen_m1);

	pin_ptr<const wchar_t> str_fluen_m2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Language/Min2"));
	FLUENCSE_2_RADIOBUTTON->Text = queryNode(str_fluen_m2);

	pin_ptr<const wchar_t> str_word = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Language/Words"));
	WORDS_CHECKBOX->Text = queryNode(str_word);

	pin_ptr<const wchar_t> str_do80 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Language/DO80"));
	DO80_CHECKBOX->Text = queryNode(str_do80);

	pin_ptr<const wchar_t> str_anim = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT2Form/NeuroPsychoResume/Language/Animals"));
	ANIMAL_CHECKBOX->Text = queryNode(str_anim);
}