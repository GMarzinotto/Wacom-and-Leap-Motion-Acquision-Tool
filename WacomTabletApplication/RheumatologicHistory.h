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
    /// Summary for RheumatologicHistory
    /// </summary>
    public ref class RheumatologicHistory : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
            Patient* myPatient;
    public:
        RheumatologicHistory(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_RheumatologicHistoryForm(currentLanguage);
        }
    
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~RheumatologicHistory()
        {
            if (components)
            {
                delete components;
            }
        }

    // Functions
    void WacomTabletApplication::RheumatologicHistory::UpdateLanguage_RheumatologicHistoryForm(String^ language);
    void WacomTabletApplication::RheumatologicHistory::completePatientInformationObject();


    // Objects in window
    private: System::Windows::Forms::GroupBox^  RHUMATOLOGIC_HISTORY_LABEL;
    protected:




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
    private: System::Windows::Forms::CheckBox^  MISSING_PAIN_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  SUPERIOR_PAIN_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  INFERIOR_PAIN_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  MISSING_SURGERY_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  SUPERIOR_SURGERY_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  INFERIOR_SURGERY_CHECKBOX;
    private: System::Windows::Forms::TextBox^  OTHERS_TEXTBOX;

    private: System::Windows::Forms::Label^  PAIN_LABEL;
    private: System::Windows::Forms::Label^  SURGERY_LABEL;
    private: System::Windows::Forms::Label^  OTHERS_RHUMA_LABEL;
    private: System::Windows::Forms::Label^  ARTHRITIS_LABEL;
    private: System::Windows::Forms::Label^  ARTHROSIS_LABEL;
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
            this->RHUMATOLOGIC_HISTORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
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
            this->PAIN_LABEL = (gcnew System::Windows::Forms::Label());
            this->SURGERY_LABEL = (gcnew System::Windows::Forms::Label());
            this->OTHERS_RHUMA_LABEL = (gcnew System::Windows::Forms::Label());
            this->ARTHRITIS_LABEL = (gcnew System::Windows::Forms::Label());
            this->ARTHROSIS_LABEL = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->RHUMATOLOGIC_HISTORY_LABEL->SuspendLayout();
            this->groupBox11->SuspendLayout();
            this->groupBox17->SuspendLayout();
            this->groupBox18->SuspendLayout();
            this->SuspendLayout();
            // 
            // RHUMATOLOGIC_HISTORY_LABEL
            // 
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
            this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->PAIN_LABEL);
            this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->SURGERY_LABEL);
            this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->OTHERS_RHUMA_LABEL);
            this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->ARTHRITIS_LABEL);
            this->RHUMATOLOGIC_HISTORY_LABEL->Controls->Add(this->ARTHROSIS_LABEL);
            this->RHUMATOLOGIC_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->RHUMATOLOGIC_HISTORY_LABEL->Location = System::Drawing::Point(69, 123);
            this->RHUMATOLOGIC_HISTORY_LABEL->Name = L"RHUMATOLOGIC_HISTORY_LABEL";
            this->RHUMATOLOGIC_HISTORY_LABEL->Size = System::Drawing::Size(756, 259);
            this->RHUMATOLOGIC_HISTORY_LABEL->TabIndex = 87;
            this->RHUMATOLOGIC_HISTORY_LABEL->TabStop = false;
            this->RHUMATOLOGIC_HISTORY_LABEL->Text = L"Antécédents Rhumatologiques et orthopédiques";
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
            this->YES_OTHERS_RADIOBUTTONS->CheckedChanged += gcnew System::EventHandler(this, &RheumatologicHistory::YES_OTHERS_RADIOBUTTONS_CheckedChanged);
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
            this->MISSING_PAIN_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &RheumatologicHistory::MISSING_PAIN_CHECKBOX_CheckedChanged);
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
            this->SUPERIOR_PAIN_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &RheumatologicHistory::SUPERIOR_PAIN_CHECKBOX_CheckedChanged);
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
            this->INFERIOR_PAIN_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &RheumatologicHistory::INFERIOR_PAIN_CHECKBOX_CheckedChanged);
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
            this->MISSING_SURGERY_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &RheumatologicHistory::MISSING_SURGERY_CHECKBOX_CheckedChanged);
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
            this->SUPERIOR_SURGERY_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &RheumatologicHistory::SUPERIOR_SURGERY_CHECKBOX_CheckedChanged);
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
            this->INFERIOR_SURGERY_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &RheumatologicHistory::INFERIOR_SURGERY_CHECKBOX_CheckedChanged);
            // 
            // OTHERS_TEXTBOX
            // 
            this->OTHERS_TEXTBOX->Enabled = false;
            this->OTHERS_TEXTBOX->Location = System::Drawing::Point(558, 104);
            this->OTHERS_TEXTBOX->Name = L"OTHERS_TEXTBOX";
            this->OTHERS_TEXTBOX->Size = System::Drawing::Size(179, 29);
            this->OTHERS_TEXTBOX->TabIndex = 99;
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
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label1->Location = System::Drawing::Point(63, 35);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(288, 31);
            this->label1->TabIndex = 88;
            this->label1->Text = L"Rheumatologic History";
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(877, 268);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
            this->CANCEL_BUTTON->TabIndex = 146;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &RheumatologicHistory::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(877, 158);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
            this->REGISTER_BUTTON->TabIndex = 145;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &RheumatologicHistory::REGISTER_BUTTON_Click);
            // 
            // RheumatologicHistory
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1215, 465);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->RHUMATOLOGIC_HISTORY_LABEL);
            this->Name = L"RheumatologicHistory";
            this->Text = L"RheumatologicHistory";
            this->RHUMATOLOGIC_HISTORY_LABEL->ResumeLayout(false);
            this->RHUMATOLOGIC_HISTORY_LABEL->PerformLayout();
            this->groupBox11->ResumeLayout(false);
            this->groupBox11->PerformLayout();
            this->groupBox17->ResumeLayout(false);
            this->groupBox17->PerformLayout();
            this->groupBox18->ResumeLayout(false);
            this->groupBox18->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        // Save Information of the Patient
        completePatientInformationObject();
        RheumatologicHistory::Close();
    }
    
    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        RheumatologicHistory::Close();
    }
    
    private: System::Void YES_OTHERS_RADIOBUTTONS_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        OTHERS_TEXTBOX->Enabled = (YES_OTHERS_RADIOBUTTONS->Checked) ? true : false;
    }

    private: System::Void INFERIOR_SURGERY_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        MISSING_SURGERY_CHECKBOX->Enabled = !(INFERIOR_SURGERY_CHECKBOX->Checked || SUPERIOR_SURGERY_CHECKBOX->Checked);
    }
    
    private: System::Void SUPERIOR_SURGERY_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        MISSING_SURGERY_CHECKBOX->Enabled = !(INFERIOR_SURGERY_CHECKBOX->Checked || SUPERIOR_SURGERY_CHECKBOX->Checked);
    }
    
    private: System::Void MISSING_SURGERY_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        INFERIOR_SURGERY_CHECKBOX->Enabled = !MISSING_SURGERY_CHECKBOX->Checked;
        SUPERIOR_SURGERY_CHECKBOX->Enabled = !MISSING_SURGERY_CHECKBOX->Checked;
    }

    private: System::Void INFERIOR_PAIN_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        MISSING_PAIN_CHECKBOX->Enabled = !(INFERIOR_PAIN_CHECKBOX->Checked || SUPERIOR_PAIN_CHECKBOX->Checked);
    }

    private: System::Void SUPERIOR_PAIN_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        MISSING_PAIN_CHECKBOX->Enabled = !(INFERIOR_PAIN_CHECKBOX->Checked || SUPERIOR_PAIN_CHECKBOX->Checked);
    }
    
    private: System::Void MISSING_PAIN_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        INFERIOR_PAIN_CHECKBOX->Enabled = !MISSING_PAIN_CHECKBOX->Checked;
        SUPERIOR_PAIN_CHECKBOX->Enabled = !MISSING_PAIN_CHECKBOX->Checked;
    }
};
}
