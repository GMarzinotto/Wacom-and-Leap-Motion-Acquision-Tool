#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Dependencies/queryNodes.h"
#include "Patient.h"
#include "LanguageInformation.h"
#include "SocialSituation.h"
#include "RiskFactors.h"
#include "MedicalHistory.h"
#include "OtherAntecedents.h"
#include "Treatments.h"
#include "NeuropsychologicalAssessment.h"
#include "BilanNeuropsychologic.h"
#include "CognitiveDiagnosis.h"
#include "NeurologicHistory.h"
#include "PsychiatricHistory.h"
#include "RheumatologicHistory.h"
#include "DataM12.h"


namespace WacomTabletApplication {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace std;
    
    /// <summary>
    /// Summary for NewPatient
    /// </summary>
    public ref class NewPatient : public System::Windows::Forms::Form
    {
    
    public:

    private: System::Windows::Forms::GroupBox^  groupBox1;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::TextBox^  PRECISE_ARTHROSIS_TEXTBOX;

    private: System::Windows::Forms::RadioButton^  NO_ARTHROSIS_RADIOBUTTON;

    private: System::Windows::Forms::RadioButton^  YES_ARTHROSIS_RADIOBUTTON;
    private: System::Windows::Forms::Button^  LANGUAGE_SELECTION_BUTTON;
    private: System::Windows::Forms::Button^  SOCIAL_SITUATION_BUTTON;
    private: System::Windows::Forms::Button^  OTHER_ANTECEDENTS_BUTTON;
    private: System::Windows::Forms::Button^  RISK_FACTORS_BUTTON;
    private: System::Windows::Forms::Button^  NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON;
    private: System::Windows::Forms::Button^  BILAN_NEUROPSYCOLOGIC_BUTTON;
    private: System::Windows::Forms::Button^  NEUROLOGIC_HISTORY_BUTTON;
    private: System::Windows::Forms::Button^  PSYCHIATRIC_HISTORY_BUTTON;
    private: System::Windows::Forms::Button^  RHEUMATOLOGIC_HISTORY_BUTTON;



    public: Patient *myPatient;
    public: String^ currentLanguage;
    public: bool newPatient;
    public:
        NewPatient(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            newPatient = treatAsNew;
            InitializeComponent();
            UpdateLanguage_NewPatientForm(currentLanguage);
            if (!treatAsNew) {
                // Read Patient Info from file
                ReadPatientInfoFile(myPatient->basicInfo.getID());
                fillFormWithPreviousPatientData();
            }
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~NewPatient()
        {
            if (components)
            {
                delete components;
            }
        }
    protected:

    private: void WacomTabletApplication::NewPatient::UpdateLanguage_NewPatientForm(String^ language);
    private: void WacomTabletApplication::NewPatient::UpdateLanguage_ProfessionCombobox_NewPatientForm(String^ language);
    private: bool WacomTabletApplication::NewPatient::isFormularyOk();
    private: void WacomTabletApplication::NewPatient::completePatientInformationObject();
    private: void WacomTabletApplication::NewPatient::fillFormWithPreviousPatientData();
    private: void WacomTabletApplication::NewPatient::RegisterNewPatient();
    private: BOOL WacomTabletApplication::NewPatient::PatientAlreadyExist();
    private: BOOL WacomTabletApplication::NewPatient::DirectoryExists(LPCTSTR szPath);
    private: BOOL WacomTabletApplication::NewPatient::PatientIsInPatientList();
    private: BOOL WacomTabletApplication::NewPatient::ReadPatientInfoFile(String^ patientID);
    private: BOOL WacomTabletApplication::NewPatient::createAndPrintPatientSubdirectories();

    private: System::Windows::Forms::RadioButton^  MALEGENDER_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  FEMALEGENDER_RADIOBUTTON;
    public: System::Windows::Forms::TextBox^  ID_TEXTBOX;

    private: System::Windows::Forms::Label^  ID_LABEL;

    private: System::Windows::Forms::Label^  BIRTHDATE_LABEL;

    private: System::Windows::Forms::RadioButton^  LEFT_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  RIGHT_RADIOBUTTON;



    private: System::Windows::Forms::Button^  REGISTER_BUTTON;
    private: System::Windows::Forms::Button^  CANCEL_BUTTON;
    private: System::Windows::Forms::GroupBox^  HANDEDNESS_LABEL;
    private: System::Windows::Forms::GroupBox^  GENDER_LABEL;
    private: System::Windows::Forms::CheckBox^  FORCEDRIGHT_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  AMBIDEXTER_CHECKBOX;

    public: System::Windows::Forms::DateTimePicker^  BIRTHDATE_DAYPICKER;








    private: System::Windows::Forms::Button^  MEDICAL_HISTORY_BUTTON;

    private: System::Windows::Forms::GroupBox^  VISION_PROBLEMS_LABEL;
    private: System::Windows::Forms::RadioButton^  NO_VISION_PROBLEMS_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  YES_VISION_PROBLEMS_RADIOBUTTON;
    private: System::Windows::Forms::Label^  PRECISE_VISION_PROBLEMS_LABEL;
    private: System::Windows::Forms::TextBox^  PRECISE_VISION_PROBLEMS_TEXTBOX;
    private: System::Windows::Forms::Label^  OTHER_COMMENTS_LABEL;
    private: System::Windows::Forms::TextBox^  OTHER_COMMENTS_TEXTBOX;
    private: System::Windows::Forms::Button^  DATA_M12_BUTTON;

    private: System::Windows::Forms::Button^  COGNITIVE_DIAGNOSIS_BUTTON;

    private: System::Windows::Forms::Button^  TREATMENTS_BUTTON;

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
			this->MALEGENDER_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->FEMALEGENDER_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->ID_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->ID_LABEL = (gcnew System::Windows::Forms::Label());
			this->BIRTHDATE_LABEL = (gcnew System::Windows::Forms::Label());
			this->LEFT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->RIGHT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
			this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
			this->HANDEDNESS_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->AMBIDEXTER_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->FORCEDRIGHT_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->GENDER_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->BIRTHDATE_DAYPICKER = (gcnew System::Windows::Forms::DateTimePicker());
			this->MEDICAL_HISTORY_BUTTON = (gcnew System::Windows::Forms::Button());
			this->VISION_PROBLEMS_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->PRECISE_VISION_PROBLEMS_LABEL = (gcnew System::Windows::Forms::Label());
			this->PRECISE_VISION_PROBLEMS_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->NO_VISION_PROBLEMS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->YES_VISION_PROBLEMS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->OTHER_COMMENTS_LABEL = (gcnew System::Windows::Forms::Label());
			this->OTHER_COMMENTS_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->DATA_M12_BUTTON = (gcnew System::Windows::Forms::Button());
			this->COGNITIVE_DIAGNOSIS_BUTTON = (gcnew System::Windows::Forms::Button());
			this->TREATMENTS_BUTTON = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PRECISE_ARTHROSIS_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->NO_ARTHROSIS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->YES_ARTHROSIS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->LANGUAGE_SELECTION_BUTTON = (gcnew System::Windows::Forms::Button());
			this->SOCIAL_SITUATION_BUTTON = (gcnew System::Windows::Forms::Button());
			this->OTHER_ANTECEDENTS_BUTTON = (gcnew System::Windows::Forms::Button());
			this->RISK_FACTORS_BUTTON = (gcnew System::Windows::Forms::Button());
			this->NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON = (gcnew System::Windows::Forms::Button());
			this->BILAN_NEUROPSYCOLOGIC_BUTTON = (gcnew System::Windows::Forms::Button());
			this->NEUROLOGIC_HISTORY_BUTTON = (gcnew System::Windows::Forms::Button());
			this->PSYCHIATRIC_HISTORY_BUTTON = (gcnew System::Windows::Forms::Button());
			this->RHEUMATOLOGIC_HISTORY_BUTTON = (gcnew System::Windows::Forms::Button());
			this->HANDEDNESS_LABEL->SuspendLayout();
			this->GENDER_LABEL->SuspendLayout();
			this->VISION_PROBLEMS_LABEL->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// MALEGENDER_RADIOBUTTON
			// 
			this->MALEGENDER_RADIOBUTTON->AutoSize = true;
			this->MALEGENDER_RADIOBUTTON->Location = System::Drawing::Point(12, 47);
			this->MALEGENDER_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MALEGENDER_RADIOBUTTON->Name = L"MALEGENDER_RADIOBUTTON";
			this->MALEGENDER_RADIOBUTTON->Size = System::Drawing::Size(44, 28);
			this->MALEGENDER_RADIOBUTTON->TabIndex = 14;
			this->MALEGENDER_RADIOBUTTON->TabStop = true;
			this->MALEGENDER_RADIOBUTTON->Text = L"M";
			this->MALEGENDER_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// FEMALEGENDER_RADIOBUTTON
			// 
			this->FEMALEGENDER_RADIOBUTTON->AutoSize = true;
			this->FEMALEGENDER_RADIOBUTTON->Location = System::Drawing::Point(91, 47);
			this->FEMALEGENDER_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->FEMALEGENDER_RADIOBUTTON->Name = L"FEMALEGENDER_RADIOBUTTON";
			this->FEMALEGENDER_RADIOBUTTON->Size = System::Drawing::Size(40, 28);
			this->FEMALEGENDER_RADIOBUTTON->TabIndex = 15;
			this->FEMALEGENDER_RADIOBUTTON->TabStop = true;
			this->FEMALEGENDER_RADIOBUTTON->Text = L"F";
			this->FEMALEGENDER_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// ID_TEXTBOX
			// 
			this->ID_TEXTBOX->Location = System::Drawing::Point(54, 38);
			this->ID_TEXTBOX->Margin = System::Windows::Forms::Padding(6);
			this->ID_TEXTBOX->Name = L"ID_TEXTBOX";
			this->ID_TEXTBOX->Size = System::Drawing::Size(347, 29);
			this->ID_TEXTBOX->TabIndex = 1;
			// 
			// ID_LABEL
			// 
			this->ID_LABEL->AutoSize = true;
			this->ID_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_LABEL->Location = System::Drawing::Point(49, 9);
			this->ID_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->ID_LABEL->Name = L"ID_LABEL";
			this->ID_LABEL->Size = System::Drawing::Size(88, 24);
			this->ID_LABEL->TabIndex = 1;
			this->ID_LABEL->Text = L"Idéntifiant";
			// 
			// BIRTHDATE_LABEL
			// 
			this->BIRTHDATE_LABEL->AutoSize = true;
			this->BIRTHDATE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BIRTHDATE_LABEL->Location = System::Drawing::Point(49, 93);
			this->BIRTHDATE_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->BIRTHDATE_LABEL->Name = L"BIRTHDATE_LABEL";
			this->BIRTHDATE_LABEL->Size = System::Drawing::Size(168, 24);
			this->BIRTHDATE_LABEL->TabIndex = 8;
			this->BIRTHDATE_LABEL->Text = L"Date de Naissance";
			// 
			// LEFT_RADIOBUTTON
			// 
			this->LEFT_RADIOBUTTON->AutoSize = true;
			this->LEFT_RADIOBUTTON->Location = System::Drawing::Point(22, 61);
			this->LEFT_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->LEFT_RADIOBUTTON->Name = L"LEFT_RADIOBUTTON";
			this->LEFT_RADIOBUTTON->Size = System::Drawing::Size(101, 28);
			this->LEFT_RADIOBUTTON->TabIndex = 11;
			this->LEFT_RADIOBUTTON->TabStop = true;
			this->LEFT_RADIOBUTTON->Text = L"Gaucher";
			this->LEFT_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// RIGHT_RADIOBUTTON
			// 
			this->RIGHT_RADIOBUTTON->AutoSize = true;
			this->RIGHT_RADIOBUTTON->Location = System::Drawing::Point(22, 30);
			this->RIGHT_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->RIGHT_RADIOBUTTON->Name = L"RIGHT_RADIOBUTTON";
			this->RIGHT_RADIOBUTTON->Size = System::Drawing::Size(87, 28);
			this->RIGHT_RADIOBUTTON->TabIndex = 10;
			this->RIGHT_RADIOBUTTON->TabStop = true;
			this->RIGHT_RADIOBUTTON->Text = L"Droitier";
			this->RIGHT_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// REGISTER_BUTTON
			// 
			this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REGISTER_BUTTON->Location = System::Drawing::Point(664, 655);
			this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
			this->REGISTER_BUTTON->Size = System::Drawing::Size(284, 96);
			this->REGISTER_BUTTON->TabIndex = 43;
			this->REGISTER_BUTTON->Text = L"Enregistrer";
			this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
			this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::REGISTER_BUTTON_Click);
			// 
			// CANCEL_BUTTON
			// 
			this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CANCEL_BUTTON->Location = System::Drawing::Point(318, 656);
			this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
			this->CANCEL_BUTTON->Size = System::Drawing::Size(284, 95);
			this->CANCEL_BUTTON->TabIndex = 44;
			this->CANCEL_BUTTON->Text = L"Annuler";
			this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
			this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::CANCEL_BUTTON_Click);
			// 
			// HANDEDNESS_LABEL
			// 
			this->HANDEDNESS_LABEL->Controls->Add(this->AMBIDEXTER_CHECKBOX);
			this->HANDEDNESS_LABEL->Controls->Add(this->FORCEDRIGHT_CHECKBOX);
			this->HANDEDNESS_LABEL->Controls->Add(this->LEFT_RADIOBUTTON);
			this->HANDEDNESS_LABEL->Controls->Add(this->RIGHT_RADIOBUTTON);
			this->HANDEDNESS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HANDEDNESS_LABEL->Location = System::Drawing::Point(512, 93);
			this->HANDEDNESS_LABEL->Margin = System::Windows::Forms::Padding(6);
			this->HANDEDNESS_LABEL->Name = L"HANDEDNESS_LABEL";
			this->HANDEDNESS_LABEL->Padding = System::Windows::Forms::Padding(6);
			this->HANDEDNESS_LABEL->Size = System::Drawing::Size(344, 99);
			this->HANDEDNESS_LABEL->TabIndex = 10;
			this->HANDEDNESS_LABEL->TabStop = false;
			this->HANDEDNESS_LABEL->Text = L"Pour écrire le patient est";
			// 
			// AMBIDEXTER_CHECKBOX
			// 
			this->AMBIDEXTER_CHECKBOX->AutoSize = true;
			this->AMBIDEXTER_CHECKBOX->Location = System::Drawing::Point(152, 62);
			this->AMBIDEXTER_CHECKBOX->Name = L"AMBIDEXTER_CHECKBOX";
			this->AMBIDEXTER_CHECKBOX->Size = System::Drawing::Size(126, 28);
			this->AMBIDEXTER_CHECKBOX->TabIndex = 13;
			this->AMBIDEXTER_CHECKBOX->Text = L"Ambidextre";
			this->AMBIDEXTER_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// FORCEDRIGHT_CHECKBOX
			// 
			this->FORCEDRIGHT_CHECKBOX->AutoSize = true;
			this->FORCEDRIGHT_CHECKBOX->Location = System::Drawing::Point(152, 30);
			this->FORCEDRIGHT_CHECKBOX->Name = L"FORCEDRIGHT_CHECKBOX";
			this->FORCEDRIGHT_CHECKBOX->Size = System::Drawing::Size(183, 28);
			this->FORCEDRIGHT_CHECKBOX->TabIndex = 12;
			this->FORCEDRIGHT_CHECKBOX->Text = L"Gaucher Contrarié";
			this->FORCEDRIGHT_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// GENDER_LABEL
			// 
			this->GENDER_LABEL->Controls->Add(this->FEMALEGENDER_RADIOBUTTON);
			this->GENDER_LABEL->Controls->Add(this->MALEGENDER_RADIOBUTTON);
			this->GENDER_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GENDER_LABEL->Location = System::Drawing::Point(306, 93);
			this->GENDER_LABEL->Margin = System::Windows::Forms::Padding(6);
			this->GENDER_LABEL->Name = L"GENDER_LABEL";
			this->GENDER_LABEL->Padding = System::Windows::Forms::Padding(6);
			this->GENDER_LABEL->Size = System::Drawing::Size(175, 99);
			this->GENDER_LABEL->TabIndex = 14;
			this->GENDER_LABEL->TabStop = false;
			this->GENDER_LABEL->Text = L"Genre";
			// 
			// BIRTHDATE_DAYPICKER
			// 
			this->BIRTHDATE_DAYPICKER->Location = System::Drawing::Point(53, 120);
			this->BIRTHDATE_DAYPICKER->MaxDate = System::DateTime(3000, 1, 1, 0, 0, 0, 0);
			this->BIRTHDATE_DAYPICKER->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->BIRTHDATE_DAYPICKER->Name = L"BIRTHDATE_DAYPICKER";
			this->BIRTHDATE_DAYPICKER->Size = System::Drawing::Size(188, 29);
			this->BIRTHDATE_DAYPICKER->TabIndex = 8;
			this->BIRTHDATE_DAYPICKER->Value = System::DateTime(2016, 4, 20, 0, 0, 0, 0);
			// 
			// MEDICAL_HISTORY_BUTTON
			// 
			this->MEDICAL_HISTORY_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MEDICAL_HISTORY_BUTTON->Location = System::Drawing::Point(908, 272);
			this->MEDICAL_HISTORY_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MEDICAL_HISTORY_BUTTON->Name = L"MEDICAL_HISTORY_BUTTON";
			this->MEDICAL_HISTORY_BUTTON->Size = System::Drawing::Size(231, 69);
			this->MEDICAL_HISTORY_BUTTON->TabIndex = 45;
			this->MEDICAL_HISTORY_BUTTON->Text = L"Medical History";
			this->MEDICAL_HISTORY_BUTTON->UseVisualStyleBackColor = true;
			this->MEDICAL_HISTORY_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::MEDICAL_HISTORY_BUTTON_Click);
			// 
			// VISION_PROBLEMS_LABEL
			// 
			this->VISION_PROBLEMS_LABEL->Controls->Add(this->PRECISE_VISION_PROBLEMS_LABEL);
			this->VISION_PROBLEMS_LABEL->Controls->Add(this->PRECISE_VISION_PROBLEMS_TEXTBOX);
			this->VISION_PROBLEMS_LABEL->Controls->Add(this->NO_VISION_PROBLEMS_RADIOBUTTON);
			this->VISION_PROBLEMS_LABEL->Controls->Add(this->YES_VISION_PROBLEMS_RADIOBUTTON);
			this->VISION_PROBLEMS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->VISION_PROBLEMS_LABEL->Location = System::Drawing::Point(54, 221);
			this->VISION_PROBLEMS_LABEL->Margin = System::Windows::Forms::Padding(6);
			this->VISION_PROBLEMS_LABEL->Name = L"VISION_PROBLEMS_LABEL";
			this->VISION_PROBLEMS_LABEL->Padding = System::Windows::Forms::Padding(6);
			this->VISION_PROBLEMS_LABEL->Size = System::Drawing::Size(388, 108);
			this->VISION_PROBLEMS_LABEL->TabIndex = 39;
			this->VISION_PROBLEMS_LABEL->TabStop = false;
			this->VISION_PROBLEMS_LABEL->Text = L"Difficultés de Vision pour l\'Exercice";
			// 
			// PRECISE_VISION_PROBLEMS_LABEL
			// 
			this->PRECISE_VISION_PROBLEMS_LABEL->AutoSize = true;
			this->PRECISE_VISION_PROBLEMS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PRECISE_VISION_PROBLEMS_LABEL->Location = System::Drawing::Point(2, 73);
			this->PRECISE_VISION_PROBLEMS_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->PRECISE_VISION_PROBLEMS_LABEL->Name = L"PRECISE_VISION_PROBLEMS_LABEL";
			this->PRECISE_VISION_PROBLEMS_LABEL->Size = System::Drawing::Size(87, 24);
			this->PRECISE_VISION_PROBLEMS_LABEL->TabIndex = 41;
			this->PRECISE_VISION_PROBLEMS_LABEL->Text = L"Précisez:";
			// 
			// PRECISE_VISION_PROBLEMS_TEXTBOX
			// 
			this->PRECISE_VISION_PROBLEMS_TEXTBOX->Enabled = false;
			this->PRECISE_VISION_PROBLEMS_TEXTBOX->Location = System::Drawing::Point(92, 70);
			this->PRECISE_VISION_PROBLEMS_TEXTBOX->Name = L"PRECISE_VISION_PROBLEMS_TEXTBOX";
			this->PRECISE_VISION_PROBLEMS_TEXTBOX->Size = System::Drawing::Size(269, 29);
			this->PRECISE_VISION_PROBLEMS_TEXTBOX->TabIndex = 41;
			// 
			// NO_VISION_PROBLEMS_RADIOBUTTON
			// 
			this->NO_VISION_PROBLEMS_RADIOBUTTON->AutoSize = true;
			this->NO_VISION_PROBLEMS_RADIOBUTTON->Location = System::Drawing::Point(108, 35);
			this->NO_VISION_PROBLEMS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_VISION_PROBLEMS_RADIOBUTTON->Name = L"NO_VISION_PROBLEMS_RADIOBUTTON";
			this->NO_VISION_PROBLEMS_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_VISION_PROBLEMS_RADIOBUTTON->TabIndex = 40;
			this->NO_VISION_PROBLEMS_RADIOBUTTON->TabStop = true;
			this->NO_VISION_PROBLEMS_RADIOBUTTON->Text = L"Non";
			this->NO_VISION_PROBLEMS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// YES_VISION_PROBLEMS_RADIOBUTTON
			// 
			this->YES_VISION_PROBLEMS_RADIOBUTTON->AutoSize = true;
			this->YES_VISION_PROBLEMS_RADIOBUTTON->Location = System::Drawing::Point(26, 35);
			this->YES_VISION_PROBLEMS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_VISION_PROBLEMS_RADIOBUTTON->Name = L"YES_VISION_PROBLEMS_RADIOBUTTON";
			this->YES_VISION_PROBLEMS_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_VISION_PROBLEMS_RADIOBUTTON->TabIndex = 39;
			this->YES_VISION_PROBLEMS_RADIOBUTTON->TabStop = true;
			this->YES_VISION_PROBLEMS_RADIOBUTTON->Text = L"Oui";
			this->YES_VISION_PROBLEMS_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_VISION_PROBLEMS_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &NewPatient::YES_VISION_PROBLEMS_RADIOBUTTON_CheckedChanged);
			// 
			// OTHER_COMMENTS_LABEL
			// 
			this->OTHER_COMMENTS_LABEL->AutoSize = true;
			this->OTHER_COMMENTS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OTHER_COMMENTS_LABEL->Location = System::Drawing::Point(50, 352);
			this->OTHER_COMMENTS_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->OTHER_COMMENTS_LABEL->Name = L"OTHER_COMMENTS_LABEL";
			this->OTHER_COMMENTS_LABEL->Size = System::Drawing::Size(191, 24);
			this->OTHER_COMMENTS_LABEL->TabIndex = 42;
			this->OTHER_COMMENTS_LABEL->Text = L"Autres Commentaires";
			// 
			// OTHER_COMMENTS_TEXTBOX
			// 
			this->OTHER_COMMENTS_TEXTBOX->Location = System::Drawing::Point(54, 386);
			this->OTHER_COMMENTS_TEXTBOX->Name = L"OTHER_COMMENTS_TEXTBOX";
			this->OTHER_COMMENTS_TEXTBOX->Size = System::Drawing::Size(556, 29);
			this->OTHER_COMMENTS_TEXTBOX->TabIndex = 42;
			// 
			// DATA_M12_BUTTON
			// 
			this->DATA_M12_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DATA_M12_BUTTON->Location = System::Drawing::Point(908, 548);
			this->DATA_M12_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->DATA_M12_BUTTON->Name = L"DATA_M12_BUTTON";
			this->DATA_M12_BUTTON->Size = System::Drawing::Size(231, 69);
			this->DATA_M12_BUTTON->TabIndex = 48;
			this->DATA_M12_BUTTON->Text = L"Data M12";
			this->DATA_M12_BUTTON->UseVisualStyleBackColor = true;
			this->DATA_M12_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::MEDICALDATA_PT4_BUTTON_Click);
			// 
			// COGNITIVE_DIAGNOSIS_BUTTON
			// 
			this->COGNITIVE_DIAGNOSIS_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->COGNITIVE_DIAGNOSIS_BUTTON->Location = System::Drawing::Point(397, 548);
			this->COGNITIVE_DIAGNOSIS_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->COGNITIVE_DIAGNOSIS_BUTTON->Name = L"COGNITIVE_DIAGNOSIS_BUTTON";
			this->COGNITIVE_DIAGNOSIS_BUTTON->Size = System::Drawing::Size(231, 69);
			this->COGNITIVE_DIAGNOSIS_BUTTON->TabIndex = 47;
			this->COGNITIVE_DIAGNOSIS_BUTTON->Text = L"Cognitive Diagnosis";
			this->COGNITIVE_DIAGNOSIS_BUTTON->UseVisualStyleBackColor = true;
			this->COGNITIVE_DIAGNOSIS_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::MEDICALDATA_PT3_BUTTON_Click);
			// 
			// TREATMENTS_BUTTON
			// 
			this->TREATMENTS_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TREATMENTS_BUTTON->Location = System::Drawing::Point(650, 458);
			this->TREATMENTS_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->TREATMENTS_BUTTON->Name = L"TREATMENTS_BUTTON";
			this->TREATMENTS_BUTTON->Size = System::Drawing::Size(231, 69);
			this->TREATMENTS_BUTTON->TabIndex = 46;
			this->TREATMENTS_BUTTON->Text = L"Treatments";
			this->TREATMENTS_BUTTON->UseVisualStyleBackColor = true;
			this->TREATMENTS_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::MEDICALDATA_PT2_BUTTON_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->PRECISE_ARTHROSIS_TEXTBOX);
			this->groupBox1->Controls->Add(this->NO_ARTHROSIS_RADIOBUTTON);
			this->groupBox1->Controls->Add(this->YES_ARTHROSIS_RADIOBUTTON);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(468, 221);
			this->groupBox1->Margin = System::Windows::Forms::Padding(6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(6);
			this->groupBox1->Size = System::Drawing::Size(388, 108);
			this->groupBox1->TabIndex = 51;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Problème d\'Arthrose pour l\'Exercise";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 73);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 24);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Précisez:";
			// 
			// PRECISE_ARTHROSIS_TEXTBOX
			// 
			this->PRECISE_ARTHROSIS_TEXTBOX->Enabled = false;
			this->PRECISE_ARTHROSIS_TEXTBOX->Location = System::Drawing::Point(92, 70);
			this->PRECISE_ARTHROSIS_TEXTBOX->Name = L"PRECISE_ARTHROSIS_TEXTBOX";
			this->PRECISE_ARTHROSIS_TEXTBOX->Size = System::Drawing::Size(269, 29);
			this->PRECISE_ARTHROSIS_TEXTBOX->TabIndex = 41;
			// 
			// NO_ARTHROSIS_RADIOBUTTON
			// 
			this->NO_ARTHROSIS_RADIOBUTTON->AutoSize = true;
			this->NO_ARTHROSIS_RADIOBUTTON->Location = System::Drawing::Point(108, 35);
			this->NO_ARTHROSIS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_ARTHROSIS_RADIOBUTTON->Name = L"NO_ARTHROSIS_RADIOBUTTON";
			this->NO_ARTHROSIS_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_ARTHROSIS_RADIOBUTTON->TabIndex = 40;
			this->NO_ARTHROSIS_RADIOBUTTON->TabStop = true;
			this->NO_ARTHROSIS_RADIOBUTTON->Text = L"Non";
			this->NO_ARTHROSIS_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// YES_ARTHROSIS_RADIOBUTTON
			// 
			this->YES_ARTHROSIS_RADIOBUTTON->AutoSize = true;
			this->YES_ARTHROSIS_RADIOBUTTON->Location = System::Drawing::Point(26, 35);
			this->YES_ARTHROSIS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_ARTHROSIS_RADIOBUTTON->Name = L"YES_ARTHROSIS_RADIOBUTTON";
			this->YES_ARTHROSIS_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_ARTHROSIS_RADIOBUTTON->TabIndex = 39;
			this->YES_ARTHROSIS_RADIOBUTTON->TabStop = true;
			this->YES_ARTHROSIS_RADIOBUTTON->Text = L"Oui";
			this->YES_ARTHROSIS_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->YES_ARTHROSIS_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &NewPatient::YES_ARTHROSE_RADIOBUTTON_CheckedChanged);
			// 
			// LANGUAGE_SELECTION_BUTTON
			// 
			this->LANGUAGE_SELECTION_BUTTON->Location = System::Drawing::Point(908, 93);
			this->LANGUAGE_SELECTION_BUTTON->Name = L"LANGUAGE_SELECTION_BUTTON";
			this->LANGUAGE_SELECTION_BUTTON->Size = System::Drawing::Size(231, 69);
			this->LANGUAGE_SELECTION_BUTTON->TabIndex = 52;
			this->LANGUAGE_SELECTION_BUTTON->Text = L"Language Selection";
			this->LANGUAGE_SELECTION_BUTTON->UseVisualStyleBackColor = true;
			this->LANGUAGE_SELECTION_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::LANGUAGE_SELECTION_BUTTON_Click);
			// 
			// SOCIAL_SITUATION_BUTTON
			// 
			this->SOCIAL_SITUATION_BUTTON->Location = System::Drawing::Point(908, 185);
			this->SOCIAL_SITUATION_BUTTON->Name = L"SOCIAL_SITUATION_BUTTON";
			this->SOCIAL_SITUATION_BUTTON->Size = System::Drawing::Size(231, 69);
			this->SOCIAL_SITUATION_BUTTON->TabIndex = 53;
			this->SOCIAL_SITUATION_BUTTON->Text = L"Social Situation";
			this->SOCIAL_SITUATION_BUTTON->UseVisualStyleBackColor = true;
			this->SOCIAL_SITUATION_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::SOCIAL_SITUATION_BUTTON_Click);
			// 
			// OTHER_ANTECEDENTS_BUTTON
			// 
			this->OTHER_ANTECEDENTS_BUTTON->Location = System::Drawing::Point(908, 367);
			this->OTHER_ANTECEDENTS_BUTTON->Name = L"OTHER_ANTECEDENTS_BUTTON";
			this->OTHER_ANTECEDENTS_BUTTON->Size = System::Drawing::Size(231, 69);
			this->OTHER_ANTECEDENTS_BUTTON->TabIndex = 54;
			this->OTHER_ANTECEDENTS_BUTTON->Text = L"Other Antecedents";
			this->OTHER_ANTECEDENTS_BUTTON->UseVisualStyleBackColor = true;
			this->OTHER_ANTECEDENTS_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::OTHER_ANTECEDENTS_BUTTON_Click);
			// 
			// RISK_FACTORS_BUTTON
			// 
			this->RISK_FACTORS_BUTTON->Location = System::Drawing::Point(650, 367);
			this->RISK_FACTORS_BUTTON->Name = L"RISK_FACTORS_BUTTON";
			this->RISK_FACTORS_BUTTON->Size = System::Drawing::Size(231, 69);
			this->RISK_FACTORS_BUTTON->TabIndex = 55;
			this->RISK_FACTORS_BUTTON->Text = L"Risk Factors";
			this->RISK_FACTORS_BUTTON->UseVisualStyleBackColor = true;
			this->RISK_FACTORS_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::RISK_FACTORS_BUTTON_Click);
			// 
			// NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON
			// 
			this->NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON->Location = System::Drawing::Point(131, 458);
			this->NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON->Name = L"NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON";
			this->NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON->Size = System::Drawing::Size(231, 69);
			this->NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON->TabIndex = 56;
			this->NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON->Text = L"Neuropsychological Assessment";
			this->NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON->UseVisualStyleBackColor = true;
			this->NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON_Click);
			// 
			// BILAN_NEUROPSYCOLOGIC_BUTTON
			// 
			this->BILAN_NEUROPSYCOLOGIC_BUTTON->Location = System::Drawing::Point(397, 458);
			this->BILAN_NEUROPSYCOLOGIC_BUTTON->Name = L"BILAN_NEUROPSYCOLOGIC_BUTTON";
			this->BILAN_NEUROPSYCOLOGIC_BUTTON->Size = System::Drawing::Size(231, 69);
			this->BILAN_NEUROPSYCOLOGIC_BUTTON->TabIndex = 57;
			this->BILAN_NEUROPSYCOLOGIC_BUTTON->Text = L"Bilan Neuropsychologic";
			this->BILAN_NEUROPSYCOLOGIC_BUTTON->UseVisualStyleBackColor = true;
			this->BILAN_NEUROPSYCOLOGIC_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::BILAN_NEUROPSYCOLOGIC_BUTTON_Click);
			// 
			// NEUROLOGIC_HISTORY_BUTTON
			// 
			this->NEUROLOGIC_HISTORY_BUTTON->Location = System::Drawing::Point(908, 458);
			this->NEUROLOGIC_HISTORY_BUTTON->Name = L"NEUROLOGIC_HISTORY_BUTTON";
			this->NEUROLOGIC_HISTORY_BUTTON->Size = System::Drawing::Size(231, 69);
			this->NEUROLOGIC_HISTORY_BUTTON->TabIndex = 58;
			this->NEUROLOGIC_HISTORY_BUTTON->Text = L"Neurologic History";
			this->NEUROLOGIC_HISTORY_BUTTON->UseVisualStyleBackColor = true;
			this->NEUROLOGIC_HISTORY_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::NEUROLOGIC_HISTORY_BUTTON_Click);
			// 
			// PSYCHIATRIC_HISTORY_BUTTON
			// 
			this->PSYCHIATRIC_HISTORY_BUTTON->Location = System::Drawing::Point(128, 548);
			this->PSYCHIATRIC_HISTORY_BUTTON->Name = L"PSYCHIATRIC_HISTORY_BUTTON";
			this->PSYCHIATRIC_HISTORY_BUTTON->Size = System::Drawing::Size(234, 69);
			this->PSYCHIATRIC_HISTORY_BUTTON->TabIndex = 59;
			this->PSYCHIATRIC_HISTORY_BUTTON->Text = L"Psychiatric History";
			this->PSYCHIATRIC_HISTORY_BUTTON->UseVisualStyleBackColor = true;
			this->PSYCHIATRIC_HISTORY_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::PSYCHIATRIC_HISTORY_BUTTON_Click);
			// 
			// RHEUMATOLOGIC_HISTORY_BUTTON
			// 
			this->RHEUMATOLOGIC_HISTORY_BUTTON->Location = System::Drawing::Point(650, 548);
			this->RHEUMATOLOGIC_HISTORY_BUTTON->Name = L"RHEUMATOLOGIC_HISTORY_BUTTON";
			this->RHEUMATOLOGIC_HISTORY_BUTTON->Size = System::Drawing::Size(231, 69);
			this->RHEUMATOLOGIC_HISTORY_BUTTON->TabIndex = 60;
			this->RHEUMATOLOGIC_HISTORY_BUTTON->Text = L"Rheumatologic History";
			this->RHEUMATOLOGIC_HISTORY_BUTTON->UseVisualStyleBackColor = true;
			this->RHEUMATOLOGIC_HISTORY_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::RHEUMATOLOGIC_HISTORY_BUTTON_Click);
			// 
			// NewPatient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1206, 766);
			this->Controls->Add(this->RHEUMATOLOGIC_HISTORY_BUTTON);
			this->Controls->Add(this->PSYCHIATRIC_HISTORY_BUTTON);
			this->Controls->Add(this->NEUROLOGIC_HISTORY_BUTTON);
			this->Controls->Add(this->BILAN_NEUROPSYCOLOGIC_BUTTON);
			this->Controls->Add(this->NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON);
			this->Controls->Add(this->RISK_FACTORS_BUTTON);
			this->Controls->Add(this->OTHER_ANTECEDENTS_BUTTON);
			this->Controls->Add(this->SOCIAL_SITUATION_BUTTON);
			this->Controls->Add(this->LANGUAGE_SELECTION_BUTTON);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->DATA_M12_BUTTON);
			this->Controls->Add(this->COGNITIVE_DIAGNOSIS_BUTTON);
			this->Controls->Add(this->TREATMENTS_BUTTON);
			this->Controls->Add(this->OTHER_COMMENTS_TEXTBOX);
			this->Controls->Add(this->OTHER_COMMENTS_LABEL);
			this->Controls->Add(this->VISION_PROBLEMS_LABEL);
			this->Controls->Add(this->MEDICAL_HISTORY_BUTTON);
			this->Controls->Add(this->BIRTHDATE_DAYPICKER);
			this->Controls->Add(this->GENDER_LABEL);
			this->Controls->Add(this->HANDEDNESS_LABEL);
			this->Controls->Add(this->CANCEL_BUTTON);
			this->Controls->Add(this->REGISTER_BUTTON);
			this->Controls->Add(this->BIRTHDATE_LABEL);
			this->Controls->Add(this->ID_LABEL);
			this->Controls->Add(this->ID_TEXTBOX);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"NewPatient";
			this->Text = L"s";
			this->Load += gcnew System::EventHandler(this, &NewPatient::NewPatient_Load);
			this->HANDEDNESS_LABEL->ResumeLayout(false);
			this->HANDEDNESS_LABEL->PerformLayout();
			this->GENDER_LABEL->ResumeLayout(false);
			this->GENDER_LABEL->PerformLayout();
			this->VISION_PROBLEMS_LABEL->ResumeLayout(false);
			this->VISION_PROBLEMS_LABEL->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

    private: System::Void NewPatient_Load(System::Object^  sender, System::EventArgs^  e) {
    }

    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        NewPatient::Close();
    }

    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Save Information of the Patient

        //if (isFormularyOk()) {
        if (true) {
            //TODO: CHECK IF PATIENT RECORDS FOLDER EXIST HERE
            //if (GetLastError() == ERROR_PATH_NOT_FOUND) {
            //	MessageBox::Show("Cette personne est déjà enregistré", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
            //}

            if (PatientAlreadyExist() && newPatient) {
                MessageBox::Show("Cette personne est déjà enregistré", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
            }
            else {
                completePatientInformationObject();
                createAndPrintPatientSubdirectories();
                NewPatient::Close();
            }
        }
    }

    private: System::Void MEDICAL_HISTORY_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        MedicalHistory ^form = gcnew MedicalHistory(myPatient, currentLanguage, true);
        form->ShowDialog();
    }

    private: System::Void MEDICALDATA_PT2_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        Treatments ^form = gcnew Treatments(myPatient, currentLanguage, true);
        form->ShowDialog();
    }
    private: System::Void MEDICALDATA_PT3_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        CognitiveDiagnosis ^form = gcnew CognitiveDiagnosis(myPatient, currentLanguage, true);
        form->ShowDialog();
    }
    private: System::Void MEDICALDATA_PT4_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        DataM12 ^form = gcnew DataM12(myPatient, currentLanguage, true);
        form->ShowDialog();
    }

    private: System::Void YES_VISION_PROBLEMS_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        if (YES_VISION_PROBLEMS_RADIOBUTTON->Checked) {
            PRECISE_VISION_PROBLEMS_TEXTBOX->Enabled = true;
        }
        else {
            PRECISE_VISION_PROBLEMS_TEXTBOX->Enabled = false;
            PRECISE_VISION_PROBLEMS_TEXTBOX->Text = "";
        }
    }

