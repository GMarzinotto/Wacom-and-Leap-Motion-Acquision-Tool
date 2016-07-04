#pragma once
#include <msclr\marshal_cppstd.h>
#include "Dependencies/queryNodes.h"

namespace WacomTabletApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for CompleteECRF
	/// </summary>
	public ref class MedicalDataPT1 : public System::Windows::Forms::Form
	{
	public: String^ currentLanguage;
	public:
		MedicalDataPT1(String^ language)
		{
			currentLanguage = language;
			InitializeComponent();
			UpdateLanguage_MedicalDataPT1Form(currentLanguage);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MedicalDataPT1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: void WacomTabletApplication::MedicalDataPT1::UpdateLanguage_MedicalDataPT1Form(String^ language);
	private: System::Windows::Forms::GroupBox^  SOCIAL_EVALUATION_LABEL;
	private: System::Windows::Forms::GroupBox^  GOES_OUT_OFTEN_LABEL;
	private: System::Windows::Forms::RadioButton^  YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_GOES_OUT_RADIOBUTTON;

	protected:




	private: System::Windows::Forms::RadioButton^  NO_GOES_OUT_RADIOBUTTON;

	private: System::Windows::Forms::RadioButton^  YES_GOES_OUT_ALONE_RADIOBUTTON;

	private: System::Windows::Forms::GroupBox^  LIVES_IN_HOUSE_LABEL;
	private: System::Windows::Forms::RadioButton^  MISSING_LIVES_IN_HOUSE_RADIOBUTTON;


	private: System::Windows::Forms::RadioButton^  NO_LIVES_IN_HOUSE_RADIOBUTTON;

	private: System::Windows::Forms::RadioButton^  YES_LIVES_IN_HOUSE_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  WALKING_TOOLS_LABEL;
	private: System::Windows::Forms::CheckBox^  WHEELCHAIR_WALKING_TOOLS_CHECKBOX;



	private: System::Windows::Forms::CheckBox^  WALKER_WALKING_TOOLS_CHECKBOX;

	private: System::Windows::Forms::CheckBox^  CANE_WALKING_TOOLS_CHECKBOX;

	private: System::Windows::Forms::CheckBox^  OUTSIDE_WALKING_TOOLS_CHECKBOX;

	private: System::Windows::Forms::CheckBox^  HOUSE_WALKING_TOOLS_CHECKBOX;

	private: System::Windows::Forms::RadioButton^  MISSING_WALKING_TOOLS_RADIOBUTTON;

	private: System::Windows::Forms::RadioButton^  NO_WALKING_TOOLS_RADIOBUTTON;

	private: System::Windows::Forms::RadioButton^  YES_WALKING_TOOLS_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  MEDICAL_INFO_LABEL;


	private: System::Windows::Forms::GroupBox^  HEART_FAMILY_HISTORY_LABEL;


	private: System::Windows::Forms::CheckBox^  UNCLE_ALZHEIMER_HISTORY_CHECKBOX;

	private: System::Windows::Forms::CheckBox^  BROTHER_ALZHEIMER_HISTORY_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  COUSIN_ALZHEIMER_HISTORY_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  PARENT_ALZHEIMER_HISTORY_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX;





	private: System::Windows::Forms::RadioButton^  MISSING_HEART_HISTORY_RADIOBUTTON;


	private: System::Windows::Forms::RadioButton^  NO_HEART_HISTORY_RADIOBUTTON;

	private: System::Windows::Forms::RadioButton^  YES_HEART_HISTORY_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  HEART_PERSONAL_HISTORY_LABEL;


	private: System::Windows::Forms::GroupBox^  ALZHEIMER_HISTORY_LABEL;
	private: System::Windows::Forms::RadioButton^  MISSING_ALZHEIMER_HISTORY_RADIOBUTTON;






	private: System::Windows::Forms::RadioButton^  NO_ALZHEIMER_HISTORY_RADIOBUTTON;

	private: System::Windows::Forms::RadioButton^  YES_ALZHEIMER_HISTORY_RADIOBUTTON;
	private: System::Windows::Forms::CheckBox^  FEMALE_HEART_HISTORY_CHECKBOX;


	private: System::Windows::Forms::CheckBox^  MALE_HEART_HISTORY_CHECKBOX;
	private: System::Windows::Forms::Label^  CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL;
	private: System::Windows::Forms::RadioButton^  DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON;



private: System::Windows::Forms::RadioButton^  HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON;


private: System::Windows::Forms::RadioButton^  ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON;


private: System::Windows::Forms::Label^  CVA_HEART_PERSONAL_HISTORY_LABEL;


private: System::Windows::Forms::Label^  FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL;





private: System::Windows::Forms::Label^  INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL;





private: System::Windows::Forms::Label^  ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL;





private: System::Windows::Forms::Label^  ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL;





private: System::Windows::Forms::Label^  BYPASS_HEART_PERSONAL_HISTORY_LABEL;





private: System::Windows::Forms::Label^  INFARCTION_HEART_PERSONAL_HISTORY_LABEL;
private: System::Windows::Forms::GroupBox^  OTHER_MORBIDITIES_HISTORIC_LABEL;
private: System::Windows::Forms::TextBox^  CREATININE_MORBIDITIES_DATE_TEXTBOX;








private: System::Windows::Forms::Label^  CREATININE_MORBIDITIES_DATE_LABEL;



private: System::Windows::Forms::Label^  CANCER_MORBIDITIES_DETAIL_LABEL;
private: System::Windows::Forms::Label^  FALLING_APPREHENSION_MORBIDITIES_LABEL;


private: System::Windows::Forms::Label^  FALLING_MORBIDITIES_LABEL;




private: System::Windows::Forms::Label^  WALKING_MORBIDITIES_LABEL;




private: System::Windows::Forms::Label^  CANCER_MORBIDITIES_LABEL;




private: System::Windows::Forms::Label^  CREATININE_MORBIDITIES_LABEL;




private: System::Windows::Forms::Label^  KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL;




private: System::Windows::Forms::Label^  BREATH_INSSUFICIENCY_MORBIDITIES_LABEL;




private: System::Windows::Forms::Label^  UNDERNUTRITION_MORBIDITIES_LABEL;




private: System::Windows::Forms::Label^  DEPRESSION_MORBIDITIES_LABEL;
private: System::Windows::Forms::RadioButton^  MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON;

private: System::Windows::Forms::RadioButton^  NO_DEPRESSION_MORBIDITIES_RADIOBUTTON;






private: System::Windows::Forms::RadioButton^  YES_DEPRESSION_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::GroupBox^  LIFESTYLE_LABEL;
private: System::Windows::Forms::RadioButton^  NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON;






private: System::Windows::Forms::NumericUpDown^  RISK_FACTOR_ALCOHOL_UNITS_COUNTER;







private: System::Windows::Forms::Label^  RISK_FACTOR_ALCOHOL_UNITS_LABEL;

private: System::Windows::Forms::NumericUpDown^  RISK_FACTOR_SMOKING_YEARS_COUNTER;

private: System::Windows::Forms::NumericUpDown^  RISK_FACTOR_SMOKING_PACKETS_COUNTER;

private: System::Windows::Forms::Label^  RISK_FACTOR_SMOKING_YEARS_LABEL;

private: System::Windows::Forms::Label^  RISK_FACTOR_SMOKING_PACKAGES_LABEL;

private: System::Windows::Forms::Label^  RISK_FACTOR_ALCOHOL_LABEL;

private: System::Windows::Forms::Label^  RISK_FACTOR_SMOKING_LABEL;
private: System::Windows::Forms::RadioButton^  STOP_RISK_FACTOR_SMOKING_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON;






private: System::Windows::Forms::Label^  RISK_FACTOR_HYPERLIPIDEMIA_LABEL;

private: System::Windows::Forms::Label^  RISK_FACTOR_DIABETES_LABEL;





private: System::Windows::Forms::Label^  RISK_FACTOR_HYPERTENTION_LABEL;
private: System::Windows::Forms::GroupBox^  OTHER_HISTORY_LABEL;
private: System::Windows::Forms::TextBox^  OTHER_HISTORY_TEXTBOX;









private: System::Windows::Forms::RadioButton^  MISSING_OTHER_HISTORY_RADIOBUTTON;

private: System::Windows::Forms::RadioButton^  NO_OTHER_HISTORY_RADIOBUTTON;

private: System::Windows::Forms::RadioButton^  YES_OTHER_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::Button^  CANCEL_BUTTON;
private: System::Windows::Forms::Button^  REGISTER_BUTTON;




private: System::Windows::Forms::GroupBox^  groupBox20;
private: System::Windows::Forms::RadioButton^  YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox19;
private: System::Windows::Forms::RadioButton^  YES_FALLING_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_FALLING_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_FALLING_MORBIDITIES_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox18;
private: System::Windows::Forms::RadioButton^  YES_WALKING_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_WALKING_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_WALKING_MORBIDITIES_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox17;
private: System::Windows::Forms::RadioButton^  YES_CANCER_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_CANCER_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_CANCER_MORBIDITIES_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox16;
private: System::Windows::Forms::RadioButton^  YES_CREATININE_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_CREATININE_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_CREATININE_MORBIDITIES_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox15;
private: System::Windows::Forms::RadioButton^  YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::RadioButton^  YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox13;
private: System::Windows::Forms::RadioButton^  YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON;




private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::GroupBox^  groupBox28;
private: System::Windows::Forms::GroupBox^  groupBox27;
private: System::Windows::Forms::RadioButton^  YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox26;
private: System::Windows::Forms::RadioButton^  YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox25;
private: System::Windows::Forms::RadioButton^  YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON;




private: System::Windows::Forms::GroupBox^  groupBox24;
private: System::Windows::Forms::RadioButton^  YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox23;
private: System::Windows::Forms::RadioButton^  YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON;




private: System::Windows::Forms::GroupBox^  groupBox22;
private: System::Windows::Forms::RadioButton^  YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON;





private: System::Windows::Forms::GroupBox^  groupBox21;
private: System::Windows::Forms::RadioButton^  YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox32;
private: System::Windows::Forms::RadioButton^  MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON;

private: System::Windows::Forms::GroupBox^  groupBox31;
private: System::Windows::Forms::RadioButton^  YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON;




private: System::Windows::Forms::GroupBox^  groupBox30;
private: System::Windows::Forms::RadioButton^  YES_RISK_FACTOR_DIABETES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_RISK_FACTOR_DIABETES_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON;



private: System::Windows::Forms::GroupBox^  groupBox29;
private: System::Windows::Forms::RadioButton^  YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON;





private: System::Windows::Forms::GroupBox^  groupBox33;
private: System::Windows::Forms::RadioButton^  MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON;

private: System::Windows::Forms::RadioButton^  STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON;


private: System::Windows::Forms::DateTimePicker^  CREATININE_MORBIDITIES_DATE_DATEPICKER;
private: System::Windows::Forms::ComboBox^  CANCER_MORBIDITIES_DETAIL_COMBOBOX;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SOCIAL_EVALUATION_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->WALKING_TOOLS_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->WALKER_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->CANE_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->OUTSIDE_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->HOUSE_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MISSING_WALKING_TOOLS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_WALKING_TOOLS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->YES_WALKING_TOOLS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->GOES_OUT_OFTEN_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_GOES_OUT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_GOES_OUT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->YES_GOES_OUT_ALONE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->LIVES_IN_HOUSE_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MEDICAL_INFO_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->HEART_FAMILY_HISTORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->FEMALE_HEART_HISTORY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MALE_HEART_HISTORY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MISSING_HEART_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_HEART_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->YES_HEART_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->HEART_PERSONAL_HISTORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox28 = (gcnew System::Windows::Forms::GroupBox());
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox27 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox26 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox25 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox24 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox23 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox22 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox21 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL = (gcnew System::Windows::Forms::Label());
			this->CVA_HEART_PERSONAL_HISTORY_LABEL = (gcnew System::Windows::Forms::Label());
			this->FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL = (gcnew System::Windows::Forms::Label());
			this->INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL = (gcnew System::Windows::Forms::Label());
			this->ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL = (gcnew System::Windows::Forms::Label());
			this->ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL = (gcnew System::Windows::Forms::Label());
			this->BYPASS_HEART_PERSONAL_HISTORY_LABEL = (gcnew System::Windows::Forms::Label());
			this->INFARCTION_HEART_PERSONAL_HISTORY_LABEL = (gcnew System::Windows::Forms::Label());
			this->ALZHEIMER_HISTORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->PARENT_ALZHEIMER_HISTORY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->OTHER_MORBIDITIES_HISTORIC_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->CANCER_MORBIDITIES_DETAIL_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
			this->CREATININE_MORBIDITIES_DATE_DATEPICKER = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox20 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox19 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox18 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->CREATININE_MORBIDITIES_DATE_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->CREATININE_MORBIDITIES_DATE_LABEL = (gcnew System::Windows::Forms::Label());
			this->CANCER_MORBIDITIES_DETAIL_LABEL = (gcnew System::Windows::Forms::Label());
			this->FALLING_APPREHENSION_MORBIDITIES_LABEL = (gcnew System::Windows::Forms::Label());
			this->FALLING_MORBIDITIES_LABEL = (gcnew System::Windows::Forms::Label());
			this->WALKING_MORBIDITIES_LABEL = (gcnew System::Windows::Forms::Label());
			this->CANCER_MORBIDITIES_LABEL = (gcnew System::Windows::Forms::Label());
			this->CREATININE_MORBIDITIES_LABEL = (gcnew System::Windows::Forms::Label());
			this->KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL = (gcnew System::Windows::Forms::Label());
			this->BREATH_INSSUFICIENCY_MORBIDITIES_LABEL = (gcnew System::Windows::Forms::Label());
			this->UNDERNUTRITION_MORBIDITIES_LABEL = (gcnew System::Windows::Forms::Label());
			this->DEPRESSION_MORBIDITIES_LABEL = (gcnew System::Windows::Forms::Label());
			this->LIFESTYLE_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox33 = (gcnew System::Windows::Forms::GroupBox());
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox32 = (gcnew System::Windows::Forms::GroupBox());
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox31 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox30 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox29 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
			this->RISK_FACTOR_ALCOHOL_UNITS_LABEL = (gcnew System::Windows::Forms::Label());
			this->RISK_FACTOR_SMOKING_YEARS_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
			this->RISK_FACTOR_SMOKING_PACKETS_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
			this->RISK_FACTOR_SMOKING_YEARS_LABEL = (gcnew System::Windows::Forms::Label());
			this->RISK_FACTOR_SMOKING_PACKAGES_LABEL = (gcnew System::Windows::Forms::Label());
			this->RISK_FACTOR_ALCOHOL_LABEL = (gcnew System::Windows::Forms::Label());
			this->RISK_FACTOR_SMOKING_LABEL = (gcnew System::Windows::Forms::Label());
			this->RISK_FACTOR_HYPERLIPIDEMIA_LABEL = (gcnew System::Windows::Forms::Label());
			this->RISK_FACTOR_DIABETES_LABEL = (gcnew System::Windows::Forms::Label());
			this->RISK_FACTOR_HYPERTENTION_LABEL = (gcnew System::Windows::Forms::Label());
			this->OTHER_HISTORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->OTHER_HISTORY_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->MISSING_OTHER_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_OTHER_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->YES_OTHER_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
			this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
			this->SOCIAL_EVALUATION_LABEL->SuspendLayout();
			this->WALKING_TOOLS_LABEL->SuspendLayout();
			this->GOES_OUT_OFTEN_LABEL->SuspendLayout();
			this->LIVES_IN_HOUSE_LABEL->SuspendLayout();
			this->MEDICAL_INFO_LABEL->SuspendLayout();
			this->HEART_FAMILY_HISTORY_LABEL->SuspendLayout();
			this->HEART_PERSONAL_HISTORY_LABEL->SuspendLayout();
			this->groupBox28->SuspendLayout();
			this->groupBox27->SuspendLayout();
			this->groupBox26->SuspendLayout();
			this->groupBox25->SuspendLayout();
			this->groupBox24->SuspendLayout();
			this->groupBox23->SuspendLayout();
			this->groupBox22->SuspendLayout();
			this->groupBox21->SuspendLayout();
			this->ALZHEIMER_HISTORY_LABEL->SuspendLayout();
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->SuspendLayout();
			this->groupBox20->SuspendLayout();
			this->groupBox19->SuspendLayout();
			this->groupBox18->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->LIFESTYLE_LABEL->SuspendLayout();
			this->groupBox33->SuspendLayout();
			this->groupBox32->SuspendLayout();
			this->groupBox31->SuspendLayout();
			this->groupBox30->SuspendLayout();
			this->groupBox29->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RISK_FACTOR_SMOKING_YEARS_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RISK_FACTOR_SMOKING_PACKETS_COUNTER))->BeginInit();
			this->OTHER_HISTORY_LABEL->SuspendLayout();
			this->SuspendLayout();
			// 
			// SOCIAL_EVALUATION_LABEL
			// 
			this->SOCIAL_EVALUATION_LABEL->Controls->Add(this->WALKING_TOOLS_LABEL);
			this->SOCIAL_EVALUATION_LABEL->Controls->Add(this->GOES_OUT_OFTEN_LABEL);
			this->SOCIAL_EVALUATION_LABEL->Controls->Add(this->LIVES_IN_HOUSE_LABEL);
			this->SOCIAL_EVALUATION_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->SOCIAL_EVALUATION_LABEL->Location = System::Drawing::Point(27, 30);
			this->SOCIAL_EVALUATION_LABEL->Name = L"SOCIAL_EVALUATION_LABEL";
			this->SOCIAL_EVALUATION_LABEL->Size = System::Drawing::Size(703, 225);
			this->SOCIAL_EVALUATION_LABEL->TabIndex = 1;
			this->SOCIAL_EVALUATION_LABEL->TabStop = false;
			this->SOCIAL_EVALUATION_LABEL->Text = L"Évaluation Sociale";
			// 
			// WALKING_TOOLS_LABEL
			// 
			this->WALKING_TOOLS_LABEL->Controls->Add(this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX);
			this->WALKING_TOOLS_LABEL->Controls->Add(this->WALKER_WALKING_TOOLS_CHECKBOX);
			this->WALKING_TOOLS_LABEL->Controls->Add(this->CANE_WALKING_TOOLS_CHECKBOX);
			this->WALKING_TOOLS_LABEL->Controls->Add(this->OUTSIDE_WALKING_TOOLS_CHECKBOX);
			this->WALKING_TOOLS_LABEL->Controls->Add(this->HOUSE_WALKING_TOOLS_CHECKBOX);
			this->WALKING_TOOLS_LABEL->Controls->Add(this->MISSING_WALKING_TOOLS_RADIOBUTTON);
			this->WALKING_TOOLS_LABEL->Controls->Add(this->NO_WALKING_TOOLS_RADIOBUTTON);
			this->WALKING_TOOLS_LABEL->Controls->Add(this->YES_WALKING_TOOLS_RADIOBUTTON);
			this->WALKING_TOOLS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->WALKING_TOOLS_LABEL->Location = System::Drawing::Point(344, 37);
			this->WALKING_TOOLS_LABEL->Name = L"WALKING_TOOLS_LABEL";
			this->WALKING_TOOLS_LABEL->Size = System::Drawing::Size(342, 178);
			this->WALKING_TOOLS_LABEL->TabIndex = 8;
			this->WALKING_TOOLS_LABEL->TabStop = false;
			this->WALKING_TOOLS_LABEL->Text = L"Utilisation d\'aides à la marche";
			// 
			// WHEELCHAIR_WALKING_TOOLS_CHECKBOX
			// 
			this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->AutoSize = true;
			this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Enabled = false;
			this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(171, 140);
			this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Name = L"WHEELCHAIR_WALKING_TOOLS_CHECKBOX";
			this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(165, 28);
			this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->TabIndex = 15;
			this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Text = L"Fauteuil Roulant";
			this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// WALKER_WALKING_TOOLS_CHECKBOX
			// 
			this->WALKER_WALKING_TOOLS_CHECKBOX->AutoSize = true;
			this->WALKER_WALKING_TOOLS_CHECKBOX->Enabled = false;
			this->WALKER_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(171, 106);
			this->WALKER_WALKING_TOOLS_CHECKBOX->Name = L"WALKER_WALKING_TOOLS_CHECKBOX";
			this->WALKER_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(147, 28);
			this->WALKER_WALKING_TOOLS_CHECKBOX->TabIndex = 14;
			this->WALKER_WALKING_TOOLS_CHECKBOX->Text = L"Déambulateur";
			this->WALKER_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// CANE_WALKING_TOOLS_CHECKBOX
			// 
			this->CANE_WALKING_TOOLS_CHECKBOX->AutoSize = true;
			this->CANE_WALKING_TOOLS_CHECKBOX->Enabled = false;
			this->CANE_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(171, 72);
			this->CANE_WALKING_TOOLS_CHECKBOX->Name = L"CANE_WALKING_TOOLS_CHECKBOX";
			this->CANE_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(85, 28);
			this->CANE_WALKING_TOOLS_CHECKBOX->TabIndex = 13;
			this->CANE_WALKING_TOOLS_CHECKBOX->Text = L"Canne";
			this->CANE_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// OUTSIDE_WALKING_TOOLS_CHECKBOX
			// 
			this->OUTSIDE_WALKING_TOOLS_CHECKBOX->AutoSize = true;
			this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Enabled = false;
			this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(28, 106);
			this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Name = L"OUTSIDE_WALKING_TOOLS_CHECKBOX";
			this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(131, 28);
			this->OUTSIDE_WALKING_TOOLS_CHECKBOX->TabIndex = 12;
			this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Text = L"À l\'Extérieur";
			this->OUTSIDE_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// HOUSE_WALKING_TOOLS_CHECKBOX
			// 
			this->HOUSE_WALKING_TOOLS_CHECKBOX->AutoSize = true;
			this->HOUSE_WALKING_TOOLS_CHECKBOX->Enabled = false;
			this->HOUSE_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(28, 72);
			this->HOUSE_WALKING_TOOLS_CHECKBOX->Name = L"HOUSE_WALKING_TOOLS_CHECKBOX";
			this->HOUSE_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(120, 28);
			this->HOUSE_WALKING_TOOLS_CHECKBOX->TabIndex = 11;
			this->HOUSE_WALKING_TOOLS_CHECKBOX->Text = L"À Domicile";
			this->HOUSE_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// MISSING_WALKING_TOOLS_RADIOBUTTON
			// 
			this->MISSING_WALKING_TOOLS_RADIOBUTTON->AutoSize = true;
			this->MISSING_WALKING_TOOLS_RADIOBUTTON->Location = System::Drawing::Point(175, 31);
			this->MISSING_WALKING_TOOLS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_WALKING_TOOLS_RADIOBUTTON->Name = L"MISSING_WALKING_TOOLS_RADIOBUTTON";
			this->MISSING_WALKING_TOOLS_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_WALKING_TOOLS_RADIOBUTTON->TabIndex = 10;
			this->MISSING_WALKING_TOOLS_RADIOBUTTON->TabStop = true;
			this->MISSING_WALKING_TOOLS_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_WALKING_TOOLS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_WALKING_TOOLS_RADIOBUTTON
			// 
			this->NO_WALKING_TOOLS_RADIOBUTTON->AutoSize = true;
			this->NO_WALKING_TOOLS_RADIOBUTTON->Location = System::Drawing::Point(99, 31);
			this->NO_WALKING_TOOLS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_WALKING_TOOLS_RADIOBUTTON->Name = L"NO_WALKING_TOOLS_RADIOBUTTON";
			this->NO_WALKING_TOOLS_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_WALKING_TOOLS_RADIOBUTTON->TabIndex = 9;
			this->NO_WALKING_TOOLS_RADIOBUTTON->TabStop = true;
			this->NO_WALKING_TOOLS_RADIOBUTTON->Text = L"Non";
			this->NO_WALKING_TOOLS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// YES_WALKING_TOOLS_RADIOBUTTON
			// 
			this->YES_WALKING_TOOLS_RADIOBUTTON->AutoSize = true;
			this->YES_WALKING_TOOLS_RADIOBUTTON->Location = System::Drawing::Point(29, 31);
			this->YES_WALKING_TOOLS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_WALKING_TOOLS_RADIOBUTTON->Name = L"YES_WALKING_TOOLS_RADIOBUTTON";
			this->YES_WALKING_TOOLS_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_WALKING_TOOLS_RADIOBUTTON->TabIndex = 8;
			this->YES_WALKING_TOOLS_RADIOBUTTON->TabStop = true;
			this->YES_WALKING_TOOLS_RADIOBUTTON->Text = L"Oui";
			this->YES_WALKING_TOOLS_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_WALKING_TOOLS_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::YES_WALKING_TOOLS_RADIOBUTTON_CheckedChanged);
			// 
			// GOES_OUT_OFTEN_LABEL
			// 
			this->GOES_OUT_OFTEN_LABEL->Controls->Add(this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON);
			this->GOES_OUT_OFTEN_LABEL->Controls->Add(this->MISSING_GOES_OUT_RADIOBUTTON);
			this->GOES_OUT_OFTEN_LABEL->Controls->Add(this->NO_GOES_OUT_RADIOBUTTON);
			this->GOES_OUT_OFTEN_LABEL->Controls->Add(this->YES_GOES_OUT_ALONE_RADIOBUTTON);
			this->GOES_OUT_OFTEN_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->GOES_OUT_OFTEN_LABEL->Location = System::Drawing::Point(20, 115);
			this->GOES_OUT_OFTEN_LABEL->Name = L"GOES_OUT_OFTEN_LABEL";
			this->GOES_OUT_OFTEN_LABEL->Size = System::Drawing::Size(318, 100);
			this->GOES_OUT_OFTEN_LABEL->TabIndex = 4;
			this->GOES_OUT_OFTEN_LABEL->TabStop = false;
			this->GOES_OUT_OFTEN_LABEL->Text = L"Sort Régulièrement du Domicile ";
			// 
			// YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON
			// 
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->AutoSize = true;
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Location = System::Drawing::Point(127, 31);
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Name = L"YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON";
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Size = System::Drawing::Size(182, 28);
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->TabIndex = 5;
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->TabStop = true;
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Text = L"Oui, Accompagné";
			this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_GOES_OUT_RADIOBUTTON
			// 
			this->MISSING_GOES_OUT_RADIOBUTTON->AutoSize = true;
			this->MISSING_GOES_OUT_RADIOBUTTON->Location = System::Drawing::Point(127, 62);
			this->MISSING_GOES_OUT_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_GOES_OUT_RADIOBUTTON->Name = L"MISSING_GOES_OUT_RADIOBUTTON";
			this->MISSING_GOES_OUT_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_GOES_OUT_RADIOBUTTON->TabIndex = 7;
			this->MISSING_GOES_OUT_RADIOBUTTON->TabStop = true;
			this->MISSING_GOES_OUT_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_GOES_OUT_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_GOES_OUT_RADIOBUTTON
			// 
			this->NO_GOES_OUT_RADIOBUTTON->AutoSize = true;
			this->NO_GOES_OUT_RADIOBUTTON->Location = System::Drawing::Point(9, 62);
			this->NO_GOES_OUT_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_GOES_OUT_RADIOBUTTON->Name = L"NO_GOES_OUT_RADIOBUTTON";
			this->NO_GOES_OUT_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_GOES_OUT_RADIOBUTTON->TabIndex = 6;
			this->NO_GOES_OUT_RADIOBUTTON->TabStop = true;
			this->NO_GOES_OUT_RADIOBUTTON->Text = L"Non";
			this->NO_GOES_OUT_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// YES_GOES_OUT_ALONE_RADIOBUTTON
			// 
			this->YES_GOES_OUT_ALONE_RADIOBUTTON->AutoSize = true;
			this->YES_GOES_OUT_ALONE_RADIOBUTTON->Location = System::Drawing::Point(9, 31);
			this->YES_GOES_OUT_ALONE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_GOES_OUT_ALONE_RADIOBUTTON->Name = L"YES_GOES_OUT_ALONE_RADIOBUTTON";
			this->YES_GOES_OUT_ALONE_RADIOBUTTON->Size = System::Drawing::Size(106, 28);
			this->YES_GOES_OUT_ALONE_RADIOBUTTON->TabIndex = 4;
			this->YES_GOES_OUT_ALONE_RADIOBUTTON->TabStop = true;
			this->YES_GOES_OUT_ALONE_RADIOBUTTON->Text = L"Oui, Seul";
			this->YES_GOES_OUT_ALONE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// LIVES_IN_HOUSE_LABEL
			// 
			this->LIVES_IN_HOUSE_LABEL->Controls->Add(this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON);
			this->LIVES_IN_HOUSE_LABEL->Controls->Add(this->NO_LIVES_IN_HOUSE_RADIOBUTTON);
			this->LIVES_IN_HOUSE_LABEL->Controls->Add(this->YES_LIVES_IN_HOUSE_RADIOBUTTON);
			this->LIVES_IN_HOUSE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LIVES_IN_HOUSE_LABEL->Location = System::Drawing::Point(20, 37);
			this->LIVES_IN_HOUSE_LABEL->Name = L"LIVES_IN_HOUSE_LABEL";
			this->LIVES_IN_HOUSE_LABEL->Size = System::Drawing::Size(318, 68);
			this->LIVES_IN_HOUSE_LABEL->TabIndex = 1;
			this->LIVES_IN_HOUSE_LABEL->TabStop = false;
			this->LIVES_IN_HOUSE_LABEL->Text = L"Vit à Domicile";
			// 
			// MISSING_LIVES_IN_HOUSE_RADIOBUTTON
			// 
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->AutoSize = true;
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Location = System::Drawing::Point(175, 31);
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Name = L"MISSING_LIVES_IN_HOUSE_RADIOBUTTON";
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->TabIndex = 3;
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->TabStop = true;
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_LIVES_IN_HOUSE_RADIOBUTTON
			// 
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON->AutoSize = true;
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Location = System::Drawing::Point(99, 31);
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Name = L"NO_LIVES_IN_HOUSE_RADIOBUTTON";
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON->TabIndex = 2;
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON->TabStop = true;
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Text = L"Non";
			this->NO_LIVES_IN_HOUSE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// YES_LIVES_IN_HOUSE_RADIOBUTTON
			// 
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON->AutoSize = true;
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Location = System::Drawing::Point(29, 31);
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Name = L"YES_LIVES_IN_HOUSE_RADIOBUTTON";
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON->TabIndex = 1;
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON->TabStop = true;
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Text = L"Oui";
			this->YES_LIVES_IN_HOUSE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MEDICAL_INFO_LABEL
			// 
			this->MEDICAL_INFO_LABEL->Controls->Add(this->HEART_FAMILY_HISTORY_LABEL);
			this->MEDICAL_INFO_LABEL->Controls->Add(this->HEART_PERSONAL_HISTORY_LABEL);
			this->MEDICAL_INFO_LABEL->Controls->Add(this->ALZHEIMER_HISTORY_LABEL);
			this->MEDICAL_INFO_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->MEDICAL_INFO_LABEL->Location = System::Drawing::Point(752, 30);
			this->MEDICAL_INFO_LABEL->Name = L"MEDICAL_INFO_LABEL";
			this->MEDICAL_INFO_LABEL->Size = System::Drawing::Size(703, 582);
			this->MEDICAL_INFO_LABEL->TabIndex = 16;
			this->MEDICAL_INFO_LABEL->TabStop = false;
			this->MEDICAL_INFO_LABEL->Text = L"Données Medicales";
			// 
			// HEART_FAMILY_HISTORY_LABEL
			// 
			this->HEART_FAMILY_HISTORY_LABEL->Controls->Add(this->FEMALE_HEART_HISTORY_CHECKBOX);
			this->HEART_FAMILY_HISTORY_LABEL->Controls->Add(this->MALE_HEART_HISTORY_CHECKBOX);
			this->HEART_FAMILY_HISTORY_LABEL->Controls->Add(this->MISSING_HEART_HISTORY_RADIOBUTTON);
			this->HEART_FAMILY_HISTORY_LABEL->Controls->Add(this->NO_HEART_HISTORY_RADIOBUTTON);
			this->HEART_FAMILY_HISTORY_LABEL->Controls->Add(this->YES_HEART_HISTORY_RADIOBUTTON);
			this->HEART_FAMILY_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->HEART_FAMILY_HISTORY_LABEL->Location = System::Drawing::Point(344, 37);
			this->HEART_FAMILY_HISTORY_LABEL->Name = L"HEART_FAMILY_HISTORY_LABEL";
			this->HEART_FAMILY_HISTORY_LABEL->Size = System::Drawing::Size(343, 178);
			this->HEART_FAMILY_HISTORY_LABEL->TabIndex = 25;
			this->HEART_FAMILY_HISTORY_LABEL->TabStop = false;
			this->HEART_FAMILY_HISTORY_LABEL->Text = L"Antécédents fam. maladie cardio-vasc";
			// 
			// FEMALE_HEART_HISTORY_CHECKBOX
			// 
			this->FEMALE_HEART_HISTORY_CHECKBOX->AutoSize = true;
			this->FEMALE_HEART_HISTORY_CHECKBOX->Enabled = false;
			this->FEMALE_HEART_HISTORY_CHECKBOX->Location = System::Drawing::Point(29, 106);
			this->FEMALE_HEART_HISTORY_CHECKBOX->Name = L"FEMALE_HEART_HISTORY_CHECKBOX";
			this->FEMALE_HEART_HISTORY_CHECKBOX->Size = System::Drawing::Size(183, 28);
			this->FEMALE_HEART_HISTORY_CHECKBOX->TabIndex = 29;
			this->FEMALE_HEART_HISTORY_CHECKBOX->Text = L"Femme (65 > ans)";
			this->FEMALE_HEART_HISTORY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// MALE_HEART_HISTORY_CHECKBOX
			// 
			this->MALE_HEART_HISTORY_CHECKBOX->AutoSize = true;
			this->MALE_HEART_HISTORY_CHECKBOX->Enabled = false;
			this->MALE_HEART_HISTORY_CHECKBOX->Location = System::Drawing::Point(29, 72);
			this->MALE_HEART_HISTORY_CHECKBOX->Name = L"MALE_HEART_HISTORY_CHECKBOX";
			this->MALE_HEART_HISTORY_CHECKBOX->Size = System::Drawing::Size(185, 28);
			this->MALE_HEART_HISTORY_CHECKBOX->TabIndex = 28;
			this->MALE_HEART_HISTORY_CHECKBOX->Text = L"Homme (55 > ans)";
			this->MALE_HEART_HISTORY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// MISSING_HEART_HISTORY_RADIOBUTTON
			// 
			this->MISSING_HEART_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_HEART_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(175, 31);
			this->MISSING_HEART_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_HEART_HISTORY_RADIOBUTTON->Name = L"MISSING_HEART_HISTORY_RADIOBUTTON";
			this->MISSING_HEART_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_HEART_HISTORY_RADIOBUTTON->TabIndex = 27;
			this->MISSING_HEART_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_HEART_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_HEART_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_HEART_HISTORY_RADIOBUTTON
			// 
			this->NO_HEART_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_HEART_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(99, 31);
			this->NO_HEART_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_HEART_HISTORY_RADIOBUTTON->Name = L"NO_HEART_HISTORY_RADIOBUTTON";
			this->NO_HEART_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_HEART_HISTORY_RADIOBUTTON->TabIndex = 26;
			this->NO_HEART_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_HEART_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_HEART_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// YES_HEART_HISTORY_RADIOBUTTON
			// 
			this->YES_HEART_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_HEART_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(29, 31);
			this->YES_HEART_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_HEART_HISTORY_RADIOBUTTON->Name = L"YES_HEART_HISTORY_RADIOBUTTON";
			this->YES_HEART_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_HEART_HISTORY_RADIOBUTTON->TabIndex = 25;
			this->YES_HEART_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_HEART_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_HEART_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_HEART_HISTORY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::YES_HEART_HISTORY_RADIOBUTTON_CheckedChanged);
			// 
			// HEART_PERSONAL_HISTORY_LABEL
			// 
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->groupBox28);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->groupBox27);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->groupBox26);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->groupBox25);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->groupBox24);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->groupBox23);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->groupBox22);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->groupBox21);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->CVA_HEART_PERSONAL_HISTORY_LABEL);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->BYPASS_HEART_PERSONAL_HISTORY_LABEL);
			this->HEART_PERSONAL_HISTORY_LABEL->Controls->Add(this->INFARCTION_HEART_PERSONAL_HISTORY_LABEL);
			this->HEART_PERSONAL_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->HEART_PERSONAL_HISTORY_LABEL->Location = System::Drawing::Point(20, 232);
			this->HEART_PERSONAL_HISTORY_LABEL->Name = L"HEART_PERSONAL_HISTORY_LABEL";
			this->HEART_PERSONAL_HISTORY_LABEL->Size = System::Drawing::Size(667, 344);
			this->HEART_PERSONAL_HISTORY_LABEL->TabIndex = 30;
			this->HEART_PERSONAL_HISTORY_LABEL->TabStop = false;
			this->HEART_PERSONAL_HISTORY_LABEL->Text = L"Antécédents personnels cardio-vasc";
			// 
			// groupBox28
			// 
			this->groupBox28->Controls->Add(this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox28->Controls->Add(this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox28->Controls->Add(this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox28->Location = System::Drawing::Point(213, 286);
			this->groupBox28->Name = L"groupBox28";
			this->groupBox28->Size = System::Drawing::Size(442, 35);
			this->groupBox28->TabIndex = 65;
			this->groupBox28->TabStop = false;
			// 
			// ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Enabled = false;
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(9, 9);
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(126, 28);
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 65;
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Ischémique";
			this->ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Enabled = false;
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(155, 9);
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(150, 28);
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 66;
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Hémorragique";
			this->HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Enabled = false;
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(317, 9);
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(120, 28);
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 67;
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Ne sait pas";
			this->DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox27
			// 
			this->groupBox27->Controls->Add(this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox27->Controls->Add(this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox27->Controls->Add(this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox27->Location = System::Drawing::Point(359, 248);
			this->groupBox27->Name = L"groupBox27";
			this->groupBox27->Size = System::Drawing::Size(296, 35);
			this->groupBox27->TabIndex = 60;
			this->groupBox27->TabStop = false;
			// 
			// YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 61;
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON_CheckedChanged);
			// 
			// NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 62;
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 63;
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox26
			// 
			this->groupBox26->Controls->Add(this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox26->Controls->Add(this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox26->Controls->Add(this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox26->Location = System::Drawing::Point(359, 209);
			this->groupBox26->Name = L"groupBox26";
			this->groupBox26->Size = System::Drawing::Size(296, 35);
			this->groupBox26->TabIndex = 57;
			this->groupBox26->TabStop = false;
			// 
			// YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 57;
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 58;
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 59;
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_FIBRILLATION_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox25
			// 
			this->groupBox25->Controls->Add(this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox25->Controls->Add(this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox25->Controls->Add(this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox25->Location = System::Drawing::Point(359, 173);
			this->groupBox25->Name = L"groupBox25";
			this->groupBox25->Size = System::Drawing::Size(296, 35);
			this->groupBox25->TabIndex = 53;
			this->groupBox25->TabStop = false;
			// 
			// YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 53;
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 54;
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 55;
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_INSUFFICIENCY_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox24
			// 
			this->groupBox24->Controls->Add(this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox24->Controls->Add(this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox24->Controls->Add(this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox24->Location = System::Drawing::Point(359, 134);
			this->groupBox24->Name = L"groupBox24";
			this->groupBox24->Size = System::Drawing::Size(296, 35);
			this->groupBox24->TabIndex = 44;
			this->groupBox24->TabStop = false;
			// 
			// YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 45;
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 46;
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 47;
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_ARTHERIOPATIE_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox23
			// 
			this->groupBox23->Controls->Add(this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox23->Controls->Add(this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox23->Controls->Add(this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox23->Location = System::Drawing::Point(359, 97);
			this->groupBox23->Name = L"groupBox23";
			this->groupBox23->Size = System::Drawing::Size(296, 35);
			this->groupBox23->TabIndex = 40;
			this->groupBox23->TabStop = false;
			// 
			// YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 40;
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 41;
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 42;
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_ANGIOPLASTY_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox22
			// 
			this->groupBox22->Controls->Add(this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox22->Controls->Add(this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox22->Controls->Add(this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox22->Location = System::Drawing::Point(359, 64);
			this->groupBox22->Name = L"groupBox22";
			this->groupBox22->Size = System::Drawing::Size(296, 35);
			this->groupBox22->TabIndex = 36;
			this->groupBox22->TabStop = false;
			// 
			// YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 36;
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 37;
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 38;
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_BYPASS_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox21
			// 
			this->groupBox21->Controls->Add(this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox21->Controls->Add(this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox21->Controls->Add(this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON);
			this->groupBox21->Location = System::Drawing::Point(359, 24);
			this->groupBox21->Name = L"groupBox21";
			this->groupBox21->Size = System::Drawing::Size(296, 35);
			this->groupBox21->TabIndex = 32;
			this->groupBox21->TabStop = false;
			// 
			// YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 32;
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 33;
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON
			// 
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Name = L"MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON";
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabIndex = 34;
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_INFARCTION_HEART_PERSONAL_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL
			// 
			this->CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL->AutoSize = true;
			this->CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL->Location = System::Drawing::Point(18, 297);
			this->CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL->Name = L"CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL";
			this->CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL->Size = System::Drawing::Size(150, 24);
			this->CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL->TabIndex = 64;
			this->CVA_TYPE_HEART_PERSONAL_HISTORY_LABEL->Text = L"8) Type de AVC:";
			// 
			// CVA_HEART_PERSONAL_HISTORY_LABEL
			// 
			this->CVA_HEART_PERSONAL_HISTORY_LABEL->AutoSize = true;
			this->CVA_HEART_PERSONAL_HISTORY_LABEL->Location = System::Drawing::Point(18, 261);
			this->CVA_HEART_PERSONAL_HISTORY_LABEL->Name = L"CVA_HEART_PERSONAL_HISTORY_LABEL";
			this->CVA_HEART_PERSONAL_HISTORY_LABEL->Size = System::Drawing::Size(75, 24);
			this->CVA_HEART_PERSONAL_HISTORY_LABEL->TabIndex = 60;
			this->CVA_HEART_PERSONAL_HISTORY_LABEL->Text = L"7) AVC:";
			// 
			// FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL
			// 
			this->FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL->AutoSize = true;
			this->FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL->Location = System::Drawing::Point(18, 223);
			this->FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL->Name = L"FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL";
			this->FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL->Size = System::Drawing::Size(192, 24);
			this->FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL->TabIndex = 56;
			this->FIBRILLATION_HEART_PERSONAL_HISTORY_LABEL->Text = L"6) Fibrillation arteriale:";
			// 
			// INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL
			// 
			this->INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL->AutoSize = true;
			this->INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL->Location = System::Drawing::Point(18, 185);
			this->INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL->Name = L"INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL";
			this->INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL->Size = System::Drawing::Size(223, 24);
			this->INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL->TabIndex = 52;
			this->INSUFFICIENCY_HEART_PERSONAL_HISTORY_LABEL->Text = L"5) Insuffisance cardiaque:";
			// 
			// ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL
			// 
			this->ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL->AutoSize = true;
			this->ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL->Location = System::Drawing::Point(18, 145);
			this->ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL->Name = L"ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL";
			this->ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL->Size = System::Drawing::Size(309, 24);
			this->ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL->TabIndex = 43;
			this->ARTHERIOPATIE_HEART_PERSONAL_HISTORY_LABEL->Text = L"4) Artériopathie membres inférieurs:";
			// 
			// ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL
			// 
			this->ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL->AutoSize = true;
			this->ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL->Location = System::Drawing::Point(18, 108);
			this->ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL->Name = L"ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL";
			this->ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL->Size = System::Drawing::Size(257, 24);
			this->ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL->TabIndex = 39;
			this->ANGIOPLASTY_HEART_PERSONAL_HISTORY_LABEL->Text = L"3) Angioplastie coronarienne:";
			// 
			// BYPASS_HEART_PERSONAL_HISTORY_LABEL
			// 
			this->BYPASS_HEART_PERSONAL_HISTORY_LABEL->AutoSize = true;
			this->BYPASS_HEART_PERSONAL_HISTORY_LABEL->Location = System::Drawing::Point(18, 72);
			this->BYPASS_HEART_PERSONAL_HISTORY_LABEL->Name = L"BYPASS_HEART_PERSONAL_HISTORY_LABEL";
			this->BYPASS_HEART_PERSONAL_HISTORY_LABEL->Size = System::Drawing::Size(202, 24);
			this->BYPASS_HEART_PERSONAL_HISTORY_LABEL->TabIndex = 35;
			this->BYPASS_HEART_PERSONAL_HISTORY_LABEL->Text = L"2) Pontage coronarien:";
			// 
			// INFARCTION_HEART_PERSONAL_HISTORY_LABEL
			// 
			this->INFARCTION_HEART_PERSONAL_HISTORY_LABEL->AutoSize = true;
			this->INFARCTION_HEART_PERSONAL_HISTORY_LABEL->Location = System::Drawing::Point(18, 35);
			this->INFARCTION_HEART_PERSONAL_HISTORY_LABEL->Name = L"INFARCTION_HEART_PERSONAL_HISTORY_LABEL";
			this->INFARCTION_HEART_PERSONAL_HISTORY_LABEL->Size = System::Drawing::Size(221, 24);
			this->INFARCTION_HEART_PERSONAL_HISTORY_LABEL->TabIndex = 31;
			this->INFARCTION_HEART_PERSONAL_HISTORY_LABEL->Text = L"1) Infarctus du myocarde:";
			// 
			// ALZHEIMER_HISTORY_LABEL
			// 
			this->ALZHEIMER_HISTORY_LABEL->Controls->Add(this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX);
			this->ALZHEIMER_HISTORY_LABEL->Controls->Add(this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON);
			this->ALZHEIMER_HISTORY_LABEL->Controls->Add(this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX);
			this->ALZHEIMER_HISTORY_LABEL->Controls->Add(this->PARENT_ALZHEIMER_HISTORY_CHECKBOX);
			this->ALZHEIMER_HISTORY_LABEL->Controls->Add(this->NO_ALZHEIMER_HISTORY_RADIOBUTTON);
			this->ALZHEIMER_HISTORY_LABEL->Controls->Add(this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX);
			this->ALZHEIMER_HISTORY_LABEL->Controls->Add(this->YES_ALZHEIMER_HISTORY_RADIOBUTTON);
			this->ALZHEIMER_HISTORY_LABEL->Controls->Add(this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX);
			this->ALZHEIMER_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->ALZHEIMER_HISTORY_LABEL->Location = System::Drawing::Point(20, 37);
			this->ALZHEIMER_HISTORY_LABEL->Name = L"ALZHEIMER_HISTORY_LABEL";
			this->ALZHEIMER_HISTORY_LABEL->Size = System::Drawing::Size(318, 178);
			this->ALZHEIMER_HISTORY_LABEL->TabIndex = 17;
			this->ALZHEIMER_HISTORY_LABEL->TabStop = false;
			this->ALZHEIMER_HISTORY_LABEL->Text = L"Antécédents familiaux d\'Alzheimer";
			// 
			// UNCLE_ALZHEIMER_HISTORY_CHECKBOX
			// 
			this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX->AutoSize = true;
			this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
			this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Location = System::Drawing::Point(22, 140);
			this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Name = L"UNCLE_ALZHEIMER_HISTORY_CHECKBOX";
			this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Size = System::Drawing::Size(133, 28);
			this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX->TabIndex = 22;
			this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Text = L"Oncle/Tante";
			this->UNCLE_ALZHEIMER_HISTORY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// MISSING_ALZHEIMER_HISTORY_RADIOBUTTON
			// 
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(175, 31);
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->Name = L"MISSING_ALZHEIMER_HISTORY_RADIOBUTTON";
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->TabIndex = 19;
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_ALZHEIMER_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// BROTHER_ALZHEIMER_HISTORY_CHECKBOX
			// 
			this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX->AutoSize = true;
			this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
			this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Location = System::Drawing::Point(22, 106);
			this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Name = L"BROTHER_ALZHEIMER_HISTORY_CHECKBOX";
			this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Size = System::Drawing::Size(131, 28);
			this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX->TabIndex = 21;
			this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Text = L"Frère/Soeur";
			this->BROTHER_ALZHEIMER_HISTORY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// PARENT_ALZHEIMER_HISTORY_CHECKBOX
			// 
			this->PARENT_ALZHEIMER_HISTORY_CHECKBOX->AutoSize = true;
			this->PARENT_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
			this->PARENT_ALZHEIMER_HISTORY_CHECKBOX->Location = System::Drawing::Point(191, 106);
			this->PARENT_ALZHEIMER_HISTORY_CHECKBOX->Name = L"PARENT_ALZHEIMER_HISTORY_CHECKBOX";
			this->PARENT_ALZHEIMER_HISTORY_CHECKBOX->Size = System::Drawing::Size(92, 28);
			this->PARENT_ALZHEIMER_HISTORY_CHECKBOX->TabIndex = 24;
			this->PARENT_ALZHEIMER_HISTORY_CHECKBOX->Text = L"Parents";
			this->PARENT_ALZHEIMER_HISTORY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// NO_ALZHEIMER_HISTORY_RADIOBUTTON
			// 
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(99, 31);
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON->Name = L"NO_ALZHEIMER_HISTORY_RADIOBUTTON";
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON->TabIndex = 18;
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_ALZHEIMER_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// COUSIN_ALZHEIMER_HISTORY_CHECKBOX
			// 
			this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX->AutoSize = true;
			this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
			this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Location = System::Drawing::Point(191, 72);
			this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Name = L"COUSIN_ALZHEIMER_HISTORY_CHECKBOX";
			this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Size = System::Drawing::Size(97, 28);
			this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX->TabIndex = 23;
			this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Text = L"Cousins";
			this->COUSIN_ALZHEIMER_HISTORY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// YES_ALZHEIMER_HISTORY_RADIOBUTTON
			// 
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(29, 31);
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->Name = L"YES_ALZHEIMER_HISTORY_RADIOBUTTON";
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->TabIndex = 17;
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::YES_ALZHEIMER_HISTORY_RADIOBUTTON_CheckedChanged);
			// 
			// GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX
			// 
			this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->AutoSize = true;
			this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
			this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Location = System::Drawing::Point(22, 72);
			this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Name = L"GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX";
			this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Size = System::Drawing::Size(159, 28);
			this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->TabIndex = 20;
			this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Text = L"Grands-Parents";
			this->GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// OTHER_MORBIDITIES_HISTORIC_LABEL
			// 
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->CANCER_MORBIDITIES_DETAIL_COMBOBOX);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->CREATININE_MORBIDITIES_DATE_DATEPICKER);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->groupBox20);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->groupBox19);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->groupBox18);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->groupBox17);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->groupBox16);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->groupBox15);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->groupBox14);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->groupBox13);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->groupBox12);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->CREATININE_MORBIDITIES_DATE_TEXTBOX);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->CREATININE_MORBIDITIES_DATE_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->CANCER_MORBIDITIES_DETAIL_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->FALLING_APPREHENSION_MORBIDITIES_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->FALLING_MORBIDITIES_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->WALKING_MORBIDITIES_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->CANCER_MORBIDITIES_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->CREATININE_MORBIDITIES_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->BREATH_INSSUFICIENCY_MORBIDITIES_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->UNDERNUTRITION_MORBIDITIES_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->DEPRESSION_MORBIDITIES_LABEL);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Location = System::Drawing::Point(27, 262);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Name = L"OTHER_MORBIDITIES_HISTORIC_LABEL";
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Size = System::Drawing::Size(703, 452);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->TabIndex = 68;
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->TabStop = false;
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->Text = L"Antécédents autres co-morbidités";
			// 
			// CANCER_MORBIDITIES_DETAIL_COMBOBOX
			// 
			this->CANCER_MORBIDITIES_DETAIL_COMBOBOX->Enabled = false;
			this->CANCER_MORBIDITIES_DETAIL_COMBOBOX->FormattingEnabled = true;
			this->CANCER_MORBIDITIES_DETAIL_COMBOBOX->Location = System::Drawing::Point(292, 291);
			this->CANCER_MORBIDITIES_DETAIL_COMBOBOX->Name = L"CANCER_MORBIDITIES_DETAIL_COMBOBOX";
			this->CANCER_MORBIDITIES_DETAIL_COMBOBOX->Size = System::Drawing::Size(388, 32);
			this->CANCER_MORBIDITIES_DETAIL_COMBOBOX->TabIndex = 96;
			// 
			// CREATININE_MORBIDITIES_DATE_DATEPICKER
			// 
			this->CREATININE_MORBIDITIES_DATE_DATEPICKER->Enabled = false;
			this->CREATININE_MORBIDITIES_DATE_DATEPICKER->Location = System::Drawing::Point(292, 217);
			this->CREATININE_MORBIDITIES_DATE_DATEPICKER->Name = L"CREATININE_MORBIDITIES_DATE_DATEPICKER";
			this->CREATININE_MORBIDITIES_DATE_DATEPICKER->Size = System::Drawing::Size(190, 29);
			this->CREATININE_MORBIDITIES_DATE_DATEPICKER->TabIndex = 89;
			// 
			// groupBox20
			// 
			this->groupBox20->Controls->Add(this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON);
			this->groupBox20->Controls->Add(this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON);
			this->groupBox20->Controls->Add(this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON);
			this->groupBox20->Location = System::Drawing::Point(393, 408);
			this->groupBox20->Name = L"groupBox20";
			this->groupBox20->Size = System::Drawing::Size(296, 35);
			this->groupBox20->TabIndex = 106;
			this->groupBox20->TabStop = false;
			// 
			// YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON
			// 
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Name = L"YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON";
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->TabIndex = 106;
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Text = L"Oui";
			this->YES_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON
			// 
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Name = L"NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON";
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->TabIndex = 107;
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Text = L"Non";
			this->NO_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON
			// 
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Name = L"MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON";
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->TabIndex = 108;
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_FALLING_APPREHENSION_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox19
			// 
			this->groupBox19->Controls->Add(this->YES_FALLING_MORBIDITIES_RADIOBUTTON);
			this->groupBox19->Controls->Add(this->NO_FALLING_MORBIDITIES_RADIOBUTTON);
			this->groupBox19->Controls->Add(this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON);
			this->groupBox19->Location = System::Drawing::Point(393, 367);
			this->groupBox19->Name = L"groupBox19";
			this->groupBox19->Size = System::Drawing::Size(296, 35);
			this->groupBox19->TabIndex = 102;
			this->groupBox19->TabStop = false;
			// 
			// YES_FALLING_MORBIDITIES_RADIOBUTTON
			// 
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON->Name = L"YES_FALLING_MORBIDITIES_RADIOBUTTON";
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON->TabIndex = 102;
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON->Text = L"Oui";
			this->YES_FALLING_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_FALLING_MORBIDITIES_RADIOBUTTON
			// 
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON->Name = L"NO_FALLING_MORBIDITIES_RADIOBUTTON";
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON->TabIndex = 103;
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON->Text = L"Non";
			this->NO_FALLING_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_FALLING_MORBIDITIES_RADIOBUTTON
			// 
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON->Name = L"MISSING_FALLING_MORBIDITIES_RADIOBUTTON";
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON->TabIndex = 104;
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_FALLING_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox18
			// 
			this->groupBox18->Controls->Add(this->YES_WALKING_MORBIDITIES_RADIOBUTTON);
			this->groupBox18->Controls->Add(this->NO_WALKING_MORBIDITIES_RADIOBUTTON);
			this->groupBox18->Controls->Add(this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON);
			this->groupBox18->Location = System::Drawing::Point(393, 327);
			this->groupBox18->Name = L"groupBox18";
			this->groupBox18->Size = System::Drawing::Size(296, 35);
			this->groupBox18->TabIndex = 98;
			this->groupBox18->TabStop = false;
			// 
			// YES_WALKING_MORBIDITIES_RADIOBUTTON
			// 
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON->Name = L"YES_WALKING_MORBIDITIES_RADIOBUTTON";
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON->TabIndex = 98;
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON->Text = L"Oui";
			this->YES_WALKING_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_WALKING_MORBIDITIES_RADIOBUTTON
			// 
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON->Name = L"NO_WALKING_MORBIDITIES_RADIOBUTTON";
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON->TabIndex = 99;
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON->Text = L"Non";
			this->NO_WALKING_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_WALKING_MORBIDITIES_RADIOBUTTON
			// 
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON->Name = L"MISSING_WALKING_MORBIDITIES_RADIOBUTTON";
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON->TabIndex = 100;
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_WALKING_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox17
			// 
			this->groupBox17->Controls->Add(this->YES_CANCER_MORBIDITIES_RADIOBUTTON);
			this->groupBox17->Controls->Add(this->NO_CANCER_MORBIDITIES_RADIOBUTTON);
			this->groupBox17->Controls->Add(this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON);
			this->groupBox17->Location = System::Drawing::Point(393, 248);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(296, 35);
			this->groupBox17->TabIndex = 92;
			this->groupBox17->TabStop = false;
			// 
			// YES_CANCER_MORBIDITIES_RADIOBUTTON
			// 
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->Name = L"YES_CANCER_MORBIDITIES_RADIOBUTTON";
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->TabIndex = 92;
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->Text = L"Oui";
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_CANCER_MORBIDITIES_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::YES_CANCER_MORBIDITIES_RADIOBUTTON_CheckedChanged);
			// 
			// NO_CANCER_MORBIDITIES_RADIOBUTTON
			// 
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON->Name = L"NO_CANCER_MORBIDITIES_RADIOBUTTON";
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON->TabIndex = 93;
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON->Text = L"Non";
			this->NO_CANCER_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_CANCER_MORBIDITIES_RADIOBUTTON
			// 
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON->Name = L"MISSING_CANCER_MORBIDITIES_RADIOBUTTON";
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON->TabIndex = 94;
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_CANCER_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->YES_CREATININE_MORBIDITIES_RADIOBUTTON);
			this->groupBox16->Controls->Add(this->NO_CREATININE_MORBIDITIES_RADIOBUTTON);
			this->groupBox16->Controls->Add(this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON);
			this->groupBox16->Location = System::Drawing::Point(393, 170);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(296, 35);
			this->groupBox16->TabIndex = 86;
			this->groupBox16->TabStop = false;
			// 
			// YES_CREATININE_MORBIDITIES_RADIOBUTTON
			// 
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->Name = L"YES_CREATININE_MORBIDITIES_RADIOBUTTON";
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->TabIndex = 86;
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->Text = L"Oui";
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::YES_CREATININE_MORBIDITIES_RADIOBUTTON_CheckedChanged);
			// 
			// NO_CREATININE_MORBIDITIES_RADIOBUTTON
			// 
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON->Name = L"NO_CREATININE_MORBIDITIES_RADIOBUTTON";
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON->TabIndex = 87;
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON->Text = L"Non";
			this->NO_CREATININE_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_CREATININE_MORBIDITIES_RADIOBUTTON
			// 
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->Name = L"MISSING_CREATININE_MORBIDITIES_RADIOBUTTON";
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->TabIndex = 88;
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_CREATININE_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox15
			// 
			this->groupBox15->Controls->Add(this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON);
			this->groupBox15->Controls->Add(this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON);
			this->groupBox15->Controls->Add(this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON);
			this->groupBox15->Location = System::Drawing::Point(393, 134);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(296, 35);
			this->groupBox15->TabIndex = 82;
			this->groupBox15->TabStop = false;
			// 
			// YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON
			// 
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Name = L"YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON";
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabIndex = 82;
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = L"Oui";
			this->YES_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON
			// 
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Name = L"NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON";
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabIndex = 83;
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = L"Non";
			this->NO_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON
			// 
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Name = L"MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON";
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabIndex = 84;
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_KIDNEY_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON);
			this->groupBox14->Controls->Add(this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON);
			this->groupBox14->Controls->Add(this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON);
			this->groupBox14->Location = System::Drawing::Point(393, 97);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(296, 35);
			this->groupBox14->TabIndex = 78;
			this->groupBox14->TabStop = false;
			// 
			// YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON
			// 
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Name = L"YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON";
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabIndex = 78;
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = L"Oui";
			this->YES_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON
			// 
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Name = L"NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON";
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabIndex = 79;
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = L"Non";
			this->NO_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON
			// 
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Name = L"MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON";
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabIndex = 80;
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_BREATH_INSSUFICIENCY_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON);
			this->groupBox13->Controls->Add(this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON);
			this->groupBox13->Controls->Add(this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON);
			this->groupBox13->Location = System::Drawing::Point(393, 61);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(296, 35);
			this->groupBox13->TabIndex = 74;
			this->groupBox13->TabStop = false;
			// 
			// YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON
			// 
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Name = L"YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON";
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->TabIndex = 74;
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Text = L"Oui";
			this->YES_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON
			// 
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Name = L"NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON";
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->TabIndex = 75;
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Text = L"Non";
			this->NO_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON
			// 
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Name = L"MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON";
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->TabIndex = 76;
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_UNDERNUTRITION_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON);
			this->groupBox12->Controls->Add(this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON);
			this->groupBox12->Controls->Add(this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON);
			this->groupBox12->Location = System::Drawing::Point(393, 26);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(296, 35);
			this->groupBox12->TabIndex = 70;
			this->groupBox12->TabStop = false;
			// 
			// YES_DEPRESSION_MORBIDITIES_RADIOBUTTON
			// 
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->Name = L"YES_DEPRESSION_MORBIDITIES_RADIOBUTTON";
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->TabIndex = 70;
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->Text = L"Oui";
			this->YES_DEPRESSION_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_DEPRESSION_MORBIDITIES_RADIOBUTTON
			// 
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->Name = L"NO_DEPRESSION_MORBIDITIES_RADIOBUTTON";
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->TabIndex = 71;
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->Text = L"Non";
			this->NO_DEPRESSION_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON
			// 
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->AutoSize = true;
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->Name = L"MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON";
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->TabIndex = 72;
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->TabStop = true;
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// CREATININE_MORBIDITIES_DATE_TEXTBOX
			// 
			this->CREATININE_MORBIDITIES_DATE_TEXTBOX->Enabled = false;
			this->CREATININE_MORBIDITIES_DATE_TEXTBOX->Location = System::Drawing::Point(488, 217);
			this->CREATININE_MORBIDITIES_DATE_TEXTBOX->Name = L"CREATININE_MORBIDITIES_DATE_TEXTBOX";
			this->CREATININE_MORBIDITIES_DATE_TEXTBOX->Size = System::Drawing::Size(192, 29);
			this->CREATININE_MORBIDITIES_DATE_TEXTBOX->TabIndex = 90;
			// 
			// CREATININE_MORBIDITIES_DATE_LABEL
			// 
			this->CREATININE_MORBIDITIES_DATE_LABEL->AutoSize = true;
			this->CREATININE_MORBIDITIES_DATE_LABEL->Location = System::Drawing::Point(38, 217);
			this->CREATININE_MORBIDITIES_DATE_LABEL->Name = L"CREATININE_MORBIDITIES_DATE_LABEL";
			this->CREATININE_MORBIDITIES_DATE_LABEL->Size = System::Drawing::Size(246, 24);
			this->CREATININE_MORBIDITIES_DATE_LABEL->TabIndex = 89;
			this->CREATININE_MORBIDITIES_DATE_LABEL->Text = L"5.1) Date et résultat (mmol/l):";
			// 
			// CANCER_MORBIDITIES_DETAIL_LABEL
			// 
			this->CANCER_MORBIDITIES_DETAIL_LABEL->AutoSize = true;
			this->CANCER_MORBIDITIES_DETAIL_LABEL->Location = System::Drawing::Point(38, 293);
			this->CANCER_MORBIDITIES_DETAIL_LABEL->Name = L"CANCER_MORBIDITIES_DETAIL_LABEL";
			this->CANCER_MORBIDITIES_DETAIL_LABEL->Size = System::Drawing::Size(120, 24);
			this->CANCER_MORBIDITIES_DETAIL_LABEL->TabIndex = 95;
			this->CANCER_MORBIDITIES_DETAIL_LABEL->Text = L"6.1) Préciser:";
			// 
			// FALLING_APPREHENSION_MORBIDITIES_LABEL
			// 
			this->FALLING_APPREHENSION_MORBIDITIES_LABEL->AutoSize = true;
			this->FALLING_APPREHENSION_MORBIDITIES_LABEL->Location = System::Drawing::Point(6, 420);
			this->FALLING_APPREHENSION_MORBIDITIES_LABEL->Name = L"FALLING_APPREHENSION_MORBIDITIES_LABEL";
			this->FALLING_APPREHENSION_MORBIDITIES_LABEL->Size = System::Drawing::Size(258, 24);
			this->FALLING_APPREHENSION_MORBIDITIES_LABEL->TabIndex = 105;
			this->FALLING_APPREHENSION_MORBIDITIES_LABEL->Text = L"9) Appréhension des chutes: ";
			// 
			// FALLING_MORBIDITIES_LABEL
			// 
			this->FALLING_MORBIDITIES_LABEL->AutoSize = true;
			this->FALLING_MORBIDITIES_LABEL->Location = System::Drawing::Point(6, 378);
			this->FALLING_MORBIDITIES_LABEL->Name = L"FALLING_MORBIDITIES_LABEL";
			this->FALLING_MORBIDITIES_LABEL->Size = System::Drawing::Size(293, 24);
			this->FALLING_MORBIDITIES_LABEL->TabIndex = 101;
			this->FALLING_MORBIDITIES_LABEL->Text = L"8) Chute (>1 l\'année précédente):";
			// 
			// WALKING_MORBIDITIES_LABEL
			// 
			this->WALKING_MORBIDITIES_LABEL->AutoSize = true;
			this->WALKING_MORBIDITIES_LABEL->Location = System::Drawing::Point(6, 339);
			this->WALKING_MORBIDITIES_LABEL->Name = L"WALKING_MORBIDITIES_LABEL";
			this->WALKING_MORBIDITIES_LABEL->Size = System::Drawing::Size(231, 24);
			this->WALKING_MORBIDITIES_LABEL->TabIndex = 97;
			this->WALKING_MORBIDITIES_LABEL->Text = L"7) Troubles de la marche: ";
			// 
			// CANCER_MORBIDITIES_LABEL
			// 
			this->CANCER_MORBIDITIES_LABEL->AutoSize = true;
			this->CANCER_MORBIDITIES_LABEL->Location = System::Drawing::Point(6, 259);
			this->CANCER_MORBIDITIES_LABEL->Name = L"CANCER_MORBIDITIES_LABEL";
			this->CANCER_MORBIDITIES_LABEL->Size = System::Drawing::Size(232, 24);
			this->CANCER_MORBIDITIES_LABEL->TabIndex = 91;
			this->CANCER_MORBIDITIES_LABEL->Text = L"6) Antécédents de cancer:";
			// 
			// CREATININE_MORBIDITIES_LABEL
			// 
			this->CREATININE_MORBIDITIES_LABEL->AutoSize = true;
			this->CREATININE_MORBIDITIES_LABEL->Location = System::Drawing::Point(6, 181);
			this->CREATININE_MORBIDITIES_LABEL->Name = L"CREATININE_MORBIDITIES_LABEL";
			this->CREATININE_MORBIDITIES_LABEL->Size = System::Drawing::Size(267, 24);
			this->CREATININE_MORBIDITIES_LABEL->TabIndex = 85;
			this->CREATININE_MORBIDITIES_LABEL->Text = L"5) Dosage antérieur créatinine:";
			// 
			// KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL
			// 
			this->KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL->AutoSize = true;
			this->KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL->Location = System::Drawing::Point(6, 145);
			this->KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL->Name = L"KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL";
			this->KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL->Size = System::Drawing::Size(283, 24);
			this->KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL->TabIndex = 81;
			this->KIDNEY_INSSUFICIENCY_MORBIDITIES_LABEL->Text = L"4) Insuffisance rénale chronique:";
			// 
			// BREATH_INSSUFICIENCY_MORBIDITIES_LABEL
			// 
			this->BREATH_INSSUFICIENCY_MORBIDITIES_LABEL->AutoSize = true;
			this->BREATH_INSSUFICIENCY_MORBIDITIES_LABEL->Location = System::Drawing::Point(6, 108);
			this->BREATH_INSSUFICIENCY_MORBIDITIES_LABEL->Name = L"BREATH_INSSUFICIENCY_MORBIDITIES_LABEL";
			this->BREATH_INSSUFICIENCY_MORBIDITIES_LABEL->Size = System::Drawing::Size(232, 24);
			this->BREATH_INSSUFICIENCY_MORBIDITIES_LABEL->TabIndex = 77;
			this->BREATH_INSSUFICIENCY_MORBIDITIES_LABEL->Text = L"3) Insuffisance respiratoire:";
			// 
			// UNDERNUTRITION_MORBIDITIES_LABEL
			// 
			this->UNDERNUTRITION_MORBIDITIES_LABEL->AutoSize = true;
			this->UNDERNUTRITION_MORBIDITIES_LABEL->Location = System::Drawing::Point(6, 72);
			this->UNDERNUTRITION_MORBIDITIES_LABEL->Name = L"UNDERNUTRITION_MORBIDITIES_LABEL";
			this->UNDERNUTRITION_MORBIDITIES_LABEL->Size = System::Drawing::Size(126, 24);
			this->UNDERNUTRITION_MORBIDITIES_LABEL->TabIndex = 73;
			this->UNDERNUTRITION_MORBIDITIES_LABEL->Text = L"2) Dénutrition:";
			// 
			// DEPRESSION_MORBIDITIES_LABEL
			// 
			this->DEPRESSION_MORBIDITIES_LABEL->AutoSize = true;
			this->DEPRESSION_MORBIDITIES_LABEL->Location = System::Drawing::Point(6, 35);
			this->DEPRESSION_MORBIDITIES_LABEL->Name = L"DEPRESSION_MORBIDITIES_LABEL";
			this->DEPRESSION_MORBIDITIES_LABEL->Size = System::Drawing::Size(389, 24);
			this->DEPRESSION_MORBIDITIES_LABEL->TabIndex = 69;
			this->DEPRESSION_MORBIDITIES_LABEL->Text = L"1) Antécédent de traitement pour dépression:";
			// 
			// LIFESTYLE_LABEL
			// 
			this->LIFESTYLE_LABEL->Controls->Add(this->groupBox33);
			this->LIFESTYLE_LABEL->Controls->Add(this->groupBox32);
			this->LIFESTYLE_LABEL->Controls->Add(this->groupBox31);
			this->LIFESTYLE_LABEL->Controls->Add(this->groupBox30);
			this->LIFESTYLE_LABEL->Controls->Add(this->groupBox29);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_ALCOHOL_UNITS_LABEL);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_SMOKING_YEARS_COUNTER);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_SMOKING_PACKETS_COUNTER);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_SMOKING_YEARS_LABEL);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_SMOKING_PACKAGES_LABEL);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_ALCOHOL_LABEL);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_SMOKING_LABEL);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_HYPERLIPIDEMIA_LABEL);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_DIABETES_LABEL);
			this->LIFESTYLE_LABEL->Controls->Add(this->RISK_FACTOR_HYPERTENTION_LABEL);
			this->LIFESTYLE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LIFESTYLE_LABEL->Location = System::Drawing::Point(752, 618);
			this->LIFESTYLE_LABEL->Name = L"LIFESTYLE_LABEL";
			this->LIFESTYLE_LABEL->Size = System::Drawing::Size(703, 315);
			this->LIFESTYLE_LABEL->TabIndex = 109;
			this->LIFESTYLE_LABEL->TabStop = false;
			this->LIFESTYLE_LABEL->Text = L"Facteurs de risque vasculaires et mode de vie";
			// 
			// groupBox33
			// 
			this->groupBox33->Controls->Add(this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON);
			this->groupBox33->Controls->Add(this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON);
			this->groupBox33->Controls->Add(this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON);
			this->groupBox33->Controls->Add(this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON);
			this->groupBox33->Location = System::Drawing::Point(195, 222);
			this->groupBox33->Name = L"groupBox33";
			this->groupBox33->Size = System::Drawing::Size(480, 35);
			this->groupBox33->TabIndex = 133;
			this->groupBox33->TabStop = false;
			// 
			// MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON
			// 
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->AutoSize = true;
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Location = System::Drawing::Point(357, 9);
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Name = L"MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON";
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->TabIndex = 136;
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->TabStop = true;
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON
			// 
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->AutoSize = true;
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Location = System::Drawing::Point(263, 9);
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Name = L"STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON";
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Size = System::Drawing::Size(79, 28);
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->TabIndex = 135;
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->TabStop = true;
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = L"Arrêté";
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON_CheckedChanged);
			// 
			// ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON
			// 
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->AutoSize = true;
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Location = System::Drawing::Point(193, 9);
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Name = L"ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON";
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Size = System::Drawing::Size(63, 28);
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->TabIndex = 134;
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->TabStop = true;
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = L"Actif";
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::YES_RISK_FACTOR_ALCOHOL_RADIOBUTTON_CheckedChanged);
			// 
			// NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON
			// 
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->AutoSize = true;
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Location = System::Drawing::Point(0, 9);
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Name = L"NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON";
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Size = System::Drawing::Size(141, 28);
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->TabIndex = 133;
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->TabStop = true;
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Text = L"N\'a jamais bu";
			this->NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox32
			// 
			this->groupBox32->Controls->Add(this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON);
			this->groupBox32->Controls->Add(this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON);
			this->groupBox32->Controls->Add(this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON);
			this->groupBox32->Controls->Add(this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON);
			this->groupBox32->Location = System::Drawing::Point(195, 138);
			this->groupBox32->Name = L"groupBox32";
			this->groupBox32->Size = System::Drawing::Size(480, 35);
			this->groupBox32->TabIndex = 124;
			this->groupBox32->TabStop = false;
			// 
			// MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON
			// 
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->AutoSize = true;
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->Location = System::Drawing::Point(357, 9);
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->Name = L"MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON";
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->TabIndex = 127;
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->TabStop = true;
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// STOP_RISK_FACTOR_SMOKING_RADIOBUTTON
			// 
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->AutoSize = true;
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Location = System::Drawing::Point(263, 9);
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Name = L"STOP_RISK_FACTOR_SMOKING_RADIOBUTTON";
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Size = System::Drawing::Size(79, 28);
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->TabIndex = 126;
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->TabStop = true;
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = L"Arrêté";
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::STOP_RISK_FACTOR_SMOKING_RADIOBUTTON_CheckedChanged);
			// 
			// ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON
			// 
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->AutoSize = true;
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Location = System::Drawing::Point(193, 9);
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Name = L"ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON";
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Size = System::Drawing::Size(63, 28);
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->TabIndex = 125;
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->TabStop = true;
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = L"Actif";
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::YES_RISK_FACTOR_SMOKING_RADIOBUTTON_CheckedChanged);
			// 
			// NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON
			// 
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->AutoSize = true;
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->Location = System::Drawing::Point(0, 9);
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->Name = L"NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON";
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->Size = System::Drawing::Size(161, 28);
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->TabIndex = 124;
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->TabStop = true;
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->Text = L"N\'a jamais fumé";
			this->NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox31
			// 
			this->groupBox31->Controls->Add(this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON);
			this->groupBox31->Controls->Add(this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON);
			this->groupBox31->Controls->Add(this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON);
			this->groupBox31->Location = System::Drawing::Point(379, 97);
			this->groupBox31->Name = L"groupBox31";
			this->groupBox31->Size = System::Drawing::Size(296, 35);
			this->groupBox31->TabIndex = 120;
			this->groupBox31->TabStop = false;
			// 
			// YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON
			// 
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->AutoSize = true;
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Name = L"YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON";
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->TabIndex = 120;
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->TabStop = true;
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Text = L"Oui";
			this->YES_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON
			// 
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->AutoSize = true;
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Name = L"NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON";
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->TabIndex = 121;
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->TabStop = true;
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Text = L"Non";
			this->NO_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON
			// 
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->AutoSize = true;
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Name = L"MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON";
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->TabIndex = 122;
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->TabStop = true;
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_RISK_FACTOR_HYPERLIPIDEMIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox30
			// 
			this->groupBox30->Controls->Add(this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON);
			this->groupBox30->Controls->Add(this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON);
			this->groupBox30->Controls->Add(this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON);
			this->groupBox30->Location = System::Drawing::Point(379, 61);
			this->groupBox30->Name = L"groupBox30";
			this->groupBox30->Size = System::Drawing::Size(296, 35);
			this->groupBox30->TabIndex = 116;
			this->groupBox30->TabStop = false;
			// 
			// YES_RISK_FACTOR_DIABETES_RADIOBUTTON
			// 
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON->AutoSize = true;
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON->Name = L"YES_RISK_FACTOR_DIABETES_RADIOBUTTON";
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON->TabIndex = 116;
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON->TabStop = true;
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON->Text = L"Oui";
			this->YES_RISK_FACTOR_DIABETES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_RISK_FACTOR_DIABETES_RADIOBUTTON
			// 
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON->AutoSize = true;
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON->Name = L"NO_RISK_FACTOR_DIABETES_RADIOBUTTON";
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON->TabIndex = 117;
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON->TabStop = true;
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON->Text = L"Non";
			this->NO_RISK_FACTOR_DIABETES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON
			// 
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->AutoSize = true;
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->Name = L"MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON";
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->TabIndex = 118;
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->TabStop = true;
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_RISK_FACTOR_DIABETES_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox29
			// 
			this->groupBox29->Controls->Add(this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON);
			this->groupBox29->Controls->Add(this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON);
			this->groupBox29->Controls->Add(this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON);
			this->groupBox29->Location = System::Drawing::Point(379, 24);
			this->groupBox29->Name = L"groupBox29";
			this->groupBox29->Size = System::Drawing::Size(296, 35);
			this->groupBox29->TabIndex = 111;
			this->groupBox29->TabStop = false;
			// 
			// YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON
			// 
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->AutoSize = true;
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Name = L"YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON";
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->TabIndex = 112;
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->TabStop = true;
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Text = L"Oui";
			this->YES_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON
			// 
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->AutoSize = true;
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Name = L"NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON";
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->TabIndex = 113;
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->TabStop = true;
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Text = L"Non";
			this->NO_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON
			// 
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->AutoSize = true;
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Name = L"MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON";
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->TabIndex = 114;
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->TabStop = true;
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_RISK_FACTOR_HYPERTENTION_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// RISK_FACTOR_ALCOHOL_UNITS_COUNTER
			// 
			this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = false;
			this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Location = System::Drawing::Point(373, 266);
			this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Name = L"RISK_FACTOR_ALCOHOL_UNITS_COUNTER";
			this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Size = System::Drawing::Size(62, 29);
			this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER->TabIndex = 138;
			// 
			// RISK_FACTOR_ALCOHOL_UNITS_LABEL
			// 
			this->RISK_FACTOR_ALCOHOL_UNITS_LABEL->AutoSize = true;
			this->RISK_FACTOR_ALCOHOL_UNITS_LABEL->Location = System::Drawing::Point(62, 268);
			this->RISK_FACTOR_ALCOHOL_UNITS_LABEL->Name = L"RISK_FACTOR_ALCOHOL_UNITS_LABEL";
			this->RISK_FACTOR_ALCOHOL_UNITS_LABEL->Size = System::Drawing::Size(267, 24);
			this->RISK_FACTOR_ALCOHOL_UNITS_LABEL->TabIndex = 137;
			this->RISK_FACTOR_ALCOHOL_UNITS_LABEL->Text = L"5.1) Nombre d\'unités/semaine:";
			// 
			// RISK_FACTOR_SMOKING_YEARS_COUNTER
			// 
			this->RISK_FACTOR_SMOKING_YEARS_COUNTER->Enabled = false;
			this->RISK_FACTOR_SMOKING_YEARS_COUNTER->Location = System::Drawing::Point(608, 186);
			this->RISK_FACTOR_SMOKING_YEARS_COUNTER->Name = L"RISK_FACTOR_SMOKING_YEARS_COUNTER";
			this->RISK_FACTOR_SMOKING_YEARS_COUNTER->Size = System::Drawing::Size(62, 29);
			this->RISK_FACTOR_SMOKING_YEARS_COUNTER->TabIndex = 131;
			// 
			// RISK_FACTOR_SMOKING_PACKETS_COUNTER
			// 
			this->RISK_FACTOR_SMOKING_PACKETS_COUNTER->Enabled = false;
			this->RISK_FACTOR_SMOKING_PACKETS_COUNTER->Location = System::Drawing::Point(301, 186);
			this->RISK_FACTOR_SMOKING_PACKETS_COUNTER->Name = L"RISK_FACTOR_SMOKING_PACKETS_COUNTER";
			this->RISK_FACTOR_SMOKING_PACKETS_COUNTER->Size = System::Drawing::Size(62, 29);
			this->RISK_FACTOR_SMOKING_PACKETS_COUNTER->TabIndex = 129;
			// 
			// RISK_FACTOR_SMOKING_YEARS_LABEL
			// 
			this->RISK_FACTOR_SMOKING_YEARS_LABEL->AutoSize = true;
			this->RISK_FACTOR_SMOKING_YEARS_LABEL->Location = System::Drawing::Point(369, 188);
			this->RISK_FACTOR_SMOKING_YEARS_LABEL->Name = L"RISK_FACTOR_SMOKING_YEARS_LABEL";
			this->RISK_FACTOR_SMOKING_YEARS_LABEL->Size = System::Drawing::Size(215, 24);
			this->RISK_FACTOR_SMOKING_YEARS_LABEL->TabIndex = 130;
			this->RISK_FACTOR_SMOKING_YEARS_LABEL->Text = L"4.2) Nombre de années:";
			// 
			// RISK_FACTOR_SMOKING_PACKAGES_LABEL
			// 
			this->RISK_FACTOR_SMOKING_PACKAGES_LABEL->AutoSize = true;
			this->RISK_FACTOR_SMOKING_PACKAGES_LABEL->Location = System::Drawing::Point(62, 188);
			this->RISK_FACTOR_SMOKING_PACKAGES_LABEL->Name = L"RISK_FACTOR_SMOKING_PACKAGES_LABEL";
			this->RISK_FACTOR_SMOKING_PACKAGES_LABEL->Size = System::Drawing::Size(220, 24);
			this->RISK_FACTOR_SMOKING_PACKAGES_LABEL->TabIndex = 128;
			this->RISK_FACTOR_SMOKING_PACKAGES_LABEL->Text = L"4.1) Nombre de Paquets:";
			// 
			// RISK_FACTOR_ALCOHOL_LABEL
			// 
			this->RISK_FACTOR_ALCOHOL_LABEL->AutoSize = true;
			this->RISK_FACTOR_ALCOHOL_LABEL->Location = System::Drawing::Point(21, 233);
			this->RISK_FACTOR_ALCOHOL_LABEL->Name = L"RISK_FACTOR_ALCOHOL_LABEL";
			this->RISK_FACTOR_ALCOHOL_LABEL->Size = System::Drawing::Size(89, 24);
			this->RISK_FACTOR_ALCOHOL_LABEL->TabIndex = 132;
			this->RISK_FACTOR_ALCOHOL_LABEL->Text = L"5) Alcool:";
			// 
			// RISK_FACTOR_SMOKING_LABEL
			// 
			this->RISK_FACTOR_SMOKING_LABEL->AutoSize = true;
			this->RISK_FACTOR_SMOKING_LABEL->Location = System::Drawing::Point(18, 145);
			this->RISK_FACTOR_SMOKING_LABEL->Name = L"RISK_FACTOR_SMOKING_LABEL";
			this->RISK_FACTOR_SMOKING_LABEL->Size = System::Drawing::Size(89, 24);
			this->RISK_FACTOR_SMOKING_LABEL->TabIndex = 123;
			this->RISK_FACTOR_SMOKING_LABEL->Text = L"4) Tabac:";
			// 
			// RISK_FACTOR_HYPERLIPIDEMIA_LABEL
			// 
			this->RISK_FACTOR_HYPERLIPIDEMIA_LABEL->AutoSize = true;
			this->RISK_FACTOR_HYPERLIPIDEMIA_LABEL->Location = System::Drawing::Point(18, 108);
			this->RISK_FACTOR_HYPERLIPIDEMIA_LABEL->Name = L"RISK_FACTOR_HYPERLIPIDEMIA_LABEL";
			this->RISK_FACTOR_HYPERLIPIDEMIA_LABEL->Size = System::Drawing::Size(163, 24);
			this->RISK_FACTOR_HYPERLIPIDEMIA_LABEL->TabIndex = 119;
			this->RISK_FACTOR_HYPERLIPIDEMIA_LABEL->Text = L"3) Hyperlipidémie:";
			// 
			// RISK_FACTOR_DIABETES_LABEL
			// 
			this->RISK_FACTOR_DIABETES_LABEL->AutoSize = true;
			this->RISK_FACTOR_DIABETES_LABEL->Location = System::Drawing::Point(18, 72);
			this->RISK_FACTOR_DIABETES_LABEL->Name = L"RISK_FACTOR_DIABETES_LABEL";
			this->RISK_FACTOR_DIABETES_LABEL->Size = System::Drawing::Size(100, 24);
			this->RISK_FACTOR_DIABETES_LABEL->TabIndex = 115;
			this->RISK_FACTOR_DIABETES_LABEL->Text = L"2) Diabète:";
			// 
			// RISK_FACTOR_HYPERTENTION_LABEL
			// 
			this->RISK_FACTOR_HYPERTENTION_LABEL->AutoSize = true;
			this->RISK_FACTOR_HYPERTENTION_LABEL->Location = System::Drawing::Point(18, 35);
			this->RISK_FACTOR_HYPERTENTION_LABEL->Name = L"RISK_FACTOR_HYPERTENTION_LABEL";
			this->RISK_FACTOR_HYPERTENTION_LABEL->Size = System::Drawing::Size(224, 24);
			this->RISK_FACTOR_HYPERTENTION_LABEL->TabIndex = 110;
			this->RISK_FACTOR_HYPERTENTION_LABEL->Text = L"1) Hypertension artérielle:";
			// 
			// OTHER_HISTORY_LABEL
			// 
			this->OTHER_HISTORY_LABEL->Controls->Add(this->OTHER_HISTORY_TEXTBOX);
			this->OTHER_HISTORY_LABEL->Controls->Add(this->MISSING_OTHER_HISTORY_RADIOBUTTON);
			this->OTHER_HISTORY_LABEL->Controls->Add(this->NO_OTHER_HISTORY_RADIOBUTTON);
			this->OTHER_HISTORY_LABEL->Controls->Add(this->YES_OTHER_HISTORY_RADIOBUTTON);
			this->OTHER_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->OTHER_HISTORY_LABEL->Location = System::Drawing::Point(27, 721);
			this->OTHER_HISTORY_LABEL->Name = L"OTHER_HISTORY_LABEL";
			this->OTHER_HISTORY_LABEL->Size = System::Drawing::Size(703, 68);
			this->OTHER_HISTORY_LABEL->TabIndex = 139;
			this->OTHER_HISTORY_LABEL->TabStop = false;
			this->OTHER_HISTORY_LABEL->Text = L"Autres Antécédents";
			// 
			// OTHER_HISTORY_TEXTBOX
			// 
			this->OTHER_HISTORY_TEXTBOX->Enabled = false;
			this->OTHER_HISTORY_TEXTBOX->Location = System::Drawing::Point(316, 30);
			this->OTHER_HISTORY_TEXTBOX->Name = L"OTHER_HISTORY_TEXTBOX";
			this->OTHER_HISTORY_TEXTBOX->Size = System::Drawing::Size(364, 29);
			this->OTHER_HISTORY_TEXTBOX->TabIndex = 142;
			// 
			// MISSING_OTHER_HISTORY_RADIOBUTTON
			// 
			this->MISSING_OTHER_HISTORY_RADIOBUTTON->AutoSize = true;
			this->MISSING_OTHER_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(175, 31);
			this->MISSING_OTHER_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_OTHER_HISTORY_RADIOBUTTON->Name = L"MISSING_OTHER_HISTORY_RADIOBUTTON";
			this->MISSING_OTHER_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_OTHER_HISTORY_RADIOBUTTON->TabIndex = 141;
			this->MISSING_OTHER_HISTORY_RADIOBUTTON->TabStop = true;
			this->MISSING_OTHER_HISTORY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_OTHER_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_OTHER_HISTORY_RADIOBUTTON
			// 
			this->NO_OTHER_HISTORY_RADIOBUTTON->AutoSize = true;
			this->NO_OTHER_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(99, 31);
			this->NO_OTHER_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_OTHER_HISTORY_RADIOBUTTON->Name = L"NO_OTHER_HISTORY_RADIOBUTTON";
			this->NO_OTHER_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_OTHER_HISTORY_RADIOBUTTON->TabIndex = 140;
			this->NO_OTHER_HISTORY_RADIOBUTTON->TabStop = true;
			this->NO_OTHER_HISTORY_RADIOBUTTON->Text = L"Non";
			this->NO_OTHER_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// YES_OTHER_HISTORY_RADIOBUTTON
			// 
			this->YES_OTHER_HISTORY_RADIOBUTTON->AutoSize = true;
			this->YES_OTHER_HISTORY_RADIOBUTTON->Location = System::Drawing::Point(29, 31);
			this->YES_OTHER_HISTORY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_OTHER_HISTORY_RADIOBUTTON->Name = L"YES_OTHER_HISTORY_RADIOBUTTON";
			this->YES_OTHER_HISTORY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_OTHER_HISTORY_RADIOBUTTON->TabIndex = 139;
			this->YES_OTHER_HISTORY_RADIOBUTTON->TabStop = true;
			this->YES_OTHER_HISTORY_RADIOBUTTON->Text = L"Oui";
			this->YES_OTHER_HISTORY_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_OTHER_HISTORY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT1::YES_OTHER_HISTORY_RADIOBUTTON_CheckedChanged);
			// 
			// CANCEL_BUTTON
			// 
			this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CANCEL_BUTTON->Location = System::Drawing::Point(386, 829);
			this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
			this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
			this->CANCEL_BUTTON->TabIndex = 144;
			this->CANCEL_BUTTON->Text = L"Annuler";
			this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
			this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &MedicalDataPT1::CANCEL_BUTTON_Click);
			// 
			// REGISTER_BUTTON
			// 
			this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REGISTER_BUTTON->Location = System::Drawing::Point(106, 829);
			this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
			this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
			this->REGISTER_BUTTON->TabIndex = 143;
			this->REGISTER_BUTTON->Text = L"Enregistrer";
			this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
			// 
			// MedicalDataPT1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1477, 948);
			this->Controls->Add(this->CANCEL_BUTTON);
			this->Controls->Add(this->REGISTER_BUTTON);
			this->Controls->Add(this->OTHER_HISTORY_LABEL);
			this->Controls->Add(this->LIFESTYLE_LABEL);
			this->Controls->Add(this->OTHER_MORBIDITIES_HISTORIC_LABEL);
			this->Controls->Add(this->MEDICAL_INFO_LABEL);
			this->Controls->Add(this->SOCIAL_EVALUATION_LABEL);
			this->Name = L"MedicalDataPT1";
			this->Text = L"Données Médicales: Partie 1";
			this->SOCIAL_EVALUATION_LABEL->ResumeLayout(false);
			this->WALKING_TOOLS_LABEL->ResumeLayout(false);
			this->WALKING_TOOLS_LABEL->PerformLayout();
			this->GOES_OUT_OFTEN_LABEL->ResumeLayout(false);
			this->GOES_OUT_OFTEN_LABEL->PerformLayout();
			this->LIVES_IN_HOUSE_LABEL->ResumeLayout(false);
			this->LIVES_IN_HOUSE_LABEL->PerformLayout();
			this->MEDICAL_INFO_LABEL->ResumeLayout(false);
			this->HEART_FAMILY_HISTORY_LABEL->ResumeLayout(false);
			this->HEART_FAMILY_HISTORY_LABEL->PerformLayout();
			this->HEART_PERSONAL_HISTORY_LABEL->ResumeLayout(false);
			this->HEART_PERSONAL_HISTORY_LABEL->PerformLayout();
			this->groupBox28->ResumeLayout(false);
			this->groupBox28->PerformLayout();
			this->groupBox27->ResumeLayout(false);
			this->groupBox27->PerformLayout();
			this->groupBox26->ResumeLayout(false);
			this->groupBox26->PerformLayout();
			this->groupBox25->ResumeLayout(false);
			this->groupBox25->PerformLayout();
			this->groupBox24->ResumeLayout(false);
			this->groupBox24->PerformLayout();
			this->groupBox23->ResumeLayout(false);
			this->groupBox23->PerformLayout();
			this->groupBox22->ResumeLayout(false);
			this->groupBox22->PerformLayout();
			this->groupBox21->ResumeLayout(false);
			this->groupBox21->PerformLayout();
			this->ALZHEIMER_HISTORY_LABEL->ResumeLayout(false);
			this->ALZHEIMER_HISTORY_LABEL->PerformLayout();
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->ResumeLayout(false);
			this->OTHER_MORBIDITIES_HISTORIC_LABEL->PerformLayout();
			this->groupBox20->ResumeLayout(false);
			this->groupBox20->PerformLayout();
			this->groupBox19->ResumeLayout(false);
			this->groupBox19->PerformLayout();
			this->groupBox18->ResumeLayout(false);
			this->groupBox18->PerformLayout();
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			this->groupBox16->ResumeLayout(false);
			this->groupBox16->PerformLayout();
			this->groupBox15->ResumeLayout(false);
			this->groupBox15->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->LIFESTYLE_LABEL->ResumeLayout(false);
			this->LIFESTYLE_LABEL->PerformLayout();
			this->groupBox33->ResumeLayout(false);
			this->groupBox33->PerformLayout();
			this->groupBox32->ResumeLayout(false);
			this->groupBox32->PerformLayout();
			this->groupBox31->ResumeLayout(false);
			this->groupBox31->PerformLayout();
			this->groupBox30->ResumeLayout(false);
			this->groupBox30->PerformLayout();
			this->groupBox29->ResumeLayout(false);
			this->groupBox29->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RISK_FACTOR_SMOKING_YEARS_COUNTER))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RISK_FACTOR_SMOKING_PACKETS_COUNTER))->EndInit();
			this->OTHER_HISTORY_LABEL->ResumeLayout(false);
			this->OTHER_HISTORY_LABEL->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	


