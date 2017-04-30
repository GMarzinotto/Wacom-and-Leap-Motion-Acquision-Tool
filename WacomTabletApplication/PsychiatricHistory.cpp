#include "PsychiatricHistory.h"

using namespace System;
using namespace System::Windows::Forms;

void WacomTabletApplication::PsychiatricHistory::UpdateLanguage_PsychiatricHistoryForm(String^ language) {

	//pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/FormTitle"));
	//CognitiveDiagnosis::Text = queryNode(str_title);

	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Yes"));
	String^ yes = queryNode(str_yes);
	YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->Text = yes;
	YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Text = yes;
	YES_PSYCOTROPIC_USE_RADIOBUTTON->Text = yes;

	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/No"));
	String^ no = queryNode(str_no);
	NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->Text = no;
	NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Text = no;
	NO_PSYCOTROPIC_USE_RADIOBUTTON->Text = no;

	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->Text = miss;
	MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Text = miss;
	MISSING_PSYCOTROPIC_USE_RADIOBUTTON->Text = miss;

	pin_ptr<const wchar_t> str_psyhist = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/PsychiatricHist"));
	PSYCHIATRIC_HISTORY_LABEL->Text = queryNode(str_psyhist);

	pin_ptr<const wchar_t> str_hospital = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Hospitalization"));
	PSYCHIATRIC_HOSPITALIZATION_LABEL->Text = queryNode(str_hospital);

	pin_ptr<const wchar_t> str_quantity = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Quantity"));
	PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Text = queryNode(str_quantity);

	pin_ptr<const wchar_t> str_last_time = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/LastTime"));
	PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Text = queryNode(str_last_time);
	ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Text = queryNode(str_last_time);
	PSYCOTROPIC_USE_LAST_CHECKBOX->Text = queryNode(str_last_time);

	pin_ptr<const wchar_t> str_indication = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Indication"));
	PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Text = queryNode(str_indication);

	pin_ptr<const wchar_t> str_psycotropic = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Psycotropic"));
	PSYCOTROPIC_USE_LABEL->Text = queryNode(str_psycotropic);

	pin_ptr<const wchar_t> str_antidepressive = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Antidepressive"));
	ANTIDEPRESSIVE_USE_LABEL->Text = queryNode(str_antidepressive);
}

void WacomTabletApplication::PsychiatricHistory::completePatientInformationObject() {
    if (YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Checked) myPatient->psychiatricHistory.setPsychiatricHospitalization(extended_bool::True);
    else if (NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Checked) myPatient->psychiatricHistory.setPsychiatricHospitalization(extended_bool::False);
    else myPatient->psychiatricHistory.setPsychiatricHospitalization(extended_bool::Missing);
    myPatient->psychiatricHistory.setPsychiatricHospitalizationHowManyTimes(PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Checked, PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER->Text);
    myPatient->psychiatricHistory.setPsychiatricHospitalizationLastTime(PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Checked, PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER->Value);
    myPatient->psychiatricHistory.setPsychiatricHospitalizationIndication(PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Checked, PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX->Text);

    if (YES_PSYCOTROPIC_USE_RADIOBUTTON->Checked) myPatient->psychiatricHistory.setUsePsychotropes(extended_bool::True);
    else if (NO_PSYCOTROPIC_USE_RADIOBUTTON->Checked) myPatient->psychiatricHistory.setUsePsychotropes(extended_bool::False);
    else myPatient->psychiatricHistory.setUsePsychotropes(extended_bool::Missing);
    myPatient->psychiatricHistory.setUsePsychotropesLastTime(PSYCOTROPIC_USE_LAST_CHECKBOX->Checked, PSYCOTROPIC_USE_LAST_DATEPICKER->Value);

    if (YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->Checked) myPatient->psychiatricHistory.setTreatmentWithAntidepressants(extended_bool::True);
    else if (NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->Checked) myPatient->psychiatricHistory.setTreatmentWithAntidepressants(extended_bool::False);
    else myPatient->psychiatricHistory.setTreatmentWithAntidepressants(extended_bool::Missing);
    myPatient->psychiatricHistory.setTreatmentWithAntidepressantsLastTime(ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Checked, ANTIDEPRESSIVE_USE_LAST_DATEPICKER->Value);
}