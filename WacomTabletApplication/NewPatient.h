#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Dependencies/queryNodes.h"
#include "MedicalDataPT1.h"
#include "MedicalDataPT2.h"
#include "MedicalDataPT3.h"
#include "MedicalDataPT4.h"
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
	/// Summary for NewPatient
	/// </summary>
	public ref class NewPatient : public System::Windows::Forms::Form
	{
	public: String^ currentLanguage;
	public: Patient *myPatient;
	public:
		NewPatient(Patient *inputPatient,String^ language, bool treatAsNew)
		{
			currentLanguage = language;
			myPatient = inputPatient;
			InitializeComponent();
			UpdateLanguage_NewPatientForm(currentLanguage);
			if (!treatAsNew) fillFormWithPreviousPatientData();
			
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
	private: void WacomTabletApplication::NewPatient::UpdateLanguage_LanguageCombobox_NewPatientForm(String^ language);
	private: void WacomTabletApplication::NewPatient::UpdateLanguage_ProfessionCombobox_NewPatientForm(String^ language);
	private: bool WacomTabletApplication::NewPatient::isFormularyOk();
	private: void WacomTabletApplication::NewPatient::completePatientInformationObject();
	private: void WacomTabletApplication::NewPatient::fillFormWithPreviousPatientData();
	private: void WacomTabletApplication::NewPatient::RegisterNewPatient();
	private: BOOL WacomTabletApplication::NewPatient::PatientAlreadyExist();
	private: BOOL WacomTabletApplication::NewPatient::DirectoryExists(LPCTSTR szPath);
	private: BOOL WacomTabletApplication::NewPatient::PatientIsInPatientList();
	private: BOOL WacomTabletApplication::NewPatient::createAndPrintPatientSubdirectories();

	private: System::Windows::Forms::RadioButton^  MALEGENDER_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  FEMALEGENDER_RADIOBUTTON;
	private: System::Windows::Forms::TextBox^  LASTNAME_TEXTBOX;
	private: System::Windows::Forms::TextBox^  FIRSTNAME_TEXTBOX;
	private: System::Windows::Forms::Label^  LASTNAME_LABEL;
	private: System::Windows::Forms::Label^  FIRSTNAME_LABEL;
	private: System::Windows::Forms::Label^  WRITING_FREQ_LABEL;
	private: System::Windows::Forms::Label^  FRENCHLEVEL_LABEL;
	private: System::Windows::Forms::Label^  BIRTHDATE_LABEL;
	private: System::Windows::Forms::Label^  SOCIOEDUCATIVE_LABEL;
	private: System::Windows::Forms::RadioButton^  LEFT_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  RIGHT_RADIOBUTTON;
	private: System::Windows::Forms::ComboBox^  WRITING_FREQ_COMBOBOX;
	private: System::Windows::Forms::NumericUpDown^  AGE_COUNTER;
	private: System::Windows::Forms::ComboBox^  SOCIOEDUCATIVE_COMBOBOX;
	private: System::Windows::Forms::ComboBox^  NATIVE_LANGUAGE_COMBOBOX;
	private: System::Windows::Forms::Label^  NATIVE_LANGUAGE_LABEL;
	private: System::Windows::Forms::Button^  REGISTER_BUTTON;
	private: System::Windows::Forms::Button^  CANCEL_BUTTON;
	private: System::Windows::Forms::GroupBox^  HANDEDNESS_LABEL;
	private: System::Windows::Forms::GroupBox^  GENDER_LABEL;
	private: System::Windows::Forms::CheckBox^  FORCEDRIGHT_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  AMBIDEXTER_CHECKBOX;
	private: System::Windows::Forms::ComboBox^  FRENCHLEVEL_COMBOBOX;
	private: System::Windows::Forms::GroupBox^  ALPHABETS_LABEL;
	private: System::Windows::Forms::CheckBox^  OTHER_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  HEBREW_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  GREEK_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  CHINESE_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  ARAB_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  JAPANESE_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  HANGUL_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  DEVANAGARI_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  CYRILLIC_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  LATIN_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::DateTimePicker^  BIRTHDATE_DAYPICKER;
	private: System::Windows::Forms::Label^  AGE_LABEL;
	private: System::Windows::Forms::Label^  PRINCIPAL_PROFESSION_LABEL;
	private: System::Windows::Forms::ComboBox^  PRINCIPAL_PROFESSION_COMBOBOX;
	private: System::Windows::Forms::ComboBox^  LAST_PROFESSION_COMBOBOX;
	private: System::Windows::Forms::Label^  LAST_PROFESSION_LABEL;
	private: System::Windows::Forms::GroupBox^  CURRENTLY_WORKING_LABEL;
	private: System::Windows::Forms::RadioButton^  NO_CURRENTLY_WORKING_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  YES_CURRENTLY_WORKING_RADIOBUTTON;
	private: System::Windows::Forms::NumericUpDown^  RETIREMENT_AGE_COUNTER;
	private: System::Windows::Forms::Label^  RETIREMENT_AGE_LABEL;
	private: System::Windows::Forms::GroupBox^  CIVILSTATE_LABEL;
	private: System::Windows::Forms::Label^  NUMBEROFCHILDREN_LABEL;
	private: System::Windows::Forms::RadioButton^  SINGLE_RADIOBUTTON;
	private: System::Windows::Forms::NumericUpDown^  NUMBEROFCHILDREN_COUNTER;
	private: System::Windows::Forms::RadioButton^  WIDOW_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  DIVORCED_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  MARRIED_RADIOBUTTON;
	private: System::Windows::Forms::Button^  MEDICALDATA_PT1_BUTTON;
	private: System::Windows::Forms::GroupBox^  VISION_PROBLEMS_LABEL;
	private: System::Windows::Forms::RadioButton^  NO_VISION_PROBLEMS_RADIOBUTTON;
	private: System::Windows::Forms::RadioButton^  YES_VISION_PROBLEMS_RADIOBUTTON;
	private: System::Windows::Forms::Label^  PRECISE_VISION_PROBLEMS_LABEL;
	private: System::Windows::Forms::TextBox^  PRECISE_VISION_PROBLEMS_TEXTBOX;
	private: System::Windows::Forms::Label^  OTHER_COMMENTS_LABEL;
	private: System::Windows::Forms::TextBox^  OTHER_COMMENTS_TEXTBOX;
	private: System::Windows::Forms::Button^  MEDICALDATA_PT4_BUTTON;
	private: System::Windows::Forms::Button^  MEDICALDATA_PT3_BUTTON;
	private: System::Windows::Forms::Button^  MEDICALDATA_PT2_BUTTON;
	private: System::Windows::Forms::CheckBox^  SOUTHINDIC_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  ETIOPIC_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  GEORGIAN_ALPHABET_CHECKBOX;
	private: System::Windows::Forms::CheckBox^  ARMENIAN_ALPHABET_CHECKBOX;

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
			this->LASTNAME_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->FIRSTNAME_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->LASTNAME_LABEL = (gcnew System::Windows::Forms::Label());
			this->FIRSTNAME_LABEL = (gcnew System::Windows::Forms::Label());
			this->WRITING_FREQ_LABEL = (gcnew System::Windows::Forms::Label());
			this->FRENCHLEVEL_LABEL = (gcnew System::Windows::Forms::Label());
			this->BIRTHDATE_LABEL = (gcnew System::Windows::Forms::Label());
			this->SOCIOEDUCATIVE_LABEL = (gcnew System::Windows::Forms::Label());
			this->LEFT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->RIGHT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->WRITING_FREQ_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
			this->AGE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
			this->SOCIOEDUCATIVE_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
			this->NATIVE_LANGUAGE_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
			this->NATIVE_LANGUAGE_LABEL = (gcnew System::Windows::Forms::Label());
			this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
			this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
			this->HANDEDNESS_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->AMBIDEXTER_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->FORCEDRIGHT_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->GENDER_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->FRENCHLEVEL_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
			this->ALPHABETS_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->SOUTHINDIC_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->ETIOPIC_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->GEORGIAN_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->ARMENIAN_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->OTHER_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->HEBREW_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->GREEK_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->CHINESE_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->ARAB_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->JAPANESE_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->HANGUL_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->LATIN_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->CYRILLIC_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->DEVANAGARI_ALPHABET_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
			this->BIRTHDATE_DAYPICKER = (gcnew System::Windows::Forms::DateTimePicker());
			this->AGE_LABEL = (gcnew System::Windows::Forms::Label());
			this->PRINCIPAL_PROFESSION_LABEL = (gcnew System::Windows::Forms::Label());
			this->PRINCIPAL_PROFESSION_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
			this->LAST_PROFESSION_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
			this->LAST_PROFESSION_LABEL = (gcnew System::Windows::Forms::Label());
			this->CURRENTLY_WORKING_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->NO_CURRENTLY_WORKING_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->YES_CURRENTLY_WORKING_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->RETIREMENT_AGE_LABEL = (gcnew System::Windows::Forms::Label());
			this->RETIREMENT_AGE_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
			this->CIVILSTATE_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->NUMBEROFCHILDREN_LABEL = (gcnew System::Windows::Forms::Label());
			this->SINGLE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->NUMBEROFCHILDREN_COUNTER = (gcnew System::Windows::Forms::NumericUpDown());
			this->WIDOW_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->DIVORCED_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MARRIED_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->MEDICALDATA_PT1_BUTTON = (gcnew System::Windows::Forms::Button());
			this->VISION_PROBLEMS_LABEL = (gcnew System::Windows::Forms::GroupBox());
			this->PRECISE_VISION_PROBLEMS_LABEL = (gcnew System::Windows::Forms::Label());
			this->PRECISE_VISION_PROBLEMS_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->NO_VISION_PROBLEMS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->YES_VISION_PROBLEMS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
			this->OTHER_COMMENTS_LABEL = (gcnew System::Windows::Forms::Label());
			this->OTHER_COMMENTS_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->MEDICALDATA_PT4_BUTTON = (gcnew System::Windows::Forms::Button());
			this->MEDICALDATA_PT3_BUTTON = (gcnew System::Windows::Forms::Button());
			this->MEDICALDATA_PT2_BUTTON = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AGE_COUNTER))->BeginInit();
			this->HANDEDNESS_LABEL->SuspendLayout();
			this->GENDER_LABEL->SuspendLayout();
			this->ALPHABETS_LABEL->SuspendLayout();
			this->CURRENTLY_WORKING_LABEL->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RETIREMENT_AGE_COUNTER))->BeginInit();
			this->CIVILSTATE_LABEL->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUMBEROFCHILDREN_COUNTER))->BeginInit();
			this->VISION_PROBLEMS_LABEL->SuspendLayout();
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
			// LASTNAME_TEXTBOX
			// 
			this->LASTNAME_TEXTBOX->Location = System::Drawing::Point(54, 38);
			this->LASTNAME_TEXTBOX->Margin = System::Windows::Forms::Padding(6);
			this->LASTNAME_TEXTBOX->Name = L"LASTNAME_TEXTBOX";
			this->LASTNAME_TEXTBOX->Size = System::Drawing::Size(347, 29);
			this->LASTNAME_TEXTBOX->TabIndex = 1;
			// 
			// FIRSTNAME_TEXTBOX
			// 
			this->FIRSTNAME_TEXTBOX->Location = System::Drawing::Point(426, 38);
			this->FIRSTNAME_TEXTBOX->Margin = System::Windows::Forms::Padding(6);
			this->FIRSTNAME_TEXTBOX->Name = L"FIRSTNAME_TEXTBOX";
			this->FIRSTNAME_TEXTBOX->Size = System::Drawing::Size(334, 29);
			this->FIRSTNAME_TEXTBOX->TabIndex = 2;
			// 
			// LASTNAME_LABEL
			// 
			this->LASTNAME_LABEL->AutoSize = true;
			this->LASTNAME_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LASTNAME_LABEL->Location = System::Drawing::Point(49, 9);
			this->LASTNAME_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->LASTNAME_LABEL->Name = L"LASTNAME_LABEL";
			this->LASTNAME_LABEL->Size = System::Drawing::Size(51, 24);
			this->LASTNAME_LABEL->TabIndex = 1;
			this->LASTNAME_LABEL->Text = L"Nom";
			// 
			// FIRSTNAME_LABEL
			// 
			this->FIRSTNAME_LABEL->AutoSize = true;
			this->FIRSTNAME_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FIRSTNAME_LABEL->Location = System::Drawing::Point(421, 9);
			this->FIRSTNAME_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->FIRSTNAME_LABEL->Name = L"FIRSTNAME_LABEL";
			this->FIRSTNAME_LABEL->Size = System::Drawing::Size(77, 24);
			this->FIRSTNAME_LABEL->TabIndex = 2;
			this->FIRSTNAME_LABEL->Text = L"Prenom";
			// 
			// WRITING_FREQ_LABEL
			// 
			this->WRITING_FREQ_LABEL->AutoSize = true;
			this->WRITING_FREQ_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WRITING_FREQ_LABEL->Location = System::Drawing::Point(794, 433);
			this->WRITING_FREQ_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->WRITING_FREQ_LABEL->Name = L"WRITING_FREQ_LABEL";
			this->WRITING_FREQ_LABEL->Size = System::Drawing::Size(136, 24);
			this->WRITING_FREQ_LABEL->TabIndex = 35;
			this->WRITING_FREQ_LABEL->Text = L"Le patient écrit:";
			// 
			// FRENCHLEVEL_LABEL
			// 
			this->FRENCHLEVEL_LABEL->AutoSize = true;
			this->FRENCHLEVEL_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRENCHLEVEL_LABEL->Location = System::Drawing::Point(794, 216);
			this->FRENCHLEVEL_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->FRENCHLEVEL_LABEL->Name = L"FRENCHLEVEL_LABEL";
			this->FRENCHLEVEL_LABEL->Size = System::Drawing::Size(173, 24);
			this->FRENCHLEVEL_LABEL->TabIndex = 18;
			this->FRENCHLEVEL_LABEL->Text = L"Niveau de Français";
			// 
			// BIRTHDATE_LABEL
			// 
			this->BIRTHDATE_LABEL->AutoSize = true;
			this->BIRTHDATE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BIRTHDATE_LABEL->Location = System::Drawing::Point(50, 93);
			this->BIRTHDATE_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->BIRTHDATE_LABEL->Name = L"BIRTHDATE_LABEL";
			this->BIRTHDATE_LABEL->Size = System::Drawing::Size(168, 24);
			this->BIRTHDATE_LABEL->TabIndex = 8;
			this->BIRTHDATE_LABEL->Text = L"Date de Naissance";
			// 
			// SOCIOEDUCATIVE_LABEL
			// 
			this->SOCIOEDUCATIVE_LABEL->AutoSize = true;
			this->SOCIOEDUCATIVE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SOCIOEDUCATIVE_LABEL->Location = System::Drawing::Point(50, 216);
			this->SOCIOEDUCATIVE_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->SOCIOEDUCATIVE_LABEL->Name = L"SOCIOEDUCATIVE_LABEL";
			this->SOCIOEDUCATIVE_LABEL->Size = System::Drawing::Size(200, 24);
			this->SOCIOEDUCATIVE_LABEL->TabIndex = 16;
			this->SOCIOEDUCATIVE_LABEL->Text = L"Niveau Socio-Éducatif ";
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
			// WRITING_FREQ_COMBOBOX
			// 
			this->WRITING_FREQ_COMBOBOX->FormattingEnabled = true;
			this->WRITING_FREQ_COMBOBOX->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Moins de 1 fois par semaine", L"1-2 fois par semaine",
					L"3-5 fois par semaine", L"6-7 fois par semaine", L"Tous les jours, Plusieurs fois par jour"
			});
			this->WRITING_FREQ_COMBOBOX->Location = System::Drawing::Point(796, 463);
			this->WRITING_FREQ_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
			this->WRITING_FREQ_COMBOBOX->Name = L"WRITING_FREQ_COMBOBOX";
			this->WRITING_FREQ_COMBOBOX->Size = System::Drawing::Size(329, 32);
			this->WRITING_FREQ_COMBOBOX->TabIndex = 35;
			// 
			// AGE_COUNTER
			// 
			this->AGE_COUNTER->Location = System::Drawing::Point(112, 163);
			this->AGE_COUNTER->Margin = System::Windows::Forms::Padding(6);
			this->AGE_COUNTER->Name = L"AGE_COUNTER";
			this->AGE_COUNTER->Size = System::Drawing::Size(75, 29);
			this->AGE_COUNTER->TabIndex = 9;
			// 
			// SOCIOEDUCATIVE_COMBOBOX
			// 
			this->SOCIOEDUCATIVE_COMBOBOX->FormattingEnabled = true;
			this->SOCIOEDUCATIVE_COMBOBOX->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"NC1: Illettré", L"NC2: Lis, Écris et Compte",
					L"NC3: Études Primaires", L"NC4: CAP o BEP (Brevet)", L"NC5: Classe Terminale ou Niveau Ouvrier/Artisan", L"NC6: Baccalauréat",
					L"NC7: Diplôme Universitaire"
			});
			this->SOCIOEDUCATIVE_COMBOBOX->Location = System::Drawing::Point(54, 246);
			this->SOCIOEDUCATIVE_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
			this->SOCIOEDUCATIVE_COMBOBOX->Name = L"SOCIOEDUCATIVE_COMBOBOX";
			this->SOCIOEDUCATIVE_COMBOBOX->Size = System::Drawing::Size(330, 32);
			this->SOCIOEDUCATIVE_COMBOBOX->TabIndex = 16;
			// 
			// NATIVE_LANGUAGE_COMBOBOX
			// 
			this->NATIVE_LANGUAGE_COMBOBOX->FormattingEnabled = true;
			this->NATIVE_LANGUAGE_COMBOBOX->Items->AddRange(gcnew cli::array< System::Object^  >(133) {
				L"Afrikaans", L"Albanais", L"Allemand",
					L"Amharique", L"Anglais", L"Arabe", L"Araona", L"Arménien", L"Aymara", L"Azéri", L"Baure", L"Bengalî", L"Bésiro", L"Bichelamar",
					L"Biélorusse", L"Birman", L"Bulgare", L"Canichana", L"Catalan", L"Cavineña", L"Cayubaba", L"Chácobo", L"Chichewa", L"Chimane",
					L"Chinois", L"Cinghalais", L"Coréen", L"Créole de Guinée", L"Créole haïtien", L"Créole seychellois", L"Croate", L"Danois", L"Divehi",
					L"Dzongkha", L"Espagnol", L"Estonien", L"Fidjien", L"Filipino", L"Finnois", L"Français", L"Géorgien", L"Gilbertin", L"Grec",
					L"Guarani", L"Guarayu", L"Hébreu", L"Hindi", L"Hindoustani", L"Hiri Motu", L"Hongrois", L"Indonésien", L"Irlandais", L"Islandais",
					L"Italien", L"Itonama", L"Kallawaya", L"Kazakh", L"Khmer", L"Kirghiz", L"Kirundi", L"Kiswahili", L"Lao", L"Latin", L"Leko", L"Letton",
					L"Lituanien", L"Luxembourgeois", L"Macédonien", L"Machineri", L"Malais", L"Malgache", L"Maltais", L"Māori", L"Maropa", L"Marshallais",
					L"Mirandais", L"Mojeño", L"Mongol", L"Monténégrin", L"Moré", L"Mosetén", L"Movima", L"Nauruan", L"Néerlandais", L"Népalais",
					L"Norvégien", L"Ourdou", L"Ouzbek", L"Pacahuara", L"Pachto", L"Paluan", L"Persan", L"Polonais", L"Portugais", L"Puquina", L"Quechua",
					L"Roumain", L"Russe", L"Samoan", L"Sango", L"Serbe", L"Sesotho", L"Shikomor", L"Shona", L"Shuar", L"Sindebele", L"Sirionó", L"Slovaque",
					L"Slovène", L"Somali", L"Suédois", L"Tacana", L"Tadjik", L"Tamazight", L"Tamoul", L"Tapiete", L"Tchèque", L"Tétoum", L"Thaï",
					L"Tigrinya", L"Tok Pisin", L"Tonguien", L"Toromona", L"Turc", L"Turkmène", L"Tuvaluan", L"Ukrainien", L"Vietnamien", L"Wichi",
					L"Yaminahua", L"Yaracaré", L"Yuki", L"Zamuco"
			});
			this->NATIVE_LANGUAGE_COMBOBOX->Location = System::Drawing::Point(428, 246);
			this->NATIVE_LANGUAGE_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
			this->NATIVE_LANGUAGE_COMBOBOX->Name = L"NATIVE_LANGUAGE_COMBOBOX";
			this->NATIVE_LANGUAGE_COMBOBOX->Size = System::Drawing::Size(328, 32);
			this->NATIVE_LANGUAGE_COMBOBOX->Sorted = true;
			this->NATIVE_LANGUAGE_COMBOBOX->TabIndex = 17;
			// 
			// NATIVE_LANGUAGE_LABEL
			// 
			this->NATIVE_LANGUAGE_LABEL->AutoSize = true;
			this->NATIVE_LANGUAGE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NATIVE_LANGUAGE_LABEL->Location = System::Drawing::Point(422, 216);
			this->NATIVE_LANGUAGE_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->NATIVE_LANGUAGE_LABEL->Name = L"NATIVE_LANGUAGE_LABEL";
			this->NATIVE_LANGUAGE_LABEL->Size = System::Drawing::Size(167, 24);
			this->NATIVE_LANGUAGE_LABEL->TabIndex = 17;
			this->NATIVE_LANGUAGE_LABEL->Text = L"Langue Maternelle";
			// 
			// REGISTER_BUTTON
			// 
			this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REGISTER_BUTTON->Location = System::Drawing::Point(149, 667);
			this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
			this->REGISTER_BUTTON->Size = System::Drawing::Size(231, 69);
			this->REGISTER_BUTTON->TabIndex = 43;
			this->REGISTER_BUTTON->Text = L"Enregistrer";
			this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
			this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::REGISTER_BUTTON_Click);
			// 
			// CANCEL_BUTTON
			// 
			this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CANCEL_BUTTON->Location = System::Drawing::Point(149, 748);
			this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
			this->CANCEL_BUTTON->Size = System::Drawing::Size(231, 69);
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
			this->HANDEDNESS_LABEL->Location = System::Drawing::Point(263, 93);
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
			this->GENDER_LABEL->Location = System::Drawing::Point(635, 93);
			this->GENDER_LABEL->Margin = System::Windows::Forms::Padding(6);
			this->GENDER_LABEL->Name = L"GENDER_LABEL";
			this->GENDER_LABEL->Padding = System::Windows::Forms::Padding(6);
			this->GENDER_LABEL->Size = System::Drawing::Size(175, 99);
			this->GENDER_LABEL->TabIndex = 14;
			this->GENDER_LABEL->TabStop = false;
			this->GENDER_LABEL->Text = L"Genre";
			// 
			// FRENCHLEVEL_COMBOBOX
			// 
			this->FRENCHLEVEL_COMBOBOX->FormattingEnabled = true;
			this->FRENCHLEVEL_COMBOBOX->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Débutant", L"Moyen", L"Avancé" });
			this->FRENCHLEVEL_COMBOBOX->Location = System::Drawing::Point(796, 244);
			this->FRENCHLEVEL_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
			this->FRENCHLEVEL_COMBOBOX->Name = L"FRENCHLEVEL_COMBOBOX";
			this->FRENCHLEVEL_COMBOBOX->Size = System::Drawing::Size(330, 32);
			this->FRENCHLEVEL_COMBOBOX->TabIndex = 18;
			// 
			// ALPHABETS_LABEL
			// 
			this->ALPHABETS_LABEL->Controls->Add(this->SOUTHINDIC_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->ETIOPIC_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->GEORGIAN_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->ARMENIAN_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->OTHER_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->HEBREW_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->GREEK_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->CHINESE_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->ARAB_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->JAPANESE_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->HANGUL_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->LATIN_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->CYRILLIC_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Controls->Add(this->DEVANAGARI_ALPHABET_CHECKBOX);
			this->ALPHABETS_LABEL->Location = System::Drawing::Point(50, 310);
			this->ALPHABETS_LABEL->Name = L"ALPHABETS_LABEL";
			this->ALPHABETS_LABEL->Size = System::Drawing::Size(1076, 99);
			this->ALPHABETS_LABEL->TabIndex = 19;
			this->ALPHABETS_LABEL->TabStop = false;
			this->ALPHABETS_LABEL->Text = L"Le patient écrit dans les alphabets suivants:";
			// 
			// SOUTHINDIC_ALPHABET_CHECKBOX
			// 
			this->SOUTHINDIC_ALPHABET_CHECKBOX->AutoSize = true;
			this->SOUTHINDIC_ALPHABET_CHECKBOX->Location = System::Drawing::Point(947, 28);
			this->SOUTHINDIC_ALPHABET_CHECKBOX->Name = L"SOUTHINDIC_ALPHABET_CHECKBOX";
			this->SOUTHINDIC_ALPHABET_CHECKBOX->Size = System::Drawing::Size(108, 28);
			this->SOUTHINDIC_ALPHABET_CHECKBOX->TabIndex = 31;
			this->SOUTHINDIC_ALPHABET_CHECKBOX->Text = L"Sud Indic";
			this->SOUTHINDIC_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// ETIOPIC_ALPHABET_CHECKBOX
			// 
			this->ETIOPIC_ALPHABET_CHECKBOX->AutoSize = true;
			this->ETIOPIC_ALPHABET_CHECKBOX->Location = System::Drawing::Point(468, 28);
			this->ETIOPIC_ALPHABET_CHECKBOX->Name = L"ETIOPIC_ALPHABET_CHECKBOX";
			this->ETIOPIC_ALPHABET_CHECKBOX->Size = System::Drawing::Size(86, 28);
			this->ETIOPIC_ALPHABET_CHECKBOX->TabIndex = 25;
			this->ETIOPIC_ALPHABET_CHECKBOX->Text = L"Etiopic";
			this->ETIOPIC_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// GEORGIAN_ALPHABET_CHECKBOX
			// 
			this->GEORGIAN_ALPHABET_CHECKBOX->AutoSize = true;
			this->GEORGIAN_ALPHABET_CHECKBOX->Location = System::Drawing::Point(468, 59);
			this->GEORGIAN_ALPHABET_CHECKBOX->Name = L"GEORGIAN_ALPHABET_CHECKBOX";
			this->GEORGIAN_ALPHABET_CHECKBOX->Size = System::Drawing::Size(108, 28);
			this->GEORGIAN_ALPHABET_CHECKBOX->TabIndex = 26;
			this->GEORGIAN_ALPHABET_CHECKBOX->Text = L"Géorgien";
			this->GEORGIAN_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// ARMENIAN_ALPHABET_CHECKBOX
			// 
			this->ARMENIAN_ALPHABET_CHECKBOX->AutoSize = true;
			this->ARMENIAN_ALPHABET_CHECKBOX->Location = System::Drawing::Point(158, 28);
			this->ARMENIAN_ALPHABET_CHECKBOX->Name = L"ARMENIAN_ALPHABET_CHECKBOX";
			this->ARMENIAN_ALPHABET_CHECKBOX->Size = System::Drawing::Size(112, 28);
			this->ARMENIAN_ALPHABET_CHECKBOX->TabIndex = 21;
			this->ARMENIAN_ALPHABET_CHECKBOX->Text = L"Arménien";
			this->ARMENIAN_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// OTHER_ALPHABET_CHECKBOX
			// 
			this->OTHER_ALPHABET_CHECKBOX->AutoSize = true;
			this->OTHER_ALPHABET_CHECKBOX->Location = System::Drawing::Point(947, 59);
			this->OTHER_ALPHABET_CHECKBOX->Name = L"OTHER_ALPHABET_CHECKBOX";
			this->OTHER_ALPHABET_CHECKBOX->Size = System::Drawing::Size(83, 28);
			this->OTHER_ALPHABET_CHECKBOX->TabIndex = 32;
			this->OTHER_ALPHABET_CHECKBOX->Text = L"Autres";
			this->OTHER_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// HEBREW_ALPHABET_CHECKBOX
			// 
			this->HEBREW_ALPHABET_CHECKBOX->AutoSize = true;
			this->HEBREW_ALPHABET_CHECKBOX->Location = System::Drawing::Point(789, 28);
			this->HEBREW_ALPHABET_CHECKBOX->Name = L"HEBREW_ALPHABET_CHECKBOX";
			this->HEBREW_ALPHABET_CHECKBOX->Size = System::Drawing::Size(93, 28);
			this->HEBREW_ALPHABET_CHECKBOX->TabIndex = 29;
			this->HEBREW_ALPHABET_CHECKBOX->Text = L"Hébreu";
			this->HEBREW_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// GREEK_ALPHABET_CHECKBOX
			// 
			this->GREEK_ALPHABET_CHECKBOX->AutoSize = true;
			this->GREEK_ALPHABET_CHECKBOX->Location = System::Drawing::Point(640, 28);
			this->GREEK_ALPHABET_CHECKBOX->Name = L"GREEK_ALPHABET_CHECKBOX";
			this->GREEK_ALPHABET_CHECKBOX->Size = System::Drawing::Size(70, 28);
			this->GREEK_ALPHABET_CHECKBOX->TabIndex = 27;
			this->GREEK_ALPHABET_CHECKBOX->Text = L"Grec";
			this->GREEK_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// CHINESE_ALPHABET_CHECKBOX
			// 
			this->CHINESE_ALPHABET_CHECKBOX->AutoSize = true;
			this->CHINESE_ALPHABET_CHECKBOX->Location = System::Drawing::Point(158, 59);
			this->CHINESE_ALPHABET_CHECKBOX->Name = L"CHINESE_ALPHABET_CHECKBOX";
			this->CHINESE_ALPHABET_CHECKBOX->Size = System::Drawing::Size(92, 28);
			this->CHINESE_ALPHABET_CHECKBOX->TabIndex = 22;
			this->CHINESE_ALPHABET_CHECKBOX->Text = L"Chinois";
			this->CHINESE_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// ARAB_ALPHABET_CHECKBOX
			// 
			this->ARAB_ALPHABET_CHECKBOX->AutoSize = true;
			this->ARAB_ALPHABET_CHECKBOX->Location = System::Drawing::Point(15, 59);
			this->ARAB_ALPHABET_CHECKBOX->Name = L"ARAB_ALPHABET_CHECKBOX";
			this->ARAB_ALPHABET_CHECKBOX->Size = System::Drawing::Size(80, 28);
			this->ARAB_ALPHABET_CHECKBOX->TabIndex = 20;
			this->ARAB_ALPHABET_CHECKBOX->Text = L"Arabe";
			this->ARAB_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// JAPANESE_ALPHABET_CHECKBOX
			// 
			this->JAPANESE_ALPHABET_CHECKBOX->AutoSize = true;
			this->JAPANESE_ALPHABET_CHECKBOX->Location = System::Drawing::Point(789, 59);
			this->JAPANESE_ALPHABET_CHECKBOX->Name = L"JAPANESE_ALPHABET_CHECKBOX";
			this->JAPANESE_ALPHABET_CHECKBOX->Size = System::Drawing::Size(104, 28);
			this->JAPANESE_ALPHABET_CHECKBOX->TabIndex = 30;
			this->JAPANESE_ALPHABET_CHECKBOX->Text = L"Japonais";
			this->JAPANESE_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// HANGUL_ALPHABET_CHECKBOX
			// 
			this->HANGUL_ALPHABET_CHECKBOX->AutoSize = true;
			this->HANGUL_ALPHABET_CHECKBOX->Location = System::Drawing::Point(640, 59);
			this->HANGUL_ALPHABET_CHECKBOX->Name = L"HANGUL_ALPHABET_CHECKBOX";
			this->HANGUL_ALPHABET_CHECKBOX->Size = System::Drawing::Size(90, 28);
			this->HANGUL_ALPHABET_CHECKBOX->TabIndex = 28;
			this->HANGUL_ALPHABET_CHECKBOX->Text = L"Hangul";
			this->HANGUL_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// LATIN_ALPHABET_CHECKBOX
			// 
			this->LATIN_ALPHABET_CHECKBOX->AutoSize = true;
			this->LATIN_ALPHABET_CHECKBOX->Location = System::Drawing::Point(17, 28);
			this->LATIN_ALPHABET_CHECKBOX->Name = L"LATIN_ALPHABET_CHECKBOX";
			this->LATIN_ALPHABET_CHECKBOX->Size = System::Drawing::Size(68, 28);
			this->LATIN_ALPHABET_CHECKBOX->TabIndex = 19;
			this->LATIN_ALPHABET_CHECKBOX->Text = L"Latin";
			this->LATIN_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// CYRILLIC_ALPHABET_CHECKBOX
			// 
			this->CYRILLIC_ALPHABET_CHECKBOX->AutoSize = true;
			this->CYRILLIC_ALPHABET_CHECKBOX->Location = System::Drawing::Point(310, 28);
			this->CYRILLIC_ALPHABET_CHECKBOX->Name = L"CYRILLIC_ALPHABET_CHECKBOX";
			this->CYRILLIC_ALPHABET_CHECKBOX->Size = System::Drawing::Size(102, 28);
			this->CYRILLIC_ALPHABET_CHECKBOX->TabIndex = 23;
			this->CYRILLIC_ALPHABET_CHECKBOX->Text = L"Cyrilique";
			this->CYRILLIC_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// DEVANAGARI_ALPHABET_CHECKBOX
			// 
			this->DEVANAGARI_ALPHABET_CHECKBOX->AutoSize = true;
			this->DEVANAGARI_ALPHABET_CHECKBOX->Location = System::Drawing::Point(310, 59);
			this->DEVANAGARI_ALPHABET_CHECKBOX->Name = L"DEVANAGARI_ALPHABET_CHECKBOX";
			this->DEVANAGARI_ALPHABET_CHECKBOX->Size = System::Drawing::Size(124, 28);
			this->DEVANAGARI_ALPHABET_CHECKBOX->TabIndex = 24;
			this->DEVANAGARI_ALPHABET_CHECKBOX->Text = L"Devanagari";
			this->DEVANAGARI_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
			// 
			// BIRTHDATE_DAYPICKER
			// 
			this->BIRTHDATE_DAYPICKER->Location = System::Drawing::Point(54, 120);
			this->BIRTHDATE_DAYPICKER->MaxDate = System::DateTime(3000, 1, 1, 0, 0, 0, 0);
			this->BIRTHDATE_DAYPICKER->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->BIRTHDATE_DAYPICKER->Name = L"BIRTHDATE_DAYPICKER";
			this->BIRTHDATE_DAYPICKER->Size = System::Drawing::Size(188, 29);
			this->BIRTHDATE_DAYPICKER->TabIndex = 8;
			this->BIRTHDATE_DAYPICKER->Value = System::DateTime(2016, 4, 20, 0, 0, 0, 0);
			// 
			// AGE_LABEL
			// 
			this->AGE_LABEL->AutoSize = true;
			this->AGE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AGE_LABEL->Location = System::Drawing::Point(55, 165);
			this->AGE_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->AGE_LABEL->Name = L"AGE_LABEL";
			this->AGE_LABEL->Size = System::Drawing::Size(45, 24);
			this->AGE_LABEL->TabIndex = 9;
			this->AGE_LABEL->Text = L"Âge";
			// 
			// PRINCIPAL_PROFESSION_LABEL
			// 
			this->PRINCIPAL_PROFESSION_LABEL->AutoSize = true;
			this->PRINCIPAL_PROFESSION_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PRINCIPAL_PROFESSION_LABEL->Location = System::Drawing::Point(46, 433);
			this->PRINCIPAL_PROFESSION_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->PRINCIPAL_PROFESSION_LABEL->Name = L"PRINCIPAL_PROFESSION_LABEL";
			this->PRINCIPAL_PROFESSION_LABEL->Size = System::Drawing::Size(186, 24);
			this->PRINCIPAL_PROFESSION_LABEL->TabIndex = 33;
			this->PRINCIPAL_PROFESSION_LABEL->Text = L"Profession Principale";
			// 
			// PRINCIPAL_PROFESSION_COMBOBOX
			// 
			this->PRINCIPAL_PROFESSION_COMBOBOX->FormattingEnabled = true;
			this->PRINCIPAL_PROFESSION_COMBOBOX->Location = System::Drawing::Point(52, 463);
			this->PRINCIPAL_PROFESSION_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
			this->PRINCIPAL_PROFESSION_COMBOBOX->Name = L"PRINCIPAL_PROFESSION_COMBOBOX";
			this->PRINCIPAL_PROFESSION_COMBOBOX->Size = System::Drawing::Size(328, 32);
			this->PRINCIPAL_PROFESSION_COMBOBOX->Sorted = true;
			this->PRINCIPAL_PROFESSION_COMBOBOX->TabIndex = 33;
			// 
			// LAST_PROFESSION_COMBOBOX
			// 
			this->LAST_PROFESSION_COMBOBOX->FormattingEnabled = true;
			this->LAST_PROFESSION_COMBOBOX->Location = System::Drawing::Point(423, 463);
			this->LAST_PROFESSION_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
			this->LAST_PROFESSION_COMBOBOX->Name = L"LAST_PROFESSION_COMBOBOX";
			this->LAST_PROFESSION_COMBOBOX->Size = System::Drawing::Size(330, 32);
			this->LAST_PROFESSION_COMBOBOX->Sorted = true;
			this->LAST_PROFESSION_COMBOBOX->TabIndex = 34;
			// 
			// LAST_PROFESSION_LABEL
			// 
			this->LAST_PROFESSION_LABEL->AutoSize = true;
			this->LAST_PROFESSION_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LAST_PROFESSION_LABEL->Location = System::Drawing::Point(421, 435);
			this->LAST_PROFESSION_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->LAST_PROFESSION_LABEL->Name = L"LAST_PROFESSION_LABEL";
			this->LAST_PROFESSION_LABEL->Size = System::Drawing::Size(258, 24);
			this->LAST_PROFESSION_LABEL->TabIndex = 34;
			this->LAST_PROFESSION_LABEL->Text = L"Dernière Profession Exercée ";
			// 
			// CURRENTLY_WORKING_LABEL
			// 
			this->CURRENTLY_WORKING_LABEL->Controls->Add(this->NO_CURRENTLY_WORKING_RADIOBUTTON);
			this->CURRENTLY_WORKING_LABEL->Controls->Add(this->YES_CURRENTLY_WORKING_RADIOBUTTON);
			this->CURRENTLY_WORKING_LABEL->Controls->Add(this->RETIREMENT_AGE_LABEL);
			this->CURRENTLY_WORKING_LABEL->Controls->Add(this->RETIREMENT_AGE_COUNTER);
			this->CURRENTLY_WORKING_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CURRENTLY_WORKING_LABEL->Location = System::Drawing::Point(52, 522);
			this->CURRENTLY_WORKING_LABEL->Margin = System::Windows::Forms::Padding(6);
			this->CURRENTLY_WORKING_LABEL->Name = L"CURRENTLY_WORKING_LABEL";
			this->CURRENTLY_WORKING_LABEL->Padding = System::Windows::Forms::Padding(6);
			this->CURRENTLY_WORKING_LABEL->Size = System::Drawing::Size(328, 108);
			this->CURRENTLY_WORKING_LABEL->TabIndex = 36;
			this->CURRENTLY_WORKING_LABEL->TabStop = false;
			this->CURRENTLY_WORKING_LABEL->Text = L"Activité Professionnelle en Cours";
			// 
			// NO_CURRENTLY_WORKING_RADIOBUTTON
			// 
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->AutoSize = true;
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->Location = System::Drawing::Point(121, 34);
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->Name = L"NO_CURRENTLY_WORKING_RADIOBUTTON";
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->TabIndex = 37;
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->TabStop = true;
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->Text = L"Non";
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->UseVisualStyleBackColor = true;
			this->NO_CURRENTLY_WORKING_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &NewPatient::NO_CURRENTLY_WORKING_RADIOBUTTON_CheckedChanged);
			// 
			// YES_CURRENTLY_WORKING_RADIOBUTTON
			// 
			this->YES_CURRENTLY_WORKING_RADIOBUTTON->AutoSize = true;
			this->YES_CURRENTLY_WORKING_RADIOBUTTON->Location = System::Drawing::Point(24, 34);
			this->YES_CURRENTLY_WORKING_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->YES_CURRENTLY_WORKING_RADIOBUTTON->Name = L"YES_CURRENTLY_WORKING_RADIOBUTTON";
			this->YES_CURRENTLY_WORKING_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
			this->YES_CURRENTLY_WORKING_RADIOBUTTON->TabIndex = 36;
			this->YES_CURRENTLY_WORKING_RADIOBUTTON->TabStop = true;
			this->YES_CURRENTLY_WORKING_RADIOBUTTON->Text = L"Oui";
			this->YES_CURRENTLY_WORKING_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// RETIREMENT_AGE_LABEL
			// 
			this->RETIREMENT_AGE_LABEL->AutoSize = true;
			this->RETIREMENT_AGE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RETIREMENT_AGE_LABEL->Location = System::Drawing::Point(21, 71);
			this->RETIREMENT_AGE_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->RETIREMENT_AGE_LABEL->Name = L"RETIREMENT_AGE_LABEL";
			this->RETIREMENT_AGE_LABEL->Size = System::Drawing::Size(164, 24);
			this->RETIREMENT_AGE_LABEL->TabIndex = 38;
			this->RETIREMENT_AGE_LABEL->Text = L"Âge de la Retraite:";
			// 
			// RETIREMENT_AGE_COUNTER
			// 
			this->RETIREMENT_AGE_COUNTER->Enabled = false;
			this->RETIREMENT_AGE_COUNTER->Location = System::Drawing::Point(215, 69);
			this->RETIREMENT_AGE_COUNTER->Name = L"RETIREMENT_AGE_COUNTER";
			this->RETIREMENT_AGE_COUNTER->Size = System::Drawing::Size(83, 29);
			this->RETIREMENT_AGE_COUNTER->TabIndex = 38;
			// 
			// CIVILSTATE_LABEL
			// 
			this->CIVILSTATE_LABEL->Controls->Add(this->NUMBEROFCHILDREN_LABEL);
			this->CIVILSTATE_LABEL->Controls->Add(this->SINGLE_RADIOBUTTON);
			this->CIVILSTATE_LABEL->Controls->Add(this->NUMBEROFCHILDREN_COUNTER);
			this->CIVILSTATE_LABEL->Controls->Add(this->WIDOW_RADIOBUTTON);
			this->CIVILSTATE_LABEL->Controls->Add(this->DIVORCED_RADIOBUTTON);
			this->CIVILSTATE_LABEL->Controls->Add(this->MARRIED_RADIOBUTTON);
			this->CIVILSTATE_LABEL->Location = System::Drawing::Point(830, 9);
			this->CIVILSTATE_LABEL->Name = L"CIVILSTATE_LABEL";
			this->CIVILSTATE_LABEL->Size = System::Drawing::Size(336, 183);
			this->CIVILSTATE_LABEL->TabIndex = 3;
			this->CIVILSTATE_LABEL->TabStop = false;
			this->CIVILSTATE_LABEL->Text = L"État Civil";
			// 
			// NUMBEROFCHILDREN_LABEL
			// 
			this->NUMBEROFCHILDREN_LABEL->AutoSize = true;
			this->NUMBEROFCHILDREN_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NUMBEROFCHILDREN_LABEL->Location = System::Drawing::Point(12, 133);
			this->NUMBEROFCHILDREN_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->NUMBEROFCHILDREN_LABEL->Name = L"NUMBEROFCHILDREN_LABEL";
			this->NUMBEROFCHILDREN_LABEL->Size = System::Drawing::Size(161, 24);
			this->NUMBEROFCHILDREN_LABEL->TabIndex = 7;
			this->NUMBEROFCHILDREN_LABEL->Text = L"Nombre d\'Enfants";
			// 
			// SINGLE_RADIOBUTTON
			// 
			this->SINGLE_RADIOBUTTON->AutoSize = true;
			this->SINGLE_RADIOBUTTON->Location = System::Drawing::Point(140, 71);
			this->SINGLE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->SINGLE_RADIOBUTTON->Name = L"SINGLE_RADIOBUTTON";
			this->SINGLE_RADIOBUTTON->Size = System::Drawing::Size(116, 28);
			this->SINGLE_RADIOBUTTON->TabIndex = 6;
			this->SINGLE_RADIOBUTTON->TabStop = true;
			this->SINGLE_RADIOBUTTON->Text = L"Célibataire";
			this->SINGLE_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// NUMBEROFCHILDREN_COUNTER
			// 
			this->NUMBEROFCHILDREN_COUNTER->Location = System::Drawing::Point(213, 131);
			this->NUMBEROFCHILDREN_COUNTER->Name = L"NUMBEROFCHILDREN_COUNTER";
			this->NUMBEROFCHILDREN_COUNTER->Size = System::Drawing::Size(83, 29);
			this->NUMBEROFCHILDREN_COUNTER->TabIndex = 7;
			// 
			// WIDOW_RADIOBUTTON
			// 
			this->WIDOW_RADIOBUTTON->AutoSize = true;
			this->WIDOW_RADIOBUTTON->Location = System::Drawing::Point(16, 71);
			this->WIDOW_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->WIDOW_RADIOBUTTON->Name = L"WIDOW_RADIOBUTTON";
			this->WIDOW_RADIOBUTTON->Size = System::Drawing::Size(67, 28);
			this->WIDOW_RADIOBUTTON->TabIndex = 5;
			this->WIDOW_RADIOBUTTON->TabStop = true;
			this->WIDOW_RADIOBUTTON->Text = L"Veuf";
			this->WIDOW_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// DIVORCED_RADIOBUTTON
			// 
			this->DIVORCED_RADIOBUTTON->AutoSize = true;
			this->DIVORCED_RADIOBUTTON->Location = System::Drawing::Point(140, 31);
			this->DIVORCED_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->DIVORCED_RADIOBUTTON->Name = L"DIVORCED_RADIOBUTTON";
			this->DIVORCED_RADIOBUTTON->Size = System::Drawing::Size(115, 28);
			this->DIVORCED_RADIOBUTTON->TabIndex = 4;
			this->DIVORCED_RADIOBUTTON->TabStop = true;
			this->DIVORCED_RADIOBUTTON->Text = L"Divorcé(e)";
			this->DIVORCED_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MARRIED_RADIOBUTTON
			// 
			this->MARRIED_RADIOBUTTON->AutoSize = true;
			this->MARRIED_RADIOBUTTON->Location = System::Drawing::Point(16, 31);
			this->MARRIED_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MARRIED_RADIOBUTTON->Name = L"MARRIED_RADIOBUTTON";
			this->MARRIED_RADIOBUTTON->Size = System::Drawing::Size(98, 28);
			this->MARRIED_RADIOBUTTON->TabIndex = 3;
			this->MARRIED_RADIOBUTTON->TabStop = true;
			this->MARRIED_RADIOBUTTON->Text = L"Marié(e)";
			this->MARRIED_RADIOBUTTON->UseVisualStyleBackColor = true;
			// 
			// MEDICALDATA_PT1_BUTTON
			// 
			this->MEDICALDATA_PT1_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MEDICALDATA_PT1_BUTTON->Location = System::Drawing::Point(593, 667);
			this->MEDICALDATA_PT1_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MEDICALDATA_PT1_BUTTON->Name = L"MEDICALDATA_PT1_BUTTON";
			this->MEDICALDATA_PT1_BUTTON->Size = System::Drawing::Size(231, 69);
			this->MEDICALDATA_PT1_BUTTON->TabIndex = 45;
			this->MEDICALDATA_PT1_BUTTON->Text = L"Données Médicales PT1 (M0)";
			this->MEDICALDATA_PT1_BUTTON->UseVisualStyleBackColor = true;
			this->MEDICALDATA_PT1_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::MEDICALDATA_PT1_BUTTON_Click);
			// 
			// VISION_PROBLEMS_LABEL
			// 
			this->VISION_PROBLEMS_LABEL->Controls->Add(this->PRECISE_VISION_PROBLEMS_LABEL);
			this->VISION_PROBLEMS_LABEL->Controls->Add(this->PRECISE_VISION_PROBLEMS_TEXTBOX);
			this->VISION_PROBLEMS_LABEL->Controls->Add(this->NO_VISION_PROBLEMS_RADIOBUTTON);
			this->VISION_PROBLEMS_LABEL->Controls->Add(this->YES_VISION_PROBLEMS_RADIOBUTTON);
			this->VISION_PROBLEMS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->VISION_PROBLEMS_LABEL->Location = System::Drawing::Point(392, 522);
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
			this->OTHER_COMMENTS_LABEL->Location = System::Drawing::Point(792, 522);
			this->OTHER_COMMENTS_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->OTHER_COMMENTS_LABEL->Name = L"OTHER_COMMENTS_LABEL";
			this->OTHER_COMMENTS_LABEL->Size = System::Drawing::Size(191, 24);
			this->OTHER_COMMENTS_LABEL->TabIndex = 42;
			this->OTHER_COMMENTS_LABEL->Text = L"Autres Commentaires";
			// 
			// OTHER_COMMENTS_TEXTBOX
			// 
			this->OTHER_COMMENTS_TEXTBOX->Location = System::Drawing::Point(796, 556);
			this->OTHER_COMMENTS_TEXTBOX->Name = L"OTHER_COMMENTS_TEXTBOX";
			this->OTHER_COMMENTS_TEXTBOX->Size = System::Drawing::Size(338, 29);
			this->OTHER_COMMENTS_TEXTBOX->TabIndex = 42;
			// 
			// MEDICALDATA_PT4_BUTTON
			// 
			this->MEDICALDATA_PT4_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MEDICALDATA_PT4_BUTTON->Location = System::Drawing::Point(863, 748);
			this->MEDICALDATA_PT4_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MEDICALDATA_PT4_BUTTON->Name = L"MEDICALDATA_PT4_BUTTON";
			this->MEDICALDATA_PT4_BUTTON->Size = System::Drawing::Size(231, 69);
			this->MEDICALDATA_PT4_BUTTON->TabIndex = 48;
			this->MEDICALDATA_PT4_BUTTON->Text = L"Données Médicales PT4 (M12)";
			this->MEDICALDATA_PT4_BUTTON->UseVisualStyleBackColor = true;
			this->MEDICALDATA_PT4_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::MEDICALDATA_PT4_BUTTON_Click);
			// 
			// MEDICALDATA_PT3_BUTTON
			// 
			this->MEDICALDATA_PT3_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MEDICALDATA_PT3_BUTTON->Location = System::Drawing::Point(593, 748);
			this->MEDICALDATA_PT3_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MEDICALDATA_PT3_BUTTON->Name = L"MEDICALDATA_PT3_BUTTON";
			this->MEDICALDATA_PT3_BUTTON->Size = System::Drawing::Size(231, 69);
			this->MEDICALDATA_PT3_BUTTON->TabIndex = 47;
			this->MEDICALDATA_PT3_BUTTON->Text = L"Données Médicales PT3 (M0)";
			this->MEDICALDATA_PT3_BUTTON->UseVisualStyleBackColor = true;
			this->MEDICALDATA_PT3_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::MEDICALDATA_PT3_BUTTON_Click);
			// 
			// MEDICALDATA_PT2_BUTTON
			// 
			this->MEDICALDATA_PT2_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MEDICALDATA_PT2_BUTTON->Location = System::Drawing::Point(863, 667);
			this->MEDICALDATA_PT2_BUTTON->Margin = System::Windows::Forms::Padding(6);
			this->MEDICALDATA_PT2_BUTTON->Name = L"MEDICALDATA_PT2_BUTTON";
			this->MEDICALDATA_PT2_BUTTON->Size = System::Drawing::Size(231, 69);
			this->MEDICALDATA_PT2_BUTTON->TabIndex = 46;
			this->MEDICALDATA_PT2_BUTTON->Text = L"Données Médicales PT2 (M0)";
			this->MEDICALDATA_PT2_BUTTON->UseVisualStyleBackColor = true;
			this->MEDICALDATA_PT2_BUTTON->Click += gcnew System::EventHandler(this, &NewPatient::MEDICALDATA_PT2_BUTTON_Click);
			// 
			// NewPatient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1213, 870);
			this->Controls->Add(this->MEDICALDATA_PT4_BUTTON);
			this->Controls->Add(this->MEDICALDATA_PT3_BUTTON);
			this->Controls->Add(this->MEDICALDATA_PT2_BUTTON);
			this->Controls->Add(this->OTHER_COMMENTS_TEXTBOX);
			this->Controls->Add(this->OTHER_COMMENTS_LABEL);
			this->Controls->Add(this->VISION_PROBLEMS_LABEL);
			this->Controls->Add(this->MEDICALDATA_PT1_BUTTON);
			this->Controls->Add(this->CIVILSTATE_LABEL);
			this->Controls->Add(this->CURRENTLY_WORKING_LABEL);
			this->Controls->Add(this->LAST_PROFESSION_COMBOBOX);
			this->Controls->Add(this->LAST_PROFESSION_LABEL);
			this->Controls->Add(this->PRINCIPAL_PROFESSION_LABEL);
			this->Controls->Add(this->PRINCIPAL_PROFESSION_COMBOBOX);
			this->Controls->Add(this->AGE_LABEL);
			this->Controls->Add(this->BIRTHDATE_DAYPICKER);
			this->Controls->Add(this->ALPHABETS_LABEL);
			this->Controls->Add(this->FRENCHLEVEL_COMBOBOX);
			this->Controls->Add(this->GENDER_LABEL);
			this->Controls->Add(this->HANDEDNESS_LABEL);
			this->Controls->Add(this->CANCEL_BUTTON);
			this->Controls->Add(this->REGISTER_BUTTON);
			this->Controls->Add(this->NATIVE_LANGUAGE_LABEL);
			this->Controls->Add(this->NATIVE_LANGUAGE_COMBOBOX);
			this->Controls->Add(this->SOCIOEDUCATIVE_COMBOBOX);
			this->Controls->Add(this->AGE_COUNTER);
			this->Controls->Add(this->WRITING_FREQ_COMBOBOX);
			this->Controls->Add(this->SOCIOEDUCATIVE_LABEL);
			this->Controls->Add(this->BIRTHDATE_LABEL);
			this->Controls->Add(this->FRENCHLEVEL_LABEL);
			this->Controls->Add(this->WRITING_FREQ_LABEL);
			this->Controls->Add(this->FIRSTNAME_LABEL);
			this->Controls->Add(this->LASTNAME_LABEL);
			this->Controls->Add(this->FIRSTNAME_TEXTBOX);
			this->Controls->Add(this->LASTNAME_TEXTBOX);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"NewPatient";
			this->Text = L"Ajouter un Nouvel Patient";
			this->Load += gcnew System::EventHandler(this, &NewPatient::NewPatient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AGE_COUNTER))->EndInit();
			this->HANDEDNESS_LABEL->ResumeLayout(false);
			this->HANDEDNESS_LABEL->PerformLayout();
			this->GENDER_LABEL->ResumeLayout(false);
			this->GENDER_LABEL->PerformLayout();
			this->ALPHABETS_LABEL->ResumeLayout(false);
			this->ALPHABETS_LABEL->PerformLayout();
			this->CURRENTLY_WORKING_LABEL->ResumeLayout(false);
			this->CURRENTLY_WORKING_LABEL->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RETIREMENT_AGE_COUNTER))->EndInit();
			this->CIVILSTATE_LABEL->ResumeLayout(false);
			this->CIVILSTATE_LABEL->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUMBEROFCHILDREN_COUNTER))->EndInit();
			this->VISION_PROBLEMS_LABEL->ResumeLayout(false);
			this->VISION_PROBLEMS_LABEL->PerformLayout();
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

		if (isFormularyOk()) {

			//TODO: CHECK IF PATIENT RECORDS FOLDER EXIST HERE
			//if (GetLastError() == ERROR_PATH_NOT_FOUND) {
			//	MessageBox::Show("Cette personne est déjà enregistré", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			//}

			if (PatientAlreadyExist()) {
				MessageBox::Show("Cette personne est déjà enregistré", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else {
				completePatientInformationObject();
				createAndPrintPatientSubdirectories();
				NewPatient::Close();
			}
		}
	}

	private: System::Void MEDICALDATA_PT1_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		MedicalDataPT1 ^form = gcnew MedicalDataPT1(currentLanguage);
		form->ShowDialog();
	}

	private: System::Void MEDICALDATA_PT2_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		MedicalDataPT2 ^form = gcnew MedicalDataPT2(currentLanguage);
		form->ShowDialog();
	}
	private: System::Void MEDICALDATA_PT3_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		MedicalDataPT3 ^form = gcnew MedicalDataPT3(currentLanguage);
		form->ShowDialog();
	}
	private: System::Void MEDICALDATA_PT4_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		MedicalDataPT4 ^form = gcnew MedicalDataPT4(currentLanguage);
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

	private: System::Void NO_CURRENTLY_WORKING_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (YES_CURRENTLY_WORKING_RADIOBUTTON->Checked) {
			RETIREMENT_AGE_COUNTER->Enabled = false;
			RETIREMENT_AGE_COUNTER->Value = 0;
		}
		else {
			RETIREMENT_AGE_COUNTER->Enabled = true;
		}
	}

};
}