private: System::Void YES_WALKING_TOOLS_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (YES_WALKING_TOOLS_RADIOBUTTON->Checked) {
		//Enable the checkboxes for more detail
		HOUSE_WALKING_TOOLS_CHECKBOX->Enabled = true;
		OUTSIDE_WALKING_TOOLS_CHECKBOX->Enabled = true;
		CANE_WALKING_TOOLS_CHECKBOX->Enabled = true;
		WALKER_WALKING_TOOLS_CHECKBOX->Enabled = true;
		WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Enabled = true;
	}
	else {
		//Disable and empty the checkboxes if option yes is not selected
		HOUSE_WALKING_TOOLS_CHECKBOX->Enabled = false;
		OUTSIDE_WALKING_TOOLS_CHECKBOX->Enabled = false;
		CANE_WALKING_TOOLS_CHECKBOX->Enabled = false;
		WALKER_WALKING_TOOLS_CHECKBOX->Enabled = false;
		WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Enabled = false;
		HOUSE_WALKING_TOOLS_CHECKBOX->Checked = false;
		OUTSIDE_WALKING_TOOLS_CHECKBOX->Checked = false;
		CANE_WALKING_TOOLS_CHECKBOX->Checked = false;
		WALKER_WALKING_TOOLS_CHECKBOX->Checked = false;
		WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Checked = false;
	}
}


