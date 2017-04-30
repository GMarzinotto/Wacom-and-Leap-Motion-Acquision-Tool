#pragma once
#include "Patient.h"

namespace WacomTabletApplication {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for PsychiatricHistory
    /// </summary>
    public ref class PsychiatricHistory : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
            Patient* myPatient;
    public:
        PsychiatricHistory(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_PsychiatricHistoryForm(currentLanguage);
        }
    
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~PsychiatricHistory()
        {
            if (components)
            {
                delete components;
            }
        }

    //Functions
    private: void WacomTabletApplication::PsychiatricHistory::UpdateLanguage_PsychiatricHistoryForm(String^ language);
             void WacomTabletApplication::PsychiatricHistory::completePatientInformationObject();
    // Objects in window
    private: System::Windows::Forms::GroupBox^  PSYCHIATRIC_HISTORY_LABEL;
    protected:
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
    private: System::Windows::Forms::Label^  ANTIDEPRESSIVE_USE_LABEL;
    private: System::Windows::Forms::Label^  PSYCOTROPIC_USE_LABEL;
    private: System::Windows::Forms::Label^  PSYCHIATRIC_HOSPITALIZATION_LABEL;
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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->PSYCHIATRIC_HISTORY_LABEL->SuspendLayout();
            this->groupBox10->SuspendLayout();
            this->groupBox9->SuspendLayout();
            this->groupBox8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER))->BeginInit();
            this->SuspendLayout();
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
            this->PSYCHIATRIC_HISTORY_LABEL->Location = System::Drawing::Point(47, 89);
            this->PSYCHIATRIC_HISTORY_LABEL->Name = L"PSYCHIATRIC_HISTORY_LABEL";
            this->PSYCHIATRIC_HISTORY_LABEL->Size = System::Drawing::Size(756, 301);
            this->PSYCHIATRIC_HISTORY_LABEL->TabIndex = 64;
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
            this->YES_ANTIDEPRESSIVE_USE_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &PsychiatricHistory::YES_ANTIDEPRESSIVE_USE_RADIOBUTTON_CheckedChanged);
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
            this->YES_PSYCOTROPIC_USE_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &PsychiatricHistory::YES_PSYCOTROPIC_USE_RADIOBUTTON_CheckedChanged);
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
            this->YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &PsychiatricHistory::YES_PSYCHIATRIC_HOSPITALIZATION_RADIOBUTTON_CheckedChanged);
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
            this->ANTIDEPRESSIVE_USE_LAST_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &PsychiatricHistory::ANTIDEPRESSIVE_USE_LAST_CHECKBOX_CheckedChanged);
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
            this->PSYCOTROPIC_USE_LAST_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &PsychiatricHistory::PSYCOTROPIC_USE_LAST_CHECKBOX_CheckedChanged);
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
            this->PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &PsychiatricHistory::PSYCHIATRIC_HOSPITALIZATION_INDICATION_CHECKBOX_CheckedChanged);
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
            this->PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &PsychiatricHistory::PSYCHIATRIC_HOSPITALIZATION_LAST_CHECKBOX_CheckedChanged);
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
            this->PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &PsychiatricHistory::PSYCHIATRIC_HOSPITALIZATION_COUNT_CHECKBOX_CheckedChanged);
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
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label1->Location = System::Drawing::Point(41, 22);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(240, 31);
            this->label1->TabIndex = 65;
            this->label1->Text = L"Psychiatric History";
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(852, 283);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
            this->CANCEL_BUTTON->TabIndex = 146;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &PsychiatricHistory::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(852, 173);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
            this->REGISTER_BUTTON->TabIndex = 145;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &PsychiatricHistory::REGISTER_BUTTON_Click);
            // 
            // PsychiatricHistory
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1181, 469);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->PSYCHIATRIC_HISTORY_LABEL);
            this->Name = L"PsychiatricHistory";
            this->Text = L"PsychiatricHistory";
            this->PSYCHIATRIC_HISTORY_LABEL->ResumeLayout(false);
            this->PSYCHIATRIC_HISTORY_LABEL->PerformLayout();
            this->groupBox10->ResumeLayout(false);
            this->groupBox10->PerformLayout();
            this->groupBox9->ResumeLayout(false);
            this->groupBox9->PerformLayout();
            this->groupBox8->ResumeLayout(false);
            this->groupBox8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PSYCHIATRIC_HOSPITALIZATION_COUNT_COUNTER))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        // Save Information of the Patient
        completePatientInformationObject();
        PsychiatricHistory::Close();
    }
    
    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        PsychiatricHistory::Close();
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
};
}
