#include "BilanNeuropsychologic.h"

using namespace System;
using namespace System::Windows::Forms;

void WacomTabletApplication::BilanNeuropsychologic::UpdateLanguage_BilanNeuropsychologicForm(String^ language) {

	pin_ptr<const wchar_t> str_time = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Time"));
	TMT_A_TIME_CHECKBOX->Text = queryNode(str_time);
	TMT_B_TIME_CHECKBOX->Text = queryNode(str_time);
	REY_FIGURE_TIME_CHECKBOX->Text = queryNode(str_time);

	pin_ptr<const wchar_t> str_errors = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Errors"));
	TMT_A_ERRORS_CHECKBOX->Text = queryNode(str_errors);
	TMT_B_ERRORS_CHECKBOX->Text = queryNode(str_errors);

	pin_ptr<const wchar_t> str_second = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Seconds"));
	TMT_A_TIME_SEC_LABEL->Text = queryNode(str_second);
	TMT_B_TIME_SEC_LABEL->Text = queryNode(str_second);

	pin_ptr<const wchar_t> str_psresume_date = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Date"));
	LAST_BALANCE_CHECKBOX->Text = queryNode(str_psresume_date);

	pin_ptr<const wchar_t> str_epis = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Title"));
	EPISODIC_MEMORY_LABEL->Text = queryNode(str_epis);

	pin_ptr<const wchar_t> str_epis_st = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Shortmem"));
	SHORT_MEM_CHECKBOX->Text = queryNode(str_epis_st);

	pin_ptr<const wchar_t> str_epis_f1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Freemem1"));
	FREE_MEM_1_CHECKBOX->Text = queryNode(str_epis_f1);

	pin_ptr<const wchar_t> str_epis_t1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Totalmem1"));
	TOTAL_MEM_1_CHECKBOX->Text = queryNode(str_epis_t1);

	pin_ptr<const wchar_t> str_epis_f2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Freemem2"));
	FREE_MEM_2_CHECKBOX->Text = queryNode(str_epis_f2);

	pin_ptr<const wchar_t> str_epis_t2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Totalmem2"));
	TOTAL_MEM_1_CHECKBOX->Text = queryNode(str_epis_t2);

	pin_ptr<const wchar_t> str_epis_f3 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Freemem3"));
	FREE_MEM_3_CHECKBOX->Text = queryNode(str_epis_f3);

	pin_ptr<const wchar_t> str_epis_t3 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Totalmem3"));
	TOTAL_MEM_1_CHECKBOX->Text = queryNode(str_epis_t3);

	pin_ptr<const wchar_t> str_epis_rec = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Recognition"));
	RECOGNITION_CHECKBOX->Text = queryNode(str_epis_rec);

	pin_ptr<const wchar_t> str_epis_sen = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/Sensibility"));
	SENSIBILITY_CHECKBOX->Text = queryNode(str_epis_sen);

	pin_ptr<const wchar_t> str_free_d = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/FreememD"));
	FREE_MEM_D_CHECKBOX->Text = queryNode(str_free_d);

	pin_ptr<const wchar_t> str_total_d = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/TotalmemD"));
	TOTAL_MEM_D_CHECKBOX->Text = queryNode(str_total_d);

	pin_ptr<const wchar_t> str_rlt = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/RLT"));
	RLT_MEM_CHECKBOX->Text = queryNode(str_rlt);

	pin_ptr<const wchar_t> str_rtt = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Episodic/RTT"));
	RTT_MEM_CHECKBOX->Text = queryNode(str_rtt);

	pin_ptr<const wchar_t> str_ex_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Executive/Title"));
	EXECUTIVE_TEST_LABEL->Text = queryNode(str_ex_title);

	pin_ptr<const wchar_t> str_ex_bref = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Executive/Bref"));
	BREF_CHECKBOX->Text = queryNode(str_ex_bref);

	pin_ptr<const wchar_t> str_tmta = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Executive/TMTA"));
	TMT_A_LABEL->Text = queryNode(str_tmta);

	pin_ptr<const wchar_t> str_tmtb = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Executive/TMTB"));
	TMT_B_LABEL->Text = queryNode(str_tmtb);

	pin_ptr<const wchar_t> str_endroit = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Executive/Endroit"));
	EMPAN_ENDROIT_CHECKBOX->Text = queryNode(str_endroit);

	pin_ptr<const wchar_t> str_envers = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Executive/Envers"));
	EMPAN_ENVERS_CHECKBOX->Text = queryNode(str_envers);

	pin_ptr<const wchar_t> str_prax_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Praxies/Title"));
	PRAXIES_LABEL->Text = queryNode(str_prax_title);

	pin_ptr<const wchar_t> str_clock = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Praxies/Clock"));
	CLOCK_PRAXIES_CHECKBOX->Text = queryNode(str_clock);

	pin_ptr<const wchar_t> str_cube = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Praxies/Cube"));
	CUBE_PRAXIES_CHECKBOX->Text = queryNode(str_cube);

	pin_ptr<const wchar_t> str_fail = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Praxies/Fail"));
	CUBE_PRAXIES_FAIL_RADIOBUTTON->Text = queryNode(str_fail);

	pin_ptr<const wchar_t> str_success = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Praxies/Success"));
	CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Text = queryNode(str_success);

	pin_ptr<const wchar_t> str_rey_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Rey/Title"));
	REY_FIGURE_LABEL->Text = queryNode(str_rey_title);

	pin_ptr<const wchar_t> str_rey_copy = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Rey/Copy"));
	REY_FIGURE_COPIE_CHECKBOX->Text = queryNode(str_rey_copy);

	pin_ptr<const wchar_t> str_rey_type = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Rey/Type"));
	REY_FIGURE_TYPE_CHECKBOX->Text = queryNode(str_rey_type);

	pin_ptr<const wchar_t> str_rey_type1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Rey/Type1"));
	REY_FIGURE_TYPE1_RADIOBUTTON->Text = queryNode(str_rey_type1);

	pin_ptr<const wchar_t> str_rey_type2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Rey/Type2"));
	REY_FIGURE_TYPE2_RADIOBUTTON->Text = queryNode(str_rey_type2);

	pin_ptr<const wchar_t> str_psa_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/PsychoAffective/Title"));
	PSYCHO_AFFECTIVE_LABEL->Text = queryNode(str_psa_title);

	pin_ptr<const wchar_t> str_dep_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/PsychoAffective/Depression"));
	DEPRESSION_CHECKBOX->Text = queryNode(str_dep_title);

	pin_ptr<const wchar_t> str_anx_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/PsychoAffective/Anxiety"));
	ANXIETY_CHECKBOX->Text = queryNode(str_anx_title);

	pin_ptr<const wchar_t> str_anx_yn_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/PsychoAffective/AnxietyYN"));
	ANXIETY_YN_CHECKBOX->Text = queryNode(str_anx_yn_title);

	pin_ptr<const wchar_t> str_gest_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Gesture/Title"));
	GESTURE_LABEL->Text = queryNode(str_gest_title);

	pin_ptr<const wchar_t> str_gest_sym = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Gesture/Symbolic"));
	SYMBOLIC_GESTURE_CHECKBOX->Text = queryNode(str_gest_sym);

	pin_ptr<const wchar_t> str_gest_mime = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Gesture/Mime"));
	MIME_GESTURE_CHECKBOX->Text = queryNode(str_gest_mime);

	pin_ptr<const wchar_t> str_gest_abs = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Gesture/Abstracts"));
	ABSTRACT_GESTURE_CHECKBOX->Text = queryNode(str_gest_abs);

	pin_ptr<const wchar_t> str_lang_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Language/Title"));
	LANGUAGE_LABEL->Text = queryNode(str_lang_title);

	pin_ptr<const wchar_t> str_fluen_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Language/Fluence"));
	FLUENCES_CHECKBOX->Text = queryNode(str_fluen_title);

	pin_ptr<const wchar_t> str_fluen_m1 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Language/Min1"));
	FLUENCSE_1_RADIOBUTTON->Text = queryNode(str_fluen_m1);

	pin_ptr<const wchar_t> str_fluen_m2 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Language/Min2"));
	FLUENCSE_2_RADIOBUTTON->Text = queryNode(str_fluen_m2);

	pin_ptr<const wchar_t> str_word = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Language/Words"));
	WORDS_CHECKBOX->Text = queryNode(str_word);

	pin_ptr<const wchar_t> str_do80 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Language/DO80"));
	DO80_CHECKBOX->Text = queryNode(str_do80);

	pin_ptr<const wchar_t> str_anim = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoResume/Language/Animals"));
	ANIMAL_CHECKBOX->Text = queryNode(str_anim);
}