private: System::Void YES_ALZHEIMER_HISTORY_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (YES_ALZHEIMER_HISTORY_RADIOBUTTON->Checked) {
		//Enable the checkboxes for more detail
		GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Enabled = true;
		BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Enabled = true;
		UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Enabled = true;
		COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Enabled = true;
		PARENT_ALZHEIMER_HISTORY_CHECKBOX->Enabled = true;
	}
	else {
		//Disable and empty the checkboxes if option yes is not selected
		GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
		BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
		UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
		COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
		PARENT_ALZHEIMER_HISTORY_CHECKBOX->Enabled = false;
		GRANDPARENTS_ALZHEIMER_HISTORY_CHECKBOX->Checked = false;
		BROTHER_ALZHEIMER_HISTORY_CHECKBOX->Checked = false;
		UNCLE_ALZHEIMER_HISTORY_CHECKBOX->Checked = false;
		COUSIN_ALZHEIMER_HISTORY_CHECKBOX->Checked = false;
		PARENT_ALZHEIMER_HISTORY_CHECKBOX->Checked = false;
	}
}

private: System::Void YES_CREATININE_MORBIDITIES_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (YES_CREATININE_MORBIDITIES_RADIOBUTTON->Checked) {
		CREATININE_MORBIDITIES_DATE_DATEPICKER->Enabled = true;
		CREATININE_MORBIDITIES_DATE_TEXTBOX->Enabled = true;
	}
	else {
		CREATININE_MORBIDITIES_DATE_DATEPICKER->Enabled = false;
		CREATININE_MORBIDITIES_DATE_TEXTBOX->Enabled = false;
		CREATININE_MORBIDITIES_DATE_TEXTBOX->Text = "";
	}
}

