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

	/// <summary>
	/// Summary for MedicalDataPT3
	/// </summary>
	public ref class MedicalDataPT3 : public System::Windows::Forms::Form
	{
	public: String^ currentLanguage;
	public:
		MedicalDataPT3(String^ language)
		{
			currentLanguage = language;
			InitializeComponent();
			UpdateLanguage_MedicalDataPT3Form(currentLanguage);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MedicalDataPT3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: void WacomTabletApplication::MedicalDataPT3::UpdateLanguage_MedicalDataPT3Form(String^ language);

	private: System::Windows::Forms::GroupBox^  COGNITIVE_DIAGNOSE_LABEL;
	private: System::Windows::Forms::CheckBox^  MA_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  MULTIPLE_MCI_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  EXECUTIVE_MCI_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  AMNESIC_MCI_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  EXISTING_COGNITIVE_COMPLAINS_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  MIXED_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  UNIQUE_MCI_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  MCI_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX;
	private: System::Windows::Forms::TextBox^  OTHER_PSYCOAFFECTIVE_TEXTBOX;
	private: System::Windows::Forms::CheckBox^  OTHER_PSYCOAFFECTIVE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  ANXIETY_PSYCOAFFECTIVE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  DEPRESSION_PSYCOAFFECTIVE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  PSYCOAFFECTIVE_CHECKBOX;
	private: System::Windows::Forms::TextBox^  OTHER_DEMENTIA_TEXTBOX;
	private: System::Windows::Forms::CheckBox^  DS_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  OTHER_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  DCB_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  APP_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  DFT_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  PSP_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  VASCULAR_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  DCL_DEMENTIA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  MEMENTO_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  BALTAZAR_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  LEOPOLD_CHECKBOX;
	private: System::Windows::Forms::Label^  OTHER_PROTOCOLS_LABEL;
	private: System::Windows::Forms::CheckBox^  COGNITIVE_DIAGNOSE_DATE_CHECKBOX;
	private: System::Windows::Forms::DateTimePicker^  COGNITIVE_DIAGNOSE_DATE_DATEPICKER;
	private: System::Windows::Forms::GroupBox^  DATA_M0_LABEL;
	private: System::Windows::Forms::GroupBox^  PSYCHIATRIC_HISTORY_LABEL;
	private: System::Windows::Forms::Label^  ANTIDEPRESSIVE_USE_LABEL;
	private: System::Windows::Forms::Label^  PSYCOTROPIC_USE_LABEL;
	private: System::Windows::Forms::Label^  PSYCHIATRIC_HOSPITALIZATION_LABEL;
	private: System::Windows::Forms::GroupBox^  NEUROLOGIC_HISTORY_LABEL;
	private: System::Windows::Forms::TextBox^  OTHER_NEURO_TEXTBOX;
	private: System::Windows::Forms::Label^  OTHER_NEURO_LABEL;
	private: System::Windows::Forms::Label^  APHASY_LABEL;
	private: System::Windows::Forms::Label^  HEMIPLEGIA_LABEL;
	private: System::Windows::Forms::Label^  PARKINSON_LABEL;
	private: System::Windows::Forms::Label^  CVA_LABEL;
	private: System::Windows::Forms::Label^  TUMOR_LABEL;
	private: System::Windows::Forms::Label^  TRAUMA_LABEL;
	private: System::Windows::Forms::Label^  EPILEPSIA_LABEL;
	private: System::Windows::Forms::GroupBox^  RHUMATOLOGIC_HISTORY_LABEL;
	private: System::Windows::Forms::CheckBox^  MISSING_PAIN_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  SUPERIOR_PAIN_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  INFERIOR_PAIN_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  MISSING_SURGERY_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  SUPERIOR_SURGERY_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  INFERIOR_SURGERY_CHECKBOX;
	private: System::Windows::Forms::TextBox^  OTHERS_TEXTBOX;
	private: System::Windows::Forms::Label^  CANE_LABEL;
	private: System::Windows::Forms::Label^  PAIN_LABEL;
	private: System::Windows::Forms::Label^  SURGERY_LABEL;
	private: System::Windows::Forms::Label^  OTHERS_RHUMA_LABEL;
	private: System::Windows::Forms::Label^  ARTHRITIS_LABEL;
	private: System::Windows::Forms::Label^  ARTHROSIS_LABEL;
	private: System::Windows::Forms::DateTimePicker^  ANTIDEPRESSIVE_USE_LAST_DATEPICKER;
	private: System::Windows::Forms::CheckBox^  ANTIDEPRESSIVE_USE_LAST_CHECKBOX;
	private: System::Windows::Forms::DateTimePicker^  PSYCOTROPIC_USE_LAST_DATEPICKER;
	private: System::Windows::Forms::CheckBox^  PSYCOTROPIC_USE_LAST_CHECKBOX;
	private: System::Windows::Forms::TextBox^  PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX;
	private: System::Windows::Forms::DateTimePicker^  PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER;
	private: System::Windows::Forms::CheckBox^  PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX;
	private: System::Windows::Forms::NumericUpDown^  PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER;
	private: System::Windows::Forms::GroupBox^  groupBox19;
	private: System::Windows::Forms::RadioButton^  YES_CANE_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_CANE_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_CANE_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::RadioButton^  YES_OTHERS_RADIOBUTTONS;
	private: System::Windows::Forms::RadioButton^  NO_OTHERS_RADIOBUTTONS;
	private: System::Windows::Forms::RadioButton^  MISSING_OTHERS_RADIOBUTTONS;
	private: System::Windows::Forms::GroupBox^  groupBox17;
	private: System::Windows::Forms::RadioButton^  YES_ARTHRITIS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_ARTHRITIS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_ARTHRITIS_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox18;
	private: System::Windows::Forms::RadioButton^  YES_ARTHROSIS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_ARTHROSIS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_ARTHROSIS_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::RadioButton^  YES_ANTIDEPRESSIVE_USE_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_ANTIDEPRESSIVE_USE_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::RadioButton^  YES_PSYCOTROPIC_USE_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_PSYCOTROPIC_USE_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_PSYCOTROPIC_USE_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::RadioButton^  YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::RadioButton^  YES_APHASIA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_APHASIA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_APHASIA_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::RadioButton^  YES_HEMIPLEGIA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_HEMIPLEGIA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_HEMIPLEGIA_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox16;
	private: System::Windows::Forms::RadioButton^  YES_PARKINSON_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_PARKINSON_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_PARKINSON_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox15;
	private: System::Windows::Forms::RadioButton^  YES_CVA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_CVA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_CVA_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox14;
	private: System::Windows::Forms::RadioButton^  YES_TUMOR_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_TUMOR_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_TUMOR_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox13;
	private: System::Windows::Forms::RadioButton^  YES_TRAUMA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_TRAUMA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_TRAUMA_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox12;
	private: System::Windows::Forms::RadioButton^  YES_EPILEPSIA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_EPILEPSIA_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_EPILEPSIA_RADIOBUTTON;
	private: System::Windows::Forms::Button^  CANCEL_BUTTON;
	private: System::Windows::Forms::Button^  REGISTER_BUTTON;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::RadioButton^  YES_OTHER_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  NO_OTHER_RADIOBUTTON;
private: System::Windows::Forms::RadioButton^  MISSING_OTHER_RADIOBUTTON;


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
			this->COGNITIVE_DIAGNOSE_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->MEMENTO_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->BALTAZAR_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->LEOPOLD_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->OTHER_PROTOCOLS_LABEL = (gcnew System::Windows::Forms::Label());
			this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER = (gcnew System::Windows::Forms::DateTimePicker());
			this->OTHER_PSYCOAFFECTIVE_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->PSYCOAFFECTIVE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->OTHER_DEMENTIA_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->DS_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->OTHER_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->DCB_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->APP_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->DFT_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->PSP_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->VASCULAR_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->DCL_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MA_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MULTIPLE_MCI_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->EXECUTIVE_MCI_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->AMNESIC_MCI_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->EXISTING_COGNITIVE_COMPLAINS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MIXED_DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->UNIQUE_MCI_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->DEMENTIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MCI_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->DATA_M0_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->RHUMATOLOGIC_HISTORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox19 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_CANE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_CANE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_CANE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_OTHERS_RADIOBUTTONS = (gcnew System::Windows::Forms::RadioButton());
			this->NO_OTHERS_RADIOBUTTONS = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_OTHERS_RADIOBUTTONS = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_ARTHRITIS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_ARTHRITIS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_ARTHRITIS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox18 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_ARTHROSIS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_ARTHROSIS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_ARTHROSIS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_PAIN_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->SUPERIOR_PAIN_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->INFERIOR_PAIN_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MISSING_SURGERY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->SUPERIOR_SURGERY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->INFERIOR_SURGERY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->OTHERS_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->CANE_LABEL = (gcnew System::Windows::Forms::Label());
			this->PAIN_LABEL = (gcnew System::Windows::Forms::Label());
			this->SURGERY_LABEL = (gcnew System::Windows::Forms::Label());
			this->OTHERS_RHUMA_LABEL = (gcnew System::Windows::Forms::Label());
			this->ARTHRITIS_LABEL = (gcnew System::Windows::Forms::Label());
			this->ARTHROSIS_LABEL = (gcnew System::Windows::Forms::Label());
			this->PSYCHIATRIC_HISTORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->ANTIDEPRESSIVE_USE_LAST_DATEPICKER = (gcnew System::Windows::Forms::DateTimePicker());
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->PSYCOTROPIC_USE_LAST_DATEPICKER = (gcnew System::Windows::Forms::DateTimePicker());
			this->PSYCOTROPIC_USE_LAST_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER = (gcnew System::Windows::Forms::DateTimePicker());
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
			this->ANTIDEPRESSIVE_USE_LABEL = (gcnew System::Windows::Forms::Label());
			this->PSYCOTROPIC_USE_LABEL = (gcnew System::Windows::Forms::Label());
			this->PSYCHIATRIC_HOSPITALIZATION_LABEL = (gcnew System::Windows::Forms::Label());
			this->NEUROLOGIC_HISTORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_OTHER_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_OTHER_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_OTHER_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_APHASIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_APHASIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_APHASIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_HEMIPLEGIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_HEMIPLEGIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_HEMIPLEGIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_PARKINSON_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_PARKINSON_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_PARKINSON_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_CVA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_CVA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_CVA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_TUMOR_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_TUMOR_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_TUMOR_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_TRAUMA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_TRAUMA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_TRAUMA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_EPILEPSIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_EPILEPSIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_EPILEPSIA_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->OTHER_NEURO_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->OTHER_NEURO_LABEL = (gcnew System::Windows::Forms::Label());
			this->APHASY_LABEL = (gcnew System::Windows::Forms::Label());
			this->HEMIPLEGIA_LABEL = (gcnew System::Windows::Forms::Label());
			this->PARKINSON_LABEL = (gcnew System::Windows::Forms::Label());
			this->CVA_LABEL = (gcnew System::Windows::Forms::Label());
			this->TUMOR_LABEL = (gcnew System::Windows::Forms::Label());
			this->TRAUMA_LABEL = (gcnew System::Windows::Forms::Label());
			this->EPILEPSIA_LABEL = (gcnew System::Windows::Forms::Label());
			this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
			this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
			this->COGNITIVE_DIAGNOSE_LABEL->SuspendLayout();
			this->DATA_M0_LABEL->SuspendLayout();
			this->RHUMATOLOGIC_HISTORY_LABEL->SuspendLayout();
			this->groupBox19->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->groupBox18->SuspendLayout();
			this->PSYCHIATRIC_HISTORY_LABEL->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER))->BeginInit();
			this->NEUROLOGIC_HISTORY_LABEL->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->SuspendLayout();
			// 
			// COGNITIVE_DIAGNOSE_LABEL
			// 
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->MEMENTO_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->BALTAZAR_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->LEOPOLD_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->OTHER_PROTOCOLS_LABEL);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->OTHER_PSYCOAFFECTIVE_TEXTBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->OTHER_PSYCOAFFECTIVE_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->PSYCOAFFECTIVE_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->OTHER_DEMENTIA_TEXTBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->DS_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->OTHER_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->DCB_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->APP_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->DFT_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->PSP_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->VASCULAR_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->DCL_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->MA_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->MULTIPLE_MCI_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->EXECUTIVE_MCI_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->AMNESIC_MCI_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->EXISTING_COGNITIVE_COMPLAINS_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->MIXED_DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->UNIQUE_MCI_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->DEMENTIA_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->MCI_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX);
			this->COGNITIVE_DIAGNOSE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->COGNITIVE_DIAGNOSE_LABEL->Location = System::Drawing::Point(33, 12);
			this->COGNITIVE_DIAGNOSE_LABEL->Name = L"COGNITIVE_DIAGNOSE_LABEL";
			this->COGNITIVE_DIAGNOSE_LABEL->Size = System::Drawing::Size(584, 849);
			this->COGNITIVE_DIAGNOSE_LABEL->TabIndex = 1;
			this->COGNITIVE_DIAGNOSE_LABEL->TabStop = false;
			this->COGNITIVE_DIAGNOSE_LABEL->Text = L"Diagnostic Cognitif";
			// 
			// MEMENTO_CHECKBOX
			// 
			this->MEMENTO_CHECKBOX->AutoSize = true;
			this->MEMENTO_CHECKBOX->Location = System::Drawing::Point(363, 815);
			this->MEMENTO_CHECKBOX->Name = L"MEMENTO_CHECKBOX";
			this->MEMENTO_CHECKBOX->Size = System::Drawing::Size(128, 28);
			this->MEMENTO_CHECKBOX->TabIndex = 30;
			this->MEMENTO_CHECKBOX->Text = L"MEMENTO";
			this->MEMENTO_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// BALTAZAR_CHECKBOX
			// 
			this->BALTAZAR_CHECKBOX->AutoSize = true;
			this->BALTAZAR_CHECKBOX->Location = System::Drawing::Point(204, 815);
			this->BALTAZAR_CHECKBOX->Name = L"BALTAZAR_CHECKBOX";
			this->BALTAZAR_CHECKBOX->Size = System::Drawing::Size(127, 28);
			this->BALTAZAR_CHECKBOX->TabIndex = 29;
			this->BALTAZAR_CHECKBOX->Text = L"BALTAZAR";
			this->BALTAZAR_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// LEOPOLD_CHECKBOX
			// 
			this->LEOPOLD_CHECKBOX->AutoSize = true;
			this->LEOPOLD_CHECKBOX->Location = System::Drawing::Point(52, 815);
			this->LEOPOLD_CHECKBOX->Name = L"LEOPOLD_CHECKBOX";
			this->LEOPOLD_CHECKBOX->Size = System::Drawing::Size(117, 28);
			this->LEOPOLD_CHECKBOX->TabIndex = 28;
			this->LEOPOLD_CHECKBOX->Text = L"LEOPOLD";
			this->LEOPOLD_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// OTHER_PROTOCOLS_LABEL
			// 
			this->OTHER_PROTOCOLS_LABEL->AutoSize = true;
			this->OTHER_PROTOCOLS_LABEL->Location = System::Drawing::Point(28, 776);
			this->OTHER_PROTOCOLS_LABEL->Name = L"OTHER_PROTOCOLS_LABEL";
			this->OTHER_PROTOCOLS_LABEL->Size = System::Drawing::Size(295, 24);
			this->OTHER_PROTOCOLS_LABEL->TabIndex = 27;
			this->OTHER_PROTOCOLS_LABEL->Text = L"Participation à d\'autres protocoles:";
			// 
			// COGNITIVE_DIAGNOSE_DATE_CHECKBOX
			// 
			this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX->AutoSize = true;
			this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX->Location = System::Drawing::Point(6, 30);
			this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX->Name = L"COGNITIVE_DIAGNOSE_DATE_CHECKBOX";
			this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX->Size = System::Drawing::Size(226, 28);
			this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX->TabIndex = 1;
			this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX->Text = L"Date Diagnostic Cognitif";
			this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX->UseVisualStyleBackColor = true;
			this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::COGNITIVE_DIAGNOSE_DATE_CHECKBOX_CheckedChanged);
			// 
			// COGNITIVE_DIAGNOSE_DATE_DATEPICKER
			// 
			this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Enabled = false;
			this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Location = System::Drawing::Point(286, 27);
			this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Name = L"COGNITIVE_DIAGNOSE_DATE_DATEPICKER";
			this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Size = System::Drawing::Size(188, 29);
			this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->TabIndex = 2;
			// 
			// OTHER_PSYCOAFFECTIVE_TEXTBOX
			// 
			this->OTHER_PSYCOAFFECTIVE_TEXTBOX->Enabled = false;
			this->OTHER_PSYCOAFFECTIVE_TEXTBOX->Location = System::Drawing::Point(137, 725);
			this->OTHER_PSYCOAFFECTIVE_TEXTBOX->Name = L"OTHER_PSYCOAFFECTIVE_TEXTBOX";
			this->OTHER_PSYCOAFFECTIVE_TEXTBOX->Size = System::Drawing::Size(304, 29);
			this->OTHER_PSYCOAFFECTIVE_TEXTBOX->TabIndex = 26;
			// 
			// OTHER_PSYCOAFFECTIVE_CHECKBOX
			// 
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX->AutoSize = true;
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Enabled = false;
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Location = System::Drawing::Point(52, 725);
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Name = L"OTHER_PSYCOAFFECTIVE_CHECKBOX";
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Size = System::Drawing::Size(79, 28);
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX->TabIndex = 25;
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Text = L"Autre:";
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX->UseVisualStyleBackColor = true;
			this->OTHER_PSYCOAFFECTIVE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::OTHER_PSYCOAFFECTIVE_CHECKBOX_CheckedChanged);
			// 
			// ANXIETY_PSYCOAFFECTIVE_CHECKBOX
			// 
			this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->AutoSize = true;
			this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Enabled = false;
			this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Location = System::Drawing::Point(52, 691);
			this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Name = L"ANXIETY_PSYCOAFFECTIVE_CHECKBOX";
			this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Size = System::Drawing::Size(93, 28);
			this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->TabIndex = 23;
			this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Text = L"Anxiété";
			this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// DEPRESSION_PSYCOAFFECTIVE_CHECKBOX
			// 
			this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->AutoSize = true;
			this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Enabled = false;
			this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Location = System::Drawing::Point(165, 691);
			this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Name = L"DEPRESSION_PSYCOAFFECTIVE_CHECKBOX";
			this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Size = System::Drawing::Size(125, 28);
			this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->TabIndex = 24;
			this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Text = L"Dépression";
			this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// PSYCOAFFECTIVE_CHECKBOX
			// 
			this->PSYCOAFFECTIVE_CHECKBOX->AutoSize = true;
			this->PSYCOAFFECTIVE_CHECKBOX->Location = System::Drawing::Point(6, 657);
			this->PSYCOAFFECTIVE_CHECKBOX->Name = L"PSYCOAFFECTIVE_CHECKBOX";
			this->PSYCOAFFECTIVE_CHECKBOX->Size = System::Drawing::Size(236, 28);
			this->PSYCOAFFECTIVE_CHECKBOX->TabIndex = 22;
			this->PSYCOAFFECTIVE_CHECKBOX->Text = L"Troubles psycho-affectifs";
			this->PSYCOAFFECTIVE_CHECKBOX->UseVisualStyleBackColor = true;
			this->PSYCOAFFECTIVE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::PSYCOAFFECTIVE_CHECKBOX_CheckedChanged);
			// 
			// OTHER_DEMENTIA_TEXTBOX
			// 
			this->OTHER_DEMENTIA_TEXTBOX->Enabled = false;
			this->OTHER_DEMENTIA_TEXTBOX->Location = System::Drawing::Point(137, 609);
			this->OTHER_DEMENTIA_TEXTBOX->Name = L"OTHER_DEMENTIA_TEXTBOX";
			this->OTHER_DEMENTIA_TEXTBOX->Size = System::Drawing::Size(304, 29);
			this->OTHER_DEMENTIA_TEXTBOX->TabIndex = 21;
			// 
			// DS_DEMENTIA_CHECKBOX
			// 
			this->DS_DEMENTIA_CHECKBOX->AutoSize = true;
			this->DS_DEMENTIA_CHECKBOX->Enabled = false;
			this->DS_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(52, 576);
			this->DS_DEMENTIA_CHECKBOX->Name = L"DS_DEMENTIA_CHECKBOX";
			this->DS_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(255, 28);
			this->DS_DEMENTIA_CHECKBOX->TabIndex = 19;
			this->DS_DEMENTIA_CHECKBOX->Text = L"DS (démence sémantique)";
			this->DS_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// OTHER_DEMENTIA_CHECKBOX
			// 
			this->OTHER_DEMENTIA_CHECKBOX->AutoSize = true;
			this->OTHER_DEMENTIA_CHECKBOX->Enabled = false;
			this->OTHER_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(52, 610);
			this->OTHER_DEMENTIA_CHECKBOX->Name = L"OTHER_DEMENTIA_CHECKBOX";
			this->OTHER_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(79, 28);
			this->OTHER_DEMENTIA_CHECKBOX->TabIndex = 20;
			this->OTHER_DEMENTIA_CHECKBOX->Text = L"Autre:";
			this->OTHER_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			this->OTHER_DEMENTIA_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::OTHER_DEMENTIA_CHECKBOX_CheckedChanged);
			// 
			// DCB_DEMENTIA_CHECKBOX
			// 
			this->DCB_DEMENTIA_CHECKBOX->AutoSize = true;
			this->DCB_DEMENTIA_CHECKBOX->Enabled = false;
			this->DCB_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(52, 509);
			this->DCB_DEMENTIA_CHECKBOX->Name = L"DCB_DEMENTIA_CHECKBOX";
			this->DCB_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(321, 28);
			this->DCB_DEMENTIA_CHECKBOX->TabIndex = 17;
			this->DCB_DEMENTIA_CHECKBOX->Text = L"DCB (dégénérence cortico-basale)";
			this->DCB_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// APP_DEMENTIA_CHECKBOX
			// 
			this->APP_DEMENTIA_CHECKBOX->AutoSize = true;
			this->APP_DEMENTIA_CHECKBOX->Enabled = false;
			this->APP_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(52, 543);
			this->APP_DEMENTIA_CHECKBOX->Name = L"APP_DEMENTIA_CHECKBOX";
			this->APP_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(325, 28);
			this->APP_DEMENTIA_CHECKBOX->TabIndex = 18;
			this->APP_DEMENTIA_CHECKBOX->Text = L"APP (aphasie primaire progressive)";
			this->APP_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// DFT_DEMENTIA_CHECKBOX
			// 
			this->DFT_DEMENTIA_CHECKBOX->AutoSize = true;
			this->DFT_DEMENTIA_CHECKBOX->Enabled = false;
			this->DFT_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(52, 439);
			this->DFT_DEMENTIA_CHECKBOX->Name = L"DFT_DEMENTIA_CHECKBOX";
			this->DFT_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(306, 28);
			this->DFT_DEMENTIA_CHECKBOX->TabIndex = 15;
			this->DFT_DEMENTIA_CHECKBOX->Text = L"DFT (démence fronto-temporale)";
			this->DFT_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// PSP_DEMENTIA_CHECKBOX
			// 
			this->PSP_DEMENTIA_CHECKBOX->AutoSize = true;
			this->PSP_DEMENTIA_CHECKBOX->Enabled = false;
			this->PSP_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(52, 473);
			this->PSP_DEMENTIA_CHECKBOX->Name = L"PSP_DEMENTIA_CHECKBOX";
			this->PSP_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(389, 28);
			this->PSP_DEMENTIA_CHECKBOX->TabIndex = 16;
			this->PSP_DEMENTIA_CHECKBOX->Text = L"PSP (paralysie supranucléaire progressive)";
			this->PSP_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// VASCULAR_DEMENTIA_CHECKBOX
			// 
			this->VASCULAR_DEMENTIA_CHECKBOX->AutoSize = true;
			this->VASCULAR_DEMENTIA_CHECKBOX->Enabled = false;
			this->VASCULAR_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(52, 372);
			this->VASCULAR_DEMENTIA_CHECKBOX->Name = L"VASCULAR_DEMENTIA_CHECKBOX";
			this->VASCULAR_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(205, 28);
			this->VASCULAR_DEMENTIA_CHECKBOX->TabIndex = 13;
			this->VASCULAR_DEMENTIA_CHECKBOX->Text = L"Démence Vasculaire";
			this->VASCULAR_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// DCL_DEMENTIA_CHECKBOX
			// 
			this->DCL_DEMENTIA_CHECKBOX->AutoSize = true;
			this->DCL_DEMENTIA_CHECKBOX->Enabled = false;
			this->DCL_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(52, 406);
			this->DCL_DEMENTIA_CHECKBOX->Name = L"DCL_DEMENTIA_CHECKBOX";
			this->DCL_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(199, 28);
			this->DCL_DEMENTIA_CHECKBOX->TabIndex = 14;
			this->DCL_DEMENTIA_CHECKBOX->Text = L"DCL (corps de lewy)";
			this->DCL_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// MA_DEMENTIA_CHECKBOX
			// 
			this->MA_DEMENTIA_CHECKBOX->AutoSize = true;
			this->MA_DEMENTIA_CHECKBOX->Enabled = false;
			this->MA_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(52, 342);
			this->MA_DEMENTIA_CHECKBOX->Name = L"MA_DEMENTIA_CHECKBOX";
			this->MA_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(58, 28);
			this->MA_DEMENTIA_CHECKBOX->TabIndex = 11;
			this->MA_DEMENTIA_CHECKBOX->Text = L"MA";
			this->MA_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// MULTIPLE_MCI_CHECKBOX
			// 
			this->MULTIPLE_MCI_CHECKBOX->AutoSize = true;
			this->MULTIPLE_MCI_CHECKBOX->Enabled = false;
			this->MULTIPLE_MCI_CHECKBOX->Location = System::Drawing::Point(55, 262);
			this->MULTIPLE_MCI_CHECKBOX->Name = L"MULTIPLE_MCI_CHECKBOX";
			this->MULTIPLE_MCI_CHECKBOX->Size = System::Drawing::Size(318, 28);
			this->MULTIPLE_MCI_CHECKBOX->TabIndex = 9;
			this->MULTIPLE_MCI_CHECKBOX->Text = L"Domaine multiple / multi-domaines";
			this->MULTIPLE_MCI_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// EXECUTIVE_MCI_CHECKBOX
			// 
			this->EXECUTIVE_MCI_CHECKBOX->AutoSize = true;
			this->EXECUTIVE_MCI_CHECKBOX->Enabled = false;
			this->EXECUTIVE_MCI_CHECKBOX->Location = System::Drawing::Point(55, 194);
			this->EXECUTIVE_MCI_CHECKBOX->Name = L"EXECUTIVE_MCI_CHECKBOX";
			this->EXECUTIVE_MCI_CHECKBOX->Size = System::Drawing::Size(332, 28);
			this->EXECUTIVE_MCI_CHECKBOX->TabIndex = 7;
			this->EXECUTIVE_MCI_CHECKBOX->Text = L"MCI (dys)exécutif / (non amnésique)";
			this->EXECUTIVE_MCI_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// AMNESIC_MCI_CHECKBOX
			// 
			this->AMNESIC_MCI_CHECKBOX->AutoSize = true;
			this->AMNESIC_MCI_CHECKBOX->Enabled = false;
			this->AMNESIC_MCI_CHECKBOX->Location = System::Drawing::Point(55, 160);
			this->AMNESIC_MCI_CHECKBOX->Name = L"AMNESIC_MCI_CHECKBOX";
			this->AMNESIC_MCI_CHECKBOX->Size = System::Drawing::Size(318, 28);
			this->AMNESIC_MCI_CHECKBOX->TabIndex = 6;
			this->AMNESIC_MCI_CHECKBOX->Text = L"MCI Amnésique (hippoc ampique)";
			this->AMNESIC_MCI_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// EXISTING_COGNITIVE_COMPLAINS_CHECKBOX
			// 
			this->EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->AutoSize = true;
			this->EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->Location = System::Drawing::Point(6, 95);
			this->EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->Name = L"EXISTING_COGNITIVE_COMPLAINS_CHECKBOX";
			this->EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->Size = System::Drawing::Size(502, 28);
			this->EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->TabIndex = 4;
			this->EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->Text = L"Plainte cognitive avec fontionnement cognitif nomal (SCI)";
			this->EXISTING_COGNITIVE_COMPLAINS_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// MIXED_DEMENTIA_CHECKBOX
			// 
			this->MIXED_DEMENTIA_CHECKBOX->AutoSize = true;
			this->MIXED_DEMENTIA_CHECKBOX->Enabled = false;
			this->MIXED_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(165, 342);
			this->MIXED_DEMENTIA_CHECKBOX->Name = L"MIXED_DEMENTIA_CHECKBOX";
			this->MIXED_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(162, 28);
			this->MIXED_DEMENTIA_CHECKBOX->TabIndex = 12;
			this->MIXED_DEMENTIA_CHECKBOX->Text = L"Démence mixte";
			this->MIXED_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// UNIQUE_MCI_CHECKBOX
			// 
			this->UNIQUE_MCI_CHECKBOX->AutoSize = true;
			this->UNIQUE_MCI_CHECKBOX->Enabled = false;
			this->UNIQUE_MCI_CHECKBOX->Location = System::Drawing::Point(55, 228);
			this->UNIQUE_MCI_CHECKBOX->Name = L"UNIQUE_MCI_CHECKBOX";
			this->UNIQUE_MCI_CHECKBOX->Size = System::Drawing::Size(169, 28);
			this->UNIQUE_MCI_CHECKBOX->TabIndex = 8;
			this->UNIQUE_MCI_CHECKBOX->Text = L"Domaine unique";
			this->UNIQUE_MCI_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// DEMENTIA_CHECKBOX
			// 
			this->DEMENTIA_CHECKBOX->AutoSize = true;
			this->DEMENTIA_CHECKBOX->Location = System::Drawing::Point(6, 308);
			this->DEMENTIA_CHECKBOX->Name = L"DEMENTIA_CHECKBOX";
			this->DEMENTIA_CHECKBOX->Size = System::Drawing::Size(204, 28);
			this->DEMENTIA_CHECKBOX->TabIndex = 10;
			this->DEMENTIA_CHECKBOX->Text = L"Syndrome démentiel";
			this->DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
			this->DEMENTIA_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::DEMENTIA_CHECKBOX_CheckedChanged);
			// 
			// MCI_CHECKBOX
			// 
			this->MCI_CHECKBOX->AutoSize = true;
			this->MCI_CHECKBOX->Location = System::Drawing::Point(6, 126);
			this->MCI_CHECKBOX->Name = L"MCI_CHECKBOX";
			this->MCI_CHECKBOX->Size = System::Drawing::Size(284, 28);
			this->MCI_CHECKBOX->TabIndex = 5;
			this->MCI_CHECKBOX->Text = L"Troubles cognitifs légers (MCI)";
			this->MCI_CHECKBOX->UseVisualStyleBackColor = true;
			this->MCI_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::MCI_CHECKBOX_CheckedChanged);
			// 
			// ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX
			// 
			this->ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->AutoSize = true;
			this->ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->Location = System::Drawing::Point(6, 64);
			this->ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->Name = L"ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX";
			this->ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->Size = System::Drawing::Size(554, 28);
			this->ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->TabIndex = 3;
			this->ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->Text = L"Absence de plainte cognitive et fonctionnement cognitif normal";
			this->ABSENCE_COGNITIVE_COMPLAINS_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// DATA_M0_LABEL
			// 
			this->DATA_M0_LABEL->Controls->Add(this->RHUMATOLOGIC_HISTORY_LABEL);
			this->DATA_M0_LABEL->Controls->Add(this->PSYCHIATRIC_HISTORY_LABEL);
			this->DATA_M0_LABEL->Controls->Add(this->NEUROLOGIC_HISTORY_LABEL);
			this->DATA_M0_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->DATA_M0_LABEL->Location = System::Drawing::Point(633, 12);
			this->DATA_M0_LABEL->Name = L"DATA_M0_LABEL";
			this->DATA_M0_LABEL->Size = System::Drawing::Size(785, 962);
			this->DATA_M0_LABEL->TabIndex = 31;
			this->DATA_M0_LABEL->TabStop = false;
			this->DATA_M0_LABEL->Text = L"Données M0";
			// 
			// RHUMATOLOGIC_HISTORY_LABEL
			// 
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox19);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox11);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox17);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox18);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->MISSING_PAIN_CHECKBOX);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->SUPERIOR_PAIN_CHECKBOX);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->INFERIOR_PAIN_CHECKBOX);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->MISSING_SURGERY_CHECKBOX);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->SUPERIOR_SURGERY_CHECKBOX);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->INFERIOR_SURGERY_CHECKBOX);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->OTHERS_TEXTBOX);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->CANE_LABEL);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->PAIN_LABEL);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->SURGERY_LABEL);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->OTHERS_RHUMA_LABEL);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->ARTHRITIS_LABEL);
			this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->ARTHROSIS_LABEL);
			this->RHUMATOLOGIC_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->RHUMATOLOGIC_HISTORY_LABEL->Location = System::Drawing::Point(18, 703);
			this->RHUMATOLOGIC_HISTORY_LABEL->Name = L"RHUMATOLOGIC_HISTORY_LABEL";
			this->RHUMATOLOGIC_HISTORY_LABEL->Size = System::Drawing::Size(756, 259);
			this->RHUMATOLOGIC_HISTORY_LABEL->TabIndex = 86;
			this->RHUMATOLOGIC_HISTORY_LABEL->TabStop = false;
			this->RHUMATOLOGIC_HISTORY_LABEL->Text = L"Antécédents Rhumatologiques et orthopédiques";
			// 
			// groupBox19
			// 
			this->groupBox19->Controls->Add(this->YES_CANE_RADIOBUTTON);
			this->groupBox19->Controls->Add(this->NO_CANE_RADIOBUTTON);
			this->groupBox19->Controls->Add(this->MISSING_CANE_RADIOBUTTON);
			this->groupBox19->Location = System::Drawing::Point(255, 201);
			this->groupBox19->Name = L"groupBox19";
			this->groupBox19->Size = System::Drawing::Size(296, 35);
			this->groupBox19->TabIndex = 109;
			this->groupBox19->TabStop = false;
			// 
			// YES_CANE_RADIOBUTTON
			// 
			this->YES_CANE_RADIOBUTTON->AutoSize = true;
			this->YES_CANE_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_CANE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_CANE_RADIOBUTTON->Name = L"YES_CANE_RADIOBUTTON";
			this->YES_CANE_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_CANE_RADIOBUTTON->TabIndex = 109;
			this->YES_CANE_RADIOBUTTON->TabStop = true;
			this->YES_CANE_RADIOBUTTON->Text = L"Oui";
			this->YES_CANE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_CANE_RADIOBUTTON
			// 
			this->NO_CANE_RADIOBUTTON->AutoSize = true;
			this->NO_CANE_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_CANE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_CANE_RADIOBUTTON->Name = L"NO_CANE_RADIOBUTTON";
			this->NO_CANE_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_CANE_RADIOBUTTON->TabIndex = 110;
			this->NO_CANE_RADIOBUTTON->TabStop = true;
			this->NO_CANE_RADIOBUTTON->Text = L"Non";
			this->NO_CANE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_CANE_RADIOBUTTON
			// 
			this->MISSING_CANE_RADIOBUTTON->AutoSize = true;
			this->MISSING_CANE_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_CANE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_CANE_RADIOBUTTON->Name = L"MISSING_CANE_RADIOBUTTON";
			this->MISSING_CANE_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_CANE_RADIOBUTTON->TabIndex = 111;
			this->MISSING_CANE_RADIOBUTTON->TabStop = true;
			this->MISSING_CANE_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_CANE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->YES_OTHERS_RADIOBUTTONS);
			this->groupBox11->Controls->Add(this->NO_OTHERS_RADIOBUTTONS);
			this->groupBox11->Controls->Add(this->MISSING_OTHERS_RADIOBUTTONS);
			this->groupBox11->Location = System::Drawing::Point(255, 95);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(296, 35);
			this->groupBox11->TabIndex = 96;
			this->groupBox11->TabStop = false;
			// 
			// YES_OTHERS_RADIOBUTTONS
			// 
			this->YES_OTHERS_RADIOBUTTONS->AutoSize = true;
			this->YES_OTHERS_RADIOBUTTONS->Location = System::Drawing::Point(9, 10);
			this->YES_OTHERS_RADIOBUTTONS->Margin = System::Windows::Forms::Padding(6);
			this->YES_OTHERS_RADIOBUTTONS->Name = L"YES_OTHERS_RADIOBUTTONS";
			this->YES_OTHERS_RADIOBUTTONS->Size = System::Drawing::Size(58, 28);
			this->YES_OTHERS_RADIOBUTTONS->TabIndex = 96;
			this->YES_OTHERS_RADIOBUTTONS->TabStop = true;
			this->YES_OTHERS_RADIOBUTTONS->Text = L"Oui";
			this->YES_OTHERS_RADIOBUTTONS->UseVisualStyleBackColor = true;
			this->YES_OTHERS_RADIOBUTTONS->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::YES_OTHERS_RADIOBUTTONS_CheckedChanged);
			// 
			// NO_OTHERS_RADIOBUTTONS
			// 
			this->NO_OTHERS_RADIOBUTTONS->AutoSize = true;
			this->NO_OTHERS_RADIOBUTTONS->Location = System::Drawing::Point(79, 10);
			this->NO_OTHERS_RADIOBUTTONS->Margin = System::Windows::Forms::Padding(6);
			this->NO_OTHERS_RADIOBUTTONS->Name = L"NO_OTHERS_RADIOBUTTONS";
			this->NO_OTHERS_RADIOBUTTONS->Size = System::Drawing::Size(64, 28);
			this->NO_OTHERS_RADIOBUTTONS->TabIndex = 97;
			this->NO_OTHERS_RADIOBUTTONS->TabStop = true;
			this->NO_OTHERS_RADIOBUTTONS->Text = L"Non";
			this->NO_OTHERS_RADIOBUTTONS->UseVisualStyleBackColor = true;
			// 
			// MISSING_OTHERS_RADIOBUTTONS
			// 
			this->MISSING_OTHERS_RADIOBUTTONS->AutoSize = true;
			this->MISSING_OTHERS_RADIOBUTTONS->Location = System::Drawing::Point(171, 10);
			this->MISSING_OTHERS_RADIOBUTTONS->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_OTHERS_RADIOBUTTONS->Name = L"MISSING_OTHERS_RADIOBUTTONS";
			this->MISSING_OTHERS_RADIOBUTTONS->Size = System::Drawing::Size(123, 28);
			this->MISSING_OTHERS_RADIOBUTTONS->TabIndex = 98;
			this->MISSING_OTHERS_RADIOBUTTONS->TabStop = true;
			this->MISSING_OTHERS_RADIOBUTTONS->Text = L"Manquante";
			this->MISSING_OTHERS_RADIOBUTTONS->UseVisualStyleBackColor = true;
			// 
			// groupBox17
			// 
			this->groupBox17->Controls->Add(this->YES_ARTHRITIS_RADIOBUTTON);
			this->groupBox17->Controls->Add(this->NO_ARTHRITIS_RADIOBUTTON);
			this->groupBox17->Controls->Add(this->MISSING_ARTHRITIS_RADIOBUTTON);
			this->groupBox17->Location = System::Drawing::Point(255, 59);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(296, 35);
			this->groupBox17->TabIndex = 92;
			this->groupBox17->TabStop = false;
			// 
			// YES_ARTHRITIS_RADIOBUTTON
			// 
			this->YES_ARTHRITIS_RADIOBUTTON->AutoSize = true;
			this->YES_ARTHRITIS_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_ARTHRITIS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_ARTHRITIS_RADIOBUTTON->Name = L"YES_ARTHRITIS_RADIOBUTTON";
			this->YES_ARTHRITIS_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_ARTHRITIS_RADIOBUTTON->TabIndex = 92;
			this->YES_ARTHRITIS_RADIOBUTTON->TabStop = true;
			this->YES_ARTHRITIS_RADIOBUTTON->Text = L"Oui";
			this->YES_ARTHRITIS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_ARTHRITIS_RADIOBUTTON
			// 
			this->NO_ARTHRITIS_RADIOBUTTON->AutoSize = true;
			this->NO_ARTHRITIS_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_ARTHRITIS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_ARTHRITIS_RADIOBUTTON->Name = L"NO_ARTHRITIS_RADIOBUTTON";
			this->NO_ARTHRITIS_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_ARTHRITIS_RADIOBUTTON->TabIndex = 93;
			this->NO_ARTHRITIS_RADIOBUTTON->TabStop = true;
			this->NO_ARTHRITIS_RADIOBUTTON->Text = L"Non";
			this->NO_ARTHRITIS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_ARTHRITIS_RADIOBUTTON
			// 
			this->MISSING_ARTHRITIS_RADIOBUTTON->AutoSize = true;
			this->MISSING_ARTHRITIS_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_ARTHRITIS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_ARTHRITIS_RADIOBUTTON->Name = L"MISSING_ARTHRITIS_RADIOBUTTON";
			this->MISSING_ARTHRITIS_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_ARTHRITIS_RADIOBUTTON->TabIndex = 94;
			this->MISSING_ARTHRITIS_RADIOBUTTON->TabStop = true;
			this->MISSING_ARTHRITIS_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_ARTHRITIS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox18
			// 
			this->groupBox18->Controls->Add(this->YES_ARTHROSIS_RADIOBUTTON);
			this->groupBox18->Controls->Add(this->NO_ARTHROSIS_RADIOBUTTON);
			this->groupBox18->Controls->Add(this->MISSING_ARTHROSIS_RADIOBUTTON);
			this->groupBox18->Location = System::Drawing::Point(255, 24);
			this->groupBox18->Name = L"groupBox18";
			this->groupBox18->Size = System::Drawing::Size(296, 35);
			this->groupBox18->TabIndex = 88;
			this->groupBox18->TabStop = false;
			// 
			// YES_ARTHROSIS_RADIOBUTTON
			// 
			this->YES_ARTHROSIS_RADIOBUTTON->AutoSize = true;
			this->YES_ARTHROSIS_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_ARTHROSIS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_ARTHROSIS_RADIOBUTTON->Name = L"YES_ARTHROSIS_RADIOBUTTON";
			this->YES_ARTHROSIS_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_ARTHROSIS_RADIOBUTTON->TabIndex = 88;
			this->YES_ARTHROSIS_RADIOBUTTON->TabStop = true;
			this->YES_ARTHROSIS_RADIOBUTTON->Text = L"Oui";
			this->YES_ARTHROSIS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_ARTHROSIS_RADIOBUTTON
			// 
			this->NO_ARTHROSIS_RADIOBUTTON->AutoSize = true;
			this->NO_ARTHROSIS_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_ARTHROSIS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_ARTHROSIS_RADIOBUTTON->Name = L"NO_ARTHROSIS_RADIOBUTTON";
			this->NO_ARTHROSIS_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_ARTHROSIS_RADIOBUTTON->TabIndex = 89;
			this->NO_ARTHROSIS_RADIOBUTTON->TabStop = true;
			this->NO_ARTHROSIS_RADIOBUTTON->Text = L"Non";
			this->NO_ARTHROSIS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_ARTHROSIS_RADIOBUTTON
			// 
			this->MISSING_ARTHROSIS_RADIOBUTTON->AutoSize = true;
			this->MISSING_ARTHROSIS_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_ARTHROSIS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_ARTHROSIS_RADIOBUTTON->Name = L"MISSING_ARTHROSIS_RADIOBUTTON";
			this->MISSING_ARTHROSIS_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_ARTHROSIS_RADIOBUTTON->TabIndex = 90;
			this->MISSING_ARTHROSIS_RADIOBUTTON->TabStop = true;
			this->MISSING_ARTHROSIS_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_ARTHROSIS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_PAIN_CHECKBOX
			// 
			this->MISSING_PAIN_CHECKBOX->AutoSize = true;
			this->MISSING_PAIN_CHECKBOX->Location = System::Drawing::Point(507, 173);
			this->MISSING_PAIN_CHECKBOX->Name = L"MISSING_PAIN_CHECKBOX";
			this->MISSING_PAIN_CHECKBOX->Size = System::Drawing::Size(124, 28);
			this->MISSING_PAIN_CHECKBOX->TabIndex = 107;
			this->MISSING_PAIN_CHECKBOX->Text = L"Manquante";
			this->MISSING_PAIN_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// SUPERIOR_PAIN_CHECKBOX
			// 
			this->SUPERIOR_PAIN_CHECKBOX->AutoSize = true;
			this->SUPERIOR_PAIN_CHECKBOX->Location = System::Drawing::Point(380, 174);
			this->SUPERIOR_PAIN_CHECKBOX->Name = L"SUPERIOR_PAIN_CHECKBOX";
			this->SUPERIOR_PAIN_CHECKBOX->Size = System::Drawing::Size(121, 28);
			this->SUPERIOR_PAIN_CHECKBOX->TabIndex = 106;
			this->SUPERIOR_PAIN_CHECKBOX->Text = L"Supérieurs";
			this->SUPERIOR_PAIN_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// INFERIOR_PAIN_CHECKBOX
			// 
			this->INFERIOR_PAIN_CHECKBOX->AutoSize = true;
			this->INFERIOR_PAIN_CHECKBOX->Location = System::Drawing::Point(255, 174);
			this->INFERIOR_PAIN_CHECKBOX->Name = L"INFERIOR_PAIN_CHECKBOX";
			this->INFERIOR_PAIN_CHECKBOX->Size = System::Drawing::Size(106, 28);
			this->INFERIOR_PAIN_CHECKBOX->TabIndex = 105;
			this->INFERIOR_PAIN_CHECKBOX->Text = L"Inférieurs";
			this->INFERIOR_PAIN_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// MISSING_SURGERY_CHECKBOX
			// 
			this->MISSING_SURGERY_CHECKBOX->AutoSize = true;
			this->MISSING_SURGERY_CHECKBOX->Location = System::Drawing::Point(507, 141);
			this->MISSING_SURGERY_CHECKBOX->Name = L"MISSING_SURGERY_CHECKBOX";
			this->MISSING_SURGERY_CHECKBOX->Size = System::Drawing::Size(124, 28);
			this->MISSING_SURGERY_CHECKBOX->TabIndex = 103;
			this->MISSING_SURGERY_CHECKBOX->Text = L"Manquante";
			this->MISSING_SURGERY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// SUPERIOR_SURGERY_CHECKBOX
			// 
			this->SUPERIOR_SURGERY_CHECKBOX->AutoSize = true;
			this->SUPERIOR_SURGERY_CHECKBOX->Location = System::Drawing::Point(380, 142);
			this->SUPERIOR_SURGERY_CHECKBOX->Name = L"SUPERIOR_SURGERY_CHECKBOX";
			this->SUPERIOR_SURGERY_CHECKBOX->Size = System::Drawing::Size(121, 28);
			this->SUPERIOR_SURGERY_CHECKBOX->TabIndex = 102;
			this->SUPERIOR_SURGERY_CHECKBOX->Text = L"Supérieurs";
			this->SUPERIOR_SURGERY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// INFERIOR_SURGERY_CHECKBOX
			// 
			this->INFERIOR_SURGERY_CHECKBOX->AutoSize = true;
			this->INFERIOR_SURGERY_CHECKBOX->Location = System::Drawing::Point(255, 142);
			this->INFERIOR_SURGERY_CHECKBOX->Name = L"INFERIOR_SURGERY_CHECKBOX";
			this->INFERIOR_SURGERY_CHECKBOX->Size = System::Drawing::Size(106, 28);
			this->INFERIOR_SURGERY_CHECKBOX->TabIndex = 101;
			this->INFERIOR_SURGERY_CHECKBOX->Text = L"Inférieurs";
			this->INFERIOR_SURGERY_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// OTHERS_TEXTBOX
			// 
			this->OTHERS_TEXTBOX->Enabled = false;
			this->OTHERS_TEXTBOX->Location = System::Drawing::Point(558, 104);
			this->OTHERS_TEXTBOX->Name = L"OTHERS_TEXTBOX";
			this->OTHERS_TEXTBOX->Size = System::Drawing::Size(179, 29);
			this->OTHERS_TEXTBOX->TabIndex = 99;
			// 
			// CANE_LABEL
			// 
			this->CANE_LABEL->AutoSize = true;
			this->CANE_LABEL->Location = System::Drawing::Point(18, 212);
			this->CANE_LABEL->Name = L"CANE_LABEL";
			this->CANE_LABEL->Size = System::Drawing::Size(211, 24);
			this->CANE_LABEL->TabIndex = 108;
			this->CANE_LABEL->Text = L"6) Canne pour marcher:";
			// 
			// PAIN_LABEL
			// 
			this->PAIN_LABEL->AutoSize = true;
			this->PAIN_LABEL->Location = System::Drawing::Point(18, 178);
			this->PAIN_LABEL->Name = L"PAIN_LABEL";
			this->PAIN_LABEL->Size = System::Drawing::Size(215, 24);
			this->PAIN_LABEL->TabIndex = 104;
			this->PAIN_LABEL->Text = L"5) Douleur de membres:";
			// 
			// SURGERY_LABEL
			// 
			this->SURGERY_LABEL->AutoSize = true;
			this->SURGERY_LABEL->Location = System::Drawing::Point(18, 142);
			this->SURGERY_LABEL->Name = L"SURGERY_LABEL";
			this->SURGERY_LABEL->Size = System::Drawing::Size(228, 24);
			this->SURGERY_LABEL->TabIndex = 100;
			this->SURGERY_LABEL->Text = L"4) Chirurgie des membes:";
			// 
			// OTHERS_RHUMA_LABEL
			// 
			this->OTHERS_RHUMA_LABEL->AutoSize = true;
			this->OTHERS_RHUMA_LABEL->Location = System::Drawing::Point(18, 108);
			this->OTHERS_RHUMA_LABEL->Name = L"OTHERS_RHUMA_LABEL";
			this->OTHERS_RHUMA_LABEL->Size = System::Drawing::Size(90, 24);
			this->OTHERS_RHUMA_LABEL->TabIndex = 95;
			this->OTHERS_RHUMA_LABEL->Text = L"3) Autres:";
			// 
			// ARTHRITIS_LABEL
			// 
			this->ARTHRITIS_LABEL->AutoSize = true;
			this->ARTHRITIS_LABEL->Location = System::Drawing::Point(18, 72);
			this->ARTHRITIS_LABEL->Name = L"ARTHRITIS_LABEL";
			this->ARTHRITIS_LABEL->Size = System::Drawing::Size(104, 24);
			this->ARTHRITIS_LABEL->TabIndex = 91;
			this->ARTHRITIS_LABEL->Text = L"2) Arthrites:";
			// 
			// ARTHROSIS_LABEL
			// 
			this->ARTHROSIS_LABEL->AutoSize = true;
			this->ARTHROSIS_LABEL->Location = System::Drawing::Point(18, 35);
			this->ARTHROSIS_LABEL->Name = L"ARTHROSIS_LABEL";
			this->ARTHROSIS_LABEL->Size = System::Drawing::Size(107, 24);
			this->ARTHROSIS_LABEL->TabIndex = 87;
			this->ARTHROSIS_LABEL->Text = L"1) Arthrose:";
			// 
			// PSYCHIATRIC_HISTORY_LABEL
			// 
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->groupBox10);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->groupBox9);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->groupBox8);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->ANTIDEPRESSIVE_USE_LAST_DATEPICKER);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCOTROPIC_USE_LAST_DATEPICKER);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCOTROPIC_USE_LAST_CHECKBOX);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->ANTIDEPRESSIVE_USE_LABEL);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCOTROPIC_USE_LABEL);
			this->PSYCHIATRIC_HISTORY_LABEL->Controls->Add(this->PSYCHIATRIC_HOSPITALIZATION_LABEL);
			this->PSYCHIATRIC_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->PSYCHIATRIC_HISTORY_LABEL->Location = System::Drawing::Point(18, 396);
			this->PSYCHIATRIC_HISTORY_LABEL->Name = L"PSYCHIATRIC_HISTORY_LABEL";
			this->PSYCHIATRIC_HISTORY_LABEL->Size = System::Drawing::Size(756, 301);
			this->PSYCHIATRIC_HISTORY_LABEL->TabIndex = 63;
			this->PSYCHIATRIC_HISTORY_LABEL->TabStop = false;
			this->PSYCHIATRIC_HISTORY_LABEL->Text = L"Antécédents Psychiatriques";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON);
			this->groupBox10->Controls->Add(this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON);
			this->groupBox10->Controls->Add(this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON);
			this->groupBox10->Location = System::Drawing::Point(453, 213);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(296, 35);
			this->groupBox10->TabIndex = 81;
			this->groupBox10->TabStop = false;
			// 
			// YES_ANTIDEPRESSIVE_USE_RADIOBUTTON
			// 
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->AutoSize = true;
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->Name = L"YES_ANTIDEPRESSIVE_USE_RADIOBUTTON";
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->TabIndex = 81;
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->TabStop = true;
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->Text = L"Oui";
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::YES_ANTIDEPRESSIVE_USE_RADIOBUTTON_CheckedChanged);
			// 
			// NO_ANTIDEPRESSIVE_USE_RADIOBUTTON
			// 
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->AutoSize = true;
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->Name = L"NO_ANTIDEPRESSIVE_USE_RADIOBUTTON";
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->TabIndex = 82;
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->TabStop = true;
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->Text = L"Non";
			this->NO_ANTIDEPRESSIVE_USE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON
			// 
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->AutoSize = true;
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->Name = L"MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON";
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->TabIndex = 83;
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->TabStop = true;
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_ANTIDEPRESSIVE_USE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->YES_PSYCOTROPIC_USE_RADIOBUTTON);
			this->groupBox9->Controls->Add(this->NO_PSYCOTROPIC_USE_RADIOBUTTON);
			this->groupBox9->Controls->Add(this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON);
			this->groupBox9->Location = System::Drawing::Point(453, 137);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(296, 35);
			this->groupBox9->TabIndex = 75;
			this->groupBox9->TabStop = false;
			// 
			// YES_PSYCOTROPIC_USE_RADIOBUTTON
			// 
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->AutoSize = true;
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->Name = L"YES_PSYCOTROPIC_USE_RADIOBUTTON";
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->TabIndex = 75;
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->TabStop = true;
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->Text = L"Oui";
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_PSYCOTROPIC_USE_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::YES_PSYCOTROPIC_USE_RADIOBUTTON_CheckedChanged);
			// 
			// NO_PSYCOTROPIC_USE_RADIOBUTTON
			// 
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON->AutoSize = true;
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON->Name = L"NO_PSYCOTROPIC_USE_RADIOBUTTON";
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON->TabIndex = 76;
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON->TabStop = true;
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON->Text = L"Non";
			this->NO_PSYCOTROPIC_USE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_PSYCOTROPIC_USE_RADIOBUTTON
			// 
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON->AutoSize = true;
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON->Name = L"MISSING_PSYCOTROPIC_USE_RADIOBUTTON";
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON->TabIndex = 77;
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON->TabStop = true;
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_PSYCOTROPIC_USE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON);
			this->groupBox8->Controls->Add(this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON);
			this->groupBox8->Controls->Add(this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON);
			this->groupBox8->Location = System::Drawing::Point(453, 26);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(296, 35);
			this->groupBox8->TabIndex = 65;
			this->groupBox8->TabStop = false;
			// 
			// YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON
			// 
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->AutoSize = true;
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Name = L"YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON";
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->TabIndex = 65;
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->TabStop = true;
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Text = L"Oui";
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON_CheckedChanged);
			// 
			// NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON
			// 
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->AutoSize = true;
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Name = L"NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON";
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->TabIndex = 66;
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->TabStop = true;
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Text = L"Non";
			this->NO_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON
			// 
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->AutoSize = true;
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Name = L"MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON";
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->TabIndex = 67;
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->TabStop = true;
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// ANTIDEPRESSIVE_USE_LAST_DATEPICKER
			// 
			this->ANTIDEPRESSIVE_USE_LAST_DATEPICKER->Enabled = false;
			this->ANTIDEPRESSIVE_USE_LAST_DATEPICKER->Location = System::Drawing::Point(401, 263);
			this->ANTIDEPRESSIVE_USE_LAST_DATEPICKER->Name = L"ANTIDEPRESSIVE_USE_LAST_DATEPICKER";
			this->ANTIDEPRESSIVE_USE_LAST_DATEPICKER->Size = System::Drawing::Size(192, 29);
			this->ANTIDEPRESSIVE_USE_LAST_DATEPICKER->TabIndex = 85;
			// 
			// ANTIDEPRESSIVE_USE_LAST_CHECKBOX
			// 
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->AutoSize = true;
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Enabled = false;
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Location = System::Drawing::Point(255, 263);
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Name = L"ANTIDEPRESSIVE_USE_LAST_CHECKBOX";
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Size = System::Drawing::Size(140, 28);
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->TabIndex = 84;
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Text = L"Dernière fois:";
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->UseVisualStyleBackColor = true;
			this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::ANTIDEPRESSIVE_USE_LAST_CHECKBOX_CheckedChanged);
			// 
			// PSYCOTROPIC_USE_LAST_DATEPICKER
			// 
			this->PSYCOTROPIC_USE_LAST_DATEPICKER->Enabled = false;
			this->PSYCOTROPIC_USE_LAST_DATEPICKER->Location = System::Drawing::Point(401, 184);
			this->PSYCOTROPIC_USE_LAST_DATEPICKER->Name = L"PSYCOTROPIC_USE_LAST_DATEPICKER";
			this->PSYCOTROPIC_USE_LAST_DATEPICKER->Size = System::Drawing::Size(192, 29);
			this->PSYCOTROPIC_USE_LAST_DATEPICKER->TabIndex = 79;
			// 
			// PSYCOTROPIC_USE_LAST_CHECKBOX
			// 
			this->PSYCOTROPIC_USE_LAST_CHECKBOX->AutoSize = true;
			this->PSYCOTROPIC_USE_LAST_CHECKBOX->Enabled = false;
			this->PSYCOTROPIC_USE_LAST_CHECKBOX->Location = System::Drawing::Point(255, 184);
			this->PSYCOTROPIC_USE_LAST_CHECKBOX->Name = L"PSYCOTROPIC_USE_LAST_CHECKBOX";
			this->PSYCOTROPIC_USE_LAST_CHECKBOX->Size = System::Drawing::Size(140, 28);
			this->PSYCOTROPIC_USE_LAST_CHECKBOX->TabIndex = 78;
			this->PSYCOTROPIC_USE_LAST_CHECKBOX->Text = L"Dernière fois:";
			this->PSYCOTROPIC_USE_LAST_CHECKBOX->UseVisualStyleBackColor = true;
			this->PSYCOTROPIC_USE_LAST_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::PSYCOTROPIC_USE_LAST_CHECKBOX_CheckedChanged);
			// 
			// PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX
			// 
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX->Enabled = false;
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX->Location = System::Drawing::Point(401, 106);
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX->Name = L"PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX";
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX->Size = System::Drawing::Size(304, 29);
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX->TabIndex = 73;
			// 
			// PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER
			// 
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER->Enabled = false;
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER->Location = System::Drawing::Point(401, 71);
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER->Name = L"PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER";
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER->Size = System::Drawing::Size(192, 29);
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER->TabIndex = 71;
			// 
			// PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX
			// 
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->AutoSize = true;
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Enabled = false;
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Location = System::Drawing::Point(255, 105);
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Name = L"PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX";
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Size = System::Drawing::Size(114, 28);
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->TabIndex = 72;
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Text = L"Indication:";
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->UseVisualStyleBackColor = true;
			this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX_CheckedChanged);
			// 
			// PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX
			// 
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->AutoSize = true;
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Enabled = false;
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Location = System::Drawing::Point(255, 71);
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Name = L"PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX";
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Size = System::Drawing::Size(140, 28);
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->TabIndex = 70;
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Text = L"Dernière fois:";
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->UseVisualStyleBackColor = true;
			this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX_CheckedChanged);
			// 
			// PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX
			// 
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->AutoSize = true;
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Enabled = false;
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Location = System::Drawing::Point(61, 71);
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Name = L"PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX";
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Size = System::Drawing::Size(111, 28);
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->TabIndex = 68;
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Text = L"Combien:";
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->UseVisualStyleBackColor = true;
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX_CheckedChanged);
			// 
			// PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER
			// 
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER->Enabled = false;
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER->Location = System::Drawing::Point(178, 70);
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER->Name = L"PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER";
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER->Size = System::Drawing::Size(51, 29);
			this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER->TabIndex = 69;
			// 
			// ANTIDEPRESSIVE_USE_LABEL
			// 
			this->ANTIDEPRESSIVE_USE_LABEL->AutoSize = true;
			this->ANTIDEPRESSIVE_USE_LABEL->Location = System::Drawing::Point(6, 224);
			this->ANTIDEPRESSIVE_USE_LABEL->Name = L"ANTIDEPRESSIVE_USE_LABEL";
			this->ANTIDEPRESSIVE_USE_LABEL->Size = System::Drawing::Size(445, 24);
			this->ANTIDEPRESSIVE_USE_LABEL->TabIndex = 80;
			this->ANTIDEPRESSIVE_USE_LABEL->Text = L"3) Traitement avec antidépresseurs, neuroleptiques:";
			// 
			// PSYCOTROPIC_USE_LABEL
			// 
			this->PSYCOTROPIC_USE_LABEL->AutoSize = true;
			this->PSYCOTROPIC_USE_LABEL->Location = System::Drawing::Point(6, 148);
			this->PSYCOTROPIC_USE_LABEL->Name = L"PSYCOTROPIC_USE_LABEL";
			this->PSYCOTROPIC_USE_LABEL->Size = System::Drawing::Size(259, 24);
			this->PSYCOTROPIC_USE_LABEL->TabIndex = 74;
			this->PSYCOTROPIC_USE_LABEL->Text = L"2) Utilisation de psychotropes:";
			// 
			// PSYCHIATRIC_HOSPITALIZATION_LABEL
			// 
			this->PSYCHIATRIC_HOSPITALIZATION_LABEL->AutoSize = true;
			this->PSYCHIATRIC_HOSPITALIZATION_LABEL->Location = System::Drawing::Point(6, 37);
			this->PSYCHIATRIC_HOSPITALIZATION_LABEL->Name = L"PSYCHIATRIC_HOSPITALIZATION_LABEL";
			this->PSYCHIATRIC_HOSPITALIZATION_LABEL->Size = System::Drawing::Size(357, 24);
			this->PSYCHIATRIC_HOSPITALIZATION_LABEL->TabIndex = 64;
			this->PSYCHIATRIC_HOSPITALIZATION_LABEL->Text = L"1) Hospitalisation en centre psychiatrique:";
			// 
			// NEUROLOGIC_HISTORY_LABEL
			// 
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox1);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox5);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox6);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox16);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox15);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox14);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox13);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox12);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->OTHER_NEURO_TEXTBOX);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->OTHER_NEURO_LABEL);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->APHASY_LABEL);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->HEMIPLEGIA_LABEL);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->PARKINSON_LABEL);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->CVA_LABEL);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->TUMOR_LABEL);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->TRAUMA_LABEL);
			this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->EPILEPSIA_LABEL);
			this->NEUROLOGIC_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->NEUROLOGIC_HISTORY_LABEL->Location = System::Drawing::Point(18, 30);
			this->NEUROLOGIC_HISTORY_LABEL->Name = L"NEUROLOGIC_HISTORY_LABEL";
			this->NEUROLOGIC_HISTORY_LABEL->Size = System::Drawing::Size(756, 360);
			this->NEUROLOGIC_HISTORY_LABEL->TabIndex = 32;
			this->NEUROLOGIC_HISTORY_LABEL->TabStop = false;
			this->NEUROLOGIC_HISTORY_LABEL->Text = L"Antécédents Neurologiques";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->YES_OTHER_RADIOBUTTON);
			this->groupBox1->Controls->Add(this->NO_OTHER_RADIOBUTTON);
			this->groupBox1->Controls->Add(this->MISSING_OTHER_RADIOBUTTON);
			this->groupBox1->Location = System::Drawing::Point(354, 283);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 35);
			this->groupBox1->TabIndex = 61;
			this->groupBox1->TabStop = false;
			// 
			// YES_OTHER_RADIOBUTTON
			// 
			this->YES_OTHER_RADIOBUTTON->AutoSize = true;
			this->YES_OTHER_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_OTHER_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_OTHER_RADIOBUTTON->Name = L"YES_OTHER_RADIOBUTTON";
			this->YES_OTHER_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_OTHER_RADIOBUTTON->TabIndex = 61;
			this->YES_OTHER_RADIOBUTTON->TabStop = true;
			this->YES_OTHER_RADIOBUTTON->Text = L"Oui";
			this->YES_OTHER_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_OTHER_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT3::YES_OTHER_RADIOBUTTON_CheckedChanged);
			// 
			// NO_OTHER_RADIOBUTTON
			// 
			this->NO_OTHER_RADIOBUTTON->AutoSize = true;
			this->NO_OTHER_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_OTHER_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_OTHER_RADIOBUTTON->Name = L"NO_OTHER_RADIOBUTTON";
			this->NO_OTHER_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_OTHER_RADIOBUTTON->TabIndex = 61;
			this->NO_OTHER_RADIOBUTTON->TabStop = true;
			this->NO_OTHER_RADIOBUTTON->Text = L"Non";
			this->NO_OTHER_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_OTHER_RADIOBUTTON
			// 
			this->MISSING_OTHER_RADIOBUTTON->AutoSize = true;
			this->MISSING_OTHER_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_OTHER_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_OTHER_RADIOBUTTON->Name = L"MISSING_OTHER_RADIOBUTTON";
			this->MISSING_OTHER_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_OTHER_RADIOBUTTON->TabIndex = 61;
			this->MISSING_OTHER_RADIOBUTTON->TabStop = true;
			this->MISSING_OTHER_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_OTHER_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->YES_APHASIA_RADIOBUTTON);
			this->groupBox5->Controls->Add(this->NO_APHASIA_RADIOBUTTON);
			this->groupBox5->Controls->Add(this->MISSING_APHASIA_RADIOBUTTON);
			this->groupBox5->Location = System::Drawing::Point(354, 243);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(296, 35);
			this->groupBox5->TabIndex = 58;
			this->groupBox5->TabStop = false;
			// 
			// YES_APHASIA_RADIOBUTTON
			// 
			this->YES_APHASIA_RADIOBUTTON->AutoSize = true;
			this->YES_APHASIA_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_APHASIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_APHASIA_RADIOBUTTON->Name = L"YES_APHASIA_RADIOBUTTON";
			this->YES_APHASIA_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_APHASIA_RADIOBUTTON->TabIndex = 58;
			this->YES_APHASIA_RADIOBUTTON->TabStop = true;
			this->YES_APHASIA_RADIOBUTTON->Text = L"Oui";
			this->YES_APHASIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_APHASIA_RADIOBUTTON
			// 
			this->NO_APHASIA_RADIOBUTTON->AutoSize = true;
			this->NO_APHASIA_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_APHASIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_APHASIA_RADIOBUTTON->Name = L"NO_APHASIA_RADIOBUTTON";
			this->NO_APHASIA_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_APHASIA_RADIOBUTTON->TabIndex = 59;
			this->NO_APHASIA_RADIOBUTTON->TabStop = true;
			this->NO_APHASIA_RADIOBUTTON->Text = L"Non";
			this->NO_APHASIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_APHASIA_RADIOBUTTON
			// 
			this->MISSING_APHASIA_RADIOBUTTON->AutoSize = true;
			this->MISSING_APHASIA_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_APHASIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_APHASIA_RADIOBUTTON->Name = L"MISSING_APHASIA_RADIOBUTTON";
			this->MISSING_APHASIA_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_APHASIA_RADIOBUTTON->TabIndex = 60;
			this->MISSING_APHASIA_RADIOBUTTON->TabStop = true;
			this->MISSING_APHASIA_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_APHASIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->YES_HEMIPLEGIA_RADIOBUTTON);
			this->groupBox6->Controls->Add(this->NO_HEMIPLEGIA_RADIOBUTTON);
			this->groupBox6->Controls->Add(this->MISSING_HEMIPLEGIA_RADIOBUTTON);
			this->groupBox6->Location = System::Drawing::Point(354, 204);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(296, 35);
			this->groupBox6->TabIndex = 54;
			this->groupBox6->TabStop = false;
			// 
			// YES_HEMIPLEGIA_RADIOBUTTON
			// 
			this->YES_HEMIPLEGIA_RADIOBUTTON->AutoSize = true;
			this->YES_HEMIPLEGIA_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_HEMIPLEGIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_HEMIPLEGIA_RADIOBUTTON->Name = L"YES_HEMIPLEGIA_RADIOBUTTON";
			this->YES_HEMIPLEGIA_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_HEMIPLEGIA_RADIOBUTTON->TabIndex = 54;
			this->YES_HEMIPLEGIA_RADIOBUTTON->TabStop = true;
			this->YES_HEMIPLEGIA_RADIOBUTTON->Text = L"Oui";
			this->YES_HEMIPLEGIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_HEMIPLEGIA_RADIOBUTTON
			// 
			this->NO_HEMIPLEGIA_RADIOBUTTON->AutoSize = true;
			this->NO_HEMIPLEGIA_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_HEMIPLEGIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_HEMIPLEGIA_RADIOBUTTON->Name = L"NO_HEMIPLEGIA_RADIOBUTTON";
			this->NO_HEMIPLEGIA_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_HEMIPLEGIA_RADIOBUTTON->TabIndex = 55;
			this->NO_HEMIPLEGIA_RADIOBUTTON->TabStop = true;
			this->NO_HEMIPLEGIA_RADIOBUTTON->Text = L"Non";
			this->NO_HEMIPLEGIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_HEMIPLEGIA_RADIOBUTTON
			// 
			this->MISSING_HEMIPLEGIA_RADIOBUTTON->AutoSize = true;
			this->MISSING_HEMIPLEGIA_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_HEMIPLEGIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_HEMIPLEGIA_RADIOBUTTON->Name = L"MISSING_HEMIPLEGIA_RADIOBUTTON";
			this->MISSING_HEMIPLEGIA_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_HEMIPLEGIA_RADIOBUTTON->TabIndex = 56;
			this->MISSING_HEMIPLEGIA_RADIOBUTTON->TabStop = true;
			this->MISSING_HEMIPLEGIA_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_HEMIPLEGIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->YES_PARKINSON_RADIOBUTTON);
			this->groupBox16->Controls->Add(this->NO_PARKINSON_RADIOBUTTON);
			this->groupBox16->Controls->Add(this->MISSING_PARKINSON_RADIOBUTTON);
			this->groupBox16->Location = System::Drawing::Point(354, 172);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(296, 35);
			this->groupBox16->TabIndex = 50;
			this->groupBox16->TabStop = false;
			// 
			// YES_PARKINSON_RADIOBUTTON
			// 
			this->YES_PARKINSON_RADIOBUTTON->AutoSize = true;
			this->YES_PARKINSON_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_PARKINSON_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_PARKINSON_RADIOBUTTON->Name = L"YES_PARKINSON_RADIOBUTTON";
			this->YES_PARKINSON_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_PARKINSON_RADIOBUTTON->TabIndex = 50;
			this->YES_PARKINSON_RADIOBUTTON->TabStop = true;
			this->YES_PARKINSON_RADIOBUTTON->Text = L"Oui";
			this->YES_PARKINSON_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_PARKINSON_RADIOBUTTON
			// 
			this->NO_PARKINSON_RADIOBUTTON->AutoSize = true;
			this->NO_PARKINSON_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_PARKINSON_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_PARKINSON_RADIOBUTTON->Name = L"NO_PARKINSON_RADIOBUTTON";
			this->NO_PARKINSON_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_PARKINSON_RADIOBUTTON->TabIndex = 51;
			this->NO_PARKINSON_RADIOBUTTON->TabStop = true;
			this->NO_PARKINSON_RADIOBUTTON->Text = L"Non";
			this->NO_PARKINSON_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_PARKINSON_RADIOBUTTON
			// 
			this->MISSING_PARKINSON_RADIOBUTTON->AutoSize = true;
			this->MISSING_PARKINSON_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_PARKINSON_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_PARKINSON_RADIOBUTTON->Name = L"MISSING_PARKINSON_RADIOBUTTON";
			this->MISSING_PARKINSON_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_PARKINSON_RADIOBUTTON->TabIndex = 52;
			this->MISSING_PARKINSON_RADIOBUTTON->TabStop = true;
			this->MISSING_PARKINSON_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_PARKINSON_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox15
			// 
			this->groupBox15->Controls->Add(this->YES_CVA_RADIOBUTTON);
			this->groupBox15->Controls->Add(this->NO_CVA_RADIOBUTTON);
			this->groupBox15->Controls->Add(this->MISSING_CVA_RADIOBUTTON);
			this->groupBox15->Location = System::Drawing::Point(354, 136);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(296, 35);
			this->groupBox15->TabIndex = 46;
			this->groupBox15->TabStop = false;
			// 
			// YES_CVA_RADIOBUTTON
			// 
			this->YES_CVA_RADIOBUTTON->AutoSize = true;
			this->YES_CVA_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_CVA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_CVA_RADIOBUTTON->Name = L"YES_CVA_RADIOBUTTON";
			this->YES_CVA_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_CVA_RADIOBUTTON->TabIndex = 46;
			this->YES_CVA_RADIOBUTTON->TabStop = true;
			this->YES_CVA_RADIOBUTTON->Text = L"Oui";
			this->YES_CVA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_CVA_RADIOBUTTON
			// 
			this->NO_CVA_RADIOBUTTON->AutoSize = true;
			this->NO_CVA_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_CVA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_CVA_RADIOBUTTON->Name = L"NO_CVA_RADIOBUTTON";
			this->NO_CVA_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_CVA_RADIOBUTTON->TabIndex = 47;
			this->NO_CVA_RADIOBUTTON->TabStop = true;
			this->NO_CVA_RADIOBUTTON->Text = L"Non";
			this->NO_CVA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_CVA_RADIOBUTTON
			// 
			this->MISSING_CVA_RADIOBUTTON->AutoSize = true;
			this->MISSING_CVA_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_CVA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_CVA_RADIOBUTTON->Name = L"MISSING_CVA_RADIOBUTTON";
			this->MISSING_CVA_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_CVA_RADIOBUTTON->TabIndex = 48;
			this->MISSING_CVA_RADIOBUTTON->TabStop = true;
			this->MISSING_CVA_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_CVA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->YES_TUMOR_RADIOBUTTON);
			this->groupBox14->Controls->Add(this->NO_TUMOR_RADIOBUTTON);
			this->groupBox14->Controls->Add(this->MISSING_TUMOR_RADIOBUTTON);
			this->groupBox14->Location = System::Drawing::Point(354, 99);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(296, 35);
			this->groupBox14->TabIndex = 42;
			this->groupBox14->TabStop = false;
			// 
			// YES_TUMOR_RADIOBUTTON
			// 
			this->YES_TUMOR_RADIOBUTTON->AutoSize = true;
			this->YES_TUMOR_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_TUMOR_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_TUMOR_RADIOBUTTON->Name = L"YES_TUMOR_RADIOBUTTON";
			this->YES_TUMOR_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_TUMOR_RADIOBUTTON->TabIndex = 42;
			this->YES_TUMOR_RADIOBUTTON->TabStop = true;
			this->YES_TUMOR_RADIOBUTTON->Text = L"Oui";
			this->YES_TUMOR_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_TUMOR_RADIOBUTTON
			// 
			this->NO_TUMOR_RADIOBUTTON->AutoSize = true;
			this->NO_TUMOR_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_TUMOR_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_TUMOR_RADIOBUTTON->Name = L"NO_TUMOR_RADIOBUTTON";
			this->NO_TUMOR_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_TUMOR_RADIOBUTTON->TabIndex = 43;
			this->NO_TUMOR_RADIOBUTTON->TabStop = true;
			this->NO_TUMOR_RADIOBUTTON->Text = L"Non";
			this->NO_TUMOR_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_TUMOR_RADIOBUTTON
			// 
			this->MISSING_TUMOR_RADIOBUTTON->AutoSize = true;
			this->MISSING_TUMOR_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_TUMOR_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_TUMOR_RADIOBUTTON->Name = L"MISSING_TUMOR_RADIOBUTTON";
			this->MISSING_TUMOR_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_TUMOR_RADIOBUTTON->TabIndex = 44;
			this->MISSING_TUMOR_RADIOBUTTON->TabStop = true;
			this->MISSING_TUMOR_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_TUMOR_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->YES_TRAUMA_RADIOBUTTON);
			this->groupBox13->Controls->Add(this->NO_TRAUMA_RADIOBUTTON);
			this->groupBox13->Controls->Add(this->MISSING_TRAUMA_RADIOBUTTON);
			this->groupBox13->Location = System::Drawing::Point(354, 63);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(296, 35);
			this->groupBox13->TabIndex = 38;
			this->groupBox13->TabStop = false;
			// 
			// YES_TRAUMA_RADIOBUTTON
			// 
			this->YES_TRAUMA_RADIOBUTTON->AutoSize = true;
			this->YES_TRAUMA_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_TRAUMA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_TRAUMA_RADIOBUTTON->Name = L"YES_TRAUMA_RADIOBUTTON";
			this->YES_TRAUMA_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_TRAUMA_RADIOBUTTON->TabIndex = 38;
			this->YES_TRAUMA_RADIOBUTTON->TabStop = true;
			this->YES_TRAUMA_RADIOBUTTON->Text = L"Oui";
			this->YES_TRAUMA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_TRAUMA_RADIOBUTTON
			// 
			this->NO_TRAUMA_RADIOBUTTON->AutoSize = true;
			this->NO_TRAUMA_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_TRAUMA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_TRAUMA_RADIOBUTTON->Name = L"NO_TRAUMA_RADIOBUTTON";
			this->NO_TRAUMA_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_TRAUMA_RADIOBUTTON->TabIndex = 39;
			this->NO_TRAUMA_RADIOBUTTON->TabStop = true;
			this->NO_TRAUMA_RADIOBUTTON->Text = L"Non";
			this->NO_TRAUMA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_TRAUMA_RADIOBUTTON
			// 
			this->MISSING_TRAUMA_RADIOBUTTON->AutoSize = true;
			this->MISSING_TRAUMA_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_TRAUMA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_TRAUMA_RADIOBUTTON->Name = L"MISSING_TRAUMA_RADIOBUTTON";
			this->MISSING_TRAUMA_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_TRAUMA_RADIOBUTTON->TabIndex = 40;
			this->MISSING_TRAUMA_RADIOBUTTON->TabStop = true;
			this->MISSING_TRAUMA_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_TRAUMA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->YES_EPILEPSIA_RADIOBUTTON);
			this->groupBox12->Controls->Add(this->NO_EPILEPSIA_RADIOBUTTON);
			this->groupBox12->Controls->Add(this->MISSING_EPILEPSIA_RADIOBUTTON);
			this->groupBox12->Location = System::Drawing::Point(354, 28);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(296, 35);
			this->groupBox12->TabIndex = 34;
			this->groupBox12->TabStop = false;
			// 
			// YES_EPILEPSIA_RADIOBUTTON
			// 
			this->YES_EPILEPSIA_RADIOBUTTON->AutoSize = true;
			this->YES_EPILEPSIA_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_EPILEPSIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_EPILEPSIA_RADIOBUTTON->Name = L"YES_EPILEPSIA_RADIOBUTTON";
			this->YES_EPILEPSIA_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_EPILEPSIA_RADIOBUTTON->TabIndex = 34;
			this->YES_EPILEPSIA_RADIOBUTTON->TabStop = true;
			this->YES_EPILEPSIA_RADIOBUTTON->Text = L"Oui";
			this->YES_EPILEPSIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NO_EPILEPSIA_RADIOBUTTON
			// 
			this->NO_EPILEPSIA_RADIOBUTTON->AutoSize = true;
			this->NO_EPILEPSIA_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_EPILEPSIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_EPILEPSIA_RADIOBUTTON->Name = L"NO_EPILEPSIA_RADIOBUTTON";
			this->NO_EPILEPSIA_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_EPILEPSIA_RADIOBUTTON->TabIndex = 35;
			this->NO_EPILEPSIA_RADIOBUTTON->TabStop = true;
			this->NO_EPILEPSIA_RADIOBUTTON->Text = L"Non";
			this->NO_EPILEPSIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_EPILEPSIA_RADIOBUTTON
			// 
			this->MISSING_EPILEPSIA_RADIOBUTTON->AutoSize = true;
			this->MISSING_EPILEPSIA_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_EPILEPSIA_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_EPILEPSIA_RADIOBUTTON->Name = L"MISSING_EPILEPSIA_RADIOBUTTON";
			this->MISSING_EPILEPSIA_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_EPILEPSIA_RADIOBUTTON->TabIndex = 36;
			this->MISSING_EPILEPSIA_RADIOBUTTON->TabStop = true;
			this->MISSING_EPILEPSIA_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_EPILEPSIA_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// OTHER_NEURO_TEXTBOX
			// 
			this->OTHER_NEURO_TEXTBOX->Enabled = false;
			this->OTHER_NEURO_TEXTBOX->Location = System::Drawing::Point(354, 325);
			this->OTHER_NEURO_TEXTBOX->Name = L"OTHER_NEURO_TEXTBOX";
			this->OTHER_NEURO_TEXTBOX->Size = System::Drawing::Size(304, 29);
			this->OTHER_NEURO_TEXTBOX->TabIndex = 62;
			// 
			// OTHER_NEURO_LABEL
			// 
			this->OTHER_NEURO_LABEL->AutoSize = true;
			this->OTHER_NEURO_LABEL->Location = System::Drawing::Point(18, 294);
			this->OTHER_NEURO_LABEL->Name = L"OTHER_NEURO_LABEL";
			this->OTHER_NEURO_LABEL->Size = System::Drawing::Size(81, 24);
			this->OTHER_NEURO_LABEL->TabIndex = 61;
			this->OTHER_NEURO_LABEL->Text = L"8) Autre:";
			// 
			// APHASY_LABEL
			// 
			this->APHASY_LABEL->AutoSize = true;
			this->APHASY_LABEL->Location = System::Drawing::Point(18, 254);
			this->APHASY_LABEL->Name = L"APHASY_LABEL";
			this->APHASY_LABEL->Size = System::Drawing::Size(105, 24);
			this->APHASY_LABEL->TabIndex = 57;
			this->APHASY_LABEL->Text = L"7) Aphasie:";
			// 
			// HEMIPLEGIA_LABEL
			// 
			this->HEMIPLEGIA_LABEL->AutoSize = true;
			this->HEMIPLEGIA_LABEL->Location = System::Drawing::Point(18, 215);
			this->HEMIPLEGIA_LABEL->Name = L"HEMIPLEGIA_LABEL";
			this->HEMIPLEGIA_LABEL->Size = System::Drawing::Size(133, 24);
			this->HEMIPLEGIA_LABEL->TabIndex = 53;
			this->HEMIPLEGIA_LABEL->Text = L"6) Hémiplégie:";
			// 
			// PARKINSON_LABEL
			// 
			this->PARKINSON_LABEL->AutoSize = true;
			this->PARKINSON_LABEL->Location = System::Drawing::Point(18, 181);
			this->PARKINSON_LABEL->Name = L"PARKINSON_LABEL";
			this->PARKINSON_LABEL->Size = System::Drawing::Size(300, 24);
			this->PARKINSON_LABEL->TabIndex = 49;
			this->PARKINSON_LABEL->Text = L"5) Parkinson (ou Sd Parkinsonien):";
			// 
			// CVA_LABEL
			// 
			this->CVA_LABEL->AutoSize = true;
			this->CVA_LABEL->Location = System::Drawing::Point(18, 145);
			this->CVA_LABEL->Name = L"CVA_LABEL";
			this->CVA_LABEL->Size = System::Drawing::Size(75, 24);
			this->CVA_LABEL->TabIndex = 45;
			this->CVA_LABEL->Text = L"4) AVC:";
			// 
			// TUMOR_LABEL
			// 
			this->TUMOR_LABEL->AutoSize = true;
			this->TUMOR_LABEL->Location = System::Drawing::Point(18, 108);
			this->TUMOR_LABEL->Name = L"TUMOR_LABEL";
			this->TUMOR_LABEL->Size = System::Drawing::Size(191, 24);
			this->TUMOR_LABEL->TabIndex = 41;
			this->TUMOR_LABEL->Text = L"3) Tumeur Cérébrale:";
			// 
			// TRAUMA_LABEL
			// 
			this->TRAUMA_LABEL->AutoSize = true;
			this->TRAUMA_LABEL->Location = System::Drawing::Point(18, 72);
			this->TRAUMA_LABEL->Name = L"TRAUMA_LABEL";
			this->TRAUMA_LABEL->Size = System::Drawing::Size(172, 24);
			this->TRAUMA_LABEL->TabIndex = 37;
			this->TRAUMA_LABEL->Text = L"2) Trauma Cranien:";
			// 
			// EPILEPSIA_LABEL
			// 
			this->EPILEPSIA_LABEL->AutoSize = true;
			this->EPILEPSIA_LABEL->Location = System::Drawing::Point(18, 35);
			this->EPILEPSIA_LABEL->Name = L"EPILEPSIA_LABEL";
			this->EPILEPSIA_LABEL->Size = System::Drawing::Size(114, 24);
			this->EPILEPSIA_LABEL->TabIndex = 33;
			this->EPILEPSIA_LABEL->Text = L"1) Epilepsie:";
			// 
			// CANCEL_BUTTON
			// 
			this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CANCEL_BUTTON->Location = System::Drawing::Point(345, 885);
			this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
			this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
			this->CANCEL_BUTTON->TabIndex = 115;
			this->CANCEL_BUTTON->Text = L"Annuler";
			this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
			this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &MedicalDataPT3::CANCEL_BUTTON_Click);
			// 
			// REGISTER_BUTTON
			// 
			this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REGISTER_BUTTON->Location = System::Drawing::Point(65, 885);
			this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
			this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
			this->REGISTER_BUTTON->TabIndex = 114;
			this->REGISTER_BUTTON->Text = L"Enregistrer";
			this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
			// 
			// MedicalDataPT3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1429, 986);
			this->Controls->Add(this->CANCEL_BUTTON);
			this->Controls->Add(this->REGISTER_BUTTON);
			this->Controls->Add(this->DATA_M0_LABEL);
			this->Controls->Add(this->COGNITIVE_DIAGNOSE_LABEL);
			this->Name = L"MedicalDataPT3";
			this->Text = L"MedicalDataPT3";
			this->COGNITIVE_DIAGNOSE_LABEL->ResumeLayout(false);
			this->COGNITIVE_DIAGNOSE_LABEL->PerformLayout();
			this->DATA_M0_LABEL->ResumeLayout(false);
			this->RHUMATOLOGIC_HISTORY_LABEL->ResumeLayout(false);
			this->RHUMATOLOGIC_HISTORY_LABEL->PerformLayout();
			this->groupBox19->ResumeLayout(false);
			this->groupBox19->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			this->groupBox18->ResumeLayout(false);
			this->groupBox18->PerformLayout();
			this->PSYCHIATRIC_HISTORY_LABEL->ResumeLayout(false);
			this->PSYCHIATRIC_HISTORY_LABEL->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER))->EndInit();
			this->NEUROLOGIC_HISTORY_LABEL->ResumeLayout(false);
			this->NEUROLOGIC_HISTORY_LABEL->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
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
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void YES_OTHERS_RADIOBUTTONS_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		OTHERS_TEXTBOX->Enabled = (YES_OTHERS_RADIOBUTTONS->Checked) ? true : false;
	}
	private: System::Void COGNITIVE_DIAGNOSE_DATE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Enabled = (COGNITIVE_DIAGNOSE_DATE_CHECKBOX->Checked) ? true : false;
	}
	private: System::Void MCI_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (MCI_CHECKBOX->Checked) {
			AMNESIC_MCI_CHECKBOX->Enabled = true;
			EXECUTIVE_MCI_CHECKBOX->Enabled = true;
			UNIQUE_MCI_CHECKBOX->Enabled = true;
			MULTIPLE_MCI_CHECKBOX->Enabled = true;
		}
		else {
			AMNESIC_MCI_CHECKBOX->Enabled = false;
			EXECUTIVE_MCI_CHECKBOX->Enabled = false;
			UNIQUE_MCI_CHECKBOX->Enabled = false;
			MULTIPLE_MCI_CHECKBOX->Enabled = false;
			AMNESIC_MCI_CHECKBOX->Checked = false;
			EXECUTIVE_MCI_CHECKBOX->Checked = false;
			UNIQUE_MCI_CHECKBOX->Checked = false;
			MULTIPLE_MCI_CHECKBOX->Checked = false;
		}
	}
	private: System::Void DEMENTIA_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (DEMENTIA_CHECKBOX->Checked) {
			APP_DEMENTIA_CHECKBOX->Enabled = true;
			DCB_DEMENTIA_CHECKBOX->Enabled = true;
			DCL_DEMENTIA_CHECKBOX->Enabled = true;
			DFT_DEMENTIA_CHECKBOX->Enabled = true;
			DS_DEMENTIA_CHECKBOX->Enabled = true;
			MA_DEMENTIA_CHECKBOX->Enabled = true;
			MIXED_DEMENTIA_CHECKBOX->Enabled = true;
			OTHER_DEMENTIA_CHECKBOX->Enabled = true;
			PSP_DEMENTIA_CHECKBOX->Enabled = true;
			VASCULAR_DEMENTIA_CHECKBOX->Enabled = true;
		}
		else {
			APP_DEMENTIA_CHECKBOX->Enabled = false;
			DCB_DEMENTIA_CHECKBOX->Enabled = false;
			DCL_DEMENTIA_CHECKBOX->Enabled = false;
			DFT_DEMENTIA_CHECKBOX->Enabled = false;
			DS_DEMENTIA_CHECKBOX->Enabled = false;
			MA_DEMENTIA_CHECKBOX->Enabled = false;
			MIXED_DEMENTIA_CHECKBOX->Enabled = false;
			OTHER_DEMENTIA_CHECKBOX->Enabled = false;
			PSP_DEMENTIA_CHECKBOX->Enabled = false;
			VASCULAR_DEMENTIA_CHECKBOX->Enabled = false;

			APP_DEMENTIA_CHECKBOX->Checked = false;
			DCB_DEMENTIA_CHECKBOX->Checked = false;
			DCL_DEMENTIA_CHECKBOX->Checked = false;
			DFT_DEMENTIA_CHECKBOX->Checked = false;
			DS_DEMENTIA_CHECKBOX->Checked = false;
			MA_DEMENTIA_CHECKBOX->Checked = false;
			MIXED_DEMENTIA_CHECKBOX->Checked = false;
			OTHER_DEMENTIA_CHECKBOX->Checked = false;
			PSP_DEMENTIA_CHECKBOX->Checked = false;
			VASCULAR_DEMENTIA_CHECKBOX->Checked = false;
		}
	}

	private: System::Void OTHER_DEMENTIA_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (OTHER_DEMENTIA_CHECKBOX->Checked) {
			OTHER_DEMENTIA_TEXTBOX->Enabled = true;
		}
		else {
			OTHER_DEMENTIA_TEXTBOX->Enabled = false;
			OTHER_DEMENTIA_TEXTBOX->Text = "";
		}
	}

	private: System::Void PSYCOAFFECTIVE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (PSYCOAFFECTIVE_CHECKBOX->Checked) {
			ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Enabled = true;
			DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Enabled = true;
			OTHER_PSYCOAFFECTIVE_CHECKBOX->Enabled = true;
		}
		else {
			ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Enabled = false;
			DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Enabled = false;
			OTHER_PSYCOAFFECTIVE_CHECKBOX->Enabled = false;
			ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Checked = false;
			DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Checked = false;
			OTHER_PSYCOAFFECTIVE_CHECKBOX->Checked = false;
		}
	}

	private: System::Void YES_OTHER_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		OTHER_NEURO_TEXTBOX->Enabled = (YES_OTHER_RADIOBUTTON->Checked) ? true : false;
	}

	private: System::Void OTHER_PSYCOAFFECTIVE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (OTHER_PSYCOAFFECTIVE_CHECKBOX->Checked) {
			OTHER_PSYCOAFFECTIVE_TEXTBOX->Enabled = true;
		}
		else {
			OTHER_PSYCOAFFECTIVE_TEXTBOX->Enabled = false;
			OTHER_PSYCOAFFECTIVE_TEXTBOX->Text = "";
		}
	}

	private: System::Void YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->Checked) {
			PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Enabled = true;
			PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Enabled = true;
			PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Enabled = true;
		}
		else {
			PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Enabled = false;
			PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Enabled = false;
			PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Enabled = false;
			PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Checked = false;
			PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Checked = false;
			PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Checked = false;
		}
	}

	private: System::Void PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER->Enabled = (PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->Checked) ? true : false;
	}

	private: System::Void PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PSYCHIATRIC_HOSPITALIZATION_LAST_DATEPICKER->Enabled = (PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->Checked) ? true : false;
	}

	private: System::Void PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PSYCHIATRIC_HOSPITALIZATION_INDICATION_TEXTBOX->Enabled = (PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->Checked) ? true : false;
	}

	private: System::Void YES_PSYCOTROPIC_USE_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PSYCOTROPIC_USE_LAST_CHECKBOX->Enabled = (YES_PSYCOTROPIC_USE_RADIOBUTTON->Checked) ? true : false;
		PSYCOTROPIC_USE_LAST_CHECKBOX->Checked = (PSYCOTROPIC_USE_LAST_CHECKBOX->Enabled) ? PSYCOTROPIC_USE_LAST_CHECKBOX->Checked : false;
	}

	private: System::Void PSYCOTROPIC_USE_LAST_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PSYCOTROPIC_USE_LAST_DATEPICKER->Enabled = (PSYCOTROPIC_USE_LAST_CHECKBOX->Checked) ? true : false;
	}

	private: System::Void YES_ANTIDEPRESSIVE_USE_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Enabled = (YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->Checked) ? true : false;
		ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Checked = (ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Enabled) ? ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Checked : false;
	}

	private: System::Void ANTIDEPRESSIVE_USE_LAST_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ANTIDEPRESSIVE_USE_LAST_DATEPICKER->Enabled = (ANTIDEPRESSIVE_USE_LAST_CHECKBOX->Checked) ? true : false;
	}


	private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		//Exit Without Doing Anything
		MedicalDataPT3::Close();
	}
};
}
