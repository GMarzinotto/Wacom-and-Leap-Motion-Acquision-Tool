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
    /// Summary for BilanNeuropsychologic
    /// </summary>
    public ref class BilanNeuropsychologic : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
            Patient* myPatient;
    public:
        BilanNeuropsychologic(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_BilanNeuropsychologicForm(currentLanguage);
        }
        
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~BilanNeuropsychologic()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::GroupBox^  LANGUAGE_LABEL;
    protected:
    // Functions
    private: void WacomTabletApplication::BilanNeuropsychologic::UpdateLanguage_BilanNeuropsychologicForm(String^ language);
             void WacomTabletApplication::BilanNeuropsychologic::completePatientInformationObject();

    // Objects in window
    private: System::Windows::Forms::CheckBox^  ANIMAL_CHECKBOX;
    private: System::Windows::Forms::NumericUpDown^  ANIMAL_COUNTER;
    private: System::Windows::Forms::CheckBox^  WORDS_CHECKBOX;
    private: System::Windows::Forms::RadioButton^  FLUENCSE_2_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  FLUENCSE_1_RADIOBUTTON;
    private: System::Windows::Forms::CheckBox^  DO80_CHECKBOX;
    private: System::Windows::Forms::NumericUpDown^  DO80_COUNTER;
    private: System::Windows::Forms::CheckBox^  FLUENCES_CHECKBOX;
    private: System::Windows::Forms::NumericUpDown^  WORDS_COUNTER;
    private: System::Windows::Forms::GroupBox^  REY_FIGURE_LABEL;
    private: System::Windows::Forms::CheckBox^  REY_FIGURE_TYPE_CHECKBOX;
    private: System::Windows::Forms::Label^  REY_FIGURE_TIME_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  REY_FIGURE_TIME_COUNTER;
    private: System::Windows::Forms::RadioButton^  REY_FIGURE_TYPE2_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  REY_FIGURE_TYPE1_RADIOBUTTON;
    private: System::Windows::Forms::CheckBox^  REY_FIGURE_TIME_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  REY_FIGURE_COPIE_CHECKBOX;
    private: System::Windows::Forms::Label^  REY_FIGURE_COPIE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  REY_FIGURE_COPIE_COUNTER;
    private: System::Windows::Forms::GroupBox^  PSYCHO_AFFECTIVE_LABEL;
    private: System::Windows::Forms::CheckBox^  ANXIETY_YN_CHECKBOX;
    private: System::Windows::Forms::RadioButton^  ANXIETY_NO_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  ANXIETY_YES_RADIOBUTTON;
    private: System::Windows::Forms::CheckBox^  ANXIETY_CHECKBOX;
    private: System::Windows::Forms::Label^  ANXIETY_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  ANXIETY_COUNTER;
    private: System::Windows::Forms::CheckBox^  DEPRESSION_CHECKBOX;
    private: System::Windows::Forms::Label^  DEPRESSION_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  DEPRESSION_COUNTER;
    private: System::Windows::Forms::GroupBox^  GESTURE_LABEL;
    private: System::Windows::Forms::CheckBox^  ABSTRACT_GESTURE_CHECKBOX;
    private: System::Windows::Forms::Label^  ABSTRACT_GESTURE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  ABSTRACT_GESTURE_COUNTER;
    private: System::Windows::Forms::CheckBox^  MIME_GESTURE_CHECKBOX;
    private: System::Windows::Forms::Label^  MIME_GESTURE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  MIME_GESTURE_COUNTER;
    private: System::Windows::Forms::CheckBox^  SYMBOLIC_GESTURE_CHECKBOX;
    private: System::Windows::Forms::Label^  SYMBOLIC_GESTURE_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  SYMBOLIC_GESTURE_COUNTER;
    private: System::Windows::Forms::GroupBox^  PRAXIES_LABEL;
    private: System::Windows::Forms::RadioButton^  CUBE_PRAXIES_SUCCESS_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  CUBE_PRAXIES_FAIL_RADIOBUTTON;
    private: System::Windows::Forms::CheckBox^  CUBE_PRAXIES_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  CLOCK_PRAXIES_CHECKBOX;
    private: System::Windows::Forms::Label^  CLOCK_PRAXIES_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  CLOCK_PRAXIES_COUNTER;
    private: System::Windows::Forms::CheckBox^  LAST_BALANCE_CHECKBOX;
    private: System::Windows::Forms::DateTimePicker^  LAST_BALANCE_DATEPICKER;
    private: System::Windows::Forms::GroupBox^  EXECUTIVE_TEST_LABEL;
    private: System::Windows::Forms::CheckBox^  EMPAN_ENVERS_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  EMPAN_ENDROIT_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  TMT_B_ERRORS_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  TMT_B_TIME_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  TMT_A_ERRORS_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  TMT_A_TIME_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  BREF_CHECKBOX;
    private: System::Windows::Forms::Label^  TMT_B_TIME_SEC_LABEL;
    private: System::Windows::Forms::Label^  TMT_A_TIME_SEC_LABEL;
    private: System::Windows::Forms::NumericUpDown^  TMT_B_ERRORS_COUNTER;
    private: System::Windows::Forms::Label^  TMT_B_LABEL;
    private: System::Windows::Forms::NumericUpDown^  TMT_B_TIME_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  EMPAN_ENVERS_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  EMPAN_ENDROIT_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  TMT_A_ERRORS_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  TMT_A_TIME_COUNTER;
    private: System::Windows::Forms::Label^  TMT_A_LABEL;
    private: System::Windows::Forms::Label^  BREF_MAX_VALUE;
    private: System::Windows::Forms::NumericUpDown^  BREF_COUNTER;
    private: System::Windows::Forms::GroupBox^  EPISODIC_MEMORY_LABEL;
    private: System::Windows::Forms::CheckBox^  RTT_MEM_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  TOTAL_MEM_D_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  RLT_MEM_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  SENSIBILITY_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  FREE_MEM_D_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  TOTAL_MEM_3_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  FREE_MEM_3_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  TOTAL_MEM_2_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  RECOGNITION_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  FREE_MEM_2_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  TOTAL_MEM_1_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  SHORT_MEM_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  FREE_MEM_1_CHECKBOX;
    private: System::Windows::Forms::Label^  SENSIBILITY_MAX_VAL;
    private: System::Windows::Forms::Label^  RTT_MEM_MAX_VAL;
    private: System::Windows::Forms::Label^  RLT_MEM_MAX_VAL;
    private: System::Windows::Forms::NumericUpDown^  RTT_MEM_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  RLT_MEM_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  TOTAL_MEM_D_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  FREE_MEM_D_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  SENSIBILITY_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  RECOGNITION_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  TOTAL_MEM_2_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  FREE_MEM_2_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  TOTAL_MEM_3_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  FREE_MEM_3_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  TOTAL_MEM_1_COUNTER;
    private: System::Windows::Forms::NumericUpDown^  FREE_MEM_1_COUNTER;
    private: System::Windows::Forms::Label^  SHORT_MEM_MAX_VAL;
    private: System::Windows::Forms::NumericUpDown^  SHORT_MEM_COUNTER;
    private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Button^  CANCEL_BUTTON;
