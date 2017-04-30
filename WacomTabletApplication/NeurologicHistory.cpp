#include "NeurologicHistory.h"

using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::NeurologicHistory::UpdateLanguage_NeurologicHistoryForm(String^ language) {

	/*pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/FormTitle"));
	CognitiveDiagnosis::Text = queryNode(str_title);
*/
	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Yes"));
	String^ yes = queryNode(str_yes);
	YES_APHASIA_RADIOBUTTON->Text = yes;
	YES_EPILEPSIA_RADIOBUTTON->Text = yes;
	YES_HEMIPLEGIA_RADIOBUTTON->Text = yes;
	YES_PARKINSON_RADIOBUTTON->Text = yes;
	YES_TRAUMA_RADIOBUTTON->Text = yes;
	YES_TUMOR_RADIOBUTTON->Text = yes;
	YES_OTHER_RADIOBUTTON->Text = yes;

	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/No"));
	String^ no = queryNode(str_no);
	NO_APHASIA_RADIOBUTTON->Text = no;
	NO_EPILEPSIA_RADIOBUTTON->Text = no;
	NO_HEMIPLEGIA_RADIOBUTTON->Text = no;
	NO_PARKINSON_RADIOBUTTON->Text = no;
	NO_TRAUMA_RADIOBUTTON->Text = no;
	NO_TUMOR_RADIOBUTTON->Text = no;
	NO_OTHER_RADIOBUTTON->Text = no;

	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_APHASIA_RADIOBUTTON->Text = miss;
	MISSING_EPILEPSIA_RADIOBUTTON->Text = miss;
	MISSING_HEMIPLEGIA_RADIOBUTTON->Text = miss;
	MISSING_PARKINSON_RADIOBUTTON->Text = miss;
	MISSING_TRAUMA_RADIOBUTTON->Text = miss;
	MISSING_TUMOR_RADIOBUTTON->Text = miss;
	MISSING_OTHER_RADIOBUTTON->Text = miss;

	/*pin_ptr<const wchar_t> str_reg = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Register"));
	REGISTER_BUTTON->Text = queryNode(str_reg);

	pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Cancel"));
	CANCEL_BUTTON->Text = queryNode(str_cancel);*/

	pin_ptr<const wchar_t> str_neurohist = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/NeuroHist"));
	NEUROLOGIC_HISTORY_LABEL->Text = queryNode(str_neurohist);

	pin_ptr<const wchar_t> str_epilep = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Epilepsy"));
	EPILEPSIA_LABEL->Text = queryNode(str_epilep);

	pin_ptr<const wchar_t> str_trauma = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Trauma"));
	TRAUMA_LABEL->Text = queryNode(str_trauma);

	pin_ptr<const wchar_t> str_tumor = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Tumor"));
	TUMOR_LABEL->Text = queryNode(str_tumor);

	pin_ptr<const wchar_t> str_parkinson = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Parkinson"));
	PARKINSON_LABEL->Text = queryNode(str_parkinson);

	pin_ptr<const wchar_t> str_hemiplegy = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Hemiplegy"));
	HEMIPLEGIA_LABEL->Text = queryNode(str_hemiplegy);

	pin_ptr<const wchar_t> str_aphasy = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Aphasy"));
	APHASY_LABEL->Text = queryNode(str_aphasy);

	pin_ptr<const wchar_t> str_otherneuro = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/OtherNeuro"));
	OTHER_NEURO_LABEL->Text = queryNode(str_otherneuro);
}

void WacomTabletApplication::NeurologicHistory::completePatientInformationObject() {
    if (YES_EPILEPSIA_RADIOBUTTON->Checked) myPatient->neurologicHistory.setEpilepsy(extended_bool::True);
    else if (NO_EPILEPSIA_RADIOBUTTON->Checked) myPatient->neurologicHistory.setEpilepsy(extended_bool::False);
    else myPatient->neurologicHistory.setEpilepsy(extended_bool::Missing);
    if (YES_TRAUMA_RADIOBUTTON->Checked) myPatient->neurologicHistory.setCranialTrauma(extended_bool::True);
    else if (NO_TRAUMA_RADIOBUTTON->Checked) myPatient->neurologicHistory.setCranialTrauma(extended_bool::False);
    else myPatient->neurologicHistory.setCranialTrauma(extended_bool::Missing);
    if (YES_TUMOR_RADIOBUTTON->Checked) myPatient->neurologicHistory.setBrainTumor(extended_bool::True);
    else if (NO_TUMOR_RADIOBUTTON->Checked) myPatient->neurologicHistory.setBrainTumor(extended_bool::False);
    else myPatient->neurologicHistory.setBrainTumor(extended_bool::Missing);
    if (YES_PARKINSON_RADIOBUTTON->Checked) myPatient->neurologicHistory.setParkinson(extended_bool::True);
    else if (NO_PARKINSON_RADIOBUTTON->Checked) myPatient->neurologicHistory.setParkinson(extended_bool::False);
    else myPatient->neurologicHistory.setParkinson(extended_bool::Missing);
    if (YES_HEMIPLEGIA_RADIOBUTTON->Checked) myPatient->neurologicHistory.setHemiplegia(extended_bool::True);
    else if (NO_HEMIPLEGIA_RADIOBUTTON->Checked) myPatient->neurologicHistory.setHemiplegia(extended_bool::False);
    else myPatient->neurologicHistory.setHemiplegia(extended_bool::Missing);
    if (YES_APHASIA_RADIOBUTTON->Checked) myPatient->neurologicHistory.setAphasia(extended_bool::True);
    else if (NO_APHASIA_RADIOBUTTON->Checked) myPatient->neurologicHistory.setAphasia(extended_bool::False);
    else myPatient->neurologicHistory.setAphasia(extended_bool::Missing);
    if (YES_OTHER_RADIOBUTTON->Checked) myPatient->neurologicHistory.setOtherNeurologicHistory(extended_bool::True, OTHER_NEURO_TEXTBOX->Text);
    else if (NO_OTHER_RADIOBUTTON->Checked) myPatient->neurologicHistory.setOtherNeurologicHistory(extended_bool::False, OTHER_NEURO_TEXTBOX->Text);
    else myPatient->neurologicHistory.setOtherNeurologicHistory(extended_bool::Missing, OTHER_NEURO_TEXTBOX->Text);
}