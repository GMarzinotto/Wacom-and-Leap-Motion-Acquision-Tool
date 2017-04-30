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
    /// Summary for Treatments
    /// </summary>
    public ref class Treatments : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
            Patient* myPatient;
    public:
        Treatments(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_TreatmentsForm(currentLanguage);
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Treatments()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:

    // Functions
    private: void WacomTabletApplication::Treatments::UpdateLanguage_TreatmentsForm(String^ language);
             void WacomTabletApplication::Treatments::completePatientInformationObject();
    protected:
    // Objects in the window
    private: System::Windows::Forms::GroupBox^  TREATEMENT_LIST_LABEL;
    private: System::Windows::Forms::DateTimePicker^  SINCE_6_DATE;
    private: System::Windows::Forms::TextBox^  POSOLOGY_6_TEXTBOX;
    private: System::Windows::Forms::TextBox^  INDICATION_6_TEXTBOX;
    private: System::Windows::Forms::TextBox^  TREATEMENT_6_TEXTBOX;
    private: System::Windows::Forms::DateTimePicker^  SINCE_5_DATE;
    private: System::Windows::Forms::TextBox^  POSOLOGY_5_TEXTBOX;
    private: System::Windows::Forms::TextBox^  INDICATION_5_TEXTBOX;
    private: System::Windows::Forms::TextBox^  TREATEMENT_5_TEXTBOX;
    private: System::Windows::Forms::DateTimePicker^  SINCE_4_DATE;
    private: System::Windows::Forms::TextBox^  POSOLOGY_4_TEXTBOX;
    private: System::Windows::Forms::TextBox^  INDICATION_4_TEXTBOX;
    private: System::Windows::Forms::TextBox^  TREATEMENT_4_TEXTBOX;
    private: System::Windows::Forms::DateTimePicker^  SINCE_3_DATE;
    private: System::Windows::Forms::TextBox^  POSOLOGY_3_TEXTBOX;
    private: System::Windows::Forms::TextBox^  INDICATION_3_TEXTBOX;
    private: System::Windows::Forms::TextBox^  TREATEMENT_3_TEXTBOX;
    private: System::Windows::Forms::DateTimePicker^  SINCE_2_DATE;
    private: System::Windows::Forms::TextBox^  POSOLOGY_2_TEXTBOX;
    private: System::Windows::Forms::TextBox^  INDICATION_2_TEXTBOX;
    private: System::Windows::Forms::TextBox^  TREATEMENT_2_TEXTBOX;
    private: System::Windows::Forms::DateTimePicker^  SINCE_1_DATE;
    private: System::Windows::Forms::TextBox^  POSOLOGY_1_TEXTBOX;
    private: System::Windows::Forms::TextBox^  INDICATION_1_TEXTBOX;
    private: System::Windows::Forms::TextBox^  TREATEMENT_1_TEXTBOX;
    private: System::Windows::Forms::Label^  TREATEMENT_DATE_LABEL;
    private: System::Windows::Forms::Label^  TREATMENT_POSOLOGY_LABEL;
    private: System::Windows::Forms::Label^  TREATEMENT_INDICATION_LABEL;
    private: System::Windows::Forms::Label^  TREATEMENT_NAME_LABEL;

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
            this->TREATEMENT_LIST_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->SINCE_6_DATE = (gcnew System::Windows::Forms::DateTimePicker());
            this->POSOLOGY_6_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->INDICATION_6_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->TREATEMENT_6_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->SINCE_5_DATE = (gcnew System::Windows::Forms::DateTimePicker());
            this->POSOLOGY_5_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->INDICATION_5_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->TREATEMENT_5_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->SINCE_4_DATE = (gcnew System::Windows::Forms::DateTimePicker());
            this->POSOLOGY_4_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->INDICATION_4_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->TREATEMENT_4_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->SINCE_3_DATE = (gcnew System::Windows::Forms::DateTimePicker());
            this->POSOLOGY_3_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->INDICATION_3_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->TREATEMENT_3_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->SINCE_2_DATE = (gcnew System::Windows::Forms::DateTimePicker());
            this->POSOLOGY_2_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->INDICATION_2_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->TREATEMENT_2_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->SINCE_1_DATE = (gcnew System::Windows::Forms::DateTimePicker());
            this->POSOLOGY_1_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->INDICATION_1_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->TREATEMENT_1_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
            this->TREATEMENT_DATE_LABEL = (gcnew System::Windows::Forms::Label());
            this->TREATMENT_POSOLOGY_LABEL = (gcnew System::Windows::Forms::Label());
            this->TREATEMENT_INDICATION_LABEL = (gcnew System::Windows::Forms::Label());
            this->TREATEMENT_NAME_LABEL = (gcnew System::Windows::Forms::Label());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->TREATEMENT_LIST_LABEL->SuspendLayout();
            this->SuspendLayout();
            // 
            // TREATEMENT_LIST_LABEL
            // 
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->SINCE_6_DATE);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->POSOLOGY_6_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->INDICATION_6_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATEMENT_6_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->SINCE_5_DATE);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->POSOLOGY_5_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->INDICATION_5_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATEMENT_5_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->SINCE_4_DATE);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->POSOLOGY_4_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->INDICATION_4_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATEMENT_4_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->SINCE_3_DATE);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->POSOLOGY_3_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->INDICATION_3_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATEMENT_3_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->SINCE_2_DATE);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->POSOLOGY_2_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->INDICATION_2_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATEMENT_2_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->SINCE_1_DATE);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->POSOLOGY_1_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->INDICATION_1_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATEMENT_1_TEXTBOX);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATEMENT_DATE_LABEL);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATMENT_POSOLOGY_LABEL);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATEMENT_INDICATION_LABEL);
            this->TREATEMENT_LIST_LABEL->Controls->Add(this->TREATEMENT_NAME_LABEL);
            this->TREATEMENT_LIST_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->TREATEMENT_LIST_LABEL->Location = System::Drawing::Point(12, 27);
            this->TREATEMENT_LIST_LABEL->Name = L"TREATEMENT_LIST_LABEL";
            this->TREATEMENT_LIST_LABEL->Size = System::Drawing::Size(871, 419);
            this->TREATEMENT_LIST_LABEL->TabIndex = 1;
            this->TREATEMENT_LIST_LABEL->TabStop = false;
            this->TREATEMENT_LIST_LABEL->Text = L"Traitements en Cours";
            this->TREATEMENT_LIST_LABEL->Enter += gcnew System::EventHandler(this, &Treatments::TREATEMENT_LIST_LABEL_Enter);
            // 
            // SINCE_6_DATE
            // 
            this->SINCE_6_DATE->Enabled = false;
            this->SINCE_6_DATE->Location = System::Drawing::Point(662, 362);
            this->SINCE_6_DATE->Name = L"SINCE_6_DATE";
            this->SINCE_6_DATE->Size = System::Drawing::Size(192, 29);
            this->SINCE_6_DATE->TabIndex = 25;
            // 
            // POSOLOGY_6_TEXTBOX
            // 
            this->POSOLOGY_6_TEXTBOX->Enabled = false;
            this->POSOLOGY_6_TEXTBOX->Location = System::Drawing::Point(436, 362);
            this->POSOLOGY_6_TEXTBOX->Name = L"POSOLOGY_6_TEXTBOX";
            this->POSOLOGY_6_TEXTBOX->Size = System::Drawing::Size(209, 29);
            this->POSOLOGY_6_TEXTBOX->TabIndex = 24;
            // 
            // INDICATION_6_TEXTBOX
            // 
            this->INDICATION_6_TEXTBOX->Enabled = false;
            this->INDICATION_6_TEXTBOX->Location = System::Drawing::Point(246, 362);
            this->INDICATION_6_TEXTBOX->Name = L"INDICATION_6_TEXTBOX";
            this->INDICATION_6_TEXTBOX->Size = System::Drawing::Size(175, 29);
            this->INDICATION_6_TEXTBOX->TabIndex = 23;
            // 
            // TREATEMENT_6_TEXTBOX
            // 
            this->TREATEMENT_6_TEXTBOX->Enabled = false;
            this->TREATEMENT_6_TEXTBOX->Location = System::Drawing::Point(6, 362);
            this->TREATEMENT_6_TEXTBOX->Name = L"TREATEMENT_6_TEXTBOX";
            this->TREATEMENT_6_TEXTBOX->Size = System::Drawing::Size(233, 29);
            this->TREATEMENT_6_TEXTBOX->TabIndex = 22;
            this->TREATEMENT_6_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &Treatments::TREATEMENT_6_TEXTBOX_TextChanged);
            // 
            // SINCE_5_DATE
            // 
            this->SINCE_5_DATE->Enabled = false;
            this->SINCE_5_DATE->Location = System::Drawing::Point(662, 304);
            this->SINCE_5_DATE->Name = L"SINCE_5_DATE";
            this->SINCE_5_DATE->Size = System::Drawing::Size(192, 29);
            this->SINCE_5_DATE->TabIndex = 21;
            // 
            // POSOLOGY_5_TEXTBOX
            // 
            this->POSOLOGY_5_TEXTBOX->Enabled = false;
            this->POSOLOGY_5_TEXTBOX->Location = System::Drawing::Point(436, 304);
            this->POSOLOGY_5_TEXTBOX->Name = L"POSOLOGY_5_TEXTBOX";
            this->POSOLOGY_5_TEXTBOX->Size = System::Drawing::Size(209, 29);
            this->POSOLOGY_5_TEXTBOX->TabIndex = 20;
            // 
            // INDICATION_5_TEXTBOX
            // 
            this->INDICATION_5_TEXTBOX->Enabled = false;
            this->INDICATION_5_TEXTBOX->Location = System::Drawing::Point(246, 304);
            this->INDICATION_5_TEXTBOX->Name = L"INDICATION_5_TEXTBOX";
            this->INDICATION_5_TEXTBOX->Size = System::Drawing::Size(175, 29);
            this->INDICATION_5_TEXTBOX->TabIndex = 19;
            // 
            // TREATEMENT_5_TEXTBOX
            // 
            this->TREATEMENT_5_TEXTBOX->Enabled = false;
            this->TREATEMENT_5_TEXTBOX->Location = System::Drawing::Point(6, 305);
            this->TREATEMENT_5_TEXTBOX->Name = L"TREATEMENT_5_TEXTBOX";
            this->TREATEMENT_5_TEXTBOX->Size = System::Drawing::Size(233, 29);
            this->TREATEMENT_5_TEXTBOX->TabIndex = 18;
            this->TREATEMENT_5_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &Treatments::TREATEMENT_5_TEXTBOX_TextChanged);
            // 
            // SINCE_4_DATE
            // 
            this->SINCE_4_DATE->Enabled = false;
            this->SINCE_4_DATE->Location = System::Drawing::Point(662, 244);
            this->SINCE_4_DATE->Name = L"SINCE_4_DATE";
            this->SINCE_4_DATE->Size = System::Drawing::Size(192, 29);
            this->SINCE_4_DATE->TabIndex = 17;
            // 
            // POSOLOGY_4_TEXTBOX
            // 
            this->POSOLOGY_4_TEXTBOX->Enabled = false;
            this->POSOLOGY_4_TEXTBOX->Location = System::Drawing::Point(436, 244);
            this->POSOLOGY_4_TEXTBOX->Name = L"POSOLOGY_4_TEXTBOX";
            this->POSOLOGY_4_TEXTBOX->Size = System::Drawing::Size(209, 29);
            this->POSOLOGY_4_TEXTBOX->TabIndex = 16;
            // 
            // INDICATION_4_TEXTBOX
            // 
            this->INDICATION_4_TEXTBOX->Enabled = false;
            this->INDICATION_4_TEXTBOX->Location = System::Drawing::Point(246, 244);
            this->INDICATION_4_TEXTBOX->Name = L"INDICATION_4_TEXTBOX";
            this->INDICATION_4_TEXTBOX->Size = System::Drawing::Size(175, 29);
            this->INDICATION_4_TEXTBOX->TabIndex = 15;
            // 
            // TREATEMENT_4_TEXTBOX
            // 
            this->TREATEMENT_4_TEXTBOX->Enabled = false;
            this->TREATEMENT_4_TEXTBOX->Location = System::Drawing::Point(6, 244);
            this->TREATEMENT_4_TEXTBOX->Name = L"TREATEMENT_4_TEXTBOX";
            this->TREATEMENT_4_TEXTBOX->Size = System::Drawing::Size(233, 29);
            this->TREATEMENT_4_TEXTBOX->TabIndex = 14;
            this->TREATEMENT_4_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &Treatments::TREATEMENT_4_TEXTBOX_TextChanged);
            // 
            // SINCE_3_DATE
            // 
            this->SINCE_3_DATE->Enabled = false;
            this->SINCE_3_DATE->Location = System::Drawing::Point(662, 186);
            this->SINCE_3_DATE->Name = L"SINCE_3_DATE";
            this->SINCE_3_DATE->Size = System::Drawing::Size(192, 29);
            this->SINCE_3_DATE->TabIndex = 13;
            // 
            // POSOLOGY_3_TEXTBOX
            // 
            this->POSOLOGY_3_TEXTBOX->Enabled = false;
            this->POSOLOGY_3_TEXTBOX->Location = System::Drawing::Point(436, 186);
            this->POSOLOGY_3_TEXTBOX->Name = L"POSOLOGY_3_TEXTBOX";
            this->POSOLOGY_3_TEXTBOX->Size = System::Drawing::Size(209, 29);
            this->POSOLOGY_3_TEXTBOX->TabIndex = 12;
            // 
            // INDICATION_3_TEXTBOX
            // 
            this->INDICATION_3_TEXTBOX->Enabled = false;
            this->INDICATION_3_TEXTBOX->Location = System::Drawing::Point(246, 186);
            this->INDICATION_3_TEXTBOX->Name = L"INDICATION_3_TEXTBOX";
            this->INDICATION_3_TEXTBOX->Size = System::Drawing::Size(175, 29);
            this->INDICATION_3_TEXTBOX->TabIndex = 11;
            // 
            // TREATEMENT_3_TEXTBOX
            // 
            this->TREATEMENT_3_TEXTBOX->Enabled = false;
            this->TREATEMENT_3_TEXTBOX->Location = System::Drawing::Point(6, 186);
            this->TREATEMENT_3_TEXTBOX->Name = L"TREATEMENT_3_TEXTBOX";
            this->TREATEMENT_3_TEXTBOX->Size = System::Drawing::Size(233, 29);
            this->TREATEMENT_3_TEXTBOX->TabIndex = 10;
            this->TREATEMENT_3_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &Treatments::TREATEMENT_3_TEXTBOX_TextChanged);
            // 
            // SINCE_2_DATE
            // 
            this->SINCE_2_DATE->Enabled = false;
            this->SINCE_2_DATE->Location = System::Drawing::Point(662, 129);
            this->SINCE_2_DATE->Name = L"SINCE_2_DATE";
            this->SINCE_2_DATE->Size = System::Drawing::Size(192, 29);
            this->SINCE_2_DATE->TabIndex = 9;
            // 
            // POSOLOGY_2_TEXTBOX
            // 
            this->POSOLOGY_2_TEXTBOX->Enabled = false;
            this->POSOLOGY_2_TEXTBOX->Location = System::Drawing::Point(436, 129);
            this->POSOLOGY_2_TEXTBOX->Name = L"POSOLOGY_2_TEXTBOX";
            this->POSOLOGY_2_TEXTBOX->Size = System::Drawing::Size(209, 29);
            this->POSOLOGY_2_TEXTBOX->TabIndex = 8;
            // 
            // INDICATION_2_TEXTBOX
            // 
            this->INDICATION_2_TEXTBOX->Enabled = false;
            this->INDICATION_2_TEXTBOX->Location = System::Drawing::Point(246, 129);
            this->INDICATION_2_TEXTBOX->Name = L"INDICATION_2_TEXTBOX";
            this->INDICATION_2_TEXTBOX->Size = System::Drawing::Size(175, 29);
            this->INDICATION_2_TEXTBOX->TabIndex = 7;
            // 
            // TREATEMENT_2_TEXTBOX
            // 
            this->TREATEMENT_2_TEXTBOX->Enabled = false;
            this->TREATEMENT_2_TEXTBOX->Location = System::Drawing::Point(6, 129);
            this->TREATEMENT_2_TEXTBOX->Name = L"TREATEMENT_2_TEXTBOX";
            this->TREATEMENT_2_TEXTBOX->Size = System::Drawing::Size(233, 29);
            this->TREATEMENT_2_TEXTBOX->TabIndex = 6;
            this->TREATEMENT_2_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &Treatments::TREATEMENT_2_TEXTBOX_TextChanged);
            // 
            // SINCE_1_DATE
            // 
            this->SINCE_1_DATE->Enabled = false;
            this->SINCE_1_DATE->Location = System::Drawing::Point(662, 74);
            this->SINCE_1_DATE->Name = L"SINCE_1_DATE";
            this->SINCE_1_DATE->Size = System::Drawing::Size(192, 29);
            this->SINCE_1_DATE->TabIndex = 5;
            // 
            // POSOLOGY_1_TEXTBOX
            // 
            this->POSOLOGY_1_TEXTBOX->Enabled = false;
            this->POSOLOGY_1_TEXTBOX->Location = System::Drawing::Point(436, 74);
            this->POSOLOGY_1_TEXTBOX->Name = L"POSOLOGY_1_TEXTBOX";
            this->POSOLOGY_1_TEXTBOX->Size = System::Drawing::Size(209, 29);
            this->POSOLOGY_1_TEXTBOX->TabIndex = 4;
            // 
            // INDICATION_1_TEXTBOX
            // 
            this->INDICATION_1_TEXTBOX->Enabled = false;
            this->INDICATION_1_TEXTBOX->Location = System::Drawing::Point(246, 74);
            this->INDICATION_1_TEXTBOX->Name = L"INDICATION_1_TEXTBOX";
            this->INDICATION_1_TEXTBOX->Size = System::Drawing::Size(175, 29);
            this->INDICATION_1_TEXTBOX->TabIndex = 3;
            // 
            // TREATEMENT_1_TEXTBOX
            // 
            this->TREATEMENT_1_TEXTBOX->Location = System::Drawing::Point(6, 74);
            this->TREATEMENT_1_TEXTBOX->Name = L"TREATEMENT_1_TEXTBOX";
            this->TREATEMENT_1_TEXTBOX->Size = System::Drawing::Size(233, 29);
            this->TREATEMENT_1_TEXTBOX->TabIndex = 2;
            this->TREATEMENT_1_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &Treatments::TREATEMENT_1_TEXTBOX_TextChanged);
            // 
            // TREATEMENT_DATE_LABEL
            // 
            this->TREATEMENT_DATE_LABEL->AutoSize = true;
            this->TREATEMENT_DATE_LABEL->Location = System::Drawing::Point(658, 47);
            this->TREATEMENT_DATE_LABEL->Name = L"TREATEMENT_DATE_LABEL";
            this->TREATEMENT_DATE_LABEL->Size = System::Drawing::Size(130, 24);
            this->TREATEMENT_DATE_LABEL->TabIndex = 1;
            this->TREATEMENT_DATE_LABEL->Text = L"Date de Début";
            // 
            // TREATMENT_POSOLOGY_LABEL
            // 
            this->TREATMENT_POSOLOGY_LABEL->AutoSize = true;
            this->TREATMENT_POSOLOGY_LABEL->Location = System::Drawing::Point(432, 47);
            this->TREATMENT_POSOLOGY_LABEL->Name = L"TREATMENT_POSOLOGY_LABEL";
            this->TREATMENT_POSOLOGY_LABEL->Size = System::Drawing::Size(94, 24);
            this->TREATMENT_POSOLOGY_LABEL->TabIndex = 1;
            this->TREATMENT_POSOLOGY_LABEL->Text = L"Posologie";
            // 
            // TREATEMENT_INDICATION_LABEL
            // 
            this->TREATEMENT_INDICATION_LABEL->AutoSize = true;
            this->TREATEMENT_INDICATION_LABEL->Location = System::Drawing::Point(242, 47);
            this->TREATEMENT_INDICATION_LABEL->Name = L"TREATEMENT_INDICATION_LABEL";
            this->TREATEMENT_INDICATION_LABEL->Size = System::Drawing::Size(90, 24);
            this->TREATEMENT_INDICATION_LABEL->TabIndex = 1;
            this->TREATEMENT_INDICATION_LABEL->Text = L"Indication";
            // 
            // TREATEMENT_NAME_LABEL
            // 
            this->TREATEMENT_NAME_LABEL->AutoSize = true;
            this->TREATEMENT_NAME_LABEL->Location = System::Drawing::Point(6, 47);
            this->TREATEMENT_NAME_LABEL->Name = L"TREATEMENT_NAME_LABEL";
            this->TREATEMENT_NAME_LABEL->Size = System::Drawing::Size(172, 24);
            this->TREATEMENT_NAME_LABEL->TabIndex = 1;
            this->TREATEMENT_NAME_LABEL->Text = L"Nom du Traitement";
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(201, 455);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
            this->CANCEL_BUTTON->TabIndex = 124;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &Treatments::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(448, 455);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
            this->REGISTER_BUTTON->TabIndex = 123;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &Treatments::REGISTER_BUTTON_Click);
            // 
            // Treatments
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(930, 535);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->TREATEMENT_LIST_LABEL);
            this->Name = L"Treatments";
            this->Text = L"Treatments";
            this->Load += gcnew System::EventHandler(this, &Treatments::Treatments_Load);
            this->TREATEMENT_LIST_LABEL->ResumeLayout(false);
            this->TREATEMENT_LIST_LABEL->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion


    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Save Information of the Patient
        completePatientInformationObject();
        Treatments::Close();

    }

    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        Treatments::Close();
    }
    
    private: System::Void TREATEMENT_1_TEXTBOX_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        if (TREATEMENT_1_TEXTBOX->Text->Length > 0) {
            TREATEMENT_2_TEXTBOX->Enabled = true;
            INDICATION_1_TEXTBOX->Enabled = true;
            POSOLOGY_1_TEXTBOX->Enabled = true;
            SINCE_1_DATE->Enabled = true;
        }
    }

    private: System::Void TREATEMENT_2_TEXTBOX_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        if (TREATEMENT_2_TEXTBOX->Text->Length > 0) {
            TREATEMENT_3_TEXTBOX->Enabled = true;
            INDICATION_2_TEXTBOX->Enabled = true;
            POSOLOGY_2_TEXTBOX->Enabled = true;
            SINCE_2_DATE->Enabled = true;
        }
    }
    private: System::Void TREATEMENT_3_TEXTBOX_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        if (TREATEMENT_3_TEXTBOX->Text->Length > 0) {
            TREATEMENT_4_TEXTBOX->Enabled = true;
            INDICATION_3_TEXTBOX->Enabled = true;
            POSOLOGY_3_TEXTBOX->Enabled = true;
            SINCE_3_DATE->Enabled = true;
        }
    }
    private: System::Void TREATEMENT_4_TEXTBOX_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        if (TREATEMENT_4_TEXTBOX->Text->Length > 0) {
            TREATEMENT_5_TEXTBOX->Enabled = true;
            INDICATION_4_TEXTBOX->Enabled = true;
            POSOLOGY_4_TEXTBOX->Enabled = true;
            SINCE_4_DATE->Enabled = true;
        }
    }
    private: System::Void TREATEMENT_5_TEXTBOX_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        if (TREATEMENT_5_TEXTBOX->Text->Length > 0) {
            TREATEMENT_6_TEXTBOX->Enabled = true;
            INDICATION_5_TEXTBOX->Enabled = true;
            POSOLOGY_5_TEXTBOX->Enabled = true;
            SINCE_5_DATE->Enabled = true;
        }
    }
    private: System::Void TREATEMENT_6_TEXTBOX_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        if (TREATEMENT_6_TEXTBOX->Text->Length > 0) {
            INDICATION_6_TEXTBOX->Enabled = true;
            POSOLOGY_6_TEXTBOX->Enabled = true;
            SINCE_6_DATE->Enabled = true;
        }
    }

private: System::Void Treatments_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void TREATEMENT_LIST_LABEL_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