void WacomTabletApplication::BilanNeuropsychologic::completePatientInformationObject() {
    // Date Last Bilan
    myPatient->bilanNeuropsychologic.setDateLastBilan(LAST_BALANCE_CHECKBOX->Checked, LAST_BALANCE_DATEPICKER->Value);

    // Executive Tests
    myPatient->bilanNeuropsychologic.setBREF(BREF_CHECKBOX->Checked, BREF_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setTMTA(TMT_A_TIME_CHECKBOX->Checked, TMT_A_TIME_COUNTER->Text, TMT_A_ERRORS_CHECKBOX->Checked, TMT_A_ERRORS_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setTMTB(TMT_B_TIME_CHECKBOX->Checked, TMT_B_TIME_COUNTER->Text, TMT_B_ERRORS_CHECKBOX->Checked, TMT_B_ERRORS_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setEMPANENDROIT(EMPAN_ENDROIT_CHECKBOX->Checked, EMPAN_ENDROIT_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setEMPANENVERS(EMPAN_ENVERS_CHECKBOX->Checked, EMPAN_ENVERS_COUNTER->Text);

    // Episodic Memory
    myPatient->bilanNeuropsychologic.setShortMemory(SHORT_MEM_CHECKBOX->Checked, SHORT_MEM_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setFreeMemory(FREE_MEM_1_CHECKBOX->Checked, FREE_MEM_1_COUNTER->Text, 
                                                   FREE_MEM_2_CHECKBOX->Checked, FREE_MEM_2_COUNTER->Text,
                                                   FREE_MEM_3_CHECKBOX->Checked, FREE_MEM_3_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setTotalMemory(TOTAL_MEM_1_CHECKBOX->Checked, TOTAL_MEM_1_COUNTER->Text,
                                                    TOTAL_MEM_2_CHECKBOX->Checked, TOTAL_MEM_2_COUNTER->Text,
                                                    TOTAL_MEM_3_CHECKBOX->Checked, TOTAL_MEM_3_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setRecognition(RECOGNITION_CHECKBOX->Checked, RECOGNITION_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setSensibility(SENSIBILITY_CHECKBOX->Checked, SENSIBILITY_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setDelayedFreeRecall(FREE_MEM_D_CHECKBOX->Checked, FREE_MEM_D_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setDelayedTotalRecall(TOTAL_MEM_D_CHECKBOX->Checked, TOTAL_MEM_D_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setRLT(RLT_MEM_CHECKBOX->Checked, RLT_MEM_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setRTT(RTT_MEM_CHECKBOX->Checked, RTT_MEM_COUNTER->Text);

    // Praxies
    myPatient->bilanNeuropsychologic.setClock(CLOCK_PRAXIES_CHECKBOX->Checked, CLOCK_PRAXIES_COUNTER->Text);
    if (CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Checked) myPatient->bilanNeuropsychologic.setCube(CUBE_PRAXIES_CHECKBOX->Checked, cubePraxiesType::Success);
    else if (CUBE_PRAXIES_FAIL_RADIOBUTTON->Checked) myPatient->bilanNeuropsychologic.setCube(CUBE_PRAXIES_CHECKBOX->Checked, cubePraxiesType::Fail);
    else myPatient->bilanNeuropsychologic.setCube(CUBE_PRAXIES_CHECKBOX->Checked, cubePraxiesType::Missing);

    // Rey Figure
    myPatient->bilanNeuropsychologic.setReyCopy(REY_FIGURE_COPIE_CHECKBOX->Checked, REY_FIGURE_COPIE_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setReyTime(REY_FIGURE_TIME_CHECKBOX->Checked, REY_FIGURE_TIME_COUNTER->Text);
    if (REY_FIGURE_TYPE1_RADIOBUTTON->Checked) myPatient->bilanNeuropsychologic.setReyType(REY_FIGURE_TYPE_CHECKBOX->Checked, reyFigureType::Type_1);
    else if (REY_FIGURE_TYPE2_RADIOBUTTON->Checked) myPatient->bilanNeuropsychologic.setReyType(REY_FIGURE_TYPE_CHECKBOX->Checked, reyFigureType::Type_2);
    else myPatient->bilanNeuropsychologic.setReyType(REY_FIGURE_TYPE_CHECKBOX->Checked, reyFigureType::Missing);

    // Psycho-affective State
    myPatient->bilanNeuropsychologic.setDepression(DEPRESSION_CHECKBOX->Checked, DEPRESSION_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setAnxietyScore(ANXIETY_CHECKBOX->Checked, ANXIETY_COUNTER->Text);
    if (ANXIETY_YES_RADIOBUTTON->Checked) myPatient->bilanNeuropsychologic.setAnxietyYN(ANXIETY_YN_CHECKBOX->Checked, extended_bool::True);
    else if (ANXIETY_NO_RADIOBUTTON->Checked) myPatient->bilanNeuropsychologic.setAnxietyYN(ANXIETY_YN_CHECKBOX->Checked, extended_bool::False);
    else myPatient->bilanNeuropsychologic.setAnxietyYN(ANXIETY_YN_CHECKBOX->Checked, extended_bool::Missing);

    // Gestures
    myPatient->bilanNeuropsychologic.setSymbolicGestures(SYMBOLIC_GESTURE_CHECKBOX->Checked, SYMBOLIC_GESTURE_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setMimeGestures(MIME_GESTURE_CHECKBOX->Checked, MIME_GESTURE_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setAbstractGestures(ABSTRACT_GESTURE_CHECKBOX->Checked, ABSTRACT_GESTURE_COUNTER->Text);

    // Language
    if (FLUENCSE_1_RADIOBUTTON->Checked) myPatient->bilanNeuropsychologic.setFluences(FLUENCES_CHECKBOX->Checked, fluencesType::One_min);
    else if (FLUENCSE_2_RADIOBUTTON->Checked) myPatient->bilanNeuropsychologic.setFluences(FLUENCES_CHECKBOX->Checked, fluencesType::Two_min);
    else myPatient->bilanNeuropsychologic.setFluences(FLUENCES_CHECKBOX->Checked, fluencesType::Missing);
    myPatient->bilanNeuropsychologic.setWords(WORDS_CHECKBOX->Checked, WORDS_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setDO80(DO80_CHECKBOX->Checked, DO80_COUNTER->Text);
    myPatient->bilanNeuropsychologic.setAnimals(ANIMAL_CHECKBOX->Checked, ANIMAL_COUNTER->Text);
}