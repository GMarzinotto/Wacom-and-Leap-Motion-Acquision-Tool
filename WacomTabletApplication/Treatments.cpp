#include "Treatments.h"


using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::Treatments::UpdateLanguage_TreatmentsForm(String^ language) {

	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/FormTitle"));
	Treatments::Text = queryNode(str_title);

	pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Cancel"));
	CANCEL_BUTTON->Text = queryNode(str_cancel);

	pin_ptr<const wchar_t> str_register = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Register"));
	REGISTER_BUTTON->Text = queryNode(str_register);

	pin_ptr<const wchar_t> str_treatment_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Treatments/Title"));
	TREATEMENT_LIST_LABEL->Text = queryNode(str_treatment_title);

	pin_ptr<const wchar_t> str_treatment_name = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Treatments/Name"));
	TREATEMENT_NAME_LABEL->Text = queryNode(str_treatment_name);

	pin_ptr<const wchar_t> str_treatment_indication = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Treatments/Indication"));
	TREATEMENT_INDICATION_LABEL->Text = queryNode(str_treatment_indication);

	pin_ptr<const wchar_t> str_treatment_posology = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Treatments/Posology"));
	TREATMENT_POSOLOGY_LABEL->Text = queryNode(str_treatment_posology);

	pin_ptr<const wchar_t> str_treatment_date = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/TreatmentsForm/Treatments/Date"));
	TREATEMENT_DATE_LABEL->Text = queryNode(str_treatment_date);
}

void WacomTabletApplication::Treatments::completePatientInformationObject() {
    myPatient->treatments.setTreatment(TREATEMENT_1_TEXTBOX->Text, INDICATION_1_TEXTBOX->Text, POSOLOGY_1_TEXTBOX->Text, SINCE_1_DATE->Value);
    if (POSOLOGY_2_TEXTBOX->Enabled) myPatient->treatments.setTreatment(TREATEMENT_2_TEXTBOX->Text, INDICATION_2_TEXTBOX->Text, POSOLOGY_2_TEXTBOX->Text, SINCE_2_DATE->Value);
    if (POSOLOGY_3_TEXTBOX->Enabled) myPatient->treatments.setTreatment(TREATEMENT_3_TEXTBOX->Text, INDICATION_3_TEXTBOX->Text, POSOLOGY_3_TEXTBOX->Text, SINCE_3_DATE->Value);
    if (POSOLOGY_4_TEXTBOX->Enabled) myPatient->treatments.setTreatment(TREATEMENT_4_TEXTBOX->Text, INDICATION_4_TEXTBOX->Text, POSOLOGY_4_TEXTBOX->Text, SINCE_4_DATE->Value);
    if (POSOLOGY_5_TEXTBOX->Enabled) myPatient->treatments.setTreatment(TREATEMENT_5_TEXTBOX->Text, INDICATION_5_TEXTBOX->Text, POSOLOGY_5_TEXTBOX->Text, SINCE_5_DATE->Value);
    if (POSOLOGY_6_TEXTBOX->Enabled) myPatient->treatments.setTreatment(TREATEMENT_6_TEXTBOX->Text, INDICATION_6_TEXTBOX->Text, POSOLOGY_6_TEXTBOX->Text, SINCE_6_DATE->Value);
}