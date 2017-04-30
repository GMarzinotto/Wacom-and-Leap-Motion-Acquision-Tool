#pragma once
#include <msclr\marshal_cppstd.h>
#include "Dependencies/queryNodes.h"
#include "Patient.h"

namespace WacomTabletApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CognitiveDiagnosis
	/// </summary>
	public ref class CognitiveDiagnosis : public System::Windows::Forms::Form
	{
	public: String^ currentLanguage;
            Patient* myPatient;
	public:
		CognitiveDiagnosis(Patient *inputPatient, String^ language, bool treatAsNew)
		{
			currentLanguage = language;
            myPatient = inputPatient;
			InitializeComponent();
			UpdateLanguage_CognitiveDiagnosisForm(currentLanguage);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CognitiveDiagnosis()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: void WacomTabletApplication::CognitiveDiagnosis::UpdateLanguage_CognitiveDiagnosisForm(String^ language);
    void WacomTabletApplication::CognitiveDiagnosis::completePatientInformationObject();

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

	private: System::Windows::Forms::CheckBox^  COGNITIVE_DIAGNOSE_DATE_CHECKBOX;
	private: System::Windows::Forms::DateTimePicker^  COGNITIVE_DIAGNOSE_DATE_DATEPICKER;

	private: System::Windows::Forms::CheckBox^  SCHIZOPHRENIA_CHECKBOX;
    private: System::Windows::Forms::Button^  CANCEL_BUTTON;
    private: System::Windows::Forms::Button^  REGISTER_BUTTON;



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
            this->SCHIZOPHRENIA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
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
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->COGNITIVE_DIAGNOSE_LABEL->SuspendLayout();
            this->SuspendLayout();
            // 
            // COGNITIVE_DIAGNOSE_LABEL
            // 
            this->COGNITIVE_DIAGNOSE_LABEL->Controls->Add(this->SCHIZOPHRENIA_CHECKBOX);
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
            this->COGNITIVE_DIAGNOSE_LABEL->Size = System::Drawing::Size(1074, 449);
            this->COGNITIVE_DIAGNOSE_LABEL->TabIndex = 1;
            this->COGNITIVE_DIAGNOSE_LABEL->TabStop = false;
            this->COGNITIVE_DIAGNOSE_LABEL->Text = L"Diagnostic Cognitif";
            // 
            // SCHIZOPHRENIA_CHECKBOX
            // 
            this->SCHIZOPHRENIA_CHECKBOX->AutoSize = true;
            this->SCHIZOPHRENIA_CHECKBOX->Enabled = false;
            this->SCHIZOPHRENIA_CHECKBOX->Location = System::Drawing::Point(660, 332);
            this->SCHIZOPHRENIA_CHECKBOX->Name = L"SCHIZOPHRENIA_CHECKBOX";
            this->SCHIZOPHRENIA_CHECKBOX->Size = System::Drawing::Size(151, 28);
            this->SCHIZOPHRENIA_CHECKBOX->TabIndex = 27;
            this->SCHIZOPHRENIA_CHECKBOX->Text = L"Schizophrénie";
            this->SCHIZOPHRENIA_CHECKBOX->UseVisualStyleBackColor = true;
            this->SCHIZOPHRENIA_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &CognitiveDiagnosis::SCHIZOFRENIA_CHECKBOX_CheckedChanged);
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
            this->COGNITIVE_DIAGNOSE_DATE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &CognitiveDiagnosis::COGNITIVE_DIAGNOSE_DATE_CHECKBOX_CheckedChanged);
            // 
            // COGNITIVE_DIAGNOSE_DATE_DATEPICKER
            // 
            this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Enabled = false;
            this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Location = System::Drawing::Point(286, 27);
            this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Name = L"COGNITIVE_DIAGNOSE_DATE_DATEPICKER";
            this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->Size = System::Drawing::Size(301, 29);
            this->COGNITIVE_DIAGNOSE_DATE_DATEPICKER->TabIndex = 2;
            // 
            // OTHER_PSYCOAFFECTIVE_TEXTBOX
            // 
            this->OTHER_PSYCOAFFECTIVE_TEXTBOX->Enabled = false;
            this->OTHER_PSYCOAFFECTIVE_TEXTBOX->Location = System::Drawing::Point(137, 399);
            this->OTHER_PSYCOAFFECTIVE_TEXTBOX->Name = L"OTHER_PSYCOAFFECTIVE_TEXTBOX";
            this->OTHER_PSYCOAFFECTIVE_TEXTBOX->Size = System::Drawing::Size(304, 29);
            this->OTHER_PSYCOAFFECTIVE_TEXTBOX->TabIndex = 26;
            // 
            // OTHER_PSYCOAFFECTIVE_CHECKBOX
            // 
            this->OTHER_PSYCOAFFECTIVE_CHECKBOX->AutoSize = true;
            this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Enabled = false;
            this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Location = System::Drawing::Point(52, 399);
            this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Name = L"OTHER_PSYCOAFFECTIVE_CHECKBOX";
            this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Size = System::Drawing::Size(79, 28);
            this->OTHER_PSYCOAFFECTIVE_CHECKBOX->TabIndex = 25;
            this->OTHER_PSYCOAFFECTIVE_CHECKBOX->Text = L"Autre:";
            this->OTHER_PSYCOAFFECTIVE_CHECKBOX->UseVisualStyleBackColor = true;
            this->OTHER_PSYCOAFFECTIVE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &CognitiveDiagnosis::OTHER_PSYCOAFFECTIVE_CHECKBOX_CheckedChanged);
            // 
            // ANXIETY_PSYCOAFFECTIVE_CHECKBOX
            // 
            this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->AutoSize = true;
            this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Enabled = false;
            this->ANXIETY_PSYCOAFFECTIVE_CHECKBOX->Location = System::Drawing::Point(52, 365);
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
            this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Location = System::Drawing::Point(165, 365);
            this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Name = L"DEPRESSION_PSYCOAFFECTIVE_CHECKBOX";
            this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Size = System::Drawing::Size(125, 28);
            this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->TabIndex = 24;
            this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->Text = L"Dépression";
            this->DEPRESSION_PSYCOAFFECTIVE_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // PSYCOAFFECTIVE_CHECKBOX
            // 
            this->PSYCOAFFECTIVE_CHECKBOX->AutoSize = true;
            this->PSYCOAFFECTIVE_CHECKBOX->Location = System::Drawing::Point(6, 331);
            this->PSYCOAFFECTIVE_CHECKBOX->Name = L"PSYCOAFFECTIVE_CHECKBOX";
            this->PSYCOAFFECTIVE_CHECKBOX->Size = System::Drawing::Size(236, 28);
            this->PSYCOAFFECTIVE_CHECKBOX->TabIndex = 22;
            this->PSYCOAFFECTIVE_CHECKBOX->Text = L"Troubles psycho-affectifs";
            this->PSYCOAFFECTIVE_CHECKBOX->UseVisualStyleBackColor = true;
            this->PSYCOAFFECTIVE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &CognitiveDiagnosis::PSYCOAFFECTIVE_CHECKBOX_CheckedChanged);
            // 
            // OTHER_DEMENTIA_TEXTBOX
            // 
            this->OTHER_DEMENTIA_TEXTBOX->Enabled = false;
            this->OTHER_DEMENTIA_TEXTBOX->Location = System::Drawing::Point(745, 366);
            this->OTHER_DEMENTIA_TEXTBOX->Name = L"OTHER_DEMENTIA_TEXTBOX";
            this->OTHER_DEMENTIA_TEXTBOX->Size = System::Drawing::Size(304, 29);
            this->OTHER_DEMENTIA_TEXTBOX->TabIndex = 21;
            // 
            // DS_DEMENTIA_CHECKBOX
            // 
            this->DS_DEMENTIA_CHECKBOX->AutoSize = true;
            this->DS_DEMENTIA_CHECKBOX->Enabled = false;
            this->DS_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(660, 298);
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
            this->OTHER_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(660, 366);
            this->OTHER_DEMENTIA_CHECKBOX->Name = L"OTHER_DEMENTIA_CHECKBOX";
            this->OTHER_DEMENTIA_CHECKBOX->Size = System::Drawing::Size(79, 28);
            this->OTHER_DEMENTIA_CHECKBOX->TabIndex = 20;
            this->OTHER_DEMENTIA_CHECKBOX->Text = L"Autre:";
            this->OTHER_DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
            this->OTHER_DEMENTIA_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &CognitiveDiagnosis::OTHER_DEMENTIA_CHECKBOX_CheckedChanged);
            // 
            // DCB_DEMENTIA_CHECKBOX
            // 
            this->DCB_DEMENTIA_CHECKBOX->AutoSize = true;
            this->DCB_DEMENTIA_CHECKBOX->Enabled = false;
            this->DCB_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(660, 231);
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
            this->APP_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(660, 265);
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
            this->DFT_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(660, 161);
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
            this->PSP_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(660, 195);
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
            this->VASCULAR_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(660, 94);
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
            this->DCL_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(660, 128);
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
            this->MA_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(660, 64);
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
            this->MIXED_DEMENTIA_CHECKBOX->Location = System::Drawing::Point(773, 64);
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
            this->DEMENTIA_CHECKBOX->Location = System::Drawing::Point(614, 30);
            this->DEMENTIA_CHECKBOX->Name = L"DEMENTIA_CHECKBOX";
            this->DEMENTIA_CHECKBOX->Size = System::Drawing::Size(204, 28);
            this->DEMENTIA_CHECKBOX->TabIndex = 10;
            this->DEMENTIA_CHECKBOX->Text = L"Syndrome démentiel";
            this->DEMENTIA_CHECKBOX->UseVisualStyleBackColor = true;
            this->DEMENTIA_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &CognitiveDiagnosis::DEMENTIA_CHECKBOX_CheckedChanged);
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
            this->MCI_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &CognitiveDiagnosis::MCI_CHECKBOX_CheckedChanged);
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
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(603, 470);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
            this->CANCEL_BUTTON->TabIndex = 146;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &CognitiveDiagnosis::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(352, 470);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
            this->REGISTER_BUTTON->TabIndex = 145;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &CognitiveDiagnosis::REGISTER_BUTTON_Click);
            // 
            // CognitiveDiagnosis
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1125, 546);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->COGNITIVE_DIAGNOSE_LABEL);
            this->Name = L"CognitiveDiagnosis";
            this->Text = L"CognitiveDiagnosis";
            this->COGNITIVE_DIAGNOSE_LABEL->ResumeLayout(false);
            this->COGNITIVE_DIAGNOSE_LABEL->PerformLayout();
            this->ResumeLayout(false);

        }

#pragma endregion

    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        // Save Information of the Patient
        completePatientInformationObject();
        CognitiveDiagnosis::Close();
    }

    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        CognitiveDiagnosis::Close();
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
			SCHIZOPHRENIA_CHECKBOX->Enabled = true;
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
			SCHIZOPHRENIA_CHECKBOX->Checked = false;
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

	private: System::Void OTHER_PSYCOAFFECTIVE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (OTHER_PSYCOAFFECTIVE_CHECKBOX->Checked) {
			OTHER_PSYCOAFFECTIVE_TEXTBOX->Enabled = true;
		}
		else {
			OTHER_PSYCOAFFECTIVE_TEXTBOX->Enabled = false;
			OTHER_PSYCOAFFECTIVE_TEXTBOX->Text = "";
		}
	}

private: System::Void SCHIZOFRENIA_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
