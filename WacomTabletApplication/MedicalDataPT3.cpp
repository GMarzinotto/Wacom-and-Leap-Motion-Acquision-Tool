#include "MedicalDataPT3.h"


using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::MedicalDataPT3::UpdateLanguage_MedicalDataPT3Form(String^ language) {

	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/FormTitle"));
	MedicalDataPT3::Text = queryNode(str_title);

	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/Yes"));
	String^ yes = queryNode(str_yes);
	YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->Text = yes;
	YES_APHASIA_RADIOBUTTON->Text = yes;
	YES_ARTHRITIS_RADIOBUTTON->Text = yes;
	YES_ARTHROSIS_RADIOBUTTON->Text = yes;
	YES_CANE_RADIOBUTTON->Text = yes;
	YES_CVA_RADIOBUTTON->Text = yes;
	YES_EPILEPSIA_RADIOBUTTON->Text = yes;
	YES_HEMIPLEGIA_RADIOBUTTON->Text = yes;
	YES_OTHERS_RADIOBUTTONS->Text = yes;
	YES_PARKINSON_RADIOBUTTON->Text = yes;
	YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Text = yes;
	YES_PSYCOTROPIC_USE_RADIOBUTTON->Text = yes;
	YES_TRAUMA_RADIOBUTTON->Text = yes;
	YES_TUMOR_RADIOBUTTON->Text = yes;
	YES_OTHER_RADIOBUTTON->Text = yes;
		
	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/No"));
	String^ no = queryNode(str_no);
	NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->Text = no;
	NO_APHASIA_RADIOBUTTON->Text = no;
	NO_ARTHRITIS_RADIOBUTTON->Text = no;
	NO_ARTHROSIS_RADIOBUTTON->Text = no;
	NO_CANE_RADIOBUTTON->Text = no;
	NO_CVA_RADIOBUTTON->Text = no;
	NO_EPILEPSIA_RADIOBUTTON->Text = no;
	NO_HEMIPLEGIA_RADIOBUTTON->Text = no;
	NO_OTHERS_RADIOBUTTONS->Text = no;
	NO_PARKINSON_RADIOBUTTON->Text = no;
	NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Text = no;
	NO_PSYCOTROPIC_USE_RADIOBUTTON->Text = no;
	NO_TRAUMA_RADIOBUTTON->Text = no;
	NO_TUMOR_RADIOBUTTON->Text = no;
	NO_OTHER_RADIOBUTTON->Text = no;

	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->Text = miss;
	MISSING_APHASIA_RADIOBUTTON->Text = miss;
	MISSING_ARTHRITIS_RADIOBUTTON->Text = miss;
	MISSING_ARTHROSIS_RADIOBUTTON->Text = miss;
	MISSING_CANE_RADIOBUTTON->Text = miss;
	MISSING_CVA_RADIOBUTTON->Text = miss;
	MISSING_EPILEPSIA_RADIOBUTTON->Text = miss;
	MISSING_HEMIPLEGIA_RADIOBUTTON->Text = miss;
	MISSING_OTHERS_RADIOBUTTONS->Text = miss;
	MISSING_PARKINSON_RADIOBUTTON->Text = miss;
	MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Text = miss;
	MISSING_PSYCOTROPIC_USE_RADIOBUTTON->Text = miss;
	MISSING_TRAUMA_RADIOBUTTON->Text = miss;
	MISSING_TUMOR_RADIOBUTTON->Text = miss;
	MISSING_SURGERY_CHECKBOX->Text = miss;
	MISSING_PAIN_CHECKBOX->Text = miss;
	MISSING_OTHER_RADIOBUTTON->Text = miss;

	pin_ptr<const wchar_t> str_reg = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/Register"));
	REGISTER_BUTTON->Text = queryNode(str_reg);

	pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/Cancel"));
	CANCEL_BUTTON->Text = queryNode(str_cancel);

	pin_ptr<const wchar_t> str_cog_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/Title"));
	COGNITIVE_DIAGNOSE_LABEL->Text = queryNode(str_cog_title);

	pin_ptr<const wchar_t> str_cog_date = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/Date"));
	COGNITIVE_DIAGNOSE_DATE_CHECKBOX->Text = queryNode(str_cog_date);

	pin_ptr<const wchar_t> str_absence = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/Absence"));
	ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->Text = queryNode(str_absence);

	pin_ptr<const wchar_t> str_sci = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/SCI"));
	EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->Text = queryNode(str_sci);

	pin_ptr<const wchar_t> str_mci = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/MCI"));
	MCI_CHECKBOX->Text = queryNode(str_mci);

	pin_ptr<const wchar_t> str_amnesia = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/MCIAmnesia"));
	AMNESIC_MCI_CHECKBOX->Text = queryNode(str_amnesia);

	pin_ptr<const wchar_t> str_mci_exec = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/MCIExecutive"));
	EXECUTIVE_MCI_CHECKBOX->Text = queryNode(str_mci_exec);

	pin_ptr<const wchar_t> str_mci_uniq = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/MCIUnique"));
	UNIQUE_MCI_CHECKBOX->Text = queryNode(str_mci_uniq);

	pin_ptr<const wchar_t> str_mci_mult = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/MCIMultiple"));
	MULTIPLE_MCI_CHECKBOX->Text = queryNode(str_mci_mult);

	pin_ptr<const wchar_t> str_dementia = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/Dementia"));
	DEMENTIA_CHECKBOX->Text = queryNode(str_dementia);

	pin_ptr<const wchar_t> str_dementia_ma = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/DementiaMA"));
	MA_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_ma);

	pin_ptr<const wchar_t> str_dementia_mix = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/DementiaMix"));
	MIXED_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_mix);

	pin_ptr<const wchar_t> str_dementia_vasc = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/DementiaVasc"));
	VASCULAR_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_vasc);

	pin_ptr<const wchar_t> str_dementia_dcl = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/DementiaDCL"));
	DCL_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_dcl);

	pin_ptr<const wchar_t> str_dementia_dft = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/DementiaDFT"));
	DFT_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_dft);

	pin_ptr<const wchar_t> str_dementia_psp = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/DementiaPSP"));
	PSP_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_psp);

	pin_ptr<const wchar_t> str_dementia_dcb = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/DementiaDCB"));
	DCB_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_dcb);

	pin_ptr<const wchar_t> str_dementia_app = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/DementiaAPP"));
	APP_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_app);

	pin_ptr<const wchar_t> str_dementia_ds = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/DementiaDS"));
	DS_DEMENTIA_CHECKBOX->Text = queryNode(str_dementia_ds);

	pin_ptr<const wchar_t> str_psychoaff = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/PsycoAffective"));
	PSYCOAFFECTIVE_CHECKBOX->Text = queryNode(str_psychoaff);

	pin_ptr<const wchar_t> str_axiety = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/Anxiety"));
	ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Text = queryNode(str_axiety);

	pin_ptr<const wchar_t> str_depre = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/Depression"));
	DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Text = queryNode(str_depre);

	pin_ptr<const wchar_t> str_other = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/Other"));
	OTHER_DEMENTIA_CHECKBOX->Text = queryNode(str_other);
	OTHER_PSYCOAFFECTIVE_CHECKBOX->Text = queryNode(str_other);

	pin_ptr<const wchar_t> str_protocol = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/CognitiveDiag/OtherProtocol"));
	OTHER_PROTOCOLS_LABEL->Text = queryNode(str_protocol);

	pin_ptr<const wchar_t> str_M0 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Title"));
	DATA_M0_LABEL->Text = queryNode(str_M0);

	pin_ptr<const wchar_t> str_neurohist = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/NeuroHist"));
	NEUROLOGIC_HISTORY_LABEL->Text = queryNode(str_neurohist);

	pin_ptr<const wchar_t> str_epilep = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Epilepsy"));
	EPILEPSIA_LABEL->Text = queryNode(str_epilep);

	pin_ptr<const wchar_t> str_trauma = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Trauma"));
	TRAUMA_LABEL->Text = queryNode(str_trauma);

	pin_ptr<const wchar_t> str_tumor = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Tumor"));
	TUMOR_LABEL->Text = queryNode(str_tumor);

	pin_ptr<const wchar_t> str_cva = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/CVA"));
	CVA_LABEL->Text = queryNode(str_cva);

	pin_ptr<const wchar_t> str_parkinson = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Parkinson"));
	PARKINSON_LABEL->Text = queryNode(str_parkinson);

	pin_ptr<const wchar_t> str_hemiplegy = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Hemiplegy"));
	HEMIPLEGIA_LABEL->Text = queryNode(str_hemiplegy);

	pin_ptr<const wchar_t> str_aphasy = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Aphasy"));
	APHASY_LABEL->Text = queryNode(str_aphasy);

	pin_ptr<const wchar_t> str_otherneuro = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/OtherNeuro"));
	OTHER_NEURO_LABEL->Text = queryNode(str_otherneuro);

	pin_ptr<const wchar_t> str_psyhist = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/PsychiatricHist"));
	PSYCHIATRIC_HISTORY_LABEL->Text = queryNode(str_psyhist);

	pin_ptr<const wchar_t> str_hospital = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Hospitalization"));
	PSYCHIATRIC_HOSPITALIZATION_LABEL->Text = queryNode(str_hospital);

	pin_ptr<const wchar_t> str_quantity = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Quantity"));
	PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Text = queryNode(str_quantity);

	pin_ptr<const wchar_t> str_last_time = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/LastTime"));
	PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Text = queryNode(str_last_time);
	ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Text = queryNode(str_last_time);
	PSYCOTROPIC_USE_LAST_CHECKBOX->Text = queryNode(str_last_time);

	pin_ptr<const wchar_t> str_indication = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Indication"));
	PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Text = queryNode(str_indication);

	pin_ptr<const wchar_t> str_psycotropic = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Psycotropic"));
	PSYCOTROPIC_USE_LABEL->Text = queryNode(str_psycotropic);

	pin_ptr<const wchar_t> str_antidepressive = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Antidepressive"));
	ANTIDEPRESSIVE_USE_LABEL->Text = queryNode(str_antidepressive);

	pin_ptr<const wchar_t> str_rhumatologic = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Rhumatologic"));
	RHUMATOLOGIC_HISTORY_LABEL->Text = queryNode(str_rhumatologic);

	pin_ptr<const wchar_t> str_arthrose = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Arthrose"));
	ARTHROSIS_LABEL->Text = queryNode(str_arthrose);

	pin_ptr<const wchar_t> str_arthritis = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Arthritis"));
	ARTHRITIS_LABEL->Text = queryNode(str_arthritis);

	pin_ptr<const wchar_t> str_rhumatologic_other = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/OtherRhumatology"));
	OTHERS_RHUMA_LABEL->Text = queryNode(str_rhumatologic_other);

	pin_ptr<const wchar_t> str_surgery = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Surgery"));
	SURGERY_LABEL->Text = queryNode(str_surgery);

	pin_ptr<const wchar_t> str_pain = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Pain"));
	PAIN_LABEL->Text = queryNode(str_pain);

	pin_ptr<const wchar_t> str_cane = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Cane"));
	CANE_LABEL->Text = queryNode(str_cane);

	pin_ptr<const wchar_t> str_superior = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Superior"));
	SUPERIOR_PAIN_CHECKBOX->Text = queryNode(str_superior);
	SUPERIOR_SURGERY_CHECKBOX->Text = queryNode(str_superior);

	pin_ptr<const wchar_t> str_inferior = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT3Form/DataM0/Inferior"));
	INFERIOR_PAIN_CHECKBOX->Text = queryNode(str_inferior);
	INFERIOR_SURGERY_CHECKBOX->Text = queryNode(str_inferior);

}