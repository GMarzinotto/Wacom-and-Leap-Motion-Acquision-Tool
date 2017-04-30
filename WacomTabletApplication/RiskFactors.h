#pragma once
#include <fstream>
#include <string>
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
    /// Summary for RiskFactors
    /// </summary>
    public ref class RiskFactors : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
    private: System::Windows::Forms::Button^  CANCEL_BUTTON;
    public:
    private: System::Windows::Forms::Button^  REGISTER_BUTTON;
    public: Patient *myPatient;
    public:
        RiskFactors(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_RiskFactorsForm(currentLanguage);
            if (!treatAsNew) fillFormWithPreviousPatientData();

        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~RiskFactors()
        {
            if (components)
            {
                delete components;
            }
        }

    void WacomTabletApplication::RiskFactors::UpdateLanguage_RiskFactorsForm(String^);
    void WacomTabletApplication::RiskFactors::completePatientInformationObject();
    void WacomTabletApplication::RiskFactors::fillFormWithPreviousPatientData();

    private: System::Windows::Forms::GroupBox^  LIFESTYLE_LABEL;
    protected:
    private: System::Windows::Forms::GroupBox^  groupBox33;
    private: System::Windows::Forms::RadioButton^  MISSING_RISK_FACTOR_ALCOHOL_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  NEVER_RISK_FACTOR_ALCOHOL_RADIOBUTTON;
    private: System::Windows::Forms::GroupBox^  groupBox32;
    private: System::Windows::Forms::RadioButton^  MISSING_RISK_FACTOR_SMOKING_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  STOP_RISK_FACTOR_SMOKING_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  NEVER_RISK_FACTOR_SMOKING_RADIOBUTTON;
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
    private: System::Windows::Forms::NumericUpDown^  RISK_FACTOR_ALCOHOL_UNITS_COUNTER;
    private: System::Windows::Forms::Label^  RISK_FACTOR_ALCOHOL_UNITS_LABEL;
    private: System::Windows::Forms::NumericUpDown^  RISK_FACTOR_SMOKING_YEARS_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  RISK_FACTOR_SMOKING_PACKETS_COUNTER;
    private: System::Windows::Forms::Label^  RISK_FACTOR_SMOKING_YEARS_LABEL;
    private: System::Windows::Forms::Label^  RISK_FACTOR_SMOKING_PACKAGES_LABEL;
    private: System::Windows::Forms::Label^  RISK_FACTOR_ALCOHOL_LABEL;
    private: System::Windows::Forms::Label^  RISK_FACTOR_SMOKING_LABEL;
    private: System::Windows::Forms::Label^  RISK_FACTOR_HYPERLIPIDEMIA_LABEL;
    private: System::Windows::Forms::Label^  RISK_FACTOR_DIABETES_LABEL;
    private: System::Windows::Forms::Label^  RISK_FACTOR_HYPERTENTION_LABEL;
    private: System::Windows::Forms::Label^  label1;

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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->LIFESTYLE_LABEL->SuspendLayout();
            this->groupBox33->SuspendLayout();
            this->groupBox32->SuspendLayout();
            this->groupBox31->SuspendLayout();
            this->groupBox30->SuspendLayout();
            this->groupBox29->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RISK_FACTOR_ALCOHOL_UNITS_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RISK_FACTOR_SMOKING_YEARS_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RISK_FACTOR_SMOKING_PACKETS_COUNTER))->BeginInit();
            this->SuspendLayout();
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
            this->LIFESTYLE_LABEL->Location = System::Drawing::Point(42, 90);
            this->LIFESTYLE_LABEL->Name = L"LIFESTYLE_LABEL";
            this->LIFESTYLE_LABEL->Size = System::Drawing::Size(703, 315);
            this->LIFESTYLE_LABEL->TabIndex = 110;
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
            this->ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &RiskFactors::ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON_CheckedChanged);
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
            this->ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &RiskFactors::ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON_CheckedChanged);
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
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label1->Location = System::Drawing::Point(36, 38);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(174, 31);
            this->label1->TabIndex = 111;
            this->label1->Text = L"Risk  Factors";
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(817, 251);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(243, 40);
            this->CANCEL_BUTTON->TabIndex = 113;
            this->CANCEL_BUTTON->Text = L"Cancel";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &RiskFactors::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(817, 183);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(237, 39);
            this->REGISTER_BUTTON->TabIndex = 112;
            this->REGISTER_BUTTON->Text = L"Register";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &RiskFactors::REGISTER_BUTTON_Click);
            // 
            // RiskFactors
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1116, 525);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->LIFESTYLE_LABEL);
            this->Name = L"RiskFactors";
            this->Text = L"RiskFactors";
            this->Load += gcnew System::EventHandler(this, &RiskFactors::RiskFactors_Load);
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
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion
    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Save Information of the Patient
        completePatientInformationObject();
        RiskFactors::Close();
    }

    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        RiskFactors::Close();
    }

    private: System::Void ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
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
    private: System::Void ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        if (ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked || STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked) {
            RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = true;
        }
        else {
            RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = false;
            RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Value = 0;
        }
    }
private: System::Void RiskFactors_Load(System::Object^  sender, System::EventArgs^  e) {
}

};
}
