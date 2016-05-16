#pragma once
#include <msclr\marshal_cppstd.h>
#include "Dependencies/queryNodes.h"

namespace WacomTabletApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MedicalDataPT2
	/// </summary>
	public ref class MedicalDataPT2 : public System::Windows::Forms::Form
	{
	public: String^ currentLanguage;
	public:
		MedicalDataPT2(String^ language)
		{
			currentLanguage = language;
			InitializeComponent();
			UpdateLanguage_MedicalDataPT2Form(currentLanguage);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MedicalDataPT2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  NEUROPSYCHOLOGICAL_BALANCE_LABEL;
	private: System::Windows::Forms::GroupBox^  EXECUTIVE_TEST_LABEL;
	private: System::Windows::Forms::NumericUpDown^  TMT_B_ERRORS_COUNTER;
	private: System::Windows::Forms::Label^  TMT_B_LABEL;
	protected:
	private: void WacomTabletApplication::MedicalDataPT2::UpdateLanguage_MedicalDataPT2Form(String^ language);


	protected:



	private: System::Windows::Forms::NumericUpDown^  TMT_B_TIME_COUNTER;
	private: System::Windows::Forms::NumericUpDown^  EMPAN_ENVERS_COUNTER;
	private: System::Windows::Forms::NumericUpDown^  EMPAN_ENDROIT_COUNTER;
	private: System::Windows::Forms::NumericUpDown^  TMT_A_ERRORS_COUNTER;
	private: System::Windows::Forms::NumericUpDown^  TMT_A_TIME_COUNTER;
	private: System::Windows::Forms::Label^  TMT_A_LABEL;
	private: System::Windows::Forms::Label^  BREF_MAX_VALUE;
	private: System::Windows::Forms::NumericUpDown^  BREF_COUNTER;
	private: System::Windows::Forms::GroupBox^  EPISODIC_MEMORY_LABEL;
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
	private: System::Windows::Forms::GroupBox^  NEUROPSYCOLOGIC_EVALUATION_LABEL;
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
	private: System::Windows::Forms::Label^  MEMORY_MAX_VALUE;
	private: System::Windows::Forms::Label^  MMSE_MAX_VALUE;
	private: System::Windows::Forms::NumericUpDown^  MEMORY_COUNTER;
	private: System::Windows::Forms::NumericUpDown^  MMSE_COUNTER;
	private: System::Windows::Forms::DateTimePicker^  DATE_MMSE_DATEPICKER;
	private: System::Windows::Forms::Label^  TMT_B_TIME_SEC_LABEL;
	private: System::Windows::Forms::Label^  TMT_A_TIME_SEC_LABEL;
	private: System::Windows::Forms::DateTimePicker^  LAST_BALANCE_DATEPICKER;
	private: System::Windows::Forms::CheckBox^  MOCA_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  PRAXIES_MMSE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  MEMORY_MMSE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  LEARNING_MMSE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  DATE_MMSE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  MEMORY_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  LANGUAGE_MMSE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  CALCULE_MMSE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  ORIENTATION_MMSE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  MMSE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  IADL_CHECKBOX;
	private: System::Windows::Forms::GroupBox^  PRAXIES_LABEL;
	private: System::Windows::Forms::CheckBox^  CUBE_PRAXIES_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  CLOCK_PRAXIES_CHECKBOX;
	private: System::Windows::Forms::Label^  CLOCK_PRAXIES_MAX_VALUE;
	private: System::Windows::Forms::NumericUpDown^  CLOCK_PRAXIES_COUNTER;
	private: System::Windows::Forms::CheckBox^  LAST_BALANCE_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  EMPAN_ENVERS_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  EMPAN_ENDROIT_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  TMT_B_ERRORS_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  TMT_B_TIME_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  TMT_A_ERRORS_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  TMT_A_TIME_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  BREF_CHECKBOX;
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
	private: System::Windows::Forms::GroupBox^  PSYCHO_AFFECTIVE_LABEL;
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
	private: System::Windows::Forms::RadioButton^  CUBE_PRAXIES_SUCCESS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  CUBE_PRAXIES_FAIL_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  ANXIETY_NO_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  ANXIETY_YES_RADIOBUTTON;
	private: System::Windows::Forms::GroupBox^  LANGUAGE_LABEL;
	private: System::Windows::Forms::CheckBox^  DO80_CHECKBOX;
	private: System::Windows::Forms::NumericUpDown^  DO80_COUNTER;
	private: System::Windows::Forms::CheckBox^  FLUENCES_CHECKBOX;
	private: System::Windows::Forms::NumericUpDown^  WORDS_COUNTER;
	private: System::Windows::Forms::GroupBox^  REY_FIGURE_LABEL;
	private: System::Windows::Forms::Button^  CANCEL_BUTTON;
	private: System::Windows::Forms::Button^  REGISTER_BUTTON;
	private: System::Windows::Forms::CheckBox^  ANIMAL_CHECKBOX;
	private: System::Windows::Forms::NumericUpDown^  ANIMAL_COUNTER;
	private: System::Windows::Forms::CheckBox^  WORDS_CHECKBOX;
	private: System::Windows::Forms::RadioButton^  FLUENCSE_2_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  FLUENCSE_1_RADIOBUTTON;
	private: System::Windows::Forms::Label^  REY_FIGURE_TIME_MAX_VALUE;
	private: System::Windows::Forms::NumericUpDown^  REY_FIGURE_TIME_COUNTER;
	private: System::Windows::Forms::RadioButton^  REY_FIGURE_TYPE2_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  REY_FIGURE_TYPE1_RADIOBUTTON;
	private: System::Windows::Forms::CheckBox^  REY_FIGURE_TIME_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  REY_FIGURE_COPIE_CHECKBOX;
	private: System::Windows::Forms::Label^  REY_FIGURE_COPIE_MAX_VALUE;
	private: System::Windows::Forms::NumericUpDown^  REY_FIGURE_COPIE_COUNTER;
	private: System::Windows::Forms::CheckBox^  ANXIETY_YN_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  REY_FIGURE_TYPE_CHECKBOX;


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
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL = (gcnew System::Windows::Forms::GroupBox());
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
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->MOCA_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->PRAXIES_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MEMORY_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->LEARNING_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->DATE_MMSE_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->MEMORY_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
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
			this->MEMORY_MAX_VALUE = (gcnew System::Windows::Forms::Label());
			this->MMSE_MAX_VALUE = (gcnew System::Windows::Forms::Label());
			this->MEMORY_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
			this->MMSE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
			this->DATE_MMSE_DATEPICKER = (gcnew System::Windows::Forms::DateTimePicker());
			this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
			this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->SuspendLayout();
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
			this->TREATEMENT_LIST_LABEL->SuspendLayout();
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MOCA_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PRAXIES_MMSE_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LANGUAGE_MMSE_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MEMORY_MMSE_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CALCULE_MMSE_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LEARNING_MMSE_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ORIENTATION_MMSE_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IADL_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MEMORY_COUNTER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MMSE_COUNTER))->BeginInit();
			this->SuspendLayout();
			// 
			// NEUROPSYCHOLOGICAL_BALANCE_LABEL
			// 
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Controls->Add(this->LANGUAGE_LABEL);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Controls->Add(this->REY_FIGURE_LABEL);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Controls->Add(this->PSYCHO_AFFECTIVE_LABEL);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Controls->Add(this->GESTURE_LABEL);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Controls->Add(this->PRAXIES_LABEL);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Controls->Add(this->LAST_BALANCE_CHECKBOX);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Controls->Add(this->LAST_BALANCE_DATEPICKER);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Controls->Add(this->EXECUTIVE_TEST_LABEL);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Controls->Add(this->EPISODIC_MEMORY_LABEL);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Location = System::Drawing::Point(889, 27);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Name = L"NEUROPSYCHOLOGICAL_BALANCE_LABEL";
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Size = System::Drawing::Size(825, 849);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->TabIndex = 26;
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->TabStop = false;
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->Text = L"Bilan Neuropsychologique";
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
			this->LANGUAGE_LABEL->Location = System::Drawing::Point(16, 732);
			this->LANGUAGE_LABEL->Name = L"LANGUAGE_LABEL";
			this->LANGUAGE_LABEL->Size = System::Drawing::Size(786, 111);
			this->LANGUAGE_LABEL->TabIndex = 143;
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
			this->ANIMAL_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::ANIMAL_CHECKBOX_CheckedChanged);
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
			this->WORDS_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::WORDS_CHECKBOX_CheckedChanged);
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
			this->DO80_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::DO80_CHECKBOX_CheckedChanged);
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
			this->FLUENCES_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::FLUENCES_CHECKBOX_CheckedChanged);
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
			this->REY_FIGURE_LABEL->Location = System::Drawing::Point(407, 475);
			this->REY_FIGURE_LABEL->Name = L"REY_FIGURE_LABEL";
			this->REY_FIGURE_LABEL->Size = System::Drawing::Size(395, 105);
			this->REY_FIGURE_LABEL->TabIndex = 87;
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
			this->REY_FIGURE_TYPE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::REY_FIGURE_TYPE_CHECKBOX_CheckedChanged);
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
			this->REY_FIGURE_TIME_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::REY_FIGURE_TIME_CHECKBOX_CheckedChanged);
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
			this->REY_FIGURE_COPIE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::REY_FIGURE_COPIE_CHECKBOX_CheckedChanged);
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
			this->PSYCHO_AFFECTIVE_LABEL->Location = System::Drawing::Point(16, 586);
			this->PSYCHO_AFFECTIVE_LABEL->Name = L"PSYCHO_AFFECTIVE_LABEL";
			this->PSYCHO_AFFECTIVE_LABEL->Size = System::Drawing::Size(385, 142);
			this->PSYCHO_AFFECTIVE_LABEL->TabIndex = 123;
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
			this->ANXIETY_YN_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::ANXIETY_YN_CHECKBOX_CheckedChanged);
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
			this->ANXIETY_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::ANXIETY_CHECKBOX_CheckedChanged);
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
			this->DEPRESSION_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::DEPRESSION_CHECKBOX_CheckedChanged);
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
			this->GESTURE_LABEL->Location = System::Drawing::Point(407, 586);
			this->GESTURE_LABEL->Name = L"GESTURE_LABEL";
			this->GESTURE_LABEL->Size = System::Drawing::Size(395, 142);
			this->GESTURE_LABEL->TabIndex = 133;
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
			this->ABSTRACT_GESTURE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::ABSTRACT_GESTURE_CHECKBOX_CheckedChanged);
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
			this->MIME_GESTURE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::MIME_GESTURE_CHECKBOX_CheckedChanged);
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
			this->SYMBOLIC_GESTURE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::SYMBOLIC_GESTURE_CHECKBOX_CheckedChanged);
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
			this->PRAXIES_LABEL->Location = System::Drawing::Point(407, 365);
			this->PRAXIES_LABEL->Name = L"PRAXIES_LABEL";
			this->PRAXIES_LABEL->Size = System::Drawing::Size(395, 105);
			this->PRAXIES_LABEL->TabIndex = 80;
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
			this->CUBE_PRAXIES_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::CUBE_PRAXIES_CHECKBOX_CheckedChanged);
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
			this->CLOCK_PRAXIES_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::CLOCK_PRAXIES_CHECKBOX_CheckedChanged);
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
			this->LAST_BALANCE_CHECKBOX->Location = System::Drawing::Point(16, 35);
			this->LAST_BALANCE_CHECKBOX->Name = L"LAST_BALANCE_CHECKBOX";
			this->LAST_BALANCE_CHECKBOX->Size = System::Drawing::Size(297, 28);
			this->LAST_BALANCE_CHECKBOX->TabIndex = 27;
			this->LAST_BALANCE_CHECKBOX->Text = L"Date du dernier bilan (<6 mois): ";
			this->LAST_BALANCE_CHECKBOX->UseVisualStyleBackColor = true;
			this->LAST_BALANCE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::LAST_BALANCE_CHECKBOX_CheckedChanged);
			// 
			// LAST_BALANCE_DATEPICKER
			// 
			this->LAST_BALANCE_DATEPICKER->Enabled = false;
			this->LAST_BALANCE_DATEPICKER->Location = System::Drawing::Point(513, 32);
			this->LAST_BALANCE_DATEPICKER->Name = L"LAST_BALANCE_DATEPICKER";
			this->LAST_BALANCE_DATEPICKER->Size = System::Drawing::Size(188, 29);
			this->LAST_BALANCE_DATEPICKER->TabIndex = 28;
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
			this->EXECUTIVE_TEST_LABEL->Location = System::Drawing::Point(407, 74);
			this->EXECUTIVE_TEST_LABEL->Name = L"EXECUTIVE_TEST_LABEL";
			this->EXECUTIVE_TEST_LABEL->Size = System::Drawing::Size(395, 285);
			this->EXECUTIVE_TEST_LABEL->TabIndex = 60;
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
			this->EMPAN_ENVERS_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::EMPAN_ENVERS_CHECKBOX_CheckedChanged);
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
			this->EMPAN_ENDROIT_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::EMPAN_ENDROIT_CHECKBOX_CheckedChanged);
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
			this->TMT_B_ERRORS_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TMT_B_ERRORS_CHECKBOX_CheckedChanged);
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
			this->TMT_B_TIME_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TMT_B_TIME_CHECKBOX_CheckedChanged);
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
			this->TMT_A_ERRORS_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TMT_A_ERRORS_CHECKBOX_CheckedChanged);
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
			this->TMT_A_TIME_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TMT_A_TIME_CHECKBOX_CheckedChanged);
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
			this->BREF_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::BREF_CHECKBOX_CheckedChanged);
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
			this->EPISODIC_MEMORY_LABEL->Location = System::Drawing::Point(16, 74);
			this->EPISODIC_MEMORY_LABEL->Name = L"EPISODIC_MEMORY_LABEL";
			this->EPISODIC_MEMORY_LABEL->Size = System::Drawing::Size(385, 506);
			this->EPISODIC_MEMORY_LABEL->TabIndex = 29;
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
			this->RTT_MEM_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::RTT_MEM_CHECKBOX_CheckedChanged);
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
			this->TOTAL_MEM_D_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TOTAL_MEM_D_CHECKBOX_CheckedChanged);
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
			this->RLT_MEM_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::RLT_MEM_CHECKBOX_CheckedChanged);
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
			this->SENSIBILITY_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::SENSIBILITY_CHECKBOX_CheckedChanged);
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
			this->FREE_MEM_D_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::FREE_MEM_D_CHECKBOX_CheckedChanged);
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
			this->TOTAL_MEM_3_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TOTAL_MEM_3_CHECKBOX_CheckedChanged);
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
			this->FREE_MEM_3_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::FREE_MEM_3_CHECKBOX_CheckedChanged);
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
			this->TOTAL_MEM_2_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TOTAL_MEM_2_CHECKBOX_CheckedChanged);
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
			this->RECOGNITION_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::RECOGNITION_CHECKBOX_CheckedChanged);
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
			this->FREE_MEM_2_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::FREE_MEM_2_CHECKBOX_CheckedChanged);
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
			this->TOTAL_MEM_1_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TOTAL_MEM_1_CHECKBOX_CheckedChanged);
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
			this->SHORT_MEM_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::SHORT_MEM_CHECKBOX_CheckedChanged);
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
			this->FREE_MEM_1_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::FREE_MEM_1_CHECKBOX_CheckedChanged);
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
			this->TREATEMENT_6_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TREATEMENT_6_TEXTBOX_TextChanged);
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
			this->TREATEMENT_5_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TREATEMENT_5_TEXTBOX_TextChanged);
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
			this->TREATEMENT_4_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TREATEMENT_4_TEXTBOX_TextChanged);
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
			this->TREATEMENT_3_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TREATEMENT_3_TEXTBOX_TextChanged);
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
			this->TREATEMENT_2_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TREATEMENT_2_TEXTBOX_TextChanged);
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
			this->TREATEMENT_1_TEXTBOX->TextChanged += gcnew System::EventHandler(this, &MedicalDataPT2::TREATEMENT_1_TEXTBOX_TextChanged);
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
			// NEUROPSYCOLOGIC_EVALUATION_LABEL
			// 
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MOCA_CHECKBOX);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->PRAXIES_MMSE_CHECKBOX);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MEMORY_MMSE_CHECKBOX);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->LEARNING_MMSE_CHECKBOX);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->DATE_MMSE_CHECKBOX);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MEMORY_CHECKBOX);
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
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MEMORY_MAX_VALUE);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MMSE_MAX_VALUE);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MEMORY_COUNTER);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->MMSE_COUNTER);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Controls->Add(this->DATE_MMSE_DATEPICKER);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Location = System::Drawing::Point(12, 452);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Name = L"NEUROPSYCOLOGIC_EVALUATION_LABEL";
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->Size = System::Drawing::Size(854, 312);
			this->NEUROPSYCOLOGIC_EVALUATION_LABEL->TabIndex = 91;
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
			this->MOCA_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::MOCA_CHECKBOX_CheckedChanged);
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
			this->PRAXIES_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::PRAXIES_MMSE_CHECKBOX_CheckedChanged);
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
			this->MEMORY_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::MEMORY_MMSE_CHECKBOX_CheckedChanged);
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
			this->LEARNING_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::LEARNING_MMSE_CHECKBOX_CheckedChanged);
			// 
			// DATE_MMSE_CHECKBOX
			// 
			this->DATE_MMSE_CHECKBOX->AutoSize = true;
			this->DATE_MMSE_CHECKBOX->Location = System::Drawing::Point(462, 79);
			this->DATE_MMSE_CHECKBOX->Name = L"DATE_MMSE_CHECKBOX";
			this->DATE_MMSE_CHECKBOX->Size = System::Drawing::Size(161, 28);
			this->DATE_MMSE_CHECKBOX->TabIndex = 101;
			this->DATE_MMSE_CHECKBOX->Text = L"Date de MMSE:";
			this->DATE_MMSE_CHECKBOX->UseVisualStyleBackColor = true;
			this->DATE_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::DATE_MMSE_CHECKBOX_CheckedChanged);
			// 
			// MEMORY_CHECKBOX
			// 
			this->MEMORY_CHECKBOX->AutoSize = true;
			this->MEMORY_CHECKBOX->Location = System::Drawing::Point(223, 80);
			this->MEMORY_CHECKBOX->Name = L"MEMORY_CHECKBOX";
			this->MEMORY_CHECKBOX->Size = System::Drawing::Size(94, 28);
			this->MEMORY_CHECKBOX->TabIndex = 98;
			this->MEMORY_CHECKBOX->Text = L"Rappel:";
			this->MEMORY_CHECKBOX->UseVisualStyleBackColor = true;
			this->MEMORY_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::MEMORY_CHECKBOX_CheckedChanged);
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
			this->LANGUAGE_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::LANGUAGE_MMSE_CHECKBOX_CheckedChanged);
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
			this->CALCULE_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::CALCULE_MMSE_CHECKBOX_CheckedChanged);
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
			this->ORIENTATION_MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::ORIENTATION_MMSE_CHECKBOX_CheckedChanged);
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
			this->MMSE_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::MMSE_CHECKBOX_CheckedChanged);
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
			this->IADL_CHECKBOX->CheckedChanged += gcnew System::EventHandler(this, &MedicalDataPT2::IADL_CHECKBOX_CheckedChanged);
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
			// MEMORY_MAX_VALUE
			// 
			this->MEMORY_MAX_VALUE->AutoSize = true;
			this->MEMORY_MAX_VALUE->Location = System::Drawing::Point(414, 79);
			this->MEMORY_MAX_VALUE->Name = L"MEMORY_MAX_VALUE";
			this->MEMORY_MAX_VALUE->Size = System::Drawing::Size(25, 24);
			this->MEMORY_MAX_VALUE->TabIndex = 100;
			this->MEMORY_MAX_VALUE->Text = L"/3";
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
			// MEMORY_COUNTER
			// 
			this->MEMORY_COUNTER->Enabled = false;
			this->MEMORY_COUNTER->Location = System::Drawing::Point(347, 77);
			this->MEMORY_COUNTER->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->MEMORY_COUNTER->Name = L"MEMORY_COUNTER";
			this->MEMORY_COUNTER->Size = System::Drawing::Size(61, 29);
			this->MEMORY_COUNTER->TabIndex = 99;
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
			this->DATE_MMSE_DATEPICKER->Location = System::Drawing::Point(660, 75);
			this->DATE_MMSE_DATEPICKER->Name = L"DATE_MMSE_DATEPICKER";
			this->DATE_MMSE_DATEPICKER->Size = System::Drawing::Size(188, 29);
			this->DATE_MMSE_DATEPICKER->TabIndex = 102;
			// 
			// CANCEL_BUTTON
			// 
			this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CANCEL_BUTTON->Location = System::Drawing::Point(430, 783);
			this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
			this->CANCEL_BUTTON->Size = System::Drawing::Size(219, 69);
			this->CANCEL_BUTTON->TabIndex = 124;
			this->CANCEL_BUTTON->Text = L"Annuler";
			this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
			this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &MedicalDataPT2::CANCEL_BUTTON_Click);
			// 
			// REGISTER_BUTTON
			// 
			this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REGISTER_BUTTON->Location = System::Drawing::Point(160, 782);
			this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
			this->REGISTER_BUTTON->Size = System::Drawing::Size(219, 69);
			this->REGISTER_BUTTON->TabIndex = 123;
			this->REGISTER_BUTTON->Text = L"Enregistrer";
			this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
			this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &MedicalDataPT2::REGISTER_BUTTON_Click);
			// 
			// MedicalDataPT2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1726, 888);
			this->Controls->Add(this->CANCEL_BUTTON);
			this->Controls->Add(this->REGISTER_BUTTON);
			this->Controls->Add(this->NEUROPSYCOLOGIC_EVALUATION_LABEL);
			this->Controls->Add(this->NEUROPSYCHOLOGICAL_BALANCE_LABEL);
			this->Controls->Add(this->TREATEMENT_LIST_LABEL);
			this->Name = L"MedicalDataPT2";
			this->Text = L"MedicalDataPT2";
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->ResumeLayout(false);
			this->NEUROPSYCHOLOGICAL_BALANCE_LABEL->PerformLayout();
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
			this->TREATEMENT_LIST_LABEL->ResumeLayout(false);
			this->TREATEMENT_LIST_LABEL->PerformLayout();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MEMORY_COUNTER))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MMSE_COUNTER))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {

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

	private: System::Void IADL_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		IADL_COUNTER->Enabled = (IADL_CHECKBOX->Checked) ? true : false;
	}

	private: System::Void MMSE_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		MMSE_COUNTER->Enabled = (MMSE_CHECKBOX->Checked) ? true : false;
	}

	private: System::Void MEMORY_CHECKBOX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		MEMORY_COUNTER->Enabled = (MEMORY_CHECKBOX->Checked) ? true : false;
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

	private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		//Exit Without Doing Anything
		MedicalDataPT2::Close();
	}
};
}
