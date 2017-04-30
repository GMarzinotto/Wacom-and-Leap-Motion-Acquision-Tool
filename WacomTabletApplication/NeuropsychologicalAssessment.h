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
    /// Summary for NeuropsychologicalAssessment
    /// </summary>
    public ref class NeuropsychologicalAssessment : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
            Patient* myPatient;
    public:
        NeuropsychologicalAssessment(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_NeuropsychologicalAssessmentForm(currentLanguage);
        }
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~NeuropsychologicalAssessment()
        {
            if (components)
            {
                delete components;
            }
        }

    // Functions
    void WacomTabletApplication::NeuropsychologicalAssessment::UpdateLanguage_NeuropsychologicalAssessmentForm(String^ language);
    void WacomTabletApplication::NeuropsychologicalAssessment::completePatientInformationObject();

    // Objects in window
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::GroupBox^  NEUROPSYCOLOGIC_EVALUATION_LABEL;
    private: System::Windows::Forms::CheckBox^  MOCA_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  PRAXIES_MMSE_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  MEMORY_MMSE_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  LEARNING_MMSE_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  DATE_MMSE_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  LANGUAGE_MMSE_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  CALCULE_MMSE_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  ORIENTATION_MMSE_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  MMSE_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  IADL_CHECKBOX;
    private: System::Windows::Forms::Label^  MOCA_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  MOCA_COUNTER;
    private: System::Windows::Forms::Label^  PRAXIES_MMSE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  PRAXIES_MMSE_COUNTER;
    private: System::Windows::Forms::Label^  LANGUAGE_MMSE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  LANGUAGE_MMSE_COUNTER;
    private: System::Windows::Forms::Label^  MEMORY_MMSE_MAX_VALUE2;
    private: System::Windows::Forms::NumericUpDown^  MEMORY_MMSE_COUNTER;
    private: System::Windows::Forms::Label^  CALCULE_MMSE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  CALCULE_MMSE_COUNTER;
    private: System::Windows::Forms::Label^  LEARNING_MMSE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  LEARNING_MMSE_COUNTER;
    private: System::Windows::Forms::Label^  ORIENTATION_MMSE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  ORIENTATION_MMSE_COUNTER;
    private: System::Windows::Forms::Label^  IADL_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  IADL_COUNTER;
    private: System::Windows::Forms::Label^  MMSE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  MMSE_COUNTER;
    private: System::Windows::Forms::DateTimePicker^  DATE_MMSE_DATEPICKER;
    private: System::Windows::Forms::Button^  CANCEL_BUTTON;
    private: System::Windows::Forms::Button^  REGISTER_BUTTON;
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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->MOCA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->PRAXIES_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->MEMORY_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->LEARNING_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->DATE_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->LANGUAGE_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->CALCULE_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->ORIENTATION_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->IADL_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->MOCA_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->MOCA_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->PRAXIES_MMSE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->PRAXIES_MMSE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->LANGUAGE_MMSE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->LANGUAGE_MMSE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->MEMORY_MMSE_MAX_VALUE2 = (gcnew System::Windows::Forms::Label());
            this->MEMORY_MMSE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->CALCULE_MMSE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->CALCULE_MMSE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->LEARNING_MMSE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->LEARNING_MMSE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->ORIENTATION_MMSE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->ORIENTATION_MMSE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->IADL_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->IADL_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->MMSE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->MMSE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->DATE_MMSE_DATEPICKER = (gcnew System::Windows::Forms::DateTimePicker());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MOCA_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PRAXIES_MMSE_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LANGUAGE_MMSE_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MEMORY_MMSE_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CALCULE_MMSE_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LEARNING_MMSE_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ORIENTATION_MMSE_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IADL_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MMSE_COUNTER))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label1->Location = System::Drawing::Point(62, 45);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(401, 31);
            this->label1->TabIndex = 0;
            this->label1->Text = L"NeuropsychologicalAssessment";
            // 
            // NEUROPSYCOLOGIC_EVALUATION_LABEL
            // 
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MOCA_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->PRAXIES_MMSE_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MEMORY_MMSE_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->LEARNING_MMSE_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->DATE_MMSE_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->LANGUAGE_MMSE_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->CALCULE_MMSE_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->ORIENTATION_MMSE_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MMSE_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->IADL_CHECKBOX);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MOCA_MAX_VALUE);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MOCA_COUNTER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->PRAXIES_MMSE_MAX_VALUE);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->PRAXIES_MMSE_COUNTER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->LANGUAGE_MMSE_MAX_VALUE);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->LANGUAGE_MMSE_COUNTER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MEMORY_MMSE_MAX_VALUE2);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MEMORY_MMSE_COUNTER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->CALCULE_MMSE_MAX_VALUE);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->CALCULE_MMSE_COUNTER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->LEARNING_MMSE_MAX_VALUE);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->LEARNING_MMSE_COUNTER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->ORIENTATION_MMSE_MAX_VALUE);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->ORIENTATION_MMSE_COUNTER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->IADL_MAX_VALUE);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->IADL_COUNTER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MMSE_MAX_VALUE);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MMSE_COUNTER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->DATE_MMSE_DATEPICKER);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Location = System::Drawing::Point(68, 101);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Name = L"NEUROPSYCOLOGIC_EVALUATION_LABEL";
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Size = System::Drawing::Size(854, 312);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->TabIndex = 92;
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->TabStop = false;
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Text = L"Evaluation Neuropsychologique";
            // 
            // MOCA_CHECKBOX
            // 
            this->MOCA_CHECKBOX->AutoSize = true;
            this->MOCA_CHECKBOX->Location = System::Drawing::Point(22, 277);
            this->MOCA_CHECKBOX->Name = L"MOCA_CHECKBOX";
            this->MOCA_CHECKBOX->Size = System::Drawing::Size(91, 28);
            this->MOCA_CHECKBOX->TabIndex = 120;
            this->MOCA_CHECKBOX->Text = L"MOCA:";
            this->MOCA_CHECKBOX->UseVisualStyleBackColor = true;
            this->MOCA_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::MOCA_CHECKBOX_CheckedChanged);
            // 
            // PRAXIES_MMSE_CHECKBOX
            // 
            this->PRAXIES_MMSE_CHECKBOX->AutoSize = true;
            this->PRAXIES_MMSE_CHECKBOX->Location = System::Drawing::Point(462, 221);
            this->PRAXIES_MMSE_CHECKBOX->Name = L"PRAXIES_MMSE_CHECKBOX";
            this->PRAXIES_MMSE_CHECKBOX->Size = System::Drawing::Size(275, 28);
            this->PRAXIES_MMSE_CHECKBOX->TabIndex = 118;
            this->PRAXIES_MMSE_CHECKBOX->Text = L"Praxies Constructives MMSE:";
            this->PRAXIES_MMSE_CHECKBOX->UseVisualStyleBackColor = true;
            this->PRAXIES_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::PRAXIES_MMSE_CHECKBOX_CheckedChanged);
            // 
            // MEMORY_MMSE_CHECKBOX
            // 
            this->MEMORY_MMSE_CHECKBOX->AutoSize = true;
            this->MEMORY_MMSE_CHECKBOX->Location = System::Drawing::Point(462, 177);
            this->MEMORY_MMSE_CHECKBOX->Name = L"MEMORY_MMSE_CHECKBOX";
            this->MEMORY_MMSE_CHECKBOX->Size = System::Drawing::Size(156, 28);
            this->MEMORY_MMSE_CHECKBOX->TabIndex = 112;
            this->MEMORY_MMSE_CHECKBOX->Text = L"Rappel MMSE:";
            this->MEMORY_MMSE_CHECKBOX->UseVisualStyleBackColor = true;
            this->MEMORY_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::MEMORY_MMSE_CHECKBOX_CheckedChanged);
            // 
            // LEARNING_MMSE_CHECKBOX
            // 
            this->LEARNING_MMSE_CHECKBOX->AutoSize = true;
            this->LEARNING_MMSE_CHECKBOX->Location = System::Drawing::Point(462, 134);
            this->LEARNING_MMSE_CHECKBOX->Name = L"LEARNING_MMSE_CHECKBOX";
            this->LEARNING_MMSE_CHECKBOX->Size = System::Drawing::Size(217, 28);
            this->LEARNING_MMSE_CHECKBOX->TabIndex = 106;
            this->LEARNING_MMSE_CHECKBOX->Text = L"Apprentissage MMSE:";
            this->LEARNING_MMSE_CHECKBOX->UseVisualStyleBackColor = true;
            this->LEARNING_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::LEARNING_MMSE_CHECKBOX_CheckedChanged);
            // 
            // DATE_MMSE_CHECKBOX
            // 
            this->DATE_MMSE_CHECKBOX->AutoSize = true;
            this->DATE_MMSE_CHECKBOX->Location = System::Drawing::Point(306, 80);
            this->DATE_MMSE_CHECKBOX->Name = L"DATE_MMSE_CHECKBOX";
            this->DATE_MMSE_CHECKBOX->Size = System::Drawing::Size(161, 28);
            this->DATE_MMSE_CHECKBOX->TabIndex = 101;
            this->DATE_MMSE_CHECKBOX->Text = L"Date de MMSE:";
            this->DATE_MMSE_CHECKBOX->UseVisualStyleBackColor = true;
            this->DATE_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::DATE_MMSE_CHECKBOX_CheckedChanged);
            // 
            // LANGUAGE_MMSE_CHECKBOX
            // 
            this->LANGUAGE_MMSE_CHECKBOX->AutoSize = true;
            this->LANGUAGE_MMSE_CHECKBOX->Location = System::Drawing::Point(25, 222);
            this->LANGUAGE_MMSE_CHECKBOX->Name = L"LANGUAGE_MMSE_CHECKBOX";
            this->LANGUAGE_MMSE_CHECKBOX->Size = System::Drawing::Size(170, 28);
            this->LANGUAGE_MMSE_CHECKBOX->TabIndex = 115;
            this->LANGUAGE_MMSE_CHECKBOX->Text = L"Langage MMSE:";
            this->LANGUAGE_MMSE_CHECKBOX->UseVisualStyleBackColor = true;
            this->LANGUAGE_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::LANGUAGE_MMSE_CHECKBOX_CheckedChanged);
            // 
            // CALCULE_MMSE_CHECKBOX
            // 
            this->CALCULE_MMSE_CHECKBOX->AutoSize = true;
            this->CALCULE_MMSE_CHECKBOX->Location = System::Drawing::Point(25, 178);
            this->CALCULE_MMSE_CHECKBOX->Name = L"CALCULE_MMSE_CHECKBOX";
            this->CALCULE_MMSE_CHECKBOX->Size = System::Drawing::Size(252, 28);
            this->CALCULE_MMSE_CHECKBOX->TabIndex = 109;
            this->CALCULE_MMSE_CHECKBOX->Text = L"Attention au Calcul MMSE:";
            this->CALCULE_MMSE_CHECKBOX->UseVisualStyleBackColor = true;
            this->CALCULE_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::CALCULE_MMSE_CHECKBOX_CheckedChanged);
            // 
            // ORIENTATION_MMSE_CHECKBOX
            // 
            this->ORIENTATION_MMSE_CHECKBOX->AutoSize = true;
            this->ORIENTATION_MMSE_CHECKBOX->Location = System::Drawing::Point(25, 135);
            this->ORIENTATION_MMSE_CHECKBOX->Name = L"ORIENTATION_MMSE_CHECKBOX";
            this->ORIENTATION_MMSE_CHECKBOX->Size = System::Drawing::Size(187, 28);
            this->ORIENTATION_MMSE_CHECKBOX->TabIndex = 103;
            this->ORIENTATION_MMSE_CHECKBOX->Text = L"Orientation MMSE:";
            this->ORIENTATION_MMSE_CHECKBOX->UseVisualStyleBackColor = true;
            this->ORIENTATION_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::ORIENTATION_MMSE_CHECKBOX_CheckedChanged);
            // 
            // MMSE_CHECKBOX
            // 
            this->MMSE_CHECKBOX->AutoSize = true;
            this->MMSE_CHECKBOX->Location = System::Drawing::Point(25, 80);
            this->MMSE_CHECKBOX->Name = L"MMSE_CHECKBOX";
            this->MMSE_CHECKBOX->Size = System::Drawing::Size(91, 28);
            this->MMSE_CHECKBOX->TabIndex = 95;
            this->MMSE_CHECKBOX->Text = L"MMSE:";
            this->MMSE_CHECKBOX->UseVisualStyleBackColor = true;
            this->MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::MMSE_CHECKBOX_CheckedChanged);
            // 
            // IADL_CHECKBOX
            // 
            this->IADL_CHECKBOX->AutoSize = true;
            this->IADL_CHECKBOX->Location = System::Drawing::Point(25, 28);
            this->IADL_CHECKBOX->Name = L"IADL_CHECKBOX";
            this->IADL_CHECKBOX->Size = System::Drawing::Size(230, 28);
            this->IADL_CHECKBOX->TabIndex = 92;
            this->IADL_CHECKBOX->Text = L"Echelle IADL (PAQUID):";
            this->IADL_CHECKBOX->UseVisualStyleBackColor = true;
            this->IADL_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::IADL_CHECKBOX_CheckedChanged);
            // 
            // MOCA_MAX_VALUE
            // 
            this->MOCA_MAX_VALUE->AutoSize = true;
            this->MOCA_MAX_VALUE->Location = System::Drawing::Point(182, 278);
            this->MOCA_MAX_VALUE->Name = L"MOCA_MAX_VALUE";
            this->MOCA_MAX_VALUE->Size = System::Drawing::Size(35, 24);
            this->MOCA_MAX_VALUE->TabIndex = 122;
            this->MOCA_MAX_VALUE->Text = L"/30";
            // 
            // MOCA_COUNTER
            // 
            this->MOCA_COUNTER->Enabled = false;
            this->MOCA_COUNTER->Location = System::Drawing::Point(119, 276);
            this->MOCA_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->MOCA_COUNTER->Name = L"MOCA_COUNTER";
            this->MOCA_COUNTER->Size = System::Drawing::Size(57, 29);
            this->MOCA_COUNTER->TabIndex = 121;
            // 
            // PRAXIES_MMSE_MAX_VALUE
            // 
            this->PRAXIES_MMSE_MAX_VALUE->AutoSize = true;
            this->PRAXIES_MMSE_MAX_VALUE->Location = System::Drawing::Point(807, 223);
            this->PRAXIES_MMSE_MAX_VALUE->Name = L"PRAXIES_MMSE_MAX_VALUE";
            this->PRAXIES_MMSE_MAX_VALUE->Size = System::Drawing::Size(25, 24);
            this->PRAXIES_MMSE_MAX_VALUE->TabIndex = 119;
            this->PRAXIES_MMSE_MAX_VALUE->Text = L"/1";
            // 
            // PRAXIES_MMSE_COUNTER
            // 
            this->PRAXIES_MMSE_COUNTER->Enabled = false;
            this->PRAXIES_MMSE_COUNTER->Location = System::Drawing::Point(740, 221);
            this->PRAXIES_MMSE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->PRAXIES_MMSE_COUNTER->Name = L"PRAXIES_MMSE_COUNTER";
            this->PRAXIES_MMSE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->PRAXIES_MMSE_COUNTER->TabIndex = 27;
            // 
            // LANGUAGE_MMSE_MAX_VALUE
            // 
            this->LANGUAGE_MMSE_MAX_VALUE->AutoSize = true;
            this->LANGUAGE_MMSE_MAX_VALUE->Location = System::Drawing::Point(373, 223);
            this->LANGUAGE_MMSE_MAX_VALUE->Name = L"LANGUAGE_MMSE_MAX_VALUE";
            this->LANGUAGE_MMSE_MAX_VALUE->Size = System::Drawing::Size(25, 24);
            this->LANGUAGE_MMSE_MAX_VALUE->TabIndex = 117;
            this->LANGUAGE_MMSE_MAX_VALUE->Text = L"/8";
            // 
            // LANGUAGE_MMSE_COUNTER
            // 
            this->LANGUAGE_MMSE_COUNTER->Enabled = false;
            this->LANGUAGE_MMSE_COUNTER->Location = System::Drawing::Point(306, 221);
            this->LANGUAGE_MMSE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
            this->LANGUAGE_MMSE_COUNTER->Name = L"LANGUAGE_MMSE_COUNTER";
            this->LANGUAGE_MMSE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->LANGUAGE_MMSE_COUNTER->TabIndex = 116;
            // 
            // MEMORY_MMSE_MAX_VALUE2
            // 
            this->MEMORY_MMSE_MAX_VALUE2->AutoSize = true;
            this->MEMORY_MMSE_MAX_VALUE2->Location = System::Drawing::Point(807, 179);
            this->MEMORY_MMSE_MAX_VALUE2->Name = L"MEMORY_MMSE_MAX_VALUE2";
            this->MEMORY_MMSE_MAX_VALUE2->Size = System::Drawing::Size(25, 24);
            this->MEMORY_MMSE_MAX_VALUE2->TabIndex = 114;
            this->MEMORY_MMSE_MAX_VALUE2->Text = L"/3";
            // 
            // MEMORY_MMSE_COUNTER
            // 
            this->MEMORY_MMSE_COUNTER->Enabled = false;
            this->MEMORY_MMSE_COUNTER->Location = System::Drawing::Point(740, 177);
            this->MEMORY_MMSE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
            this->MEMORY_MMSE_COUNTER->Name = L"MEMORY_MMSE_COUNTER";
            this->MEMORY_MMSE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->MEMORY_MMSE_COUNTER->TabIndex = 113;
            // 
            // CALCULE_MMSE_MAX_VALUE
            // 
            this->CALCULE_MMSE_MAX_VALUE->AutoSize = true;
            this->CALCULE_MMSE_MAX_VALUE->Location = System::Drawing::Point(373, 179);
            this->CALCULE_MMSE_MAX_VALUE->Name = L"CALCULE_MMSE_MAX_VALUE";
            this->CALCULE_MMSE_MAX_VALUE->Size = System::Drawing::Size(25, 24);
            this->CALCULE_MMSE_MAX_VALUE->TabIndex = 111;
            this->CALCULE_MMSE_MAX_VALUE->Text = L"/5";
            // 
            // CALCULE_MMSE_COUNTER
            // 
            this->CALCULE_MMSE_COUNTER->Enabled = false;
            this->CALCULE_MMSE_COUNTER->Location = System::Drawing::Point(306, 177);
            this->CALCULE_MMSE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
            this->CALCULE_MMSE_COUNTER->Name = L"CALCULE_MMSE_COUNTER";
            this->CALCULE_MMSE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->CALCULE_MMSE_COUNTER->TabIndex = 110;
            // 
            // LEARNING_MMSE_MAX_VALUE
            // 
            this->LEARNING_MMSE_MAX_VALUE->AutoSize = true;
            this->LEARNING_MMSE_MAX_VALUE->Location = System::Drawing::Point(807, 136);
            this->LEARNING_MMSE_MAX_VALUE->Name = L"LEARNING_MMSE_MAX_VALUE";
            this->LEARNING_MMSE_MAX_VALUE->Size = System::Drawing::Size(25, 24);
            this->LEARNING_MMSE_MAX_VALUE->TabIndex = 108;
            this->LEARNING_MMSE_MAX_VALUE->Text = L"/3";
            // 
            // LEARNING_MMSE_COUNTER
            // 
            this->LEARNING_MMSE_COUNTER->Enabled = false;
            this->LEARNING_MMSE_COUNTER->Location = System::Drawing::Point(740, 134);
            this->LEARNING_MMSE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
            this->LEARNING_MMSE_COUNTER->Name = L"LEARNING_MMSE_COUNTER";
            this->LEARNING_MMSE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->LEARNING_MMSE_COUNTER->TabIndex = 107;
            // 
            // ORIENTATION_MMSE_MAX_VALUE
            // 
            this->ORIENTATION_MMSE_MAX_VALUE->AutoSize = true;
            this->ORIENTATION_MMSE_MAX_VALUE->Location = System::Drawing::Point(373, 136);
            this->ORIENTATION_MMSE_MAX_VALUE->Name = L"ORIENTATION_MMSE_MAX_VALUE";
            this->ORIENTATION_MMSE_MAX_VALUE->Size = System::Drawing::Size(35, 24);
            this->ORIENTATION_MMSE_MAX_VALUE->TabIndex = 105;
            this->ORIENTATION_MMSE_MAX_VALUE->Text = L"/10";
            // 
            // ORIENTATION_MMSE_COUNTER
            // 
            this->ORIENTATION_MMSE_COUNTER->Enabled = false;
            this->ORIENTATION_MMSE_COUNTER->Location = System::Drawing::Point(306, 134);
            this->ORIENTATION_MMSE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
            this->ORIENTATION_MMSE_COUNTER->Name = L"ORIENTATION_MMSE_COUNTER";
            this->ORIENTATION_MMSE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->ORIENTATION_MMSE_COUNTER->TabIndex = 104;
            // 
            // IADL_MAX_VALUE
            // 
            this->IADL_MAX_VALUE->AutoSize = true;
            this->IADL_MAX_VALUE->Location = System::Drawing::Point(373, 29);
            this->IADL_MAX_VALUE->Name = L"IADL_MAX_VALUE";
            this->IADL_MAX_VALUE->Size = System::Drawing::Size(25, 24);
            this->IADL_MAX_VALUE->TabIndex = 94;
            this->IADL_MAX_VALUE->Text = L"/4";
            // 
            // IADL_COUNTER
            // 
            this->IADL_COUNTER->Enabled = false;
            this->IADL_COUNTER->Location = System::Drawing::Point(306, 27);
            this->IADL_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
            this->IADL_COUNTER->Name = L"IADL_COUNTER";
            this->IADL_COUNTER->Size = System::Drawing::Size(61, 29);
            this->IADL_COUNTER->TabIndex = 93;
            // 
            // MMSE_MAX_VALUE
            // 
            this->MMSE_MAX_VALUE->AutoSize = true;
            this->MMSE_MAX_VALUE->Location = System::Drawing::Point(182, 81);
            this->MMSE_MAX_VALUE->Name = L"MMSE_MAX_VALUE";
            this->MMSE_MAX_VALUE->Size = System::Drawing::Size(35, 24);
            this->MMSE_MAX_VALUE->TabIndex = 97;
            this->MMSE_MAX_VALUE->Text = L"/30";
            // 
            // MMSE_COUNTER
            // 
            this->MMSE_COUNTER->Enabled = false;
            this->MMSE_COUNTER->Location = System::Drawing::Point(119, 79);
            this->MMSE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->MMSE_COUNTER->Name = L"MMSE_COUNTER";
            this->MMSE_COUNTER->Size = System::Drawing::Size(57, 29);
            this->MMSE_COUNTER->TabIndex = 96;
            // 
            // DATE_MMSE_DATEPICKER
            // 
            this->DATE_MMSE_DATEPICKER->Enabled = false;
            this->DATE_MMSE_DATEPICKER->Location = System::Drawing::Point(485, 77);
            this->DATE_MMSE_DATEPICKER->Name = L"DATE_MMSE_DATEPICKER";
            this->DATE_MMSE_DATEPICKER->Size = System::Drawing::Size(303, 29);
            this->DATE_MMSE_DATEPICKER->TabIndex = 102;
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(598, 441);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
            this->CANCEL_BUTTON->TabIndex = 126;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(328, 440);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
            this->REGISTER_BUTTON->TabIndex = 125;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::REGISTER_BUTTON_Click);
            // 
            // NeuropsychologicalAssessment
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1177, 534);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->NEUROPSYCOLOGIC_EVALUATION_LABEL);
            this->Controls->Add(this->label1);
            this->Name = L"NeuropsychologicalAssessment";
            this->Text = L"NeuropsychologicalAssessment";
            this->Load += gcnew System::EventHandler(this, &NeuropsychologicalAssessment::NeuropsychologicalAssessment_Load);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->ResumeLayout(false);
            this->NEUROPSYCOLOGIC_EVALUATION_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MOCA_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PRAXIES_MMSE_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LANGUAGE_MMSE_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MEMORY_MMSE_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CALCULE_MMSE_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LEARNING_MMSE_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ORIENTATION_MMSE_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IADL_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MMSE_COUNTER))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Save Information of the Patient
        completePatientInformationObject();
        NeuropsychologicalAssessment::Close();
    }
    
    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        NeuropsychologicalAssessment::Close();
    }
    
    private: System::Void NeuropsychologicalAssessment_Load(System::Object^  sender, System::EventArgs^  e) {
    }
    
    private: System::Void IADL_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        IADL_COUNTER->Enabled = (IADL_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void MMSE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        MMSE_COUNTER->Enabled = (MMSE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void DATE_MMSE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        DATE_MMSE_DATEPICKER->Enabled = (DATE_MMSE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void ORIENTATION_MMSE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        ORIENTATION_MMSE_COUNTER->Enabled = (ORIENTATION_MMSE_CHECKBOX->Checked) ? true : false;
    }
    
    private: System::Void LEARNING_MMSE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        LEARNING_MMSE_COUNTER->Enabled = (LEARNING_MMSE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void CALCULE_MMSE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        CALCULE_MMSE_COUNTER->Enabled = (CALCULE_MMSE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void MEMORY_MMSE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        MEMORY_MMSE_COUNTER->Enabled = (MEMORY_MMSE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void LANGUAGE_MMSE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        LANGUAGE_MMSE_COUNTER->Enabled = (LANGUAGE_MMSE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void PRAXIES_MMSE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        PRAXIES_MMSE_COUNTER->Enabled = (PRAXIES_MMSE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void MOCA_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        MOCA_COUNTER->Enabled = (MOCA_CHECKBOX->Checked) ? true : false;
    }
};
}
