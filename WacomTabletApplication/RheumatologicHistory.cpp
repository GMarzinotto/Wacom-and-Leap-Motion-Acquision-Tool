#include "RheumatologicHistory.h"

using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::RheumatologicHistory::UpdateLanguage_RheumatologicHistoryForm(String^ language) {

	/*pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/FormTitle"));
	CognitiveDiagnosis::Text = queryNode(str_title);
*/
	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Yes"));
	String^ yes = queryNode(str_yes);
	YES_ARTHRITIS_RADIOBUTTON->Text = yes;
	YES_ARTHROSIS_RADIOBUTTON->Text = yes;
	YES_OTHERS_RADIOBUTTONS->Text = yes;
	
	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/No"));
	String^ no = queryNode(str_no);
	NO_ARTHRITIS_RADIOBUTTON->Text = no;
	NO_ARTHROSIS_RADIOBUTTON->Text = no;
	NO_OTHERS_RADIOBUTTONS->Text = no;
	
	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_ARTHRITIS_RADIOBUTTON->Text = miss;
	MISSING_ARTHROSIS_RADIOBUTTON->Text = miss;
	MISSING_OTHERS_RADIOBUTTONS->Text = miss;
	MISSING_SURGERY_CHECKBOX->Text = miss;
	MISSING_PAIN_CHECKBOX->Text = miss;
	
	pin_ptr<const wchar_t> str_rhumatologic = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Rhumatologic"));
	RHUMATOLOGIC_HISTORY_LABEL->Text = queryNode(str_rhumatologic);

	pin_ptr<const wchar_t> str_arthrose = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Arthrose"));
	ARTHROSIS_LABEL->Text = queryNode(str_arthrose);

	pin_ptr<const wchar_t> str_arthritis = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Arthritis"));
	ARTHRITIS_LABEL->Text = queryNode(str_arthritis);

	pin_ptr<const wchar_t> str_rhumatologic_other = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/OtherRhumatology"));
	OTHERS_RHUMA_LABEL->Text = queryNode(str_rhumatologic_other);

	pin_ptr<const wchar_t> str_surgery = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Surgery"));
	SURGERY_LABEL->Text = queryNode(str_surgery);

	pin_ptr<const wchar_t> str_pain = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Pain"));
	PAIN_LABEL->Text = queryNode(str_pain);

	pin_ptr<const wchar_t> str_superior = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Superior"));
	SUPERIOR_PAIN_CHECKBOX->Text = queryNode(str_superior);
	SUPERIOR_SURGERY_CHECKBOX->Text = queryNode(str_superior);

	pin_ptr<const wchar_t> str_inferior = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/DataM0/Inferior"));
	INFERIOR_PAIN_CHECKBOX->Text = queryNode(str_inferior);
	INFERIOR_SURGERY_CHECKBOX->Text = queryNode(str_inferior);
}

void WacomTabletApplication::RheumatologicHistory::completePatientInformationObject() {
    if (YES_ARTHROSIS_RADIOBUTTON->Checked) myPatient->rheumatologicHistory.setArthrosis(extended_bool::True);
    else if (NO_ARTHROSIS_RADIOBUTTON->Checked)myPatient->rheumatologicHistory.setArthrosis(extended_bool::False);
    else myPatient->rheumatologicHistory.setArthrosis(extended_bool::Missing);

    if (YES_ARTHRITIS_RADIOBUTTON->Checked) myPatient->rheumatologicHistory.setArthritis(extended_bool::True);
    else if (NO_ARTHRITIS_RADIOBUTTON->Checked) myPatient->rheumatologicHistory.setArthritis(extended_bool::False);
    else myPatient->rheumatologicHistory.setArthritis(extended_bool::Missing);

    if (YES_OTHERS_RADIOBUTTONS->Checked) myPatient->rheumatologicHistory.setOther(extended_bool::True, OTHERS_TEXTBOX->Text);
    else if (NO_OTHERS_RADIOBUTTONS->Checked) myPatient->rheumatologicHistory.setOther(extended_bool::False, OTHERS_TEXTBOX->Text);
    else myPatient->rheumatologicHistory.setOther(extended_bool::Missing, OTHERS_TEXTBOX->Text);

    myPatient->rheumatologicHistory.setLimbsSurgery(INFERIOR_SURGERY_CHECKBOX->Checked, SUPERIOR_SURGERY_CHECKBOX->Checked, MISSING_SURGERY_CHECKBOX->Checked);
    
    myPatient->rheumatologicHistory.setPainLimbs(INFERIOR_PAIN_CHECKBOX->Checked, SUPERIOR_PAIN_CHECKBOX->Checked, MISSING_PAIN_CHECKBOX->Checked);
}