// Button used just for testing that the separation in different windows is ok
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
    DataM12 ^form = gcnew DataM12(myPatient, currentLanguage, true);
    form->ShowDialog();
}

private: System::Void YES_ARTHROSE_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
    if (YES_ARTHROSIS_RADIOBUTTON->Checked) {
        PRECISE_ARTHROSIS_TEXTBOX->Enabled = true;
    }
    else {
        PRECISE_ARTHROSIS_TEXTBOX->Enabled = false;
        PRECISE_ARTHROSIS_TEXTBOX->Text = "";
    }
}
private: System::Void LANGUAGE_SELECTION_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
    LanguageInformation ^form = gcnew LanguageInformation(myPatient, currentLanguage, true);
    form->ShowDialog();
}

private: System::Void SOCIAL_SITUATION_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
    SocialSituation ^form = gcnew SocialSituation(myPatient, currentLanguage, true);
    form->ShowDialog();
}

private: System::Void OTHER_ANTECEDENTS_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
    OtherAntecedents ^form = gcnew OtherAntecedents(myPatient, currentLanguage, true);
    form->ShowDialog();
}
private: System::Void RISK_FACTORS_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
    RiskFactors ^form = gcnew RiskFactors(myPatient, currentLanguage, true);
    form->ShowDialog();
}
private: System::Void NEUROPSYCHOLOGICAL_ASSESSMENT_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
    NeuropsychologicalAssessment ^form = gcnew NeuropsychologicalAssessment(myPatient, currentLanguage, true);
    form->ShowDialog();
}
private: System::Void BILAN_NEUROPSYCOLOGIC_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
    BilanNeuropsychologic ^form = gcnew BilanNeuropsychologic(myPatient, currentLanguage, true);
    form->ShowDialog();
}
private: System::Void NEUROLOGIC_HISTORY_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
    NeurologicHistory ^form = gcnew NeurologicHistory(myPatient, currentLanguage, true);
    form->ShowDialog();
}
private: System::Void PSYCHIATRIC_HISTORY_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
    PsychiatricHistory ^form = gcnew PsychiatricHistory(myPatient, currentLanguage, true);
    form->ShowDialog();
}
private: System::Void RHEUMATOLOGIC_HISTORY_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
    RheumatologicHistory ^form = gcnew RheumatologicHistory(myPatient, currentLanguage, true);
    form->ShowDialog();
}
};
}
