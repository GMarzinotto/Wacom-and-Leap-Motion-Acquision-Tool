#include "DataM12.h"


using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::DataM12::UpdateLanguage_DataM12Form(String^ language) {

	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/FormTitle"));
	DataM12::Text = queryNode(str_title);

	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Yes"));
	String^ yes = queryNode(str_yes);
	YES_ALCOHOL_RADIOBUTTON->Text = yes;
	YES_DIAGNOSE_RADIOBUTTON->Text = yes;
	YES_EMOTIONS_RADIOBUTTON->Text = yes;
	YES_HOSPITALIZATION_RADIOBUTTON->Text = yes;
	YES_OTHERS_RADIOBUTTON->Text = yes;
	YES_PATHOLOGY_RADIOBUTTON->Text = yes;
	YES_TREATMENT_RADIOBUTTON->Text = yes;
	YES_TREATMENT_RADIOBUTTON->Text = yes;

	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/No"));
	String^ no = queryNode(str_no);
	NO_ALCOHOL_RADIOBUTTON->Text = no;
	NO_DIAGNOSE_RADIOBUTTON->Text = no;
	NO_EMOTIONS_RADIOBUTTON->Text = no;
	NO_HOSPITALIZATION_RADIOBUTTON->Text = no;
	NO_OTHERS_RADIOBUTTON->Text = no;
	NO_PATHOLOGY_RADIOBUTTON->Text = no;
	NO_TREATMENT_RADIOBUTTON->Text = no;
	NO_TREATMENT_RADIOBUTTON->Text = no;

	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_ALCOHOL_RADIOBUTTON->Text = miss;
	MISSING_DIAGNOSE_RADIOBUTTON->Text = miss;
	MISSING_EMOTIONS_RADIOBUTTON->Text = miss;
	MISSING_HOSPITALIZATION_RADIOBUTTON->Text = miss;
	MISSING_OTHERS_RADIOBUTTON->Text = miss;
	MISSING_PATHOLOGY_RADIOBUTTON->Text = miss;
	MISSING_TREATMENT_RADIOBUTTON->Text = miss;
	MISSING_TREATMENT_RADIOBUTTON->Text = miss;

	pin_ptr<const wchar_t> str_reg = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Register"));
	REGISTER_BUTTON->Text = queryNode(str_reg);
	
	pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Cancel"));
	CANCEL_BUTTON->Text = queryNode(str_cancel);

	pin_ptr<const wchar_t> str_m12 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/M12"));
	IMPORTANT_EVENTS_LABEL->Text = queryNode(str_m12);

	pin_ptr<const wchar_t> str_surgery = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/NewTreatment"));
	TREATMENT_LABEL->Text = queryNode(str_surgery);

	pin_ptr<const wchar_t> str_hospital = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Hospital"));
	HOSPITALIZATION_LABEL->Text = queryNode(str_hospital);

	pin_ptr<const wchar_t> str_pathology = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Pathology"));
	PATHOLOGY_LABEL->Text = queryNode(str_pathology);

	pin_ptr<const wchar_t> str_diag = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Diagnose"));
	DIAGNOSE_LABEL->Text = queryNode(str_diag);

	pin_ptr<const wchar_t> str_treatment = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Treatment"));
	TREATMENT_LABEL->Text = queryNode(str_treatment);

	pin_ptr<const wchar_t> str_alcohol = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Alcohol"));
	ALCOHOL_LABEL->Text = queryNode(str_alcohol);

	pin_ptr<const wchar_t> str_emotion = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Emotions"));
	EMOTIONS_LABEL->Text = queryNode(str_emotion);

	pin_ptr<const wchar_t> str_other = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/DataM12Form/Others"));
	OTHERS_LABEL->Text = queryNode(str_other);

}

