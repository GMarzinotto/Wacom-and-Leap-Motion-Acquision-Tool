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
	/// Summary for NeurologicHistory
	/// </summary>
	public ref class NeurologicHistory : public System::Windows::Forms::Form
	{
	public:
	public: String^ currentLanguage;
            Patient* myPatient;
	public:
		NeurologicHistory(Patient *inputPatient, String^ language, bool treatAsNew)
		{
			currentLanguage = language;
			InitializeComponent();
            myPatient = inputPatient;
			UpdateLanguage_NeurologicHistoryForm(currentLanguage);
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NeurologicHistory()
		{
			if (components)
			{
				delete components;
			}
		}

	// Functions
	void WacomTabletApplication::NeurologicHistory::UpdateLanguage_NeurologicHistoryForm(String^ language);
    void WacomTabletApplication::NeurologicHistory::completePatientInformationObject();

	// Objects in window
	private: System::Windows::Forms::GroupBox^  NEUROLOGIC_HISTORY_LABEL;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  YES_OTHER_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  NO_OTHER_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MISSING_OTHER_RADIOBUTTON;
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
	private: System::Windows::Forms::TextBox^  OTHER_NEURO_TEXTBOX;
	private: System::Windows::Forms::Label^  OTHER_NEURO_LABEL;
	private: System::Windows::Forms::Label^  APHASY_LABEL;
	private: System::Windows::Forms::Label^  HEMIPLEGIA_LABEL;
	private: System::Windows::Forms::Label^  PARKINSON_LABEL;

	private: System::Windows::Forms::Label^  TUMOR_LABEL;
	private: System::Windows::Forms::Label^  TRAUMA_LABEL;
	private: System::Windows::Forms::Label^  EPILEPSIA_LABEL;
	private: System::Windows::Forms::Label^  label1;
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
            this->TUMOR_LABEL = (gcnew System::Windows::Forms::Label());
            this->TRAUMA_LABEL = (gcnew System::Windows::Forms::Label());
            this->EPILEPSIA_LABEL = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->NEUROLOGIC_HISTORY_LABEL->SuspendLayout();
            this->groupBox1->SuspendLayout();
            this->groupBox5->SuspendLayout();
            this->groupBox6->SuspendLayout();
            this->groupBox16->SuspendLayout();
            this->groupBox14->SuspendLayout();
            this->groupBox13->SuspendLayout();
            this->groupBox12->SuspendLayout();
            this->SuspendLayout();
            // 
            // NEUROLOGIC_HISTORY_LABEL
            // 
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox1);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox5);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox6);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox16);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox14);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox13);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->groupBox12);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->OTHER_NEURO_TEXTBOX);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->OTHER_NEURO_LABEL);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->APHASY_LABEL);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->HEMIPLEGIA_LABEL);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->PARKINSON_LABEL);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->TUMOR_LABEL);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->TRAUMA_LABEL);
            this->NEUROLOGIC_HISTORY_LABEL->Controls->Add(this->EPILEPSIA_LABEL);
            this->NEUROLOGIC_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->NEUROLOGIC_HISTORY_LABEL->Location = System::Drawing::Point(45, 93);
            this->NEUROLOGIC_HISTORY_LABEL->Name = L"NEUROLOGIC_HISTORY_LABEL";
            this->NEUROLOGIC_HISTORY_LABEL->Size = System::Drawing::Size(756, 338);
            this->NEUROLOGIC_HISTORY_LABEL->TabIndex = 33;
            this->NEUROLOGIC_HISTORY_LABEL->TabStop = false;
            this->NEUROLOGIC_HISTORY_LABEL->Text = L"Antécédents Neurologiques";
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->YES_OTHER_RADIOBUTTON);
            this->groupBox1->Controls->Add(this->NO_OTHER_RADIOBUTTON);
            this->groupBox1->Controls->Add(this->MISSING_OTHER_RADIOBUTTON);
            this->groupBox1->Location = System::Drawing::Point(354, 251);
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
            this->YES_OTHER_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &NeurologicHistory::YES_OTHER_RADIOBUTTON_CheckedChanged);
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
            this->groupBox5->Location = System::Drawing::Point(354, 211);
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
            this->groupBox6->Location = System::Drawing::Point(354, 172);
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
            this->groupBox16->Location = System::Drawing::Point(354, 140);
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
            this->OTHER_NEURO_TEXTBOX->Location = System::Drawing::Point(354, 293);
            this->OTHER_NEURO_TEXTBOX->Name = L"OTHER_NEURO_TEXTBOX";
            this->OTHER_NEURO_TEXTBOX->Size = System::Drawing::Size(304, 29);
            this->OTHER_NEURO_TEXTBOX->TabIndex = 62;
            // 
            // OTHER_NEURO_LABEL
            // 
            this->OTHER_NEURO_LABEL->AutoSize = true;
            this->OTHER_NEURO_LABEL->Location = System::Drawing::Point(18, 262);
            this->OTHER_NEURO_LABEL->Name = L"OTHER_NEURO_LABEL";
            this->OTHER_NEURO_LABEL->Size = System::Drawing::Size(81, 24);
            this->OTHER_NEURO_LABEL->TabIndex = 61;
            this->OTHER_NEURO_LABEL->Text = L"7) Autre:";
            // 
            // APHASY_LABEL
            // 
            this->APHASY_LABEL->AutoSize = true;
            this->APHASY_LABEL->Location = System::Drawing::Point(18, 222);
            this->APHASY_LABEL->Name = L"APHASY_LABEL";
            this->APHASY_LABEL->Size = System::Drawing::Size(105, 24);
            this->APHASY_LABEL->TabIndex = 57;
            this->APHASY_LABEL->Text = L"6) Aphasie:";
            // 
            // HEMIPLEGIA_LABEL
            // 
            this->HEMIPLEGIA_LABEL->AutoSize = true;
            this->HEMIPLEGIA_LABEL->Location = System::Drawing::Point(18, 183);
            this->HEMIPLEGIA_LABEL->Name = L"HEMIPLEGIA_LABEL";
            this->HEMIPLEGIA_LABEL->Size = System::Drawing::Size(133, 24);
            this->HEMIPLEGIA_LABEL->TabIndex = 53;
            this->HEMIPLEGIA_LABEL->Text = L"5) Hémiplégie:";
            // 
            // PARKINSON_LABEL
            // 
            this->PARKINSON_LABEL->AutoSize = true;
            this->PARKINSON_LABEL->Location = System::Drawing::Point(18, 149);
            this->PARKINSON_LABEL->Name = L"PARKINSON_LABEL";
            this->PARKINSON_LABEL->Size = System::Drawing::Size(300, 24);
            this->PARKINSON_LABEL->TabIndex = 49;
            this->PARKINSON_LABEL->Text = L"4) Parkinson (ou Sd Parkinsonien):";
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
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label1->Location = System::Drawing::Point(39, 44);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(237, 31);
            this->label1->TabIndex = 34;
            this->label1->Text = L"Neurologic History";
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(854, 276);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
            this->CANCEL_BUTTON->TabIndex = 128;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &NeurologicHistory::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(854, 182);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
            this->REGISTER_BUTTON->TabIndex = 127;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &NeurologicHistory::REGISTER_BUTTON_Click);
            // 
            // NeurologicHistory
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1188, 465);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->NEUROLOGIC_HISTORY_LABEL);
            this->Name = L"NeurologicHistory";
            this->Text = L"NeurologicHistory";
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
            this->groupBox14->ResumeLayout(false);
            this->groupBox14->PerformLayout();
            this->groupBox13->ResumeLayout(false);
            this->groupBox13->PerformLayout();
            this->groupBox12->ResumeLayout(false);
            this->groupBox12->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Save Information of the Patient
        completePatientInformationObject();
        NeurologicHistory::Close();
    }

    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        NeurologicHistory::Close();
    }
    
    private: System::Void YES_OTHER_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		OTHER_NEURO_TEXTBOX->Enabled = (YES_OTHER_RADIOBUTTON->Checked) ? true : false;
	}
};
}
