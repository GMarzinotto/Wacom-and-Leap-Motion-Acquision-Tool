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
    /// Summary for OtherAntecedents
    /// </summary>
    public ref class OtherAntecedents : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
    private: System::Windows::Forms::TextBox^  CANCER_DETAIL_TEXTBOX;
    public:

    public:
    public: Patient* myPatient;
    public:
        OtherAntecedents(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_OtherAntecedentsForm(currentLanguage);
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~OtherAntecedents()
        {
            if (components)
            {
                delete components;
            }
        }

    private: void WacomTabletApplication::OtherAntecedents::UpdateLanguage_OtherAntecedentsForm(String^ language);
    void WacomTabletApplication::OtherAntecedents::completePatientInformationObject();

    private: System::Windows::Forms::GroupBox^  OTHER_MORBIDITIES_HISTORIC_LABEL;
    protected:

    private: System::Windows::Forms::DateTimePicker^  CREATININE_MORBIDITIES_DATE_DATEPICKER;
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
    private: System::Windows::Forms::RadioButton^  YES_DEPRESSION_MORBIDITIES_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  NO_DEPRESSION_MORBIDITIES_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  MISSING_DEPRESSION_MORBIDITIES_RADIOBUTTON;
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
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::GroupBox^  OTHER_HISTORY_LABEL;
    private: System::Windows::Forms::TextBox^  OTHER_HISTORY_TEXTBOX;
    private: System::Windows::Forms::RadioButton^  MISSING_OTHER_HISTORY_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  NO_OTHER_HISTORY_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  YES_OTHER_HISTORY_RADIOBUTTON;
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
            this->OTHER_MORBIDITIES_HISTORIC_LABEL = (gcnew System::Windows::Forms::GroupBox());
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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->OTHER_HISTORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->OTHER_HISTORY_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->MISSING_OTHER_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->NO_OTHER_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->YES_OTHER_HISTORY_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->CANCER_DETAIL_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
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
            this->OTHER_HISTORY_LABEL->SuspendLayout();
            this->SuspendLayout();
            // 
            // OTHER_MORBIDITIES_HISTORIC_LABEL
            // 
            this->OTHER_MORBIDITIES_HISTORIC_LABEL->Controls->Add(this->CANCER_DETAIL_TEXTBOX);
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
            this->OTHER_MORBIDITIES_HISTORIC_LABEL->Location = System::Drawing::Point(26, 72);
            this->OTHER_MORBIDITIES_HISTORIC_LABEL->Name = L"OTHER_MORBIDITIES_HISTORIC_LABEL";
            this->OTHER_MORBIDITIES_HISTORIC_LABEL->Size = System::Drawing::Size(703, 452);
            this->OTHER_MORBIDITIES_HISTORIC_LABEL->TabIndex = 69;
            this->OTHER_MORBIDITIES_HISTORIC_LABEL->TabStop = false;
            this->OTHER_MORBIDITIES_HISTORIC_LABEL->Text = L"Antécédents autres co-morbidités";
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
            this->YES_CANCER_MORBIDITIES_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &OtherAntecedents::YES_CANCER_MORBIDITIES_RADIOBUTTON_CheckedChanged);
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
            this->YES_CREATININE_MORBIDITIES_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &OtherAntecedents::YES_CREATININE_MORBIDITIES_RADIOBUTTON_CheckedChanged);
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
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label1->Location = System::Drawing::Point(39, 28);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(241, 31);
            this->label1->TabIndex = 70;
            this->label1->Text = L"Other Antecedents";
            this->label1->Click += gcnew System::EventHandler(this, &OtherAntecedents::label1_Click);
            // 
            // OTHER_HISTORY_LABEL
            // 
            this->OTHER_HISTORY_LABEL->Controls->Add(this->OTHER_HISTORY_TEXTBOX);
            this->OTHER_HISTORY_LABEL->Controls->Add(this->MISSING_OTHER_HISTORY_RADIOBUTTON);
            this->OTHER_HISTORY_LABEL->Controls->Add(this->NO_OTHER_HISTORY_RADIOBUTTON);
            this->OTHER_HISTORY_LABEL->Controls->Add(this->YES_OTHER_HISTORY_RADIOBUTTON);
            this->OTHER_HISTORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->OTHER_HISTORY_LABEL->Location = System::Drawing::Point(746, 72);
            this->OTHER_HISTORY_LABEL->Name = L"OTHER_HISTORY_LABEL";
            this->OTHER_HISTORY_LABEL->Size = System::Drawing::Size(383, 120);
            this->OTHER_HISTORY_LABEL->TabIndex = 140;
            this->OTHER_HISTORY_LABEL->TabStop = false;
            this->OTHER_HISTORY_LABEL->Text = L"Autres Antécédents";
            // 
            // OTHER_HISTORY_TEXTBOX
            // 
            this->OTHER_HISTORY_TEXTBOX->Enabled = false;
            this->OTHER_HISTORY_TEXTBOX->Location = System::Drawing::Point(6, 68);
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
            this->YES_OTHER_HISTORY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &OtherAntecedents::YES_OTHER_HISTORY_RADIOBUTTON_CheckedChanged);
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(945, 304);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(157, 69);
            this->CANCEL_BUTTON->TabIndex = 142;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &OtherAntecedents::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(776, 304);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(157, 69);
            this->REGISTER_BUTTON->TabIndex = 141;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &OtherAntecedents::REGISTER_BUTTON_Click);
            // 
            // CANCER_DETAIL_TEXTBOX
            // 
            this->CANCER_DETAIL_TEXTBOX->Location = System::Drawing::Point(393, 296);
            this->CANCER_DETAIL_TEXTBOX->Name = L"CANCER_DETAIL_TEXTBOX";
            this->CANCER_DETAIL_TEXTBOX->Size = System::Drawing::Size(294, 29);
            this->CANCER_DETAIL_TEXTBOX->TabIndex = 107;
            // 
            // OtherAntecedents
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1171, 536);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->OTHER_HISTORY_LABEL);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->OTHER_MORBIDITIES_HISTORIC_LABEL);
            this->Name = L"OtherAntecedents";
            this->Text = L"OtherAntecedents";
            this->Load += gcnew System::EventHandler(this, &OtherAntecedents::OtherAntecedents_Load);
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
            this->OTHER_HISTORY_LABEL->ResumeLayout(false);
            this->OTHER_HISTORY_LABEL->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        // Save Information of the Patient
        completePatientInformationObject();
        OtherAntecedents::Close();
    }

    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        OtherAntecedents::Close();
    }

    private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
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
        CANCER_DETAIL_TEXTBOX->Enabled = true;
    }
    else {
        CANCER_DETAIL_TEXTBOX->Enabled = false;
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
private: System::Void OtherAntecedents_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
