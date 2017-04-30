#include "CognitiveDiagnosis.h"


using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::CognitiveDiagnosis::UpdateLanguage_CognitiveDiagnosisForm(String^ language) {

	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/FormTitle"));
	CognitiveDiagnosis::Text = queryNode(str_title);

	/*pin_ptr<const wchar_t> str_reg = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Register"));
	REGISTER_BUTTON->Text = queryNode(str_reg);

	pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/Cancel"));
	CANCEL_BUTTON->Text = queryNode(str_cancel);*/

	pin_ptr<const wchar_t> str_cog_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/Title"));
	COGNITIVE_DIAGNOSE_LABEL->Text = queryNode(str_cog_title);

	pin_ptr<const wchar_t> str_cog_date = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/Date"));
	COGNITIVE_DIAGNOSE_DATE_CHECKBOX->Text = queryNode(str_cog_date);

	pin_ptr<const wchar_t> str_absence = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/Absence"));
	ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->Text = queryNode(str_absence);

	pin_ptr<const wchar_t> str_sci = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/SCI"));
	EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->Text = queryNode(str_sci);

	pin_ptr<const wchar_t> str_mci = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/MCI"));
	MCI_CHECKBOX->Text = queryNode(str_mci);

	pin_ptr<const wchar_t> str_amnesia = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/MCIAmnesia"));
	AMNESIC_MCI_CHECKBOX->Text = queryNode(str_amnesia);

	pin_ptr<const wchar_t> str_mci_exec = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/MCIExecutive"));
	EXECUTIVE_MCI_CHECKBOX->Text = queryNode(str_mci_exec);

	pin_ptr<const wchar_t> str_mci_uniq = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/MCIUnique"));
	UNIQUE_MCI_CHECKBOX->Text = queryNode(str_mci_uniq);

	pin_ptr<const wchar_t> str_mci_mult = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/MCIMultiple"));
	MULTIPLE_MCI_CHECKBOX->Text = queryNode(str_mci_mult);

	pin_ptr<const wchar_t> str_dementia = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/Dementia"));
	DEMENTIA_CHECKBOX->Text = queryNode(str_dementia);

	pin_ptr<const wchar_t> str_dementia_ma = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/DementiaMA"));
	MA_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_ma);

	pin_ptr<const wchar_t> str_dementia_mix = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/DementiaMix"));
	MIXED_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_mix);

	pin_ptr<const wchar_t> str_dementia_vasc = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/DementiaVasc"));
	VASCULAR_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_vasc);

	pin_ptr<const wchar_t> str_dementia_dcl = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/DementiaDCL"));
	DCL_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_dcl);

	pin_ptr<const wchar_t> str_dementia_dft = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/DementiaDFT"));
	DFT_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_dft);

	pin_ptr<const wchar_t> str_dementia_psp = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/DementiaPSP"));
	PSP_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_psp);

	pin_ptr<const wchar_t> str_dementia_dcb = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/DementiaDCB"));
	DCB_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_dcb);

	pin_ptr<const wchar_t> str_dementia_app = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/DementiaAPP"));
	APP_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_app);

	pin_ptr<const wchar_t> str_dementia_ds = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/DementiaDS"));
	DS_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_ds);

	pin_ptr<const wchar_t> str_psychoaff = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/PsycoAffective"));
	PSYCOAFFECTIVE_CHECKBOX->Text = queryNode(str_psychoaff);

	pin_ptr<const wchar_t> str_axiety = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/Anxiety"));
	ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Text = queryNode(str_axiety);

	pin_ptr<const wchar_t> str_depre = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/Depression"));
	DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Text = queryNode(str_depre);

	pin_ptr<const wchar_t> str_other = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/CognitiveDiagnosisForm/CognitiveDiag/Other"));
	OTHER_DEMENTIA_CHECKBOX->Text = queryNode(str_other);
	OTHER_PSYCOAFFECTIVE_CHECKBOX->Text = queryNode(str_other);
}