private: System::Void YES_CANCER_MORBIDITIES_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (YES_CANCER_MORBIDITIES_RADIOBUTTON->Checked) {
		CANCER_MORBIDITIES_DETAIL_COMBOBOX->Enabled = true;
	}
	else{
		CANCER_MORBIDITIES_DETAIL_COMBOBOX->Enabled = false;
	}
}

private: System::Void YES_OTHER_HISTORY_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (YES_OTHER_HISTORY_RADIOBUTTON->Checked) {
		OTHER_HISTORY_TEXTBOX->Enabled = true;
	}
	else {
		OTHER_HISTORY_TEXTBOX->Enabled = false;
		OTHER_HISTORY_TEXTBOX->Text = "";
	}
}

private: System::Void YES_RISK_FACTOR_SMOKING_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked || STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked) {
		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Enabled = true;
		RISK_FACTOR_SMOKING_YEARS_COUNTER->Enabled = true;
	}
	else {
		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Enabled = false;
		RISK_FACTOR_SMOKING_YEARS_COUNTER->Enabled = false;
		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Value = 0;
		RISK_FACTOR_SMOKING_YEARS_COUNTER->Value = 0;
	}
}

private: System::Void STOP_RISK_FACTOR_SMOKING_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked || STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked) {
		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Enabled = true;
		RISK_FACTOR_SMOKING_YEARS_COUNTER->Enabled = true;
	}
	else {
		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Enabled = false;
		RISK_FACTOR_SMOKING_YEARS_COUNTER->Enabled = false;
		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Value = 0;
		RISK_FACTOR_SMOKING_YEARS_COUNTER->Value = 0;
	}
}

