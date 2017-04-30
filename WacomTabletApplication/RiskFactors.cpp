#include "RiskFactors.h"

void WacomTabletApplication::RiskFactors::UpdateLanguage_RiskFactorsForm(String^ language) {

	pin_ptr<const wchar_t> str_yes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/Yes"));
	String^ yes = queryNode(str_yes);
	YES_RISK_FACTOR_DIABETES_RADIOBUTTON->Text = yes;
	YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Text = yes;
	YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Text = yes;

	pin_ptr<const wchar_t> str_no = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/No"));
	String^ no = queryNode(str_no);
	NO_RISK_FACTOR_DIABETES_RADIOBUTTON->Text = no;
	NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Text = no;
	NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Text = no;

	pin_ptr<const wchar_t> str_miss = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/Missing"));
	String^ miss = queryNode(str_miss);
	MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = miss;
	MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->Text = miss;
	MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Text = miss;
	MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Text = miss;
	MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = miss;

	pin_ptr<const wchar_t> str_lifestyle = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/LifeStyle"));
	LIFESTYLE_LABEL->Text = queryNode(str_lifestyle);

	pin_ptr<const wchar_t> str_active = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Active"));
	ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = queryNode(str_active);
	ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = queryNode(str_active);

	pin_ptr<const wchar_t> str_stop = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Stop"));
	STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = queryNode(str_stop);
	STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = queryNode(str_stop);

	pin_ptr<const wchar_t> str_hyper = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Hypertention"));
	RISK_FACTOR_HYPERTENTION_LABEL->Text = queryNode(str_hyper);

	pin_ptr<const wchar_t> str_diabetes = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Diabetes"));
	RISK_FACTOR_DIABETES_LABEL->Text = queryNode(str_diabetes);

	pin_ptr<const wchar_t> str_hyperlip = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Hyperlipidemia"));
	RISK_FACTOR_HYPERLIPIDEMIA_LABEL->Text = queryNode(str_hyperlip);

	pin_ptr<const wchar_t> str_smoking = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Smoking"));
	RISK_FACTOR_SMOKING_LABEL->Text = queryNode(str_smoking);

	pin_ptr<const wchar_t> str_dontsmoke = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/DontSmoke"));
	NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = queryNode(str_dontsmoke);

	pin_ptr<const wchar_t> str_smokepack = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/NumberPackages"));
	RISK_FACTOR_SMOKING_PACKAGES_LABEL->Text = queryNode(str_smokepack);

	pin_ptr<const wchar_t> str_smokeyears = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/NumberYears"));
	RISK_FACTOR_SMOKING_YEARS_LABEL->Text = queryNode(str_smokeyears);

	pin_ptr<const wchar_t> str_alcohol = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/Alcohol"));
	RISK_FACTOR_ALCOHOL_LABEL->Text = queryNode(str_alcohol);

	pin_ptr<const wchar_t> str_dontdrink = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/DontDrink"));
	NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = queryNode(str_dontdrink);

	pin_ptr<const wchar_t> str_numunits = PtrToStringChars(String::Concat(L"Root/", language, L"/Forms/MedicalHistoryForm/MedicalInfo/NumberUnits"));
	RISK_FACTOR_ALCOHOL_UNITS_LABEL->Text = queryNode(str_numunits);

}

void WacomTabletApplication::RiskFactors::completePatientInformationObject() {
    if (YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Checked) myPatient->riskFactor.setArterialHypertension(extended_bool::True);
    else if(NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Checked) myPatient->riskFactor.setArterialHypertension(extended_bool::False);
    else myPatient->riskFactor.setArterialHypertension(extended_bool::Missing);

    if (YES_RISK_FACTOR_DIABETES_RADIOBUTTON->Checked) myPatient->riskFactor.setDiabetes(extended_bool::True);
    else if (NO_RISK_FACTOR_DIABETES_RADIOBUTTON->Checked) myPatient->riskFactor.setDiabetes(extended_bool::False);
    else myPatient->riskFactor.setDiabetes(extended_bool::Missing);

    if (YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Checked) myPatient->riskFactor.setHyperlipidemia(extended_bool::True);
    else if (NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Checked) myPatient->riskFactor.setHyperlipidemia(extended_bool::False);
    else myPatient->riskFactor.setHyperlipidemia(extended_bool::Missing);

    if (NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked) myPatient->riskFactor.setSmoking(habitsType::Never);
    else if (ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked) myPatient->riskFactor.setSmoking(habitsType::Active);
    else if (STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked) myPatient->riskFactor.setSmoking(habitsType::Stopped);
    else myPatient->riskFactor.setSmoking(habitsType::Missing);

    myPatient->riskFactor.setNumPackets(RISK_FACTOR_SMOKING_PACKETS_COUNTER->Text);
    myPatient->riskFactor.setYearsSmoking(RISK_FACTOR_SMOKING_YEARS_COUNTER->Text);

    if (NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked) myPatient->riskFactor.setDrinking(habitsType::Never);
    else if (ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked) myPatient->riskFactor.setDrinking(habitsType::Active);
    else if (STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked) myPatient->riskFactor.setDrinking(habitsType::Stopped);
    else myPatient->riskFactor.setDrinking(habitsType::Missing);

    myPatient->riskFactor.setUnitiesPerWeek(RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Text);
}
void WacomTabletApplication::RiskFactors::fillFormWithPreviousPatientData() {
	
}