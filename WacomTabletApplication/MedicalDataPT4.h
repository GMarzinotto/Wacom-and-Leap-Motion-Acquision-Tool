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
	/// Summary for MedicalDataPT4
	/// </summary>
	public ref class MedicalDataPT4 : public System::Windows::Forms::Form
	{
	public: String^ currentLanguage;
	public:
		MedicalDataPT4(String^ language)
		{
			InitializeComponent();
			currentLanguage = language;
			UpdateLanguage_MedicalDataPT4Form(currentLanguage);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MedicalDataPT4()
		{
			if (components)
			{
				delete components;
			}
		}

	private: void WacomTabletApplication::MedicalDataPT4::UpdateLanguage_MedicalDataPT4Form(String^ language);
	
	protected:
	private: System::Windows::Forms::GroupBox^  IMPORTANT_EVENTS_LABEL;
	private: System::Windows::Forms::TextBox^  OTHERS_TEXTBOX;
	private: System::Windows::Forms::TextBox^  EMOTIONS_TEXTBOX;
	private: System::Windows::Forms::TextBox^  ALCOHOL_TEXTBOX;
	private: System::Windows::Forms::TextBox^  TREATMENT_TEXTBOX;
	private: System::Windows::Forms::TextBox^  DIAGNOSE_TEXTBOX;
	private: System::Windows::Forms::TextBox^  PATHOLOGY_TEXTBOX;
	private: System::Windows::Forms::TextBox^  HOSPITALIZATION_TEXTBOX;
	private: System::Windows::Forms::TextBox^  SURGERY_TEXTBOX;
	private: System::Windows::Forms::Label^  OTHERS_LABEL;
	private: System::Windows::Forms::Label^  EMOTIONS_LABEL;
	private: System::Windows::Forms::Label^  ALCOHOL_LABEL;
	private: System::Windows::Forms::Label^  TREATMENT_LABEL;
	private: System::Windows::Forms::Label^  DIAGNOSE_LABEL;
	private: System::Windows::Forms::Label^  PATHOLOGY_LABEL;
	private: System::Windows::Forms::Label^  HOSPITALIZATION_LABEL;
	private: System::Windows::Forms::Label^  SURGERY_LABEL;
	private: System::Windows::Forms::Button^  CANCEL_BUTTON;
	private: System::Windows::Forms::Button^  REGISTER_BUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  YES_OTHERS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_OTHERS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_OTHERS_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::RadioButton^  YES_EMOTIONS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_EMOTIONS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_EMOTIONS_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::RadioButton^  YES_ALCOHOL_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_ALCOHOL_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_ALCOHOL_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox16;
	private: System::Windows::Forms::RadioButton^  YES_TREATMENT_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_TREATMENT_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_TREATMENT_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox15;
	private: System::Windows::Forms::RadioButton^  YES_DIAGNOSE_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_DIAGNOSE_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_DIAGNOSE_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox14;
	private: System::Windows::Forms::RadioButton^  YES_PATHOLOGY_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_PATHOLOGY_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_PATHOLOGY_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox13;
	private: System::Windows::Forms::RadioButton^  YES_HOSPITALIZATION_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_HOSPITALIZATION_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_HOSPITALIZATION_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  groupBox12;
	private: System::Windows::Forms::RadioButton^  YES_SURGERY_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_SURGERY_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_SURGERY_RADIOBUTTON;



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
			this->IMPORTANT_EVENTS_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_OTHERS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_OTHERS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_OTHERS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_EMOTIONS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_EMOTIONS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_EMOTIONS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_ALCOHOL_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_ALCOHOL_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_ALCOHOL_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_TREATMENT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_TREATMENT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_TREATMENT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_DIAGNOSE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_DIAGNOSE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_DIAGNOSE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_PATHOLOGY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_PATHOLOGY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_PATHOLOGY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_HOSPITALIZATION_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_HOSPITALIZATION_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_HOSPITALIZATION_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->YES_SURGERY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NO_SURGERY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MISSING_SURGERY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->OTHERS_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->EMOTIONS_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->ALCOHOL_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->TREATMENT_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->DIAGNOSE_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->PATHOLOGY_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->HOSPITALIZATION_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->SURGERY_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->OTHERS_LABEL = (gcnew System::Windows::Forms::Label());
			this->EMOTIONS_LABEL = (gcnew System::Windows::Forms::Label());
			this->ALCOHOL_LABEL = (gcnew System::Windows::Forms::Label());
			this->TREATMENT_LABEL = (gcnew System::Windows::Forms::Label());
			this->DIAGNOSE_LABEL = (gcnew System::Windows::Forms::Label());
			this->PATHOLOGY_LABEL = (gcnew System::Windows::Forms::Label());
			this->HOSPITALIZATION_LABEL = (gcnew System::Windows::Forms::Label());
			this->SURGERY_LABEL = (gcnew System::Windows::Forms::Label());
			this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
			this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
			this->IMPORTANT_EVENTS_LABEL->SuspendLayout();
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
			// IMPORTANT_EVENTS_LABEL
			// 
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->groupBox1);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->groupBox5);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->groupBox6);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->groupBox16);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->groupBox15);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->groupBox14);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->groupBox13);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->groupBox12);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->OTHERS_TEXTBOX);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->EMOTIONS_TEXTBOX);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->ALCOHOL_TEXTBOX);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->TREATMENT_TEXTBOX);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->DIAGNOSE_TEXTBOX);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->PATHOLOGY_TEXTBOX);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->HOSPITALIZATION_TEXTBOX);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->SURGERY_TEXTBOX);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->OTHERS_LABEL);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->EMOTIONS_LABEL);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->ALCOHOL_LABEL);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->TREATMENT_LABEL);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->DIAGNOSE_LABEL);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->PATHOLOGY_LABEL);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->HOSPITALIZATION_LABEL);
			this->IMPORTANT_EVENTS_LABEL->Controls->Add(this->SURGERY_LABEL);
			this->IMPORTANT_EVENTS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->IMPORTANT_EVENTS_LABEL->Location = System::Drawing::Point(36, 33);
			this->IMPORTANT_EVENTS_LABEL->Name = L"IMPORTANT_EVENTS_LABEL";
			this->IMPORTANT_EVENTS_LABEL->Size = System::Drawing::Size(1243, 334);
			this->IMPORTANT_EVENTS_LABEL->TabIndex = 1;
			this->IMPORTANT_EVENTS_LABEL->TabStop = false;
			this->IMPORTANT_EVENTS_LABEL->Text = L"Évenements Importantes M12";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->YES_OTHERS_RADIOBUTTON);
			this->groupBox1->Controls->Add(this->NO_OTHERS_RADIOBUTTON);
			this->groupBox1->Controls->Add(this->MISSING_OTHERS_RADIOBUTTON);
			this->groupBox1->Location = System::Drawing::Point(569, 288);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 35);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			// 
			// YES_OTHERS_RADIOBUTTON
			// 
			this->YES_OTHERS_RADIOBUTTON->AutoSize = true;
			this->YES_OTHERS_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_OTHERS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_OTHERS_RADIOBUTTON->Name = L"YES_OTHERS_RADIOBUTTON";
			this->YES_OTHERS_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_OTHERS_RADIOBUTTON->TabIndex = 38;
			this->YES_OTHERS_RADIOBUTTON->TabStop = true;
			this->YES_OTHERS_RADIOBUTTON->Text = L"Oui";
			this->YES_OTHERS_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_OTHERS_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT4::YES_OTHERS_RADIOBUTTON_CheckedChanged);
			// 
			// NO_OTHERS_RADIOBUTTON
			// 
			this->NO_OTHERS_RADIOBUTTON->AutoSize = true;
			this->NO_OTHERS_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_OTHERS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_OTHERS_RADIOBUTTON->Name = L"NO_OTHERS_RADIOBUTTON";
			this->NO_OTHERS_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_OTHERS_RADIOBUTTON->TabIndex = 39;
			this->NO_OTHERS_RADIOBUTTON->TabStop = true;
			this->NO_OTHERS_RADIOBUTTON->Text = L"Non";
			this->NO_OTHERS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_OTHERS_RADIOBUTTON
			// 
			this->MISSING_OTHERS_RADIOBUTTON->AutoSize = true;
			this->MISSING_OTHERS_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_OTHERS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_OTHERS_RADIOBUTTON->Name = L"MISSING_OTHERS_RADIOBUTTON";
			this->MISSING_OTHERS_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_OTHERS_RADIOBUTTON->TabIndex = 40;
			this->MISSING_OTHERS_RADIOBUTTON->TabStop = true;
			this->MISSING_OTHERS_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_OTHERS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->YES_EMOTIONS_RADIOBUTTON);
			this->groupBox5->Controls->Add(this->NO_EMOTIONS_RADIOBUTTON);
			this->groupBox5->Controls->Add(this->MISSING_EMOTIONS_RADIOBUTTON);
			this->groupBox5->Location = System::Drawing::Point(569, 248);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(296, 35);
			this->groupBox5->TabIndex = 33;
			this->groupBox5->TabStop = false;
			// 
			// YES_EMOTIONS_RADIOBUTTON
			// 
			this->YES_EMOTIONS_RADIOBUTTON->AutoSize = true;
			this->YES_EMOTIONS_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_EMOTIONS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_EMOTIONS_RADIOBUTTON->Name = L"YES_EMOTIONS_RADIOBUTTON";
			this->YES_EMOTIONS_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_EMOTIONS_RADIOBUTTON->TabIndex = 33;
			this->YES_EMOTIONS_RADIOBUTTON->TabStop = true;
			this->YES_EMOTIONS_RADIOBUTTON->Text = L"Oui";
			this->YES_EMOTIONS_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_EMOTIONS_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT4::YES_EMOTIONS_RADIOBUTTON_CheckedChanged);
			// 
			// NO_EMOTIONS_RADIOBUTTON
			// 
			this->NO_EMOTIONS_RADIOBUTTON->AutoSize = true;
			this->NO_EMOTIONS_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_EMOTIONS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_EMOTIONS_RADIOBUTTON->Name = L"NO_EMOTIONS_RADIOBUTTON";
			this->NO_EMOTIONS_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_EMOTIONS_RADIOBUTTON->TabIndex = 34;
			this->NO_EMOTIONS_RADIOBUTTON->TabStop = true;
			this->NO_EMOTIONS_RADIOBUTTON->Text = L"Non";
			this->NO_EMOTIONS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_EMOTIONS_RADIOBUTTON
			// 
			this->MISSING_EMOTIONS_RADIOBUTTON->AutoSize = true;
			this->MISSING_EMOTIONS_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_EMOTIONS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_EMOTIONS_RADIOBUTTON->Name = L"MISSING_EMOTIONS_RADIOBUTTON";
			this->MISSING_EMOTIONS_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_EMOTIONS_RADIOBUTTON->TabIndex = 35;
			this->MISSING_EMOTIONS_RADIOBUTTON->TabStop = true;
			this->MISSING_EMOTIONS_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_EMOTIONS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->YES_ALCOHOL_RADIOBUTTON);
			this->groupBox6->Controls->Add(this->NO_ALCOHOL_RADIOBUTTON);
			this->groupBox6->Controls->Add(this->MISSING_ALCOHOL_RADIOBUTTON);
			this->groupBox6->Location = System::Drawing::Point(569, 210);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(296, 35);
			this->groupBox6->TabIndex = 28;
			this->groupBox6->TabStop = false;
			// 
			// YES_ALCOHOL_RADIOBUTTON
			// 
			this->YES_ALCOHOL_RADIOBUTTON->AutoSize = true;
			this->YES_ALCOHOL_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_ALCOHOL_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_ALCOHOL_RADIOBUTTON->Name = L"YES_ALCOHOL_RADIOBUTTON";
			this->YES_ALCOHOL_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_ALCOHOL_RADIOBUTTON->TabIndex = 28;
			this->YES_ALCOHOL_RADIOBUTTON->TabStop = true;
			this->YES_ALCOHOL_RADIOBUTTON->Text = L"Oui";
			this->YES_ALCOHOL_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_ALCOHOL_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT4::YES_ALCOHOL_RADIOBUTTON_CheckedChanged);
			// 
			// NO_ALCOHOL_RADIOBUTTON
			// 
			this->NO_ALCOHOL_RADIOBUTTON->AutoSize = true;
			this->NO_ALCOHOL_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_ALCOHOL_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_ALCOHOL_RADIOBUTTON->Name = L"NO_ALCOHOL_RADIOBUTTON";
			this->NO_ALCOHOL_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_ALCOHOL_RADIOBUTTON->TabIndex = 29;
			this->NO_ALCOHOL_RADIOBUTTON->TabStop = true;
			this->NO_ALCOHOL_RADIOBUTTON->Text = L"Non";
			this->NO_ALCOHOL_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_ALCOHOL_RADIOBUTTON
			// 
			this->MISSING_ALCOHOL_RADIOBUTTON->AutoSize = true;
			this->MISSING_ALCOHOL_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_ALCOHOL_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_ALCOHOL_RADIOBUTTON->Name = L"MISSING_ALCOHOL_RADIOBUTTON";
			this->MISSING_ALCOHOL_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_ALCOHOL_RADIOBUTTON->TabIndex = 30;
			this->MISSING_ALCOHOL_RADIOBUTTON->TabStop = true;
			this->MISSING_ALCOHOL_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_ALCOHOL_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->YES_TREATMENT_RADIOBUTTON);
			this->groupBox16->Controls->Add(this->NO_TREATMENT_RADIOBUTTON);
			this->groupBox16->Controls->Add(this->MISSING_TREATMENT_RADIOBUTTON);
			this->groupBox16->Location = System::Drawing::Point(569, 175);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(296, 35);
			this->groupBox16->TabIndex = 23;
			this->groupBox16->TabStop = false;
			// 
			// YES_TREATMENT_RADIOBUTTON
			// 
			this->YES_TREATMENT_RADIOBUTTON->AutoSize = true;
			this->YES_TREATMENT_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_TREATMENT_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_TREATMENT_RADIOBUTTON->Name = L"YES_TREATMENT_RADIOBUTTON";
			this->YES_TREATMENT_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_TREATMENT_RADIOBUTTON->TabIndex = 23;
			this->YES_TREATMENT_RADIOBUTTON->TabStop = true;
			this->YES_TREATMENT_RADIOBUTTON->Text = L"Oui";
			this->YES_TREATMENT_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_TREATMENT_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT4::YES_TREATMENT_RADIOBUTTON_CheckedChanged);
			// 
			// NO_TREATMENT_RADIOBUTTON
			// 
			this->NO_TREATMENT_RADIOBUTTON->AutoSize = true;
			this->NO_TREATMENT_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_TREATMENT_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_TREATMENT_RADIOBUTTON->Name = L"NO_TREATMENT_RADIOBUTTON";
			this->NO_TREATMENT_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_TREATMENT_RADIOBUTTON->TabIndex = 24;
			this->NO_TREATMENT_RADIOBUTTON->TabStop = true;
			this->NO_TREATMENT_RADIOBUTTON->Text = L"Non";
			this->NO_TREATMENT_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_TREATMENT_RADIOBUTTON
			// 
			this->MISSING_TREATMENT_RADIOBUTTON->AutoSize = true;
			this->MISSING_TREATMENT_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_TREATMENT_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_TREATMENT_RADIOBUTTON->Name = L"MISSING_TREATMENT_RADIOBUTTON";
			this->MISSING_TREATMENT_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_TREATMENT_RADIOBUTTON->TabIndex = 25;
			this->MISSING_TREATMENT_RADIOBUTTON->TabStop = true;
			this->MISSING_TREATMENT_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_TREATMENT_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox15
			// 
			this->groupBox15->Controls->Add(this->YES_DIAGNOSE_RADIOBUTTON);
			this->groupBox15->Controls->Add(this->NO_DIAGNOSE_RADIOBUTTON);
			this->groupBox15->Controls->Add(this->MISSING_DIAGNOSE_RADIOBUTTON);
			this->groupBox15->Location = System::Drawing::Point(569, 138);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(296, 35);
			this->groupBox15->TabIndex = 18;
			this->groupBox15->TabStop = false;
			// 
			// YES_DIAGNOSE_RADIOBUTTON
			// 
			this->YES_DIAGNOSE_RADIOBUTTON->AutoSize = true;
			this->YES_DIAGNOSE_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_DIAGNOSE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_DIAGNOSE_RADIOBUTTON->Name = L"YES_DIAGNOSE_RADIOBUTTON";
			this->YES_DIAGNOSE_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_DIAGNOSE_RADIOBUTTON->TabIndex = 18;
			this->YES_DIAGNOSE_RADIOBUTTON->TabStop = true;
			this->YES_DIAGNOSE_RADIOBUTTON->Text = L"Oui";
			this->YES_DIAGNOSE_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_DIAGNOSE_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT4::YES_DIAGNOSE_RADIOBUTTON_CheckedChanged);
			// 
			// NO_DIAGNOSE_RADIOBUTTON
			// 
			this->NO_DIAGNOSE_RADIOBUTTON->AutoSize = true;
			this->NO_DIAGNOSE_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_DIAGNOSE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_DIAGNOSE_RADIOBUTTON->Name = L"NO_DIAGNOSE_RADIOBUTTON";
			this->NO_DIAGNOSE_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_DIAGNOSE_RADIOBUTTON->TabIndex = 19;
			this->NO_DIAGNOSE_RADIOBUTTON->TabStop = true;
			this->NO_DIAGNOSE_RADIOBUTTON->Text = L"Non";
			this->NO_DIAGNOSE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_DIAGNOSE_RADIOBUTTON
			// 
			this->MISSING_DIAGNOSE_RADIOBUTTON->AutoSize = true;
			this->MISSING_DIAGNOSE_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_DIAGNOSE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_DIAGNOSE_RADIOBUTTON->Name = L"MISSING_DIAGNOSE_RADIOBUTTON";
			this->MISSING_DIAGNOSE_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_DIAGNOSE_RADIOBUTTON->TabIndex = 20;
			this->MISSING_DIAGNOSE_RADIOBUTTON->TabStop = true;
			this->MISSING_DIAGNOSE_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_DIAGNOSE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->YES_PATHOLOGY_RADIOBUTTON);
			this->groupBox14->Controls->Add(this->NO_PATHOLOGY_RADIOBUTTON);
			this->groupBox14->Controls->Add(this->MISSING_PATHOLOGY_RADIOBUTTON);
			this->groupBox14->Location = System::Drawing::Point(569, 102);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(296, 35);
			this->groupBox14->TabIndex = 13;
			this->groupBox14->TabStop = false;
			// 
			// YES_PATHOLOGY_RADIOBUTTON
			// 
			this->YES_PATHOLOGY_RADIOBUTTON->AutoSize = true;
			this->YES_PATHOLOGY_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_PATHOLOGY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_PATHOLOGY_RADIOBUTTON->Name = L"YES_PATHOLOGY_RADIOBUTTON";
			this->YES_PATHOLOGY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_PATHOLOGY_RADIOBUTTON->TabIndex = 13;
			this->YES_PATHOLOGY_RADIOBUTTON->TabStop = true;
			this->YES_PATHOLOGY_RADIOBUTTON->Text = L"Oui";
			this->YES_PATHOLOGY_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_PATHOLOGY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT4::YES_PATHOLOGY_RADIOBUTTON_CheckedChanged);
			// 
			// NO_PATHOLOGY_RADIOBUTTON
			// 
			this->NO_PATHOLOGY_RADIOBUTTON->AutoSize = true;
			this->NO_PATHOLOGY_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_PATHOLOGY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_PATHOLOGY_RADIOBUTTON->Name = L"NO_PATHOLOGY_RADIOBUTTON";
			this->NO_PATHOLOGY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_PATHOLOGY_RADIOBUTTON->TabIndex = 14;
			this->NO_PATHOLOGY_RADIOBUTTON->TabStop = true;
			this->NO_PATHOLOGY_RADIOBUTTON->Text = L"Non";
			this->NO_PATHOLOGY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_PATHOLOGY_RADIOBUTTON
			// 
			this->MISSING_PATHOLOGY_RADIOBUTTON->AutoSize = true;
			this->MISSING_PATHOLOGY_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_PATHOLOGY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_PATHOLOGY_RADIOBUTTON->Name = L"MISSING_PATHOLOGY_RADIOBUTTON";
			this->MISSING_PATHOLOGY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_PATHOLOGY_RADIOBUTTON->TabIndex = 15;
			this->MISSING_PATHOLOGY_RADIOBUTTON->TabStop = true;
			this->MISSING_PATHOLOGY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_PATHOLOGY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->YES_HOSPITALIZATION_RADIOBUTTON);
			this->groupBox13->Controls->Add(this->NO_HOSPITALIZATION_RADIOBUTTON);
			this->groupBox13->Controls->Add(this->MISSING_HOSPITALIZATION_RADIOBUTTON);
			this->groupBox13->Location = System::Drawing::Point(569, 66);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(296, 35);
			this->groupBox13->TabIndex = 8;
			this->groupBox13->TabStop = false;
			// 
			// YES_HOSPITALIZATION_RADIOBUTTON
			// 
			this->YES_HOSPITALIZATION_RADIOBUTTON->AutoSize = true;
			this->YES_HOSPITALIZATION_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_HOSPITALIZATION_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_HOSPITALIZATION_RADIOBUTTON->Name = L"YES_HOSPITALIZATION_RADIOBUTTON";
			this->YES_HOSPITALIZATION_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_HOSPITALIZATION_RADIOBUTTON->TabIndex = 8;
			this->YES_HOSPITALIZATION_RADIOBUTTON->TabStop = true;
			this->YES_HOSPITALIZATION_RADIOBUTTON->Text = L"Oui";
			this->YES_HOSPITALIZATION_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_HOSPITALIZATION_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT4::YES_HOSPITALIZATION_RADIOBUTTON_CheckedChanged);
			// 
			// NO_HOSPITALIZATION_RADIOBUTTON
			// 
			this->NO_HOSPITALIZATION_RADIOBUTTON->AutoSize = true;
			this->NO_HOSPITALIZATION_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_HOSPITALIZATION_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_HOSPITALIZATION_RADIOBUTTON->Name = L"NO_HOSPITALIZATION_RADIOBUTTON";
			this->NO_HOSPITALIZATION_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_HOSPITALIZATION_RADIOBUTTON->TabIndex = 9;
			this->NO_HOSPITALIZATION_RADIOBUTTON->TabStop = true;
			this->NO_HOSPITALIZATION_RADIOBUTTON->Text = L"Non";
			this->NO_HOSPITALIZATION_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_HOSPITALIZATION_RADIOBUTTON
			// 
			this->MISSING_HOSPITALIZATION_RADIOBUTTON->AutoSize = true;
			this->MISSING_HOSPITALIZATION_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_HOSPITALIZATION_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_HOSPITALIZATION_RADIOBUTTON->Name = L"MISSING_HOSPITALIZATION_RADIOBUTTON";
			this->MISSING_HOSPITALIZATION_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_HOSPITALIZATION_RADIOBUTTON->TabIndex = 10;
			this->MISSING_HOSPITALIZATION_RADIOBUTTON->TabStop = true;
			this->MISSING_HOSPITALIZATION_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_HOSPITALIZATION_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->YES_SURGERY_RADIOBUTTON);
			this->groupBox12->Controls->Add(this->NO_SURGERY_RADIOBUTTON);
			this->groupBox12->Controls->Add(this->MISSING_SURGERY_RADIOBUTTON);
			this->groupBox12->Location = System::Drawing::Point(569, 28);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(296, 35);
			this->groupBox12->TabIndex = 3;
			this->groupBox12->TabStop = false;
			// 
			// YES_SURGERY_RADIOBUTTON
			// 
			this->YES_SURGERY_RADIOBUTTON->AutoSize = true;
			this->YES_SURGERY_RADIOBUTTON->Location = System::Drawing::Point(9, 10);
			this->YES_SURGERY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_SURGERY_RADIOBUTTON->Name = L"YES_SURGERY_RADIOBUTTON";
			this->YES_SURGERY_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_SURGERY_RADIOBUTTON->TabIndex = 3;
			this->YES_SURGERY_RADIOBUTTON->TabStop = true;
			this->YES_SURGERY_RADIOBUTTON->Text = L"Oui";
			this->YES_SURGERY_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_SURGERY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT4::YES_SURGERY_RADIOBUTTON_CheckedChanged);
			// 
			// NO_SURGERY_RADIOBUTTON
			// 
			this->NO_SURGERY_RADIOBUTTON->AutoSize = true;
			this->NO_SURGERY_RADIOBUTTON->Location = System::Drawing::Point(79, 10);
			this->NO_SURGERY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_SURGERY_RADIOBUTTON->Name = L"NO_SURGERY_RADIOBUTTON";
			this->NO_SURGERY_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_SURGERY_RADIOBUTTON->TabIndex = 4;
			this->NO_SURGERY_RADIOBUTTON->TabStop = true;
			this->NO_SURGERY_RADIOBUTTON->Text = L"Non";
			this->NO_SURGERY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MISSING_SURGERY_RADIOBUTTON
			// 
			this->MISSING_SURGERY_RADIOBUTTON->AutoSize = true;
			this->MISSING_SURGERY_RADIOBUTTON->Location = System::Drawing::Point(171, 10);
			this->MISSING_SURGERY_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MISSING_SURGERY_RADIOBUTTON->Name = L"MISSING_SURGERY_RADIOBUTTON";
			this->MISSING_SURGERY_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
			this->MISSING_SURGERY_RADIOBUTTON->TabIndex = 5;
			this->MISSING_SURGERY_RADIOBUTTON->TabStop = true;
			this->MISSING_SURGERY_RADIOBUTTON->Text = L"Manquante";
			this->MISSING_SURGERY_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// OTHERS_TEXTBOX
			// 
			this->OTHERS_TEXTBOX->Enabled = false;
			this->OTHERS_TEXTBOX->Location = System::Drawing::Point(882, 294);
			this->OTHERS_TEXTBOX->Name = L"OTHERS_TEXTBOX";
			this->OTHERS_TEXTBOX->Size = System::Drawing::Size(344, 29);
			this->OTHERS_TEXTBOX->TabIndex = 41;
			// 
			// EMOTIONS_TEXTBOX
			// 
			this->EMOTIONS_TEXTBOX->Enabled = false;
			this->EMOTIONS_TEXTBOX->Location = System::Drawing::Point(882, 254);
			this->EMOTIONS_TEXTBOX->Name = L"EMOTIONS_TEXTBOX";
			this->EMOTIONS_TEXTBOX->Size = System::Drawing::Size(344, 29);
			this->EMOTIONS_TEXTBOX->TabIndex = 36;
			// 
			// ALCOHOL_TEXTBOX
			// 
			this->ALCOHOL_TEXTBOX->Enabled = false;
			this->ALCOHOL_TEXTBOX->Location = System::Drawing::Point(882, 216);
			this->ALCOHOL_TEXTBOX->Name = L"ALCOHOL_TEXTBOX";
			this->ALCOHOL_TEXTBOX->Size = System::Drawing::Size(344, 29);
			this->ALCOHOL_TEXTBOX->TabIndex = 31;
			// 
			// TREATMENT_TEXTBOX
			// 
			this->TREATMENT_TEXTBOX->Enabled = false;
			this->TREATMENT_TEXTBOX->Location = System::Drawing::Point(882, 181);
			this->TREATMENT_TEXTBOX->Name = L"TREATMENT_TEXTBOX";
			this->TREATMENT_TEXTBOX->Size = System::Drawing::Size(344, 29);
			this->TREATMENT_TEXTBOX->TabIndex = 26;
			// 
			// DIAGNOSE_TEXTBOX
			// 
			this->DIAGNOSE_TEXTBOX->Enabled = false;
			this->DIAGNOSE_TEXTBOX->Location = System::Drawing::Point(882, 144);
			this->DIAGNOSE_TEXTBOX->Name = L"DIAGNOSE_TEXTBOX";
			this->DIAGNOSE_TEXTBOX->Size = System::Drawing::Size(344, 29);
			this->DIAGNOSE_TEXTBOX->TabIndex = 21;
			// 
			// PATHOLOGY_TEXTBOX
			// 
			this->PATHOLOGY_TEXTBOX->Enabled = false;
			this->PATHOLOGY_TEXTBOX->Location = System::Drawing::Point(882, 108);
			this->PATHOLOGY_TEXTBOX->Name = L"PATHOLOGY_TEXTBOX";
			this->PATHOLOGY_TEXTBOX->Size = System::Drawing::Size(344, 29);
			this->PATHOLOGY_TEXTBOX->TabIndex = 16;
			// 
			// HOSPITALIZATION_TEXTBOX
			// 
			this->HOSPITALIZATION_TEXTBOX->Enabled = false;
			this->HOSPITALIZATION_TEXTBOX->Location = System::Drawing::Point(882, 72);
			this->HOSPITALIZATION_TEXTBOX->Name = L"HOSPITALIZATION_TEXTBOX";
			this->HOSPITALIZATION_TEXTBOX->Size = System::Drawing::Size(344, 29);
			this->HOSPITALIZATION_TEXTBOX->TabIndex = 11;
			// 
			// SURGERY_TEXTBOX
			// 
			this->SURGERY_TEXTBOX->Enabled = false;
			this->SURGERY_TEXTBOX->Location = System::Drawing::Point(882, 33);
			this->SURGERY_TEXTBOX->Name = L"SURGERY_TEXTBOX";
			this->SURGERY_TEXTBOX->Size = System::Drawing::Size(344, 29);
			this->SURGERY_TEXTBOX->TabIndex = 6;
			// 
			// OTHERS_LABEL
			// 
			this->OTHERS_LABEL->AutoSize = true;
			this->OTHERS_LABEL->Location = System::Drawing::Point(18, 294);
			this->OTHERS_LABEL->Name = L"OTHERS_LABEL";
			this->OTHERS_LABEL->Size = System::Drawing::Size(81, 24);
			this->OTHERS_LABEL->TabIndex = 37;
			this->OTHERS_LABEL->Text = L"8) Autre:";
			// 
			// EMOTIONS_LABEL
			// 
			this->EMOTIONS_LABEL->AutoSize = true;
			this->EMOTIONS_LABEL->Location = System::Drawing::Point(18, 254);
			this->EMOTIONS_LABEL->Name = L"EMOTIONS_LABEL";
			this->EMOTIONS_LABEL->Size = System::Drawing::Size(552, 24);
			this->EMOTIONS_LABEL->TabIndex = 32;
			this->EMOTIONS_LABEL->Text = L"7) Amélioration ou altération importante de son état émotionnelle:";
			// 
			// ALCOHOL_LABEL
			// 
			this->ALCOHOL_LABEL->AutoSize = true;
			this->ALCOHOL_LABEL->Location = System::Drawing::Point(18, 216);
			this->ALCOHOL_LABEL->Name = L"ALCOHOL_LABEL";
			this->ALCOHOL_LABEL->Size = System::Drawing::Size(499, 24);
			this->ALCOHOL_LABEL->TabIndex = 27;
			this->ALCOHOL_LABEL->Text = L"6) Augmentation/Reduction importante de la prise d\'alcool:";
			// 
			// TREATMENT_LABEL
			// 
			this->TREATMENT_LABEL->AutoSize = true;
			this->TREATMENT_LABEL->Location = System::Drawing::Point(18, 181);
			this->TREATMENT_LABEL->Name = L"TREATMENT_LABEL";
			this->TREATMENT_LABEL->Size = System::Drawing::Size(207, 24);
			this->TREATMENT_LABEL->TabIndex = 22;
			this->TREATMENT_LABEL->Text = L"5) Nouveau Traitement:";
			// 
			// DIAGNOSE_LABEL
			// 
			this->DIAGNOSE_LABEL->AutoSize = true;
			this->DIAGNOSE_LABEL->Location = System::Drawing::Point(18, 145);
			this->DIAGNOSE_LABEL->Name = L"DIAGNOSE_LABEL";
			this->DIAGNOSE_LABEL->Size = System::Drawing::Size(228, 24);
			this->DIAGNOSE_LABEL->TabIndex = 17;
			this->DIAGNOSE_LABEL->Text = L"4) Nouveau Diagnostique:";
			// 
			// PATHOLOGY_LABEL
			// 
			this->PATHOLOGY_LABEL->AutoSize = true;
			this->PATHOLOGY_LABEL->Location = System::Drawing::Point(18, 108);
			this->PATHOLOGY_LABEL->Name = L"PATHOLOGY_LABEL";
			this->PATHOLOGY_LABEL->Size = System::Drawing::Size(267, 24);
			this->PATHOLOGY_LABEL->TabIndex = 12;
			this->PATHOLOGY_LABEL->Text = L"3) Apparition d\'une pathologie:";
			// 
			// HOSPITALIZATION_LABEL
			// 
			this->HOSPITALIZATION_LABEL->AutoSize = true;
			this->HOSPITALIZATION_LABEL->Location = System::Drawing::Point(18, 72);
			this->HOSPITALIZATION_LABEL->Name = L"HOSPITALIZATION_LABEL";
			this->HOSPITALIZATION_LABEL->Size = System::Drawing::Size(156, 24);
			this->HOSPITALIZATION_LABEL->TabIndex = 7;
			this->HOSPITALIZATION_LABEL->Text = L"2) Hospitalisation:";
			// 
			// SURGERY_LABEL
			// 
			this->SURGERY_LABEL->AutoSize = true;
			this->SURGERY_LABEL->Location = System::Drawing::Point(18, 35);
			this->SURGERY_LABEL->Name = L"SURGERY_LABEL";
			this->SURGERY_LABEL->Size = System::Drawing::Size(225, 24);
			this->SURGERY_LABEL->TabIndex = 2;
			this->SURGERY_LABEL->Text = L"1) Intervention chirurgical:";
			// 
			// CANCEL_BUTTON
			// 
			this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CANCEL_BUTTON->Location = System::Drawing::Point(667, 401);
			this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
			this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
			this->CANCEL_BUTTON->TabIndex = 43;
			this->CANCEL_BUTTON->Text = L"Annuler";
			this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
			this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &MedicalDataPT4::CANCEL_BUTTON_Click);
			// 
			// REGISTER_BUTTON
			// 
			this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REGISTER_BUTTON->Location = System::Drawing::Point(387, 401);
			this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
			this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
			this->REGISTER_BUTTON->TabIndex = 42;
			this->REGISTER_BUTTON->Text = L"Enregistrer";
			this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
			// 
			// MedicalDataPT4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1319, 518);
			this->Controls->Add(this->CANCEL_BUTTON);
			this->Controls->Add(this->REGISTER_BUTTON);
			this->Controls->Add(this->IMPORTANT_EVENTS_LABEL);
			this->Name = L"MedicalDataPT4";
			this->Text = L"MedicalDataPT4";
			this->IMPORTANT_EVENTS_LABEL->ResumeLayout(false);
			this->IMPORTANT_EVENTS_LABEL->PerformLayout();
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

	private: System::Void YES_SURGERY_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		SURGERY_TEXTBOX->Enabled = (YES_SURGERY_RADIOBUTTON->Checked) ? true : false;
	}
	private: System::Void YES_HOSPITALIZATION_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		HOSPITALIZATION_TEXTBOX->Enabled = (YES_HOSPITALIZATION_RADIOBUTTON->Checked) ? true : false;
	}
	private: System::Void YES_PATHOLOGY_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		PATHOLOGY_TEXTBOX->Enabled = (YES_PATHOLOGY_RADIOBUTTON->Checked) ? true : false;
	}
	private: System::Void YES_DIAGNOSE_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		DIAGNOSE_TEXTBOX->Enabled = (YES_DIAGNOSE_RADIOBUTTON->Checked) ? true : false;
	}
	private: System::Void YES_TREATMENT_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		TREATMENT_TEXTBOX->Enabled = (YES_TREATMENT_RADIOBUTTON->Checked) ? true : false;
	}
	private: System::Void YES_ALCOHOL_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ALCOHOL_TEXTBOX->Enabled = (YES_ALCOHOL_RADIOBUTTON->Checked) ? true : false;
	}
	private: System::Void YES_EMOTIONS_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		EMOTIONS_TEXTBOX->Enabled = (YES_EMOTIONS_RADIOBUTTON->Checked) ? true : false;
	}
	private: System::Void YES_OTHERS_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		OTHERS_TEXTBOX->Enabled = (YES_OTHERS_RADIOBUTTON->Checked) ? true : false;
	}

	private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		//Exit Without Doing Anything
		MedicalDataPT4::Close();
	}
};
}