void WacomTabletApplication::CognitiveDiagnosis::completePatientInformationObject() {
    myPatient->cognitiveDiagnosis.setDateCognitiveDiagnosis(COGNITIVE_DIAGNOSE_DATE_CHECKBOX->Checked, COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Value);
    myPatient->cognitiveDiagnosis.setAbscenceCognitiveDiagnosisComplain(ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->Checked);
    myPatient->cognitiveDiagnosis.setCognitiveComplain(EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->Checked);
    if (MCI_CHECKBOX->Checked) {
        myPatient->cognitiveDiagnosis.setLightCognitiveProblems(MCI_CHECKBOX->Checked);
        if (AMNESIC_MCI_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setAmnesicMCI(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setAmnesicMCI(extended_bool::False);
        if (EXECUTIVE_MCI_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setExecutiveMCI(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setExecutiveMCI(extended_bool::False);
        if (UNIQUE_MCI_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setUniqueDomainMCI(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setUniqueDomainMCI(extended_bool::False);
        if (MULTIPLE_MCI_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setMultipleDomainMCI(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setMultipleDomainMCI(extended_bool::False);
    } else {
        myPatient->cognitiveDiagnosis.setLightCognitiveProblems(MCI_CHECKBOX->Checked);
        myPatient->cognitiveDiagnosis.setAmnesicMCI(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setExecutiveMCI(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setUniqueDomainMCI(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setMultipleDomainMCI(extended_bool::Missing);
    }
    if (PSYCOAFFECTIVE_CHECKBOX->Checked) {
        myPatient->cognitiveDiagnosis.setPsychoaffectiveProblems(PSYCOAFFECTIVE_CHECKBOX->Checked);
        if (ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setAnxiety(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setAnxiety(extended_bool::False);
        if (DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setDepression(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setDepression(extended_bool::False);
        if (OTHER_PSYCOAFFECTIVE_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setOtherPsychoaffectiveProblems(extended_bool::True, OTHER_PSYCOAFFECTIVE_TEXTBOX->Text);
        else myPatient->cognitiveDiagnosis.setOtherPsychoaffectiveProblems(extended_bool::False, OTHER_PSYCOAFFECTIVE_TEXTBOX->Text);
    } else {
        myPatient->cognitiveDiagnosis.setPsychoaffectiveProblems(PSYCOAFFECTIVE_CHECKBOX->Checked);
        myPatient->cognitiveDiagnosis.setAnxiety(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setDepression(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setDepression(extended_bool::Missing);
    }
    if (DEMENTIA_CHECKBOX->Checked) {
        myPatient->cognitiveDiagnosis.setDementia(DEMENTIA_CHECKBOX->Checked);
        if (MA_DEMENTIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setMA(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setMA(extended_bool::False);
        if (MIXED_DEMENTIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setMixedDementia(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setMixedDementia(extended_bool::False);
        if (VASCULAR_DEMENTIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setVascularDementia(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setVascularDementia(extended_bool::False);
        if (DCL_DEMENTIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setDCL(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setDCL(extended_bool::False);
        if (DFT_DEMENTIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setDFT(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setDFT(extended_bool::False);
        if (PSP_DEMENTIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setPSP(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setPSP(extended_bool::False);
        if (DCB_DEMENTIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setDCB(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setDCB(extended_bool::False);
        if (APP_DEMENTIA_CHECKBOX->Checked)myPatient->cognitiveDiagnosis.setAPP(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setAPP(extended_bool::False);
        if (DS_DEMENTIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setDS(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setDS(extended_bool::False);
        if (SCHIZOPHRENIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setSchizophrenia(extended_bool::True);
        else myPatient->cognitiveDiagnosis.setSchizophrenia(extended_bool::False);
        if (OTHER_DEMENTIA_CHECKBOX->Checked) myPatient->cognitiveDiagnosis.setOtherDementia(extended_bool::True, OTHER_DEMENTIA_TEXTBOX->Text);
        else myPatient->cognitiveDiagnosis.setOtherDementia(extended_bool::False, OTHER_DEMENTIA_TEXTBOX->Text);
    } else {
        myPatient->cognitiveDiagnosis.setDementia(DEMENTIA_CHECKBOX->Checked);
        myPatient->cognitiveDiagnosis.setMA(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setMixedDementia(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setVascularDementia(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setDCL(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setDFT(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setPSP(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setDCB(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setAPP(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setDS(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setSchizophrenia(extended_bool::Missing);
        myPatient->cognitiveDiagnosis.setOtherDementia(extended_bool::Missing, OTHER_DEMENTIA_TEXTBOX->Text);
    }
}