private: System::Windows::Forms::Button^  REGISTER_BUTTON;

    protected:






































































































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
            this->LANGUAGE_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->ANIMAL_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->ANIMAL_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->WORDS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->FLUENCSE_2_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->FLUENCSE_1_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->DO80_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->DO80_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->FLUENCES_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->WORDS_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->REY_FIGURE_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->REY_FIGURE_TYPE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->REY_FIGURE_TIME_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->REY_FIGURE_TIME_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->REY_FIGURE_TYPE2_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->REY_FIGURE_TYPE1_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->REY_FIGURE_TIME_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->REY_FIGURE_COPIE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->REY_FIGURE_COPIE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->REY_FIGURE_COPIE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->PSYCHO_AFFECTIVE_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->ANXIETY_YN_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->ANXIETY_NO_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->ANXIETY_YES_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->ANXIETY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->ANXIETY_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->ANXIETY_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->DEPRESSION_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->DEPRESSION_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->DEPRESSION_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->GESTURE_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->ABSTRACT_GESTURE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->ABSTRACT_GESTURE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->ABSTRACT_GESTURE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->MIME_GESTURE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->MIME_GESTURE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->MIME_GESTURE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->SYMBOLIC_GESTURE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->SYMBOLIC_GESTURE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->SYMBOLIC_GESTURE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->PRAXIES_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->CUBE_PRAXIES_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->CLOCK_PRAXIES_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->CLOCK_PRAXIES_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->CLOCK_PRAXIES_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->LAST_BALANCE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->LAST_BALANCE_DATEPICKER = (gcnew System::Windows::Forms::DateTimePicker());
            this->EXECUTIVE_TEST_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->EMPAN_ENVERS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->EMPAN_ENDROIT_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->TMT_B_ERRORS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->TMT_B_TIME_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->TMT_A_ERRORS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->TMT_A_TIME_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->BREF_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->TMT_B_TIME_SEC_LABEL = (gcnew System::Windows::Forms::Label());
            this->TMT_A_TIME_SEC_LABEL = (gcnew System::Windows::Forms::Label());
            this->TMT_B_ERRORS_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->TMT_B_LABEL = (gcnew System::Windows::Forms::Label());
            this->TMT_B_TIME_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->EMPAN_ENVERS_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->EMPAN_ENDROIT_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->TMT_A_ERRORS_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->TMT_A_TIME_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->TMT_A_LABEL = (gcnew System::Windows::Forms::Label());
            this->BREF_MAX_VALUE = (gcnew System::Windows::Forms::Label());
            this->BREF_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->EPISODIC_MEMORY_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->RTT_MEM_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->TOTAL_MEM_D_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->RLT_MEM_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->SENSIBILITY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->FREE_MEM_D_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->TOTAL_MEM_3_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->FREE_MEM_3_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->TOTAL_MEM_2_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->RECOGNITION_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->FREE_MEM_2_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->TOTAL_MEM_1_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->SHORT_MEM_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->FREE_MEM_1_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->SENSIBILITY_MAX_VAL = (gcnew System::Windows::Forms::Label());
            this->RTT_MEM_MAX_VAL = (gcnew System::Windows::Forms::Label());
            this->RLT_MEM_MAX_VAL = (gcnew System::Windows::Forms::Label());
            this->RTT_MEM_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->RLT_MEM_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->TOTAL_MEM_D_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->FREE_MEM_D_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->SENSIBILITY_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->RECOGNITION_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->TOTAL_MEM_2_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->FREE_MEM_2_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->TOTAL_MEM_3_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->FREE_MEM_3_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->TOTAL_MEM_1_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->FREE_MEM_1_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->SHORT_MEM_MAX_VAL = (gcnew System::Windows::Forms::Label());
            this->SHORT_MEM_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->LANGUAGE_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ANIMAL_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DO80_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WORDS_COUNTER))->BeginInit();
            this->REY_FIGURE_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->REY_FIGURE_TIME_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->REY_FIGURE_COPIE_COUNTER))->BeginInit();
            this->PSYCHO_AFFECTIVE_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ANXIETY_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DEPRESSION_COUNTER))->BeginInit();
            this->GESTURE_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ABSTRACT_GESTURE_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MIME_GESTURE_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SYMBOLIC_GESTURE_COUNTER))->BeginInit();
            this->PRAXIES_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CLOCK_PRAXIES_COUNTER))->BeginInit();
            this->EXECUTIVE_TEST_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TMT_B_ERRORS_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TMT_B_TIME_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EMPAN_ENVERS_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EMPAN_ENDROIT_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TMT_A_ERRORS_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TMT_A_TIME_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BREF_COUNTER))->BeginInit();
            this->EPISODIC_MEMORY_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RTT_MEM_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RLT_MEM_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TOTAL_MEM_D_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FREE_MEM_D_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SENSIBILITY_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RECOGNITION_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TOTAL_MEM_2_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FREE_MEM_2_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TOTAL_MEM_3_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FREE_MEM_3_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TOTAL_MEM_1_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FREE_MEM_1_COUNTER))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SHORT_MEM_COUNTER))->BeginInit();
            this->SuspendLayout();
            // 
            // LANGUAGE_LABEL
            // 
            this->LANGUAGE_LABEL->Controls->Add(this->ANIMAL_CHECKBOX);
            this->LANGUAGE_LABEL->Controls->Add(this->ANIMAL_COUNTER);
            this->LANGUAGE_LABEL->Controls->Add(this->WORDS_CHECKBOX);
            this->LANGUAGE_LABEL->Controls->Add(this->FLUENCSE_2_RADIOBUTTON);
            this->LANGUAGE_LABEL->Controls->Add(this->FLUENCSE_1_RADIOBUTTON);
            this->LANGUAGE_LABEL->Controls->Add(this->DO80_CHECKBOX);
            this->LANGUAGE_LABEL->Controls->Add(this->DO80_COUNTER);
            this->LANGUAGE_LABEL->Controls->Add(this->FLUENCES_CHECKBOX);
            this->LANGUAGE_LABEL->Controls->Add(this->WORDS_COUNTER);
            this->LANGUAGE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->LANGUAGE_LABEL->Location = System::Drawing::Point(409, 576);
            this->LANGUAGE_LABEL->Name = L"LANGUAGE_LABEL";
            this->LANGUAGE_LABEL->Size = System::Drawing::Size(766, 111);
            this->LANGUAGE_LABEL->TabIndex = 152;
            this->LANGUAGE_LABEL->TabStop = false;
            this->LANGUAGE_LABEL->Text = L"Langage";
            // 
            // ANIMAL_CHECKBOX
            // 
            this->ANIMAL_CHECKBOX->AutoSize = true;
            this->ANIMAL_CHECKBOX->Location = System::Drawing::Point(412, 66);
            this->ANIMAL_CHECKBOX->Name = L"ANIMAL_CHECKBOX";
            this->ANIMAL_CHECKBOX->Size = System::Drawing::Size(109, 28);
            this->ANIMAL_CHECKBOX->TabIndex = 149;
            this->ANIMAL_CHECKBOX->Text = L"Animaux:";
            this->ANIMAL_CHECKBOX->UseVisualStyleBackColor = true;
            this->ANIMAL_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::ANIMAL_CHECKBOX_CheckedChanged);
            // 
            // ANIMAL_COUNTER
            // 
            this->ANIMAL_COUNTER->Enabled = false;
            this->ANIMAL_COUNTER->Location = System::Drawing::Point(630, 64);
            this->ANIMAL_COUNTER->Name = L"ANIMAL_COUNTER";
            this->ANIMAL_COUNTER->Size = System::Drawing::Size(61, 29);
            this->ANIMAL_COUNTER->TabIndex = 150;
            // 
            // WORDS_CHECKBOX
            // 
            this->WORDS_CHECKBOX->AutoSize = true;
            this->WORDS_CHECKBOX->Location = System::Drawing::Point(412, 29);
            this->WORDS_CHECKBOX->Name = L"WORDS_CHECKBOX";
            this->WORDS_CHECKBOX->Size = System::Drawing::Size(123, 28);
            this->WORDS_CHECKBOX->TabIndex = 147;
            this->WORDS_CHECKBOX->Text = L"Mots par P:";
            this->WORDS_CHECKBOX->UseVisualStyleBackColor = true;
            this->WORDS_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::WORDS_CHECKBOX_CheckedChanged);
            // 
            // FLUENCSE_2_RADIOBUTTON
            // 
            this->FLUENCSE_2_RADIOBUTTON->AutoSize = true;
            this->FLUENCSE_2_RADIOBUTTON->Enabled = false;
            this->FLUENCSE_2_RADIOBUTTON->Location = System::Drawing::Point(279, 31);
            this->FLUENCSE_2_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->FLUENCSE_2_RADIOBUTTON->Name = L"FLUENCSE_2_RADIOBUTTON";
            this->FLUENCSE_2_RADIOBUTTON->Size = System::Drawing::Size(74, 28);
            this->FLUENCSE_2_RADIOBUTTON->TabIndex = 146;
            this->FLUENCSE_2_RADIOBUTTON->TabStop = true;
            this->FLUENCSE_2_RADIOBUTTON->Text = L"2 min";
            this->FLUENCSE_2_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // FLUENCSE_1_RADIOBUTTON
            // 
            this->FLUENCSE_1_RADIOBUTTON->AutoSize = true;
            this->FLUENCSE_1_RADIOBUTTON->Enabled = false;
            this->FLUENCSE_1_RADIOBUTTON->Location = System::Drawing::Point(191, 31);
            this->FLUENCSE_1_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->FLUENCSE_1_RADIOBUTTON->Name = L"FLUENCSE_1_RADIOBUTTON";
            this->FLUENCSE_1_RADIOBUTTON->Size = System::Drawing::Size(74, 28);
            this->FLUENCSE_1_RADIOBUTTON->TabIndex = 145;
            this->FLUENCSE_1_RADIOBUTTON->TabStop = true;
            this->FLUENCSE_1_RADIOBUTTON->Text = L"1 min";
            this->FLUENCSE_1_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // DO80_CHECKBOX
            // 
            this->DO80_CHECKBOX->AutoSize = true;
            this->DO80_CHECKBOX->Location = System::Drawing::Point(21, 65);
            this->DO80_CHECKBOX->Name = L"DO80_CHECKBOX";
            this->DO80_CHECKBOX->Size = System::Drawing::Size(213, 28);
            this->DO80_CHECKBOX->TabIndex = 151;
            this->DO80_CHECKBOX->Text = L"DO-80 (temps en sec)";
            this->DO80_CHECKBOX->UseVisualStyleBackColor = true;
            this->DO80_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::DO80_CHECKBOX_CheckedChanged);
            // 
            // DO80_COUNTER
            // 
            this->DO80_COUNTER->Enabled = false;
            this->DO80_COUNTER->Location = System::Drawing::Point(239, 65);
            this->DO80_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
            this->DO80_COUNTER->Name = L"DO80_COUNTER";
            this->DO80_COUNTER->Size = System::Drawing::Size(61, 29);
            this->DO80_COUNTER->TabIndex = 152;
            // 
            // FLUENCES_CHECKBOX
            // 
            this->FLUENCES_CHECKBOX->AutoSize = true;
            this->FLUENCES_CHECKBOX->Location = System::Drawing::Point(21, 31);
            this->FLUENCES_CHECKBOX->Name = L"FLUENCES_CHECKBOX";
            this->FLUENCES_CHECKBOX->Size = System::Drawing::Size(161, 28);
            this->FLUENCES_CHECKBOX->TabIndex = 144;
            this->FLUENCES_CHECKBOX->Text = L"Fluences Type:";
            this->FLUENCES_CHECKBOX->UseVisualStyleBackColor = true;
            this->FLUENCES_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::FLUENCES_CHECKBOX_CheckedChanged);
            // 
            // WORDS_COUNTER
            // 
            this->WORDS_COUNTER->Enabled = false;
            this->WORDS_COUNTER->Location = System::Drawing::Point(630, 28);
            this->WORDS_COUNTER->Name = L"WORDS_COUNTER";
            this->WORDS_COUNTER->Size = System::Drawing::Size(61, 29);
            this->WORDS_COUNTER->TabIndex = 148;
            // 
            // REY_FIGURE_LABEL
            // 
            this->REY_FIGURE_LABEL->Controls->Add(this->REY_FIGURE_TYPE_CHECKBOX);
            this->REY_FIGURE_LABEL->Controls->Add(this->REY_FIGURE_TIME_MAX_VALUE);
            this->REY_FIGURE_LABEL->Controls->Add(this->REY_FIGURE_TIME_COUNTER);
            this->REY_FIGURE_LABEL->Controls->Add(this->REY_FIGURE_TYPE2_RADIOBUTTON);
            this->REY_FIGURE_LABEL->Controls->Add(this->REY_FIGURE_TYPE1_RADIOBUTTON);
            this->REY_FIGURE_LABEL->Controls->Add(this->REY_FIGURE_TIME_CHECKBOX);
            this->REY_FIGURE_LABEL->Controls->Add(this->REY_FIGURE_COPIE_CHECKBOX);
            this->REY_FIGURE_LABEL->Controls->Add(this->REY_FIGURE_COPIE_MAX_VALUE);
            this->REY_FIGURE_LABEL->Controls->Add(this->REY_FIGURE_COPIE_COUNTER);
            this->REY_FIGURE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->REY_FIGURE_LABEL->Location = System::Drawing::Point(778, 247);
            this->REY_FIGURE_LABEL->Name = L"REY_FIGURE_LABEL";
            this->REY_FIGURE_LABEL->Size = System::Drawing::Size(395, 105);
            this->REY_FIGURE_LABEL->TabIndex = 149;
            this->REY_FIGURE_LABEL->TabStop = false;
            this->REY_FIGURE_LABEL->Text = L"Figure de Rey";
            // 
            // REY_FIGURE_TYPE_CHECKBOX
            // 
            this->REY_FIGURE_TYPE_CHECKBOX->AutoSize = true;
            this->REY_FIGURE_TYPE_CHECKBOX->Location = System::Drawing::Point(223, 44);
            this->REY_FIGURE_TYPE_CHECKBOX->Name = L"REY_FIGURE_TYPE_CHECKBOX";
            this->REY_FIGURE_TYPE_CHECKBOX->Size = System::Drawing::Size(77, 28);
            this->REY_FIGURE_TYPE_CHECKBOX->TabIndex = 88;
            this->REY_FIGURE_TYPE_CHECKBOX->Text = L"Type:";
            this->REY_FIGURE_TYPE_CHECKBOX->UseVisualStyleBackColor = true;
            this->REY_FIGURE_TYPE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::REY_FIGURE_TYPE_CHECKBOX_CheckedChanged);
            // 
            // REY_FIGURE_TIME_MAX_VALUE
            // 
            this->REY_FIGURE_TIME_MAX_VALUE->AutoSize = true;
            this->REY_FIGURE_TIME_MAX_VALUE->Location = System::Drawing::Point(166, 63);
            this->REY_FIGURE_TIME_MAX_VALUE->Name = L"REY_FIGURE_TIME_MAX_VALUE";
            this->REY_FIGURE_TIME_MAX_VALUE->Size = System::Drawing::Size(40, 24);
            this->REY_FIGURE_TIME_MAX_VALUE->TabIndex = 63;
            this->REY_FIGURE_TIME_MAX_VALUE->Text = L"sec";
            // 
            // REY_FIGURE_TIME_COUNTER
            // 
            this->REY_FIGURE_TIME_COUNTER->Enabled = false;
            this->REY_FIGURE_TIME_COUNTER->Location = System::Drawing::Point(106, 62);
            this->REY_FIGURE_TIME_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
            this->REY_FIGURE_TIME_COUNTER->Name = L"REY_FIGURE_TIME_COUNTER";
            this->REY_FIGURE_TIME_COUNTER->Size = System::Drawing::Size(61, 29);
            this->REY_FIGURE_TIME_COUNTER->TabIndex = 62;
            // 
            // REY_FIGURE_TYPE2_RADIOBUTTON
            // 
            this->REY_FIGURE_TYPE2_RADIOBUTTON->AutoSize = true;
            this->REY_FIGURE_TYPE2_RADIOBUTTON->Enabled = false;
            this->REY_FIGURE_TYPE2_RADIOBUTTON->Location = System::Drawing::Point(300, 62);
            this->REY_FIGURE_TYPE2_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REY_FIGURE_TYPE2_RADIOBUTTON->Name = L"REY_FIGURE_TYPE2_RADIOBUTTON";
            this->REY_FIGURE_TYPE2_RADIOBUTTON->Size = System::Drawing::Size(86, 28);
            this->REY_FIGURE_TYPE2_RADIOBUTTON->TabIndex = 90;
            this->REY_FIGURE_TYPE2_RADIOBUTTON->TabStop = true;
            this->REY_FIGURE_TYPE2_RADIOBUTTON->Text = L"Type 2";
            this->REY_FIGURE_TYPE2_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // REY_FIGURE_TYPE1_RADIOBUTTON
            // 
            this->REY_FIGURE_TYPE1_RADIOBUTTON->AutoSize = true;
            this->REY_FIGURE_TYPE1_RADIOBUTTON->Enabled = false;
            this->REY_FIGURE_TYPE1_RADIOBUTTON->Location = System::Drawing::Point(300, 29);
            this->REY_FIGURE_TYPE1_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REY_FIGURE_TYPE1_RADIOBUTTON->Name = L"REY_FIGURE_TYPE1_RADIOBUTTON";
            this->REY_FIGURE_TYPE1_RADIOBUTTON->Size = System::Drawing::Size(86, 28);
            this->REY_FIGURE_TYPE1_RADIOBUTTON->TabIndex = 89;
            this->REY_FIGURE_TYPE1_RADIOBUTTON->TabStop = true;
            this->REY_FIGURE_TYPE1_RADIOBUTTON->Text = L"Type 1";
            this->REY_FIGURE_TYPE1_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // REY_FIGURE_TIME_CHECKBOX
            // 
            this->REY_FIGURE_TIME_CHECKBOX->AutoSize = true;
            this->REY_FIGURE_TIME_CHECKBOX->Location = System::Drawing::Point(10, 63);
            this->REY_FIGURE_TIME_CHECKBOX->Name = L"REY_FIGURE_TIME_CHECKBOX";
            this->REY_FIGURE_TIME_CHECKBOX->Size = System::Drawing::Size(93, 28);
            this->REY_FIGURE_TIME_CHECKBOX->TabIndex = 59;
            this->REY_FIGURE_TIME_CHECKBOX->Text = L"Temps:";
            this->REY_FIGURE_TIME_CHECKBOX->UseVisualStyleBackColor = true;
            this->REY_FIGURE_TIME_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::REY_FIGURE_TIME_CHECKBOX_CheckedChanged);
            // 
            // REY_FIGURE_COPIE_CHECKBOX
            // 
            this->REY_FIGURE_COPIE_CHECKBOX->AutoSize = true;
            this->REY_FIGURE_COPIE_CHECKBOX->Location = System::Drawing::Point(10, 29);
            this->REY_FIGURE_COPIE_CHECKBOX->Name = L"REY_FIGURE_COPIE_CHECKBOX";
            this->REY_FIGURE_COPIE_CHECKBOX->Size = System::Drawing::Size(84, 28);
            this->REY_FIGURE_COPIE_CHECKBOX->TabIndex = 88;
            this->REY_FIGURE_COPIE_CHECKBOX->Text = L"Copie:";
            this->REY_FIGURE_COPIE_CHECKBOX->UseVisualStyleBackColor = true;
            this->REY_FIGURE_COPIE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::REY_FIGURE_COPIE_CHECKBOX_CheckedChanged);
            // 
            // REY_FIGURE_COPIE_MAX_VALUE
            // 
            this->REY_FIGURE_COPIE_MAX_VALUE->AutoSize = true;
            this->REY_FIGURE_COPIE_MAX_VALUE->Location = System::Drawing::Point(166, 31);
            this->REY_FIGURE_COPIE_MAX_VALUE->Name = L"REY_FIGURE_COPIE_MAX_VALUE";
            this->REY_FIGURE_COPIE_MAX_VALUE->Size = System::Drawing::Size(35, 24);
            this->REY_FIGURE_COPIE_MAX_VALUE->TabIndex = 90;
            this->REY_FIGURE_COPIE_MAX_VALUE->Text = L"/36";
            // 
            // REY_FIGURE_COPIE_COUNTER
            // 
            this->REY_FIGURE_COPIE_COUNTER->Enabled = false;
            this->REY_FIGURE_COPIE_COUNTER->Location = System::Drawing::Point(106, 29);
            this->REY_FIGURE_COPIE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
            this->REY_FIGURE_COPIE_COUNTER->Name = L"REY_FIGURE_COPIE_COUNTER";
            this->REY_FIGURE_COPIE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->REY_FIGURE_COPIE_COUNTER->TabIndex = 89;
            // 
            // PSYCHO_AFFECTIVE_LABEL
            // 
            this->PSYCHO_AFFECTIVE_LABEL->Controls->Add(this->ANXIETY_YN_CHECKBOX);
            this->PSYCHO_AFFECTIVE_LABEL->Controls->Add(this->ANXIETY_NO_RADIOBUTTON);
            this->PSYCHO_AFFECTIVE_LABEL->Controls->Add(this->ANXIETY_YES_RADIOBUTTON);
            this->PSYCHO_AFFECTIVE_LABEL->Controls->Add(this->ANXIETY_CHECKBOX);
            this->PSYCHO_AFFECTIVE_LABEL->Controls->Add(this->ANXIETY_MAX_VALUE);
            this->PSYCHO_AFFECTIVE_LABEL->Controls->Add(this->ANXIETY_COUNTER);
            this->PSYCHO_AFFECTIVE_LABEL->Controls->Add(this->DEPRESSION_CHECKBOX);
            this->PSYCHO_AFFECTIVE_LABEL->Controls->Add(this->DEPRESSION_MAX_VALUE);
            this->PSYCHO_AFFECTIVE_LABEL->Controls->Add(this->DEPRESSION_COUNTER);
            this->PSYCHO_AFFECTIVE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->PSYCHO_AFFECTIVE_LABEL->Location = System::Drawing::Point(409, 413);
            this->PSYCHO_AFFECTIVE_LABEL->Name = L"PSYCHO_AFFECTIVE_LABEL";
            this->PSYCHO_AFFECTIVE_LABEL->Size = System::Drawing::Size(383, 142);
            this->PSYCHO_AFFECTIVE_LABEL->TabIndex = 150;
            this->PSYCHO_AFFECTIVE_LABEL->TabStop = false;
            this->PSYCHO_AFFECTIVE_LABEL->Text = L"Etat Psycho-Affectif";
            // 
            // ANXIETY_YN_CHECKBOX
            // 
            this->ANXIETY_YN_CHECKBOX->AutoSize = true;
            this->ANXIETY_YN_CHECKBOX->Location = System::Drawing::Point(21, 102);
            this->ANXIETY_YN_CHECKBOX->Name = L"ANXIETY_YN_CHECKBOX";
            this->ANXIETY_YN_CHECKBOX->Size = System::Drawing::Size(174, 28);
            this->ANXIETY_YN_CHECKBOX->TabIndex = 130;
            this->ANXIETY_YN_CHECKBOX->Text = L"Anxiété Oui/Non:";
            this->ANXIETY_YN_CHECKBOX->UseVisualStyleBackColor = true;
            this->ANXIETY_YN_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::ANXIETY_YN_CHECKBOX_CheckedChanged);
            // 
            // ANXIETY_NO_RADIOBUTTON
            // 
            this->ANXIETY_NO_RADIOBUTTON->AutoSize = true;
            this->ANXIETY_NO_RADIOBUTTON->Enabled = false;
            this->ANXIETY_NO_RADIOBUTTON->Location = System::Drawing::Point(312, 102);
            this->ANXIETY_NO_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->ANXIETY_NO_RADIOBUTTON->Name = L"ANXIETY_NO_RADIOBUTTON";
            this->ANXIETY_NO_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
            this->ANXIETY_NO_RADIOBUTTON->TabIndex = 132;
            this->ANXIETY_NO_RADIOBUTTON->TabStop = true;
            this->ANXIETY_NO_RADIOBUTTON->Text = L"Non";
            this->ANXIETY_NO_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // ANXIETY_YES_RADIOBUTTON
            // 
            this->ANXIETY_YES_RADIOBUTTON->AutoSize = true;
            this->ANXIETY_YES_RADIOBUTTON->Enabled = false;
            this->ANXIETY_YES_RADIOBUTTON->Location = System::Drawing::Point(239, 102);
            this->ANXIETY_YES_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->ANXIETY_YES_RADIOBUTTON->Name = L"ANXIETY_YES_RADIOBUTTON";
            this->ANXIETY_YES_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
            this->ANXIETY_YES_RADIOBUTTON->TabIndex = 131;
            this->ANXIETY_YES_RADIOBUTTON->TabStop = true;
            this->ANXIETY_YES_RADIOBUTTON->Text = L"Oui";
            this->ANXIETY_YES_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // ANXIETY_CHECKBOX
            // 
            this->ANXIETY_CHECKBOX->AutoSize = true;
            this->ANXIETY_CHECKBOX->Location = System::Drawing::Point(21, 65);
            this->ANXIETY_CHECKBOX->Name = L"ANXIETY_CHECKBOX";
            this->ANXIETY_CHECKBOX->Size = System::Drawing::Size(153, 28);
            this->ANXIETY_CHECKBOX->TabIndex = 127;
            this->ANXIETY_CHECKBOX->Text = L"Anxiété Score:";
            this->ANXIETY_CHECKBOX->UseVisualStyleBackColor = true;
            this->ANXIETY_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::ANXIETY_CHECKBOX_CheckedChanged);
            // 
            // ANXIETY_MAX_VALUE
            // 
            this->ANXIETY_MAX_VALUE->AutoSize = true;
            this->ANXIETY_MAX_VALUE->Location = System::Drawing::Point(306, 66);
            this->ANXIETY_MAX_VALUE->Name = L"ANXIETY_MAX_VALUE";
            this->ANXIETY_MAX_VALUE->Size = System::Drawing::Size(25, 24);
            this->ANXIETY_MAX_VALUE->TabIndex = 129;
            this->ANXIETY_MAX_VALUE->Text = L"/9";
            // 
            // ANXIETY_COUNTER
            // 
            this->ANXIETY_COUNTER->Enabled = false;
            this->ANXIETY_COUNTER->Location = System::Drawing::Point(239, 64);
            this->ANXIETY_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
            this->ANXIETY_COUNTER->Name = L"ANXIETY_COUNTER";
            this->ANXIETY_COUNTER->Size = System::Drawing::Size(61, 29);
            this->ANXIETY_COUNTER->TabIndex = 128;
            // 
            // DEPRESSION_CHECKBOX
            // 
            this->DEPRESSION_CHECKBOX->AutoSize = true;
            this->DEPRESSION_CHECKBOX->Location = System::Drawing::Point(21, 31);
            this->DEPRESSION_CHECKBOX->Name = L"DEPRESSION_CHECKBOX";
            this->DEPRESSION_CHECKBOX->Size = System::Drawing::Size(125, 28);
            this->DEPRESSION_CHECKBOX->TabIndex = 124;
            this->DEPRESSION_CHECKBOX->Text = L"Dépression";
            this->DEPRESSION_CHECKBOX->UseVisualStyleBackColor = true;
            this->DEPRESSION_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::DEPRESSION_CHECKBOX_CheckedChanged);
            // 
            // DEPRESSION_MAX_VALUE
            // 
            this->DEPRESSION_MAX_VALUE->AutoSize = true;
            this->DEPRESSION_MAX_VALUE->Location = System::Drawing::Point(306, 32);
            this->DEPRESSION_MAX_VALUE->Name = L"DEPRESSION_MAX_VALUE";
            this->DEPRESSION_MAX_VALUE->Size = System::Drawing::Size(35, 24);
            this->DEPRESSION_MAX_VALUE->TabIndex = 126;
            this->DEPRESSION_MAX_VALUE->Text = L"/15";
            // 
            // DEPRESSION_COUNTER
            // 
            this->DEPRESSION_COUNTER->Enabled = false;
            this->DEPRESSION_COUNTER->Location = System::Drawing::Point(239, 30);
            this->DEPRESSION_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
            this->DEPRESSION_COUNTER->Name = L"DEPRESSION_COUNTER";
            this->DEPRESSION_COUNTER->Size = System::Drawing::Size(61, 29);
            this->DEPRESSION_COUNTER->TabIndex = 125;
            // 
            // GESTURE_LABEL
            // 
            this->GESTURE_LABEL->Controls->Add(this->ABSTRACT_GESTURE_CHECKBOX);
            this->GESTURE_LABEL->Controls->Add(this->ABSTRACT_GESTURE_MAX_VALUE);
            this->GESTURE_LABEL->Controls->Add(this->ABSTRACT_GESTURE_COUNTER);
            this->GESTURE_LABEL->Controls->Add(this->MIME_GESTURE_CHECKBOX);
            this->GESTURE_LABEL->Controls->Add(this->MIME_GESTURE_MAX_VALUE);
            this->GESTURE_LABEL->Controls->Add(this->MIME_GESTURE_COUNTER);
            this->GESTURE_LABEL->Controls->Add(this->SYMBOLIC_GESTURE_CHECKBOX);
            this->GESTURE_LABEL->Controls->Add(this->SYMBOLIC_GESTURE_MAX_VALUE);
            this->GESTURE_LABEL->Controls->Add(this->SYMBOLIC_GESTURE_COUNTER);
            this->GESTURE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->GESTURE_LABEL->Location = System::Drawing::Point(811, 413);
            this->GESTURE_LABEL->Name = L"GESTURE_LABEL";
            this->GESTURE_LABEL->Size = System::Drawing::Size(364, 142);
            this->GESTURE_LABEL->TabIndex = 151;
            this->GESTURE_LABEL->TabStop = false;
            this->GESTURE_LABEL->Text = L"Gestes";
            // 
            // ABSTRACT_GESTURE_CHECKBOX
            // 
            this->ABSTRACT_GESTURE_CHECKBOX->AutoSize = true;
            this->ABSTRACT_GESTURE_CHECKBOX->Location = System::Drawing::Point(22, 99);
            this->ABSTRACT_GESTURE_CHECKBOX->Name = L"ABSTRACT_GESTURE_CHECKBOX";
            this->ABSTRACT_GESTURE_CHECKBOX->Size = System::Drawing::Size(99, 28);
            this->ABSTRACT_GESTURE_CHECKBOX->TabIndex = 140;
            this->ABSTRACT_GESTURE_CHECKBOX->Text = L"Abstraits";
            this->ABSTRACT_GESTURE_CHECKBOX->UseVisualStyleBackColor = true;
            this->ABSTRACT_GESTURE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::ABSTRACT_GESTURE_CHECKBOX_CheckedChanged);
            // 
            // ABSTRACT_GESTURE_MAX_VALUE
            // 
            this->ABSTRACT_GESTURE_MAX_VALUE->AutoSize = true;
            this->ABSTRACT_GESTURE_MAX_VALUE->Location = System::Drawing::Point(307, 100);
            this->ABSTRACT_GESTURE_MAX_VALUE->Name = L"ABSTRACT_GESTURE_MAX_VALUE";
            this->ABSTRACT_GESTURE_MAX_VALUE->Size = System::Drawing::Size(25, 24);
            this->ABSTRACT_GESTURE_MAX_VALUE->TabIndex = 142;
            this->ABSTRACT_GESTURE_MAX_VALUE->Text = L"/8";
            // 
            // ABSTRACT_GESTURE_COUNTER
            // 
            this->ABSTRACT_GESTURE_COUNTER->Enabled = false;
            this->ABSTRACT_GESTURE_COUNTER->Location = System::Drawing::Point(240, 98);
            this->ABSTRACT_GESTURE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
            this->ABSTRACT_GESTURE_COUNTER->Name = L"ABSTRACT_GESTURE_COUNTER";
            this->ABSTRACT_GESTURE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->ABSTRACT_GESTURE_COUNTER->TabIndex = 141;
            // 
            // MIME_GESTURE_CHECKBOX
            // 
            this->MIME_GESTURE_CHECKBOX->AutoSize = true;
            this->MIME_GESTURE_CHECKBOX->Location = System::Drawing::Point(21, 65);
            this->MIME_GESTURE_CHECKBOX->Name = L"MIME_GESTURE_CHECKBOX";
            this->MIME_GESTURE_CHECKBOX->Size = System::Drawing::Size(146, 28);
            this->MIME_GESTURE_CHECKBOX->TabIndex = 137;
            this->MIME_GESTURE_CHECKBOX->Text = L"Mime d\'action";
            this->MIME_GESTURE_CHECKBOX->UseVisualStyleBackColor = true;
            this->MIME_GESTURE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::MIME_GESTURE_CHECKBOX_CheckedChanged);
            // 
            // MIME_GESTURE_MAX_VALUE
            // 
            this->MIME_GESTURE_MAX_VALUE->AutoSize = true;
            this->MIME_GESTURE_MAX_VALUE->Location = System::Drawing::Point(306, 66);
            this->MIME_GESTURE_MAX_VALUE->Name = L"MIME_GESTURE_MAX_VALUE";
            this->MIME_GESTURE_MAX_VALUE->Size = System::Drawing::Size(35, 24);
            this->MIME_GESTURE_MAX_VALUE->TabIndex = 139;
            this->MIME_GESTURE_MAX_VALUE->Text = L"/10";
            // 
            // MIME_GESTURE_COUNTER
            // 
            this->MIME_GESTURE_COUNTER->Enabled = false;
            this->MIME_GESTURE_COUNTER->Location = System::Drawing::Point(239, 64);
            this->MIME_GESTURE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
            this->MIME_GESTURE_COUNTER->Name = L"MIME_GESTURE_COUNTER";
            this->MIME_GESTURE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->MIME_GESTURE_COUNTER->TabIndex = 138;
            // 
            // SYMBOLIC_GESTURE_CHECKBOX
            // 
            this->SYMBOLIC_GESTURE_CHECKBOX->AutoSize = true;
            this->SYMBOLIC_GESTURE_CHECKBOX->Location = System::Drawing::Point(21, 31);
            this->SYMBOLIC_GESTURE_CHECKBOX->Name = L"SYMBOLIC_GESTURE_CHECKBOX";
            this->SYMBOLIC_GESTURE_CHECKBOX->Size = System::Drawing::Size(138, 28);
            this->SYMBOLIC_GESTURE_CHECKBOX->TabIndex = 134;
            this->SYMBOLIC_GESTURE_CHECKBOX->Text = L"Symboliques";
            this->SYMBOLIC_GESTURE_CHECKBOX->UseVisualStyleBackColor = true;
            this->SYMBOLIC_GESTURE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::SYMBOLIC_GESTURE_CHECKBOX_CheckedChanged);
            // 
            // SYMBOLIC_GESTURE_MAX_VALUE
            // 
            this->SYMBOLIC_GESTURE_MAX_VALUE->AutoSize = true;
            this->SYMBOLIC_GESTURE_MAX_VALUE->Location = System::Drawing::Point(306, 32);
            this->SYMBOLIC_GESTURE_MAX_VALUE->Name = L"SYMBOLIC_GESTURE_MAX_VALUE";
            this->SYMBOLIC_GESTURE_MAX_VALUE->Size = System::Drawing::Size(25, 24);
            this->SYMBOLIC_GESTURE_MAX_VALUE->TabIndex = 136;
            this->SYMBOLIC_GESTURE_MAX_VALUE->Text = L"/5";
            // 
            // SYMBOLIC_GESTURE_COUNTER
            // 
            this->SYMBOLIC_GESTURE_COUNTER->Enabled = false;
            this->SYMBOLIC_GESTURE_COUNTER->Location = System::Drawing::Point(239, 30);
            this->SYMBOLIC_GESTURE_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
            this->SYMBOLIC_GESTURE_COUNTER->Name = L"SYMBOLIC_GESTURE_COUNTER";
            this->SYMBOLIC_GESTURE_COUNTER->Size = System::Drawing::Size(61, 29);
            this->SYMBOLIC_GESTURE_COUNTER->TabIndex = 135;
            // 
            // PRAXIES_LABEL
            // 
            this->PRAXIES_LABEL->Controls->Add(this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON);
            this->PRAXIES_LABEL->Controls->Add(this->CUBE_PRAXIES_FAIL_RADIOBUTTON);
            this->PRAXIES_LABEL->Controls->Add(this->CUBE_PRAXIES_CHECKBOX);
            this->PRAXIES_LABEL->Controls->Add(this->CLOCK_PRAXIES_CHECKBOX);
            this->PRAXIES_LABEL->Controls->Add(this->CLOCK_PRAXIES_MAX_VALUE);
            this->PRAXIES_LABEL->Controls->Add(this->CLOCK_PRAXIES_COUNTER);
            this->PRAXIES_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->PRAXIES_LABEL->Location = System::Drawing::Point(778, 111);
            this->PRAXIES_LABEL->Name = L"PRAXIES_LABEL";
            this->PRAXIES_LABEL->Size = System::Drawing::Size(349, 105);
            this->PRAXIES_LABEL->TabIndex = 148;
            this->PRAXIES_LABEL->TabStop = false;
            this->PRAXIES_LABEL->Text = L"Praxies";
            // 
            // CUBE_PRAXIES_SUCCESS_RADIOBUTTON
            // 
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->AutoSize = true;
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Enabled = false;
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Location = System::Drawing::Point(255, 64);
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Name = L"CUBE_PRAXIES_SUCCESS_RADIOBUTTON";
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Size = System::Drawing::Size(85, 28);
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->TabIndex = 86;
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->TabStop = true;
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Text = L"Réussi";
            this->CUBE_PRAXIES_SUCCESS_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // CUBE_PRAXIES_FAIL_RADIOBUTTON
            // 
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->AutoSize = true;
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->Enabled = false;
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->Location = System::Drawing::Point(148, 65);
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->Name = L"CUBE_PRAXIES_FAIL_RADIOBUTTON";
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->Size = System::Drawing::Size(95, 28);
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->TabIndex = 85;
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->TabStop = true;
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->Text = L"Echoué";
            this->CUBE_PRAXIES_FAIL_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // CUBE_PRAXIES_CHECKBOX
            // 
            this->CUBE_PRAXIES_CHECKBOX->AutoSize = true;
            this->CUBE_PRAXIES_CHECKBOX->Location = System::Drawing::Point(21, 65);
            this->CUBE_PRAXIES_CHECKBOX->Name = L"CUBE_PRAXIES_CHECKBOX";
            this->CUBE_PRAXIES_CHECKBOX->Size = System::Drawing::Size(80, 28);
            this->CUBE_PRAXIES_CHECKBOX->TabIndex = 84;
            this->CUBE_PRAXIES_CHECKBOX->Text = L"Cube:";
            this->CUBE_PRAXIES_CHECKBOX->UseVisualStyleBackColor = true;
            this->CUBE_PRAXIES_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::CUBE_PRAXIES_CHECKBOX_CheckedChanged);
            // 
            // CLOCK_PRAXIES_CHECKBOX
            // 
            this->CLOCK_PRAXIES_CHECKBOX->AutoSize = true;
            this->CLOCK_PRAXIES_CHECKBOX->Location = System::Drawing::Point(21, 31);
            this->CLOCK_PRAXIES_CHECKBOX->Name = L"CLOCK_PRAXIES_CHECKBOX";
            this->CLOCK_PRAXIES_CHECKBOX->Size = System::Drawing::Size(113, 28);
            this->CLOCK_PRAXIES_CHECKBOX->TabIndex = 81;
            this->CLOCK_PRAXIES_CHECKBOX->Text = L"Horologe:";
            this->CLOCK_PRAXIES_CHECKBOX->UseVisualStyleBackColor = true;
            this->CLOCK_PRAXIES_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::CLOCK_PRAXIES_CHECKBOX_CheckedChanged);
            // 
            // CLOCK_PRAXIES_MAX_VALUE
            // 
            this->CLOCK_PRAXIES_MAX_VALUE->AutoSize = true;
            this->CLOCK_PRAXIES_MAX_VALUE->Location = System::Drawing::Point(306, 32);
            this->CLOCK_PRAXIES_MAX_VALUE->Name = L"CLOCK_PRAXIES_MAX_VALUE";
            this->CLOCK_PRAXIES_MAX_VALUE->Size = System::Drawing::Size(25, 24);
            this->CLOCK_PRAXIES_MAX_VALUE->TabIndex = 83;
            this->CLOCK_PRAXIES_MAX_VALUE->Text = L"/3";
            // 
            // CLOCK_PRAXIES_COUNTER
            // 
            this->CLOCK_PRAXIES_COUNTER->Enabled = false;
            this->CLOCK_PRAXIES_COUNTER->Location = System::Drawing::Point(239, 30);
            this->CLOCK_PRAXIES_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
            this->CLOCK_PRAXIES_COUNTER->Name = L"CLOCK_PRAXIES_COUNTER";
            this->CLOCK_PRAXIES_COUNTER->Size = System::Drawing::Size(61, 29);
            this->CLOCK_PRAXIES_COUNTER->TabIndex = 82;
            // 
            // LAST_BALANCE_CHECKBOX
            // 
            this->LAST_BALANCE_CHECKBOX->AutoSize = true;
            this->LAST_BALANCE_CHECKBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->LAST_BALANCE_CHECKBOX->Location = System::Drawing::Point(14, 67);
            this->LAST_BALANCE_CHECKBOX->Name = L"LAST_BALANCE_CHECKBOX";
            this->LAST_BALANCE_CHECKBOX->Size = System::Drawing::Size(297, 28);
            this->LAST_BALANCE_CHECKBOX->TabIndex = 144;
            this->LAST_BALANCE_CHECKBOX->Text = L"Date du dernier bilan (<6 mois): ";
            this->LAST_BALANCE_CHECKBOX->UseVisualStyleBackColor = true;
            this->LAST_BALANCE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::LAST_BALANCE_CHECKBOX_CheckedChanged);
            // 
            // LAST_BALANCE_DATEPICKER
            // 
            this->LAST_BALANCE_DATEPICKER->Enabled = false;
            this->LAST_BALANCE_DATEPICKER->Location = System::Drawing::Point(317, 70);
            this->LAST_BALANCE_DATEPICKER->Name = L"LAST_BALANCE_DATEPICKER";
            this->LAST_BALANCE_DATEPICKER->Size = System::Drawing::Size(205, 20);
            this->LAST_BALANCE_DATEPICKER->TabIndex = 145;
            // 
            // EXECUTIVE_TEST_LABEL
            // 
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->EMPAN_ENVERS_CHECKBOX);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->EMPAN_ENDROIT_CHECKBOX);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_B_ERRORS_CHECKBOX);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_B_TIME_CHECKBOX);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_A_ERRORS_CHECKBOX);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_A_TIME_CHECKBOX);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->BREF_CHECKBOX);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_B_TIME_SEC_LABEL);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_A_TIME_SEC_LABEL);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_B_ERRORS_COUNTER);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_B_LABEL);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_B_TIME_COUNTER);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->EMPAN_ENVERS_COUNTER);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->EMPAN_ENDROIT_COUNTER);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_A_ERRORS_COUNTER);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_A_TIME_COUNTER);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->TMT_A_LABEL);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->BREF_MAX_VALUE);
            this->EXECUTIVE_TEST_LABEL->Controls->Add(this->BREF_COUNTER);
            this->EXECUTIVE_TEST_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->EXECUTIVE_TEST_LABEL->Location = System::Drawing::Point(409, 111);
            this->EXECUTIVE_TEST_LABEL->Name = L"EXECUTIVE_TEST_LABEL";
            this->EXECUTIVE_TEST_LABEL->Size = System::Drawing::Size(360, 285);
            this->EXECUTIVE_TEST_LABEL->TabIndex = 147;
            this->EXECUTIVE_TEST_LABEL->TabStop = false;
            this->EXECUTIVE_TEST_LABEL->Text = L"Tests Executifs";
            // 
            // EMPAN_ENVERS_CHECKBOX
            // 
            this->EMPAN_ENVERS_CHECKBOX->AutoSize = true;
            this->EMPAN_ENVERS_CHECKBOX->Location = System::Drawing::Point(21, 250);
            this->EMPAN_ENVERS_CHECKBOX->Name = L"EMPAN_ENVERS_CHECKBOX";
            this->EMPAN_ENVERS_CHECKBOX->Size = System::Drawing::Size(185, 28);
            this->EMPAN_ENVERS_CHECKBOX->TabIndex = 78;
            this->EMPAN_ENVERS_CHECKBOX->Text = L"EMPAN ENVERS:";
            this->EMPAN_ENVERS_CHECKBOX->UseVisualStyleBackColor = true;
            this->EMPAN_ENVERS_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::EMPAN_ENVERS_CHECKBOX_CheckedChanged);
            // 
            // EMPAN_ENDROIT_CHECKBOX
            // 
            this->EMPAN_ENDROIT_CHECKBOX->AutoSize = true;
            this->EMPAN_ENDROIT_CHECKBOX->Location = System::Drawing::Point(21, 213);
            this->EMPAN_ENDROIT_CHECKBOX->Name = L"EMPAN_ENDROIT_CHECKBOX";
            this->EMPAN_ENDROIT_CHECKBOX->Size = System::Drawing::Size(191, 28);
            this->EMPAN_ENDROIT_CHECKBOX->TabIndex = 76;
            this->EMPAN_ENDROIT_CHECKBOX->Text = L"EMPAN ENDROIT:";
            this->EMPAN_ENDROIT_CHECKBOX->UseVisualStyleBackColor = true;
            this->EMPAN_ENDROIT_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::EMPAN_ENDROIT_CHECKBOX_CheckedChanged);
            // 
            // TMT_B_ERRORS_CHECKBOX
            // 
            this->TMT_B_ERRORS_CHECKBOX->AutoSize = true;
            this->TMT_B_ERRORS_CHECKBOX->Location = System::Drawing::Point(137, 176);
            this->TMT_B_ERRORS_CHECKBOX->Name = L"TMT_B_ERRORS_CHECKBOX";
            this->TMT_B_ERRORS_CHECKBOX->Size = System::Drawing::Size(91, 28);
            this->TMT_B_ERRORS_CHECKBOX->TabIndex = 74;
            this->TMT_B_ERRORS_CHECKBOX->Text = L"Erreurs";
            this->TMT_B_ERRORS_CHECKBOX->UseVisualStyleBackColor = true;
            this->TMT_B_ERRORS_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::TMT_B_ERRORS_CHECKBOX_CheckedChanged);
            // 
            // TMT_B_TIME_CHECKBOX
            // 
            this->TMT_B_TIME_CHECKBOX->AutoSize = true;
            this->TMT_B_TIME_CHECKBOX->Location = System::Drawing::Point(137, 139);
            this->TMT_B_TIME_CHECKBOX->Name = L"TMT_B_TIME_CHECKBOX";
            this->TMT_B_TIME_CHECKBOX->Size = System::Drawing::Size(88, 28);
            this->TMT_B_TIME_CHECKBOX->TabIndex = 71;
            this->TMT_B_TIME_CHECKBOX->Text = L"Temps";
            this->TMT_B_TIME_CHECKBOX->UseVisualStyleBackColor = true;
            this->TMT_B_TIME_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::TMT_B_TIME_CHECKBOX_CheckedChanged);
            // 
            // TMT_A_ERRORS_CHECKBOX
            // 
            this->TMT_A_ERRORS_CHECKBOX->AutoSize = true;
            this->TMT_A_ERRORS_CHECKBOX->Location = System::Drawing::Point(137, 104);
            this->TMT_A_ERRORS_CHECKBOX->Name = L"TMT_A_ERRORS_CHECKBOX";
            this->TMT_A_ERRORS_CHECKBOX->Size = System::Drawing::Size(91, 28);
            this->TMT_A_ERRORS_CHECKBOX->TabIndex = 68;
            this->TMT_A_ERRORS_CHECKBOX->Text = L"Erreurs";
            this->TMT_A_ERRORS_CHECKBOX->UseVisualStyleBackColor = true;
            this->TMT_A_ERRORS_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::TMT_A_ERRORS_CHECKBOX_CheckedChanged);
            // 
            // TMT_A_TIME_CHECKBOX
            // 
            this->TMT_A_TIME_CHECKBOX->AutoSize = true;
            this->TMT_A_TIME_CHECKBOX->Location = System::Drawing::Point(137, 67);
            this->TMT_A_TIME_CHECKBOX->Name = L"TMT_A_TIME_CHECKBOX";
            this->TMT_A_TIME_CHECKBOX->Size = System::Drawing::Size(88, 28);
            this->TMT_A_TIME_CHECKBOX->TabIndex = 65;
            this->TMT_A_TIME_CHECKBOX->Text = L"Temps";
            this->TMT_A_TIME_CHECKBOX->UseVisualStyleBackColor = true;
            this->TMT_A_TIME_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::TMT_A_TIME_CHECKBOX_CheckedChanged);
            // 
            // BREF_CHECKBOX
            // 
            this->BREF_CHECKBOX->AutoSize = true;
            this->BREF_CHECKBOX->Location = System::Drawing::Point(21, 31);
            this->BREF_CHECKBOX->Name = L"BREF_CHECKBOX";
            this->BREF_CHECKBOX->Size = System::Drawing::Size(84, 28);
            this->BREF_CHECKBOX->TabIndex = 61;
            this->BREF_CHECKBOX->Text = L"BREF:";
            this->BREF_CHECKBOX->UseVisualStyleBackColor = true;
            this->BREF_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::BREF_CHECKBOX_CheckedChanged);
            // 
            // TMT_B_TIME_SEC_LABEL
            // 
            this->TMT_B_TIME_SEC_LABEL->AutoSize = true;
            this->TMT_B_TIME_SEC_LABEL->Location = System::Drawing::Point(306, 142);
            this->TMT_B_TIME_SEC_LABEL->Name = L"TMT_B_TIME_SEC_LABEL";
            this->TMT_B_TIME_SEC_LABEL->Size = System::Drawing::Size(40, 24);
            this->TMT_B_TIME_SEC_LABEL->TabIndex = 73;
            this->TMT_B_TIME_SEC_LABEL->Text = L"sec";
            // 
            // TMT_A_TIME_SEC_LABEL
            // 
            this->TMT_A_TIME_SEC_LABEL->AutoSize = true;
            this->TMT_A_TIME_SEC_LABEL->Location = System::Drawing::Point(306, 68);
            this->TMT_A_TIME_SEC_LABEL->Name = L"TMT_A_TIME_SEC_LABEL";
            this->TMT_A_TIME_SEC_LABEL->Size = System::Drawing::Size(40, 24);
            this->TMT_A_TIME_SEC_LABEL->TabIndex = 67;
            this->TMT_A_TIME_SEC_LABEL->Text = L"sec";
            // 
            // TMT_B_ERRORS_COUNTER
            // 
            this->TMT_B_ERRORS_COUNTER->Enabled = false;
            this->TMT_B_ERRORS_COUNTER->Location = System::Drawing::Point(239, 175);
            this->TMT_B_ERRORS_COUNTER->Name = L"TMT_B_ERRORS_COUNTER";
            this->TMT_B_ERRORS_COUNTER->Size = System::Drawing::Size(61, 29);
            this->TMT_B_ERRORS_COUNTER->TabIndex = 75;
            // 
            // TMT_B_LABEL
            // 
            this->TMT_B_LABEL->AutoSize = true;
            this->TMT_B_LABEL->Location = System::Drawing::Point(17, 158);
            this->TMT_B_LABEL->Name = L"TMT_B_LABEL";
            this->TMT_B_LABEL->Size = System::Drawing::Size(72, 24);
            this->TMT_B_LABEL->TabIndex = 70;
            this->TMT_B_LABEL->Text = L"TMT B:";
            // 
            // TMT_B_TIME_COUNTER
            // 
            this->TMT_B_TIME_COUNTER->Enabled = false;
            this->TMT_B_TIME_COUNTER->Location = System::Drawing::Point(239, 138);
            this->TMT_B_TIME_COUNTER->Name = L"TMT_B_TIME_COUNTER";
            this->TMT_B_TIME_COUNTER->Size = System::Drawing::Size(61, 29);
            this->TMT_B_TIME_COUNTER->TabIndex = 72;
            // 
            // EMPAN_ENVERS_COUNTER
            // 
            this->EMPAN_ENVERS_COUNTER->Enabled = false;
            this->EMPAN_ENVERS_COUNTER->Location = System::Drawing::Point(239, 249);
            this->EMPAN_ENVERS_COUNTER->Name = L"EMPAN_ENVERS_COUNTER";
            this->EMPAN_ENVERS_COUNTER->Size = System::Drawing::Size(61, 29);
            this->EMPAN_ENVERS_COUNTER->TabIndex = 79;
            // 
            // EMPAN_ENDROIT_COUNTER
            // 
            this->EMPAN_ENDROIT_COUNTER->Enabled = false;
            this->EMPAN_ENDROIT_COUNTER->Location = System::Drawing::Point(239, 212);
            this->EMPAN_ENDROIT_COUNTER->Name = L"EMPAN_ENDROIT_COUNTER";
            this->EMPAN_ENDROIT_COUNTER->Size = System::Drawing::Size(61, 29);
            this->EMPAN_ENDROIT_COUNTER->TabIndex = 77;
            // 
            // TMT_A_ERRORS_COUNTER
            // 
            this->TMT_A_ERRORS_COUNTER->Enabled = false;
            this->TMT_A_ERRORS_COUNTER->Location = System::Drawing::Point(239, 103);
            this->TMT_A_ERRORS_COUNTER->Name = L"TMT_A_ERRORS_COUNTER";
            this->TMT_A_ERRORS_COUNTER->Size = System::Drawing::Size(61, 29);
            this->TMT_A_ERRORS_COUNTER->TabIndex = 69;
            // 
            // TMT_A_TIME_COUNTER
            // 
            this->TMT_A_TIME_COUNTER->Enabled = false;
            this->TMT_A_TIME_COUNTER->Location = System::Drawing::Point(239, 66);
            this->TMT_A_TIME_COUNTER->Name = L"TMT_A_TIME_COUNTER";
            this->TMT_A_TIME_COUNTER->Size = System::Drawing::Size(61, 29);
            this->TMT_A_TIME_COUNTER->TabIndex = 66;
            // 
            // TMT_A_LABEL
            // 
            this->TMT_A_LABEL->AutoSize = true;
            this->TMT_A_LABEL->Location = System::Drawing::Point(17, 87);
            this->TMT_A_LABEL->Name = L"TMT_A_LABEL";
            this->TMT_A_LABEL->Size = System::Drawing::Size(73, 24);
            this->TMT_A_LABEL->TabIndex = 64;
            this->TMT_A_LABEL->Text = L"TMT A:";
            // 
            // BREF_MAX_VALUE
            // 
            this->BREF_MAX_VALUE->AutoSize = true;
            this->BREF_MAX_VALUE->Location = System::Drawing::Point(306, 32);
            this->BREF_MAX_VALUE->Name = L"BREF_MAX_VALUE";
            this->BREF_MAX_VALUE->Size = System::Drawing::Size(35, 24);
            this->BREF_MAX_VALUE->TabIndex = 63;
            this->BREF_MAX_VALUE->Text = L"/18";
            // 
            // BREF_COUNTER
            // 
            this->BREF_COUNTER->Enabled = false;
            this->BREF_COUNTER->Location = System::Drawing::Point(239, 30);
            this->BREF_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
            this->BREF_COUNTER->Name = L"BREF_COUNTER";
            this->BREF_COUNTER->Size = System::Drawing::Size(61, 29);
            this->BREF_COUNTER->TabIndex = 62;
            // 
            // EPISODIC_MEMORY_LABEL
            // 
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->RTT_MEM_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->TOTAL_MEM_D_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->RLT_MEM_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->SENSIBILITY_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->FREE_MEM_D_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->TOTAL_MEM_3_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->FREE_MEM_3_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->TOTAL_MEM_2_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->RECOGNITION_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->FREE_MEM_2_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->TOTAL_MEM_1_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->SHORT_MEM_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->FREE_MEM_1_CHECKBOX);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->SENSIBILITY_MAX_VAL);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->RTT_MEM_MAX_VAL);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->RLT_MEM_MAX_VAL);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->RTT_MEM_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->RLT_MEM_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->TOTAL_MEM_D_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->FREE_MEM_D_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->SENSIBILITY_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->RECOGNITION_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->TOTAL_MEM_2_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->FREE_MEM_2_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->TOTAL_MEM_3_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->FREE_MEM_3_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->TOTAL_MEM_1_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->FREE_MEM_1_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->SHORT_MEM_MAX_VAL);
            this->EPISODIC_MEMORY_LABEL->Controls->Add(this->SHORT_MEM_COUNTER);
            this->EPISODIC_MEMORY_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->EPISODIC_MEMORY_LABEL->Location = System::Drawing::Point(9, 111);
            this->EPISODIC_MEMORY_LABEL->Name = L"EPISODIC_MEMORY_LABEL";
            this->EPISODIC_MEMORY_LABEL->Size = System::Drawing::Size(385, 506);
            this->EPISODIC_MEMORY_LABEL->TabIndex = 146;
            this->EPISODIC_MEMORY_LABEL->TabStop = false;
            this->EPISODIC_MEMORY_LABEL->Text = L"Memoire Épisodique";
            // 
            // RTT_MEM_CHECKBOX
            // 
            this->RTT_MEM_CHECKBOX->AutoSize = true;
            this->RTT_MEM_CHECKBOX->Location = System::Drawing::Point(17, 468);
            this->RTT_MEM_CHECKBOX->Name = L"RTT_MEM_CHECKBOX";
            this->RTT_MEM_CHECKBOX->Size = System::Drawing::Size(215, 28);
            this->RTT_MEM_CHECKBOX->TabIndex = 57;
            this->RTT_MEM_CHECKBOX->Text = L"RTT (RT1+RT2+RT3):";
            this->RTT_MEM_CHECKBOX->UseVisualStyleBackColor = true;
            this->RTT_MEM_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::RTT_MEM_CHECKBOX_CheckedChanged);
            // 
            // TOTAL_MEM_D_CHECKBOX
            // 
            this->TOTAL_MEM_D_CHECKBOX->AutoSize = true;
            this->TOTAL_MEM_D_CHECKBOX->Location = System::Drawing::Point(17, 396);
            this->TOTAL_MEM_D_CHECKBOX->Name = L"TOTAL_MEM_D_CHECKBOX";
            this->TOTAL_MEM_D_CHECKBOX->Size = System::Drawing::Size(198, 28);
            this->TOTAL_MEM_D_CHECKBOX->TabIndex = 52;
            this->TOTAL_MEM_D_CHECKBOX->Text = L"Rappel Total Différé:";
            this->TOTAL_MEM_D_CHECKBOX->UseVisualStyleBackColor = true;
            this->TOTAL_MEM_D_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::TOTAL_MEM_D_CHECKBOX_CheckedChanged);
            // 
            // RLT_MEM_CHECKBOX
            // 
            this->RLT_MEM_CHECKBOX->AutoSize = true;
            this->RLT_MEM_CHECKBOX->Location = System::Drawing::Point(17, 431);
            this->RLT_MEM_CHECKBOX->Name = L"RLT_MEM_CHECKBOX";
            this->RLT_MEM_CHECKBOX->Size = System::Drawing::Size(207, 28);
            this->RLT_MEM_CHECKBOX->TabIndex = 54;
            this->RLT_MEM_CHECKBOX->Text = L"RLT (RL1+RL2+RL3):";
            this->RLT_MEM_CHECKBOX->UseVisualStyleBackColor = true;
            this->RLT_MEM_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::RLT_MEM_CHECKBOX_CheckedChanged);
            // 
            // SENSIBILITY_CHECKBOX
            // 
            this->SENSIBILITY_CHECKBOX->AutoSize = true;
            this->SENSIBILITY_CHECKBOX->Location = System::Drawing::Point(18, 325);
            this->SENSIBILITY_CHECKBOX->Name = L"SENSIBILITY_CHECKBOX";
            this->SENSIBILITY_CHECKBOX->Size = System::Drawing::Size(219, 28);
            this->SENSIBILITY_CHECKBOX->TabIndex = 47;
            this->SENSIBILITY_CHECKBOX->Text = L"Sensibilité à l\'indiçage:";
            this->SENSIBILITY_CHECKBOX->UseVisualStyleBackColor = true;
            this->SENSIBILITY_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::SENSIBILITY_CHECKBOX_CheckedChanged);
            // 
            // FREE_MEM_D_CHECKBOX
            // 
            this->FREE_MEM_D_CHECKBOX->AutoSize = true;
            this->FREE_MEM_D_CHECKBOX->Location = System::Drawing::Point(18, 359);
            this->FREE_MEM_D_CHECKBOX->Name = L"FREE_MEM_D_CHECKBOX";
            this->FREE_MEM_D_CHECKBOX->Size = System::Drawing::Size(199, 28);
            this->FREE_MEM_D_CHECKBOX->TabIndex = 50;
            this->FREE_MEM_D_CHECKBOX->Text = L"Rappel Libre Différé:";
            this->FREE_MEM_D_CHECKBOX->UseVisualStyleBackColor = true;
            this->FREE_MEM_D_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::FREE_MEM_D_CHECKBOX_CheckedChanged);
            // 
            // TOTAL_MEM_3_CHECKBOX
            // 
            this->TOTAL_MEM_3_CHECKBOX->AutoSize = true;
            this->TOTAL_MEM_3_CHECKBOX->Location = System::Drawing::Point(18, 249);
            this->TOTAL_MEM_3_CHECKBOX->Name = L"TOTAL_MEM_3_CHECKBOX";
            this->TOTAL_MEM_3_CHECKBOX->Size = System::Drawing::Size(155, 28);
            this->TOTAL_MEM_3_CHECKBOX->TabIndex = 43;
            this->TOTAL_MEM_3_CHECKBOX->Text = L"Rappel Total 3:";
            this->TOTAL_MEM_3_CHECKBOX->UseVisualStyleBackColor = true;
            this->TOTAL_MEM_3_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::TOTAL_MEM_3_CHECKBOX_CheckedChanged);
            // 
            // FREE_MEM_3_CHECKBOX
            // 
            this->FREE_MEM_3_CHECKBOX->AutoSize = true;
            this->FREE_MEM_3_CHECKBOX->Location = System::Drawing::Point(17, 212);
            this->FREE_MEM_3_CHECKBOX->Name = L"FREE_MEM_3_CHECKBOX";
            this->FREE_MEM_3_CHECKBOX->Size = System::Drawing::Size(156, 28);
            this->FREE_MEM_3_CHECKBOX->TabIndex = 41;
            this->FREE_MEM_3_CHECKBOX->Text = L"Rappel Libre 3:";
            this->FREE_MEM_3_CHECKBOX->UseVisualStyleBackColor = true;
            this->FREE_MEM_3_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::FREE_MEM_3_CHECKBOX_CheckedChanged);
            // 
            // TOTAL_MEM_2_CHECKBOX
            // 
            this->TOTAL_MEM_2_CHECKBOX->AutoSize = true;
            this->TOTAL_MEM_2_CHECKBOX->Location = System::Drawing::Point(18, 178);
            this->TOTAL_MEM_2_CHECKBOX->Name = L"TOTAL_MEM_2_CHECKBOX";
            this->TOTAL_MEM_2_CHECKBOX->Size = System::Drawing::Size(155, 28);
            this->TOTAL_MEM_2_CHECKBOX->TabIndex = 39;
            this->TOTAL_MEM_2_CHECKBOX->Text = L"Rappel Total 2:";
            this->TOTAL_MEM_2_CHECKBOX->UseVisualStyleBackColor = true;
            this->TOTAL_MEM_2_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::TOTAL_MEM_2_CHECKBOX_CheckedChanged);
            // 
            // RECOGNITION_CHECKBOX
            // 
            this->RECOGNITION_CHECKBOX->AutoSize = true;
            this->RECOGNITION_CHECKBOX->Location = System::Drawing::Point(18, 288);
            this->RECOGNITION_CHECKBOX->Name = L"RECOGNITION_CHECKBOX";
            this->RECOGNITION_CHECKBOX->Size = System::Drawing::Size(175, 28);
            this->RECOGNITION_CHECKBOX->TabIndex = 45;
            this->RECOGNITION_CHECKBOX->Text = L"Reconnaissance:";
            this->RECOGNITION_CHECKBOX->UseVisualStyleBackColor = true;
            this->RECOGNITION_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::RECOGNITION_CHECKBOX_CheckedChanged);
            // 
            // FREE_MEM_2_CHECKBOX
            // 
            this->FREE_MEM_2_CHECKBOX->AutoSize = true;
            this->FREE_MEM_2_CHECKBOX->Location = System::Drawing::Point(17, 141);
            this->FREE_MEM_2_CHECKBOX->Name = L"FREE_MEM_2_CHECKBOX";
            this->FREE_MEM_2_CHECKBOX->Size = System::Drawing::Size(156, 28);
            this->FREE_MEM_2_CHECKBOX->TabIndex = 37;
            this->FREE_MEM_2_CHECKBOX->Text = L"Rappel Libre 2:";
            this->FREE_MEM_2_CHECKBOX->UseVisualStyleBackColor = true;
            this->FREE_MEM_2_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::FREE_MEM_2_CHECKBOX_CheckedChanged);
            // 
            // TOTAL_MEM_1_CHECKBOX
            // 
            this->TOTAL_MEM_1_CHECKBOX->AutoSize = true;
            this->TOTAL_MEM_1_CHECKBOX->Location = System::Drawing::Point(18, 106);
            this->TOTAL_MEM_1_CHECKBOX->Name = L"TOTAL_MEM_1_CHECKBOX";
            this->TOTAL_MEM_1_CHECKBOX->Size = System::Drawing::Size(155, 28);
            this->TOTAL_MEM_1_CHECKBOX->TabIndex = 35;
            this->TOTAL_MEM_1_CHECKBOX->Text = L"Rappel Total 1:";
            this->TOTAL_MEM_1_CHECKBOX->UseVisualStyleBackColor = true;
            this->TOTAL_MEM_1_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::TOTAL_MEM_1_CHECKBOX_CheckedChanged);
            // 
            // SHORT_MEM_CHECKBOX
            // 
            this->SHORT_MEM_CHECKBOX->AutoSize = true;
            this->SHORT_MEM_CHECKBOX->Location = System::Drawing::Point(17, 33);
            this->SHORT_MEM_CHECKBOX->Name = L"SHORT_MEM_CHECKBOX";
            this->SHORT_MEM_CHECKBOX->Size = System::Drawing::Size(175, 28);
            this->SHORT_MEM_CHECKBOX->TabIndex = 30;
            this->SHORT_MEM_CHECKBOX->Text = L"Rappel Immédiat:";
            this->SHORT_MEM_CHECKBOX->UseVisualStyleBackColor = true;
            this->SHORT_MEM_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::SHORT_MEM_CHECKBOX_CheckedChanged);
            // 
            // FREE_MEM_1_CHECKBOX
            // 
            this->FREE_MEM_1_CHECKBOX->AutoSize = true;
            this->FREE_MEM_1_CHECKBOX->Location = System::Drawing::Point(17, 69);
            this->FREE_MEM_1_CHECKBOX->Name = L"FREE_MEM_1_CHECKBOX";
            this->FREE_MEM_1_CHECKBOX->Size = System::Drawing::Size(156, 28);
            this->FREE_MEM_1_CHECKBOX->TabIndex = 33;
            this->FREE_MEM_1_CHECKBOX->Text = L"Rappel Libre 1:";
            this->FREE_MEM_1_CHECKBOX->UseVisualStyleBackColor = true;
            this->FREE_MEM_1_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &BilanNeuropsychologic::FREE_MEM_1_CHECKBOX_CheckedChanged);
            // 
            // SENSIBILITY_MAX_VAL
            // 
            this->SENSIBILITY_MAX_VAL->AutoSize = true;
            this->SENSIBILITY_MAX_VAL->Location = System::Drawing::Point(332, 324);
            this->SENSIBILITY_MAX_VAL->Name = L"SENSIBILITY_MAX_VAL";
            this->SENSIBILITY_MAX_VAL->Size = System::Drawing::Size(25, 24);
            this->SENSIBILITY_MAX_VAL->TabIndex = 49;
            this->SENSIBILITY_MAX_VAL->Text = L"%";
            // 
            // RTT_MEM_MAX_VAL
            // 
            this->RTT_MEM_MAX_VAL->AutoSize = true;
            this->RTT_MEM_MAX_VAL->Location = System::Drawing::Point(332, 470);
            this->RTT_MEM_MAX_VAL->Name = L"RTT_MEM_MAX_VAL";
            this->RTT_MEM_MAX_VAL->Size = System::Drawing::Size(35, 24);
            this->RTT_MEM_MAX_VAL->TabIndex = 59;
            this->RTT_MEM_MAX_VAL->Text = L"/48";
            // 
            // RLT_MEM_MAX_VAL
            // 
            this->RLT_MEM_MAX_VAL->AutoSize = true;
            this->RLT_MEM_MAX_VAL->Location = System::Drawing::Point(332, 430);
            this->RLT_MEM_MAX_VAL->Name = L"RLT_MEM_MAX_VAL";
            this->RLT_MEM_MAX_VAL->Size = System::Drawing::Size(35, 24);
            this->RLT_MEM_MAX_VAL->TabIndex = 56;
            this->RLT_MEM_MAX_VAL->Text = L"/48";
            // 
            // RTT_MEM_COUNTER
            // 
            this->RTT_MEM_COUNTER->Enabled = false;
            this->RTT_MEM_COUNTER->Location = System::Drawing::Point(265, 465);
            this->RTT_MEM_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 48, 0, 0, 0 });
            this->RTT_MEM_COUNTER->Name = L"RTT_MEM_COUNTER";
            this->RTT_MEM_COUNTER->Size = System::Drawing::Size(61, 29);
            this->RTT_MEM_COUNTER->TabIndex = 58;
            // 
            // RLT_MEM_COUNTER
            // 
            this->RLT_MEM_COUNTER->Enabled = false;
            this->RLT_MEM_COUNTER->Location = System::Drawing::Point(265, 428);
            this->RLT_MEM_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 48, 0, 0, 0 });
            this->RLT_MEM_COUNTER->Name = L"RLT_MEM_COUNTER";
            this->RLT_MEM_COUNTER->Size = System::Drawing::Size(61, 29);
            this->RLT_MEM_COUNTER->TabIndex = 55;
            // 
            // TOTAL_MEM_D_COUNTER
            // 
            this->TOTAL_MEM_D_COUNTER->Enabled = false;
            this->TOTAL_MEM_D_COUNTER->Location = System::Drawing::Point(265, 393);
            this->TOTAL_MEM_D_COUNTER->Name = L"TOTAL_MEM_D_COUNTER";
            this->TOTAL_MEM_D_COUNTER->Size = System::Drawing::Size(61, 29);
            this->TOTAL_MEM_D_COUNTER->TabIndex = 53;
            // 
            // FREE_MEM_D_COUNTER
            // 
            this->FREE_MEM_D_COUNTER->Enabled = false;
            this->FREE_MEM_D_COUNTER->Location = System::Drawing::Point(265, 356);
            this->FREE_MEM_D_COUNTER->Name = L"FREE_MEM_D_COUNTER";
            this->FREE_MEM_D_COUNTER->Size = System::Drawing::Size(61, 29);
            this->FREE_MEM_D_COUNTER->TabIndex = 51;
            // 
            // SENSIBILITY_COUNTER
            // 
            this->SENSIBILITY_COUNTER->Enabled = false;
            this->SENSIBILITY_COUNTER->Location = System::Drawing::Point(265, 322);
            this->SENSIBILITY_COUNTER->Name = L"SENSIBILITY_COUNTER";
            this->SENSIBILITY_COUNTER->Size = System::Drawing::Size(61, 29);
            this->SENSIBILITY_COUNTER->TabIndex = 48;
            // 
            // RECOGNITION_COUNTER
            // 
            this->RECOGNITION_COUNTER->Enabled = false;
            this->RECOGNITION_COUNTER->Location = System::Drawing::Point(265, 285);
            this->RECOGNITION_COUNTER->Name = L"RECOGNITION_COUNTER";
            this->RECOGNITION_COUNTER->Size = System::Drawing::Size(61, 29);
            this->RECOGNITION_COUNTER->TabIndex = 46;
            // 
            // TOTAL_MEM_2_COUNTER
            // 
            this->TOTAL_MEM_2_COUNTER->Enabled = false;
            this->TOTAL_MEM_2_COUNTER->Location = System::Drawing::Point(265, 175);
            this->TOTAL_MEM_2_COUNTER->Name = L"TOTAL_MEM_2_COUNTER";
            this->TOTAL_MEM_2_COUNTER->Size = System::Drawing::Size(61, 29);
            this->TOTAL_MEM_2_COUNTER->TabIndex = 40;
            // 
            // FREE_MEM_2_COUNTER
            // 
            this->FREE_MEM_2_COUNTER->Enabled = false;
            this->FREE_MEM_2_COUNTER->Location = System::Drawing::Point(265, 138);
            this->FREE_MEM_2_COUNTER->Name = L"FREE_MEM_2_COUNTER";
            this->FREE_MEM_2_COUNTER->Size = System::Drawing::Size(61, 29);
            this->FREE_MEM_2_COUNTER->TabIndex = 38;
            // 
            // TOTAL_MEM_3_COUNTER
            // 
            this->TOTAL_MEM_3_COUNTER->Enabled = false;
            this->TOTAL_MEM_3_COUNTER->Location = System::Drawing::Point(265, 249);
            this->TOTAL_MEM_3_COUNTER->Name = L"TOTAL_MEM_3_COUNTER";
            this->TOTAL_MEM_3_COUNTER->Size = System::Drawing::Size(61, 29);
            this->TOTAL_MEM_3_COUNTER->TabIndex = 44;
            // 
            // FREE_MEM_3_COUNTER
            // 
            this->FREE_MEM_3_COUNTER->Enabled = false;
            this->FREE_MEM_3_COUNTER->Location = System::Drawing::Point(265, 212);
            this->FREE_MEM_3_COUNTER->Name = L"FREE_MEM_3_COUNTER";
            this->FREE_MEM_3_COUNTER->Size = System::Drawing::Size(61, 29);
            this->FREE_MEM_3_COUNTER->TabIndex = 42;
            // 
            // TOTAL_MEM_1_COUNTER
            // 
            this->TOTAL_MEM_1_COUNTER->Enabled = false;
            this->TOTAL_MEM_1_COUNTER->Location = System::Drawing::Point(265, 103);
            this->TOTAL_MEM_1_COUNTER->Name = L"TOTAL_MEM_1_COUNTER";
            this->TOTAL_MEM_1_COUNTER->Size = System::Drawing::Size(61, 29);
            this->TOTAL_MEM_1_COUNTER->TabIndex = 36;
            // 
            // FREE_MEM_1_COUNTER
            // 
            this->FREE_MEM_1_COUNTER->Enabled = false;
            this->FREE_MEM_1_COUNTER->Location = System::Drawing::Point(265, 66);
            this->FREE_MEM_1_COUNTER->Name = L"FREE_MEM_1_COUNTER";
            this->FREE_MEM_1_COUNTER->Size = System::Drawing::Size(61, 29);
            this->FREE_MEM_1_COUNTER->TabIndex = 34;
            // 
            // SHORT_MEM_MAX_VAL
            // 
            this->SHORT_MEM_MAX_VAL->AutoSize = true;
            this->SHORT_MEM_MAX_VAL->Location = System::Drawing::Point(332, 32);
            this->SHORT_MEM_MAX_VAL->Name = L"SHORT_MEM_MAX_VAL";
            this->SHORT_MEM_MAX_VAL->Size = System::Drawing::Size(35, 24);
            this->SHORT_MEM_MAX_VAL->TabIndex = 32;
            this->SHORT_MEM_MAX_VAL->Text = L"/16";
            // 
            // SHORT_MEM_COUNTER
            // 
            this->SHORT_MEM_COUNTER->Enabled = false;
            this->SHORT_MEM_COUNTER->Location = System::Drawing::Point(265, 30);
            this->SHORT_MEM_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
            this->SHORT_MEM_COUNTER->Name = L"SHORT_MEM_COUNTER";
            this->SHORT_MEM_COUNTER->Size = System::Drawing::Size(61, 29);
            this->SHORT_MEM_COUNTER->TabIndex = 31;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label1->Location = System::Drawing::Point(8, 24);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(298, 31);
            this->label1->TabIndex = 153;
            this->label1->Text = L"Bilan Neuropsychologic";
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(578, 725);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(157, 69);
            this->CANCEL_BUTTON->TabIndex = 155;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &BilanNeuropsychologic::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(409, 725);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(157, 69);
            this->REGISTER_BUTTON->TabIndex = 154;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &BilanNeuropsychologic::REGISTER_BUTTON_Click);
            // 
            // BilanNeuropsychologic
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1187, 843);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->LANGUAGE_LABEL);
            this->Controls->Add(this->REY_FIGURE_LABEL);
            this->Controls->Add(this->PSYCHO_AFFECTIVE_LABEL);
            this->Controls->Add(this->GESTURE_LABEL);
            this->Controls->Add(this->PRAXIES_LABEL);
            this->Controls->Add(this->LAST_BALANCE_CHECKBOX);
            this->Controls->Add(this->LAST_BALANCE_DATEPICKER);
            this->Controls->Add(this->EXECUTIVE_TEST_LABEL);
            this->Controls->Add(this->EPISODIC_MEMORY_LABEL);
            this->Name = L"BilanNeuropsychologic";
            this->Text = L"BilanNeuropsychologic";
            this->Load += gcnew System::EventHandler(this, &BilanNeuropsychologic::BilanNeuropsychologic_Load);
            this->LANGUAGE_LABEL->ResumeLayout(false);
            this->LANGUAGE_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ANIMAL_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DO80_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WORDS_COUNTER))->EndInit();
            this->REY_FIGURE_LABEL->ResumeLayout(false);
            this->REY_FIGURE_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->REY_FIGURE_TIME_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->REY_FIGURE_COPIE_COUNTER))->EndInit();
            this->PSYCHO_AFFECTIVE_LABEL->ResumeLayout(false);
            this->PSYCHO_AFFECTIVE_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ANXIETY_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DEPRESSION_COUNTER))->EndInit();
            this->GESTURE_LABEL->ResumeLayout(false);
            this->GESTURE_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ABSTRACT_GESTURE_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MIME_GESTURE_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SYMBOLIC_GESTURE_COUNTER))->EndInit();
            this->PRAXIES_LABEL->ResumeLayout(false);
            this->PRAXIES_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CLOCK_PRAXIES_COUNTER))->EndInit();
            this->EXECUTIVE_TEST_LABEL->ResumeLayout(false);
            this->EXECUTIVE_TEST_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TMT_B_ERRORS_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TMT_B_TIME_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EMPAN_ENVERS_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EMPAN_ENDROIT_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TMT_A_ERRORS_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TMT_A_TIME_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BREF_COUNTER))->EndInit();
            this->EPISODIC_MEMORY_LABEL->ResumeLayout(false);
            this->EPISODIC_MEMORY_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RTT_MEM_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RLT_MEM_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TOTAL_MEM_D_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FREE_MEM_D_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SENSIBILITY_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RECOGNITION_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TOTAL_MEM_2_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FREE_MEM_2_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TOTAL_MEM_3_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FREE_MEM_3_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TOTAL_MEM_1_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FREE_MEM_1_COUNTER))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SHORT_MEM_COUNTER))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        // Save Information of the Patient
        completePatientInformationObject();
        BilanNeuropsychologic::Close();
    }
    
    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        BilanNeuropsychologic::Close();
    }
    
    private: System::Void LAST_BALANCE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        LAST_BALANCE_DATEPICKER->Enabled = (LAST_BALANCE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void SHORT_MEM_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        SHORT_MEM_COUNTER->Enabled = (SHORT_MEM_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void FREE_MEM_1_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        FREE_MEM_1_COUNTER->Enabled = (FREE_MEM_1_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void TOTAL_MEM_1_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        TOTAL_MEM_1_COUNTER->Enabled = (TOTAL_MEM_1_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void FREE_MEM_2_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        FREE_MEM_2_COUNTER->Enabled = (FREE_MEM_2_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void TOTAL_MEM_2_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        TOTAL_MEM_2_COUNTER->Enabled = (TOTAL_MEM_2_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void FREE_MEM_3_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        FREE_MEM_3_COUNTER->Enabled = (FREE_MEM_3_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void TOTAL_MEM_3_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        TOTAL_MEM_3_COUNTER->Enabled = (TOTAL_MEM_3_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void RECOGNITION_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        RECOGNITION_COUNTER->Enabled = (RECOGNITION_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void SENSIBILITY_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        SENSIBILITY_COUNTER->Enabled = (SENSIBILITY_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void FREE_MEM_D_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        FREE_MEM_D_COUNTER->Enabled = (FREE_MEM_D_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void TOTAL_MEM_D_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        TOTAL_MEM_D_COUNTER->Enabled = (TOTAL_MEM_D_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void RLT_MEM_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        RLT_MEM_COUNTER->Enabled = (RLT_MEM_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void RTT_MEM_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        RTT_MEM_COUNTER->Enabled = (RTT_MEM_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void BREF_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        BREF_COUNTER->Enabled = (BREF_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void TMT_A_TIME_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        TMT_A_TIME_COUNTER->Enabled = (TMT_A_TIME_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void TMT_A_ERRORS_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        TMT_A_ERRORS_COUNTER->Enabled = (TMT_A_ERRORS_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void TMT_B_TIME_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        TMT_B_TIME_COUNTER->Enabled = (TMT_B_TIME_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void TMT_B_ERRORS_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        TMT_B_ERRORS_COUNTER->Enabled = (TMT_B_ERRORS_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void EMPAN_ENDROIT_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        EMPAN_ENDROIT_COUNTER->Enabled = (EMPAN_ENDROIT_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void EMPAN_ENVERS_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        EMPAN_ENVERS_COUNTER->Enabled = (EMPAN_ENVERS_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void CLOCK_PRAXIES_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        CLOCK_PRAXIES_COUNTER->Enabled = (CLOCK_PRAXIES_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void CUBE_PRAXIES_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        CUBE_PRAXIES_FAIL_RADIOBUTTON->Enabled = (CUBE_PRAXIES_CHECKBOX->Checked) ? true : false;
        CUBE_PRAXIES_SUCCESS_RADIOBUTTON->Enabled = (CUBE_PRAXIES_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void DEPRESSION_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        DEPRESSION_COUNTER->Enabled = (DEPRESSION_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void ANXIETY_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        ANXIETY_COUNTER->Enabled = (ANXIETY_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void ANXIETY_YN_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        ANXIETY_YES_RADIOBUTTON->Enabled = (ANXIETY_YN_CHECKBOX->Checked) ? true : false;
        ANXIETY_NO_RADIOBUTTON->Enabled = (ANXIETY_YN_CHECKBOX->Checked) ? true : false;
    }
    
    private: System::Void REY_FIGURE_COPIE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        REY_FIGURE_COPIE_COUNTER->Enabled = (REY_FIGURE_COPIE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void REY_FIGURE_TIME_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        REY_FIGURE_TIME_COUNTER->Enabled = (REY_FIGURE_TIME_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void REY_FIGURE_TYPE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        REY_FIGURE_TYPE1_RADIOBUTTON->Enabled = (REY_FIGURE_TYPE_CHECKBOX->Checked) ? true : false;
        REY_FIGURE_TYPE2_RADIOBUTTON->Enabled = (REY_FIGURE_TYPE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void SYMBOLIC_GESTURE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        SYMBOLIC_GESTURE_COUNTER->Enabled = (SYMBOLIC_GESTURE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void MIME_GESTURE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        MIME_GESTURE_COUNTER->Enabled = (MIME_GESTURE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void ABSTRACT_GESTURE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        ABSTRACT_GESTURE_COUNTER->Enabled = (ABSTRACT_GESTURE_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void FLUENCES_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        FLUENCSE_1_RADIOBUTTON->Enabled = (FLUENCES_CHECKBOX->Checked) ? true : false;
        FLUENCSE_2_RADIOBUTTON->Enabled = (FLUENCES_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void DO80_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        DO80_COUNTER->Enabled = (DO80_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void WORDS_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        WORDS_COUNTER->Enabled = (WORDS_CHECKBOX->Checked) ? true : false;
    }

    private: System::Void ANIMAL_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        ANIMAL_COUNTER->Enabled = (ANIMAL_CHECKBOX->Checked) ? true : false;
    }
private: System::Void BilanNeuropsychologic_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