private: System::Void YES_RISK_FACTOR_ALCOHOL_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked || STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked) {
		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = true;
	}
	else {
		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = false;
		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Value = 0;
	}
}

private: System::Void STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked || STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked) {
		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = true;
	}
	else {
		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = false;
		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Value = 0;
	}
}

private: System::Void YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked) {
		ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Enabled = true;
		HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Enabled = true;
		DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Enabled = true;
	}
	else {
		ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Enabled = false;
		HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Enabled = false;
		DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Enabled = false;
		ISCHEMIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked = false;
		HEMORRHAGIC_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked = false;
		DONTKNOW_CVA_TYPE_HEART_PERSONAL_HISTORY_RADIOBUTTON->Checked = false;
	}
}

private: System::Void YES_HEART_HISTORY_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (YES_HEART_HISTORY_RADIOBUTTON->Checked) {
		MALE_HEART_HISTORY_CHECKBOX->Enabled = true;
		FEMALE_HEART_HISTORY_CHECKBOX->Enabled = true;
	}
	else {
		MALE_HEART_HISTORY_CHECKBOX->Enabled = false;
		FEMALE_HEART_HISTORY_CHECKBOX->Enabled = false;
		MALE_HEART_HISTORY_CHECKBOX->Checked = false;
		FEMALE_HEART_HISTORY_CHECKBOX->Checked = false;
	}
}

	private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		//Exit Without Doing Anything
		MedicalDataPT1::Close();
	}

};
}
