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
    using namespace std;

    /// <summary>
    /// Summary for CompleteECRF
    /// </summary>
    public ref class MedicalHistory : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
    public: Patient* myPatient;
    public:
        MedicalHistory(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_MedicalHistoryForm(currentLanguage);
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MedicalHistory()
        {
            if (components)
            {
                delete components;
            }
        }

    private: void WacomTabletApplication::MedicalHistory::UpdateLanguage_MedicalHistoryForm(String^ language);
    void WacomTabletApplication::MedicalHistory::completePatientInformationObject();
    
    protected:

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





























    private: System::Windows::Forms::Button^  CANCEL_BUTTON;
    private: System::Windows::Forms::Button^  REGISTER_BUTTON;

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

























    private: System::Windows::Forms::Label^  label1;

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
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
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
            this->SuspendLayout();
            // 
            // MEDICAL_INFO_LABEL
            // 
            this->MEDICAL_INFO_LABEL->Controls->Add(this->HEART_FAMILY_HISTORY_LABEL);
            this->MEDICAL_INFO_LABEL->Controls->Add(this->HEART_PERSONAL_HISTORY_LABEL);
            this->MEDICAL_INFO_LABEL->Controls->Add(this->ALZHEIMER_HISTORY_LABEL);
            this->MEDICAL_INFO_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->MEDICAL_INFO_LABEL->Location = System::Drawing::Point(27, 76);
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
            this->YES_HEART_HISTORY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalHistory::YES_HEART_HISTORY_RADIOBUTTON_CheckedChanged);
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
            this->YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalHistory::YES_CVA_HEART_PERSONAL_HISTORY_RADIOBUTTON_CheckedChanged);
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
            this->YES_ALZHEIMER_HISTORY_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &MedicalHistory::YES_ALZHEIMER_HISTORY_RADIOBUTTON_CheckedChanged);
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
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(791, 442);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
            this->CANCEL_BUTTON->TabIndex = 144;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &MedicalHistory::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(791, 332);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
            this->REGISTER_BUTTON->TabIndex = 143;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &MedicalHistory::REGISTER_BUTTON_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label1->Location = System::Drawing::Point(21, 30);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(200, 31);
            this->label1->TabIndex = 145;
            this->label1->Text = L"Medical History";
            // 
            // MedicalHistory
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1091, 670);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->MEDICAL_INFO_LABEL);
            this->Name = L"MedicalHistory";
            this->Text = L"Données Médicales: Partie 1";
            this->Load += gcnew System::EventHandler(this, &MedicalHistory::MedicalHistory_Load);
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
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    
    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        // Save Information of the Patient
        completePatientInformationObject();
        MedicalHistory::Close();
    }
    
    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        MedicalHistory::Close();
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

//private: System::Void YES_RISK_FACTOR_SMOKING_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//	if (ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked || STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked) {
//		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Enabled = true;
//		RISK_FACTOR_SMOKING_YEARS_COUNTER->Enabled = true;
//	}
//	else {
//		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Enabled = false;
//		RISK_FACTOR_SMOKING_YEARS_COUNTER->Enabled = false;
//		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Value = 0;
//		RISK_FACTOR_SMOKING_YEARS_COUNTER->Value = 0;
//	}
//}
//
//private: System::Void STOP_RISK_FACTOR_SMOKING_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//	if (ACTIVE_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked || STOP_RISK_FACTOR_SMOKING_RADIOBUTTON->Checked) {
//		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Enabled = true;
//		RISK_FACTOR_SMOKING_YEARS_COUNTER->Enabled = true;
//	}
//	else {
//		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Enabled = false;
//		RISK_FACTOR_SMOKING_YEARS_COUNTER->Enabled = false;
//		RISK_FACTOR_SMOKING_PACKETS_COUNTER->Value = 0;
//		RISK_FACTOR_SMOKING_YEARS_COUNTER->Value = 0;
//	}
//}
//
//private: System::Void YES_RISK_FACTOR_ALCOHOL_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//	if (ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked || STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked) {
//		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = true;
//	}
//	else {
//		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = false;
//		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Value = 0;
//	}
//}
//
//private: System::Void STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//	if (ACTIVE_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked || STOP_RISK_FACTOR_ALCOHOL_RADIOBUTTON->Checked) {
//		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = true;
//	}
//	else {
//		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Enabled = false;
//		RISK_FACTOR_ALCOHOL_UNITS_COUNTER->Value = 0;
//	}
//}

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

private: System::Void MedicalHistory_Load(System::Object^  sender, System::EventArgs^  e) {
}

};
}