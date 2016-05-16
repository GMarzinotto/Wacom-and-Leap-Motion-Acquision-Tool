#include "MedicalDataPT4.h"


using namespace System;
using namespace System::Windows::Forms;


void WacomTabletApplication::MedicalDataPT4::UpdateLanguage_MedicalDataPT4Form(String^ language) {

	pin_ptr<const wchar_t> str_title = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/FormTitle"));
	MedicalDataPT4::Text = queryNode(str_title);

	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Yes"));
	String^ yes = queryNode(str_yes);
	YES_ALCOHOL_RADIOBUTTON->Text = yes;
	YES_DIAGNOSE_RADIOBUTTON->Text = yes;
	YES_EMOTIONS_RADIOBUTTON->Text = yes;
	YES_HOSPITALIZATION_RADIOBUTTON->Text = yes;
	YES_OTHERS_RADIOBUTTON->Text = yes;
	YES_PATHOLOGY_RADIOBUTTON->Text = yes;
	YES_SURGERY_RADIOBUTTON->Text = yes;
	YES_TREATMENT_RADIOBUTTON->Text = yes;

	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/No"));
	String^ no = queryNode(str_no);
	NO_ALCOHOL_RADIOBUTTON->Text = no;
	NO_DIAGNOSE_RADIOBUTTON->Text = no;
	NO_EMOTIONS_RADIOBUTTON->Text = no;
	NO_HOSPITALIZATION_RADIOBUTTON->Text = no;
	NO_OTHERS_RADIOBUTTON->Text = no;
	NO_PATHOLOGY_RADIOBUTTON->Text = no;
	NO_SURGERY_RADIOBUTTON->Text = no;
	NO_TREATMENT_RADIOBUTTON->Text = no;

	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_ALCOHOL_RADIOBUTTON->Text = miss;
	MISSING_DIAGNOSE_RADIOBUTTON->Text = miss;
	MISSING_EMOTIONS_RADIOBUTTON->Text = miss;
	MISSING_HOSPITALIZATION_RADIOBUTTON->Text = miss;
	MISSING_OTHERS_RADIOBUTTON->Text = miss;
	MISSING_PATHOLOGY_RADIOBUTTON->Text = miss;
	MISSING_SURGERY_RADIOBUTTON->Text = miss;
	MISSING_TREATMENT_RADIOBUTTON->Text = miss;

	pin_ptr<const wchar_t> str_reg = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Register"));
	REGISTER_BUTTON->Text = queryNode(str_reg);
	
	pin_ptr<const wchar_t> str_cancel = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Cancel"));
	CANCEL_BUTTON->Text = queryNode(str_cancel);

	pin_ptr<const wchar_t> str_m12 = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/M12"));
	IMPORTANT_EVENTS_LABEL->Text = queryNode(str_m12);

	pin_ptr<const wchar_t> str_surgery = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Surgery"));
	SURGERY_LABEL->Text = queryNode(str_surgery);

	pin_ptr<const wchar_t> str_hospital = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Hospital"));
	HOSPITALIZATION_LABEL->Text = queryNode(str_hospital);

	pin_ptr<const wchar_t> str_pathology = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Pathology"));
	PATHOLOGY_LABEL->Text = queryNode(str_pathology);

	pin_ptr<const wchar_t> str_diag = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Diagnose"));
	DIAGNOSE_LABEL->Text = queryNode(str_diag);

	pin_ptr<const wchar_t> str_treatment = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Treatment"));
	TREATMENT_LABEL->Text = queryNode(str_treatment);

	pin_ptr<const wchar_t> str_alcohol = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Alcohol"));
	ALCOHOL_LABEL->Text = queryNode(str_alcohol);

	pin_ptr<const wchar_t> str_emotion = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Emotions"));
	EMOTIONS_LABEL->Text = queryNode(str_emotion);

	pin_ptr<const wchar_t> str_other = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalDataPT4Form/Others"));
	OTHERS_LABEL->Text = queryNode(str_other);

}