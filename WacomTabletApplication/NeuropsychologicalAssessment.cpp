#include "NeuropsychologicalAssessment.h"

using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::NeuropsychologicalAssessment::UpdateLanguage_NeuropsychologicalAssessmentForm(String^ language) {

	pin_ptr<const wchar_t> str_pseval_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/Title"));
	NEUROPSYCOLOGIC_EVALUATION_LABEL->Text = queryNode(str_pseval_title);

	pin_ptr<const wchar_t> str_aidl = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/IADL"));
	IADL_CHECKBOX->Text = queryNode(str_aidl);

	pin_ptr<const wchar_t> str_mmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/MMSE"));
	MMSE_CHECKBOX->Text = queryNode(str_mmse);

	pin_ptr<const wchar_t> str_datemmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/DateMMSE"));
	DATE_MMSE_CHECKBOX->Text = queryNode(str_datemmse);

	pin_ptr<const wchar_t> str_orient_mmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/OrientationMMSE"));
	ORIENTATION_MMSE_CHECKBOX->Text = queryNode(str_orient_mmse);

	pin_ptr<const wchar_t> str_calcmmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/CalculMMSE"));
	CALCULE_MMSE_CHECKBOX->Text = queryNode(str_calcmmse);

	pin_ptr<const wchar_t> str_langmmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/LanguageMMSE"));
	LANGUAGE_MMSE_CHECKBOX->Text = queryNode(str_langmmse);

	pin_ptr<const wchar_t> str_learnmmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/LearningMMSE"));
	LEARNING_MMSE_CHECKBOX->Text = queryNode(str_learnmmse);

	pin_ptr<const wchar_t> str_memmmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/MemoryMMSE"));
	MEMORY_MMSE_CHECKBOX->Text = queryNode(str_memmmse);

	pin_ptr<const wchar_t> str_praximmse = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/PraxiesMMSE"));
	PRAXIES_MMSE_CHECKBOX->Text = queryNode(str_praximmse);

	pin_ptr<const wchar_t> str_moca = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/NeuroPsychoEval/MOCA"));
	MOCA_CHECKBOX->Text = queryNode(str_moca);
}

void WacomTabletApplication::NeuropsychologicalAssessment::completePatientInformationObject() {
    myPatient->neuropsychologicalAssessment.setIADL(IADL_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setIADLValue(IADL_COUNTER->Text);
    myPatient->neuropsychologicalAssessment.setMMSE(MMSE_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setMMSEValue(MMSE_COUNTER->Text);
    myPatient->neuropsychologicalAssessment.setMMSEDate(DATE_MMSE_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setMMSEDateValue(DATE_MMSE_DATEPICKER->Value);
    myPatient->neuropsychologicalAssessment.setMMSEOrientation(ORIENTATION_MMSE_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setMMSEOrientationValue(ORIENTATION_MMSE_COUNTER->Text);
    myPatient->neuropsychologicalAssessment.setMMSELearning(LEARNING_MMSE_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setMMSELearningValue(LEARNING_MMSE_COUNTER->Text);
    myPatient->neuropsychologicalAssessment.setMMSECalcule(CALCULE_MMSE_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setMMSECalculeValue(CALCULE_MMSE_COUNTER->Text);
    myPatient->neuropsychologicalAssessment.setMMSEMemory(MEMORY_MMSE_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setMMSEMemoryValue(MEMORY_MMSE_COUNTER->Text);
    myPatient->neuropsychologicalAssessment.setMMSELanguage(LANGUAGE_MMSE_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setMMSELanguageValue(LANGUAGE_MMSE_COUNTER->Text);
    myPatient->neuropsychologicalAssessment.setMMSEPraxies(PRAXIES_MMSE_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setMMSEPraxiesValues(PRAXIES_MMSE_COUNTER->Text);
    myPatient->neuropsychologicalAssessment.setMOCA(MOCA_CHECKBOX->Checked);
    myPatient->neuropsychologicalAssessment.setMOCAValue(MOCA_COUNTER->Text);
}