void WacomTabletApplication::DataM12::completePatientInformationObject() {
    if (YES_SURGERY_RADIOBUTTON->Checked) myPatient->dataM12.setSurgery(extended_bool::True, SURGERY_TEXTBOX->Text);
    else if (NO_SURGERY_RADIOBUTTON->Checked) myPatient->dataM12.setSurgery(extended_bool::False, SURGERY_TEXTBOX->Text);
    else myPatient->dataM12.setSurgery(extended_bool::Missing, SURGERY_TEXTBOX->Text);

    if (YES_HOSPITALIZATION_RADIOBUTTON->Checked) myPatient->dataM12.setHospitalization(extended_bool::True, HOSPITALIZATION_TEXTBOX->Text);
    else if (NO_HOSPITALIZATION_RADIOBUTTON->Checked) myPatient->dataM12.setHospitalization(extended_bool::False, HOSPITALIZATION_TEXTBOX->Text);
    else myPatient->dataM12.setHospitalization(extended_bool::Missing, HOSPITALIZATION_TEXTBOX->Text);

    if (YES_PATHOLOGY_RADIOBUTTON->Checked) myPatient->dataM12.setPathology(extended_bool::True, PATHOLOGY_TEXTBOX->Text);
    else if (NO_PATHOLOGY_RADIOBUTTON->Checked) myPatient->dataM12.setPathology(extended_bool::False, PATHOLOGY_TEXTBOX->Text);
    else myPatient->dataM12.setPathology(extended_bool::Missing, PATHOLOGY_TEXTBOX->Text);

    if (YES_DIAGNOSE_RADIOBUTTON->Checked) myPatient->dataM12.setNewDiagnostic(extended_bool::True, DIAGNOSE_TEXTBOX->Text);
    else if (NO_DIAGNOSE_RADIOBUTTON->Checked) myPatient->dataM12.setNewDiagnostic(extended_bool::False, DIAGNOSE_TEXTBOX->Text);
    else myPatient->dataM12.setNewDiagnostic(extended_bool::Missing, DIAGNOSE_TEXTBOX->Text);

    if (YES_TREATMENT_RADIOBUTTON->Checked) myPatient->dataM12.setNewTreatment(extended_bool::True, TREATMENT_TEXTBOX->Text);
    else if (NO_TREATMENT_RADIOBUTTON->Checked) myPatient->dataM12.setNewTreatment(extended_bool::False, TREATMENT_TEXTBOX->Text);
    else myPatient->dataM12.setNewTreatment(extended_bool::Missing, TREATMENT_TEXTBOX->Text);

    if (YES_ALCOHOL_RADIOBUTTON->Checked) myPatient->dataM12.setAlcohol(extended_bool::True, ALCOHOL_TEXTBOX->Text);
    else if (NO_ALCOHOL_RADIOBUTTON->Checked) myPatient->dataM12.setAlcohol(extended_bool::False, ALCOHOL_TEXTBOX->Text);
    else myPatient->dataM12.setAlcohol(extended_bool::Missing, ALCOHOL_TEXTBOX->Text);

    if (YES_EMOTIONS_RADIOBUTTON->Checked) myPatient->dataM12.setEmotionalState(extended_bool::True, EMOTIONS_TEXTBOX->Text);
    else if (NO_EMOTIONS_RADIOBUTTON->Checked) myPatient->dataM12.setEmotionalState(extended_bool::False, EMOTIONS_TEXTBOX->Text);
    else myPatient->dataM12.setEmotionalState(extended_bool::Missing, EMOTIONS_TEXTBOX->Text);

    if (YES_OTHERS_RADIOBUTTON->Checked) myPatient->dataM12.setOther(extended_bool::True, OTHERS_TEXTBOX->Text);
    else if (NO_OTHERS_RADIOBUTTON->Checked) myPatient->dataM12.setOther(extended_bool::False, OTHERS_TEXTBOX->Text);
    else myPatient->dataM12.setOther(extended_bool::Missing, OTHERS_TEXTBOX->Text);
}