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
    /// Summary for LanguageInformation
    /// </summary>

    public ref class LanguageInformation : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
    private: System::Windows::Forms::Button^  CANCEL_BUTTON;
    public:
    private: System::Windows::Forms::Button^  REGISTER_BUTTON;
    public: Patient *myPatient;
    public:
        LanguageInformation(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_LanguageInformationForm(currentLanguage);
            if (!treatAsNew) fillFormWithPreviousPatientData();

        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~LanguageInformation()
        {
            if (components)
            {
                delete components;
            }
        }

    void UpdateLanguage_LanguageCombobox_LanguageInformation(String^);

    void WacomTabletApplication::LanguageInformation::UpdateLanguage_LanguageInformationForm(String^);
    void WacomTabletApplication::LanguageInformation::fillFormWithPreviousPatientData();
    void WacomTabletApplication::LanguageInformation::completePatientInformationObject();

    private: System::Windows::Forms::Label^  NATIVE_LANGUAGE_LABEL;
    protected:
    private: System::Windows::Forms::ComboBox^  NATIVE_LANGUAGE_COMBOBOX;
    private: System::Windows::Forms::ComboBox^  FRENCHLEVEL_ORAL_COMBOBOX;

    private: System::Windows::Forms::Label^  FRENCHLEVEL_LABEL;
    private: System::Windows::Forms::GroupBox^  ALPHABETS_LABEL;
    private: System::Windows::Forms::CheckBox^  SOUTHINDIC_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  ETIOPIC_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  GEORGIAN_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  ARMENIAN_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  OTHER_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  HEBREW_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  GREEK_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  CHINESE_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  ARAB_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  JAPANESE_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  HANGUL_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  LATIN_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  CYRILLIC_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  DEVANAGARI_ALPHABET_CHECKBOX;
    private: System::Windows::Forms::ComboBox^  ARABELEVEL_ORAL_COMBOBOX;
    private: System::Windows::Forms::Label^  ARABELEVEL_LABEL;
    private: System::Windows::Forms::ComboBox^  FRENCHLEVEL_READ_COMBOBOX;
    private: System::Windows::Forms::Label^  FRENCHLEVEL_READ_LABEL;
    private: System::Windows::Forms::Label^  FRENCHLEVEL_ORAL_LABEL;
    private: System::Windows::Forms::ComboBox^  FRENCHLEVEL_WRITTEN_COMBOBOX;
    private: System::Windows::Forms::Label^  FRENCHLEVEL_WRITTEN_LABEL;
    private: System::Windows::Forms::Label^  ARABELEVEL_ORAL_LABEL;
    private: System::Windows::Forms::Label^  ARABELEVEL_READ_LABEL;
    private: System::Windows::Forms::ComboBox^  ARABELEVEL_READ_COMBOBOX;
    private: System::Windows::Forms::Label^  ARABELEVEL_WRITTEN_LABEL;
    private: System::Windows::Forms::ComboBox^  ARABELEVEL_WRITTEN_COMBOBOX;
    private: System::Windows::Forms::GroupBox^  BILINGUALISM_LABEL;
    private: System::Windows::Forms::RadioButton^  NO_BILINGUALISM_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  YES_LATE_BILINGUALISM_RADIOBUTTON;

    private: System::Windows::Forms::RadioButton^  YES_EARLY_BILINGUALISM_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  MISSING_BILINGUALISM_RADIOBUTTON;
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
            this->NATIVE_LANGUAGE_LABEL = (gcnew System::Windows::Forms::Label());
            this->NATIVE_LANGUAGE_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->FRENCHLEVEL_ORAL_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->FRENCHLEVEL_LABEL = (gcnew System::Windows::Forms::Label());
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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->ARABELEVEL_ORAL_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->ARABELEVEL_LABEL = (gcnew System::Windows::Forms::Label());
            this->FRENCHLEVEL_READ_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->FRENCHLEVEL_READ_LABEL = (gcnew System::Windows::Forms::Label());
            this->FRENCHLEVEL_ORAL_LABEL = (gcnew System::Windows::Forms::Label());
            this->FRENCHLEVEL_WRITTEN_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->FRENCHLEVEL_WRITTEN_LABEL = (gcnew System::Windows::Forms::Label());
            this->ARABELEVEL_ORAL_LABEL = (gcnew System::Windows::Forms::Label());
            this->ARABELEVEL_READ_LABEL = (gcnew System::Windows::Forms::Label());
            this->ARABELEVEL_READ_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->ARABELEVEL_WRITTEN_LABEL = (gcnew System::Windows::Forms::Label());
            this->ARABELEVEL_WRITTEN_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->BILINGUALISM_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->MISSING_BILINGUALISM_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->NO_BILINGUALISM_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->YES_LATE_BILINGUALISM_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->ALPHABETS_LABEL->SuspendLayout();
            this->BILINGUALISM_LABEL->SuspendLayout();
            this->SuspendLayout();
            // 
            // NATIVE_LANGUAGE_LABEL
            // 
            this->NATIVE_LANGUAGE_LABEL->AutoSize = true;
            this->NATIVE_LANGUAGE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->NATIVE_LANGUAGE_LABEL->Location = System::Drawing::Point(47, 113);
            this->NATIVE_LANGUAGE_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->NATIVE_LANGUAGE_LABEL->Name = L"NATIVE_LANGUAGE_LABEL";
            this->NATIVE_LANGUAGE_LABEL->Size = System::Drawing::Size(167, 24);
            this->NATIVE_LANGUAGE_LABEL->TabIndex = 18;
            this->NATIVE_LANGUAGE_LABEL->Text = L"Langue Maternelle";
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
            this->NATIVE_LANGUAGE_COMBOBOX->Location = System::Drawing::Point(49, 143);
            this->NATIVE_LANGUAGE_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
            this->NATIVE_LANGUAGE_COMBOBOX->Name = L"NATIVE_LANGUAGE_COMBOBOX";
            this->NATIVE_LANGUAGE_COMBOBOX->Size = System::Drawing::Size(274, 21);
            this->NATIVE_LANGUAGE_COMBOBOX->Sorted = true;
            this->NATIVE_LANGUAGE_COMBOBOX->TabIndex = 19;
            // 
            // FRENCHLEVEL_ORAL_COMBOBOX
            // 
            this->FRENCHLEVEL_ORAL_COMBOBOX->FormattingEnabled = true;
            this->FRENCHLEVEL_ORAL_COMBOBOX->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Débutant", L"Moyen", L"Avancé" });
            this->FRENCHLEVEL_ORAL_COMBOBOX->Location = System::Drawing::Point(132, 216);
            this->FRENCHLEVEL_ORAL_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
            this->FRENCHLEVEL_ORAL_COMBOBOX->Name = L"FRENCHLEVEL_ORAL_COMBOBOX";
            this->FRENCHLEVEL_ORAL_COMBOBOX->Size = System::Drawing::Size(214, 21);
            this->FRENCHLEVEL_ORAL_COMBOBOX->TabIndex = 20;
            //this->FRENCHLEVEL_ORAL_COMBOBOX->SelectedIndexChanged += gcnew System::EventHandler(this, &LanguageInformation::FRENCHLEVEL_COMBOBOX_SelectedIndexChanged);
            // 
            // FRENCHLEVEL_LABEL
            // 
            this->FRENCHLEVEL_LABEL->AutoSize = true;
            this->FRENCHLEVEL_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FRENCHLEVEL_LABEL->Location = System::Drawing::Point(47, 184);
            this->FRENCHLEVEL_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->FRENCHLEVEL_LABEL->Name = L"FRENCHLEVEL_LABEL";
            this->FRENCHLEVEL_LABEL->Size = System::Drawing::Size(173, 24);
            this->FRENCHLEVEL_LABEL->TabIndex = 21;
            this->FRENCHLEVEL_LABEL->Text = L"Niveau de Français";
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
            this->ALPHABETS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->ALPHABETS_LABEL->Location = System::Drawing::Point(51, 338);
            this->ALPHABETS_LABEL->Name = L"ALPHABETS_LABEL";
            this->ALPHABETS_LABEL->Size = System::Drawing::Size(735, 134);
            this->ALPHABETS_LABEL->TabIndex = 22;
            this->ALPHABETS_LABEL->TabStop = false;
            this->ALPHABETS_LABEL->Text = L"Le patient écrit dans les alphabets suivants:";
            //this->ALPHABETS_LABEL->Enter += gcnew System::EventHandler(this, &LanguageInformation::ALPHABETS_LABEL_Enter);
            // 
            // SOUTHINDIC_ALPHABET_CHECKBOX
            // 
            this->SOUTHINDIC_ALPHABET_CHECKBOX->AutoSize = true;
            this->SOUTHINDIC_ALPHABET_CHECKBOX->Location = System::Drawing::Point(310, 96);
            this->SOUTHINDIC_ALPHABET_CHECKBOX->Name = L"SOUTHINDIC_ALPHABET_CHECKBOX";
            this->SOUTHINDIC_ALPHABET_CHECKBOX->Size = System::Drawing::Size(108, 28);
            this->SOUTHINDIC_ALPHABET_CHECKBOX->TabIndex = 31;
            this->SOUTHINDIC_ALPHABET_CHECKBOX->Text = L"Sud Indic";
            this->SOUTHINDIC_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // ETIOPIC_ALPHABET_CHECKBOX
            // 
            this->ETIOPIC_ALPHABET_CHECKBOX->AutoSize = true;
            this->ETIOPIC_ALPHABET_CHECKBOX->Location = System::Drawing::Point(158, 62);
            this->ETIOPIC_ALPHABET_CHECKBOX->Name = L"ETIOPIC_ALPHABET_CHECKBOX";
            this->ETIOPIC_ALPHABET_CHECKBOX->Size = System::Drawing::Size(86, 28);
            this->ETIOPIC_ALPHABET_CHECKBOX->TabIndex = 25;
            this->ETIOPIC_ALPHABET_CHECKBOX->Text = L"Etiopic";
            this->ETIOPIC_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // GEORGIAN_ALPHABET_CHECKBOX
            // 
            this->GEORGIAN_ALPHABET_CHECKBOX->AutoSize = true;
            this->GEORGIAN_ALPHABET_CHECKBOX->Location = System::Drawing::Point(310, 62);
            this->GEORGIAN_ALPHABET_CHECKBOX->Name = L"GEORGIAN_ALPHABET_CHECKBOX";
            this->GEORGIAN_ALPHABET_CHECKBOX->Size = System::Drawing::Size(108, 28);
            this->GEORGIAN_ALPHABET_CHECKBOX->TabIndex = 26;
            this->GEORGIAN_ALPHABET_CHECKBOX->Text = L"Géorgien";
            this->GEORGIAN_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // ARMENIAN_ALPHABET_CHECKBOX
            // 
            this->ARMENIAN_ALPHABET_CHECKBOX->AutoSize = true;
            this->ARMENIAN_ALPHABET_CHECKBOX->Location = System::Drawing::Point(310, 28);
            this->ARMENIAN_ALPHABET_CHECKBOX->Name = L"ARMENIAN_ALPHABET_CHECKBOX";
            this->ARMENIAN_ALPHABET_CHECKBOX->Size = System::Drawing::Size(112, 28);
            this->ARMENIAN_ALPHABET_CHECKBOX->TabIndex = 21;
            this->ARMENIAN_ALPHABET_CHECKBOX->Text = L"Arménien";
            this->ARMENIAN_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // OTHER_ALPHABET_CHECKBOX
            // 
            this->OTHER_ALPHABET_CHECKBOX->AutoSize = true;
            this->OTHER_ALPHABET_CHECKBOX->Location = System::Drawing::Point(468, 96);
            this->OTHER_ALPHABET_CHECKBOX->Name = L"OTHER_ALPHABET_CHECKBOX";
            this->OTHER_ALPHABET_CHECKBOX->Size = System::Drawing::Size(83, 28);
            this->OTHER_ALPHABET_CHECKBOX->TabIndex = 32;
            this->OTHER_ALPHABET_CHECKBOX->Text = L"Autres";
            this->OTHER_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // HEBREW_ALPHABET_CHECKBOX
            // 
            this->HEBREW_ALPHABET_CHECKBOX->AutoSize = true;
            this->HEBREW_ALPHABET_CHECKBOX->Location = System::Drawing::Point(17, 96);
            this->HEBREW_ALPHABET_CHECKBOX->Name = L"HEBREW_ALPHABET_CHECKBOX";
            this->HEBREW_ALPHABET_CHECKBOX->Size = System::Drawing::Size(93, 28);
            this->HEBREW_ALPHABET_CHECKBOX->TabIndex = 29;
            this->HEBREW_ALPHABET_CHECKBOX->Text = L"Hébreu";
            this->HEBREW_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // GREEK_ALPHABET_CHECKBOX
            // 
            this->GREEK_ALPHABET_CHECKBOX->AutoSize = true;
            this->GREEK_ALPHABET_CHECKBOX->Location = System::Drawing::Point(468, 62);
            this->GREEK_ALPHABET_CHECKBOX->Name = L"GREEK_ALPHABET_CHECKBOX";
            this->GREEK_ALPHABET_CHECKBOX->Size = System::Drawing::Size(70, 28);
            this->GREEK_ALPHABET_CHECKBOX->TabIndex = 27;
            this->GREEK_ALPHABET_CHECKBOX->Text = L"Grec";
            this->GREEK_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // CHINESE_ALPHABET_CHECKBOX
            // 
            this->CHINESE_ALPHABET_CHECKBOX->AutoSize = true;
            this->CHINESE_ALPHABET_CHECKBOX->Location = System::Drawing::Point(468, 28);
            this->CHINESE_ALPHABET_CHECKBOX->Name = L"CHINESE_ALPHABET_CHECKBOX";
            this->CHINESE_ALPHABET_CHECKBOX->Size = System::Drawing::Size(92, 28);
            this->CHINESE_ALPHABET_CHECKBOX->TabIndex = 22;
            this->CHINESE_ALPHABET_CHECKBOX->Text = L"Chinois";
            this->CHINESE_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // ARAB_ALPHABET_CHECKBOX
            // 
            this->ARAB_ALPHABET_CHECKBOX->AutoSize = true;
            this->ARAB_ALPHABET_CHECKBOX->Location = System::Drawing::Point(158, 28);
            this->ARAB_ALPHABET_CHECKBOX->Name = L"ARAB_ALPHABET_CHECKBOX";
            this->ARAB_ALPHABET_CHECKBOX->Size = System::Drawing::Size(80, 28);
            this->ARAB_ALPHABET_CHECKBOX->TabIndex = 20;
            this->ARAB_ALPHABET_CHECKBOX->Text = L"Arabe";
            this->ARAB_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // JAPANESE_ALPHABET_CHECKBOX
            // 
            this->JAPANESE_ALPHABET_CHECKBOX->AutoSize = true;
            this->JAPANESE_ALPHABET_CHECKBOX->Location = System::Drawing::Point(158, 96);
            this->JAPANESE_ALPHABET_CHECKBOX->Name = L"JAPANESE_ALPHABET_CHECKBOX";
            this->JAPANESE_ALPHABET_CHECKBOX->Size = System::Drawing::Size(104, 28);
            this->JAPANESE_ALPHABET_CHECKBOX->TabIndex = 30;
            this->JAPANESE_ALPHABET_CHECKBOX->Text = L"Japonais";
            this->JAPANESE_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // HANGUL_ALPHABET_CHECKBOX
            // 
            this->HANGUL_ALPHABET_CHECKBOX->AutoSize = true;
            this->HANGUL_ALPHABET_CHECKBOX->Location = System::Drawing::Point(618, 59);
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
            this->CYRILLIC_ALPHABET_CHECKBOX->Location = System::Drawing::Point(618, 28);
            this->CYRILLIC_ALPHABET_CHECKBOX->Name = L"CYRILLIC_ALPHABET_CHECKBOX";
            this->CYRILLIC_ALPHABET_CHECKBOX->Size = System::Drawing::Size(102, 28);
            this->CYRILLIC_ALPHABET_CHECKBOX->TabIndex = 23;
            this->CYRILLIC_ALPHABET_CHECKBOX->Text = L"Cyrilique";
            this->CYRILLIC_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // DEVANAGARI_ALPHABET_CHECKBOX
            // 
            this->DEVANAGARI_ALPHABET_CHECKBOX->AutoSize = true;
            this->DEVANAGARI_ALPHABET_CHECKBOX->Location = System::Drawing::Point(17, 62);
            this->DEVANAGARI_ALPHABET_CHECKBOX->Name = L"DEVANAGARI_ALPHABET_CHECKBOX";
            this->DEVANAGARI_ALPHABET_CHECKBOX->Size = System::Drawing::Size(124, 28);
            this->DEVANAGARI_ALPHABET_CHECKBOX->TabIndex = 24;
            this->DEVANAGARI_ALPHABET_CHECKBOX->Text = L"Devanagari";
            this->DEVANAGARI_ALPHABET_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
            this->label1->Location = System::Drawing::Point(44, 47);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(348, 39);
            this->label1->TabIndex = 23;
            this->label1->Text = L"Language Information";
            // 
            // ARABELEVEL_ORAL_COMBOBOX
            // 
            this->ARABELEVEL_ORAL_COMBOBOX->FormattingEnabled = true;
            this->ARABELEVEL_ORAL_COMBOBOX->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Débutant", L"Moyen", L"Avancé" });
            this->ARABELEVEL_ORAL_COMBOBOX->Location = System::Drawing::Point(132, 290);
            this->ARABELEVEL_ORAL_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
            this->ARABELEVEL_ORAL_COMBOBOX->Name = L"ARABELEVEL_ORAL_COMBOBOX";
            this->ARABELEVEL_ORAL_COMBOBOX->Size = System::Drawing::Size(214, 21);
            this->ARABELEVEL_ORAL_COMBOBOX->TabIndex = 24;
            //this->ARABELEVEL_ORAL_COMBOBOX->SelectedIndexChanged += gcnew System::EventHandler(this, &LanguageInformation::comboBox1_SelectedIndexChanged);
            // 
            // ARABELEVEL_LABEL
            // 
            this->ARABELEVEL_LABEL->AutoSize = true;
            this->ARABELEVEL_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ARABELEVEL_LABEL->Location = System::Drawing::Point(47, 260);
            this->ARABELEVEL_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->ARABELEVEL_LABEL->Name = L"ARABELEVEL_LABEL";
            this->ARABELEVEL_LABEL->Size = System::Drawing::Size(140, 24);
            this->ARABELEVEL_LABEL->TabIndex = 25;
            this->ARABELEVEL_LABEL->Text = L"Niveau d\'Arabe";
            //this->ARABELEVEL_LABEL->Click += gcnew System::EventHandler(this, &LanguageInformation::label2_Click);
            // 
            // FRENCHLEVEL_READ_COMBOBOX
            // 
            this->FRENCHLEVEL_READ_COMBOBOX->FormattingEnabled = true;
            this->FRENCHLEVEL_READ_COMBOBOX->Location = System::Drawing::Point(412, 216);
            this->FRENCHLEVEL_READ_COMBOBOX->Name = L"FRENCHLEVEL_READ_COMBOBOX";
            this->FRENCHLEVEL_READ_COMBOBOX->Size = System::Drawing::Size(214, 21);
            this->FRENCHLEVEL_READ_COMBOBOX->TabIndex = 26;
            this->FRENCHLEVEL_READ_COMBOBOX->Tag = L"";
            //this->FRENCHLEVEL_READ_COMBOBOX->SelectedIndexChanged += gcnew System::EventHandler(this, &LanguageInformation::FRENCHLEVEL_READ_COMBOBOX_SelectedIndexChanged);
            // 
            // FRENCHLEVEL_READ_LABEL
            // 
            this->FRENCHLEVEL_READ_LABEL->AutoSize = true;
            this->FRENCHLEVEL_READ_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->FRENCHLEVEL_READ_LABEL->Location = System::Drawing::Point(375, 213);
            this->FRENCHLEVEL_READ_LABEL->Name = L"FRENCHLEVEL_READ_LABEL";
            this->FRENCHLEVEL_READ_LABEL->Size = System::Drawing::Size(31, 24);
            this->FRENCHLEVEL_READ_LABEL->TabIndex = 27;
            this->FRENCHLEVEL_READ_LABEL->Text = L"Lu";
            //this->FRENCHLEVEL_READ_LABEL->Click += gcnew System::EventHandler(this, &LanguageInformation::label2_Click_1);
            // 
            // FRENCHLEVEL_ORAL_LABEL
            // 
            this->FRENCHLEVEL_ORAL_LABEL->AutoSize = true;
            this->FRENCHLEVEL_ORAL_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->FRENCHLEVEL_ORAL_LABEL->Location = System::Drawing::Point(70, 213);
            this->FRENCHLEVEL_ORAL_LABEL->Name = L"FRENCHLEVEL_ORAL_LABEL";
            this->FRENCHLEVEL_ORAL_LABEL->Size = System::Drawing::Size(53, 24);
            this->FRENCHLEVEL_ORAL_LABEL->TabIndex = 28;
            this->FRENCHLEVEL_ORAL_LABEL->Text = L"Parlé";
            // 
            // FRENCHLEVEL_WRITTEN_COMBOBOX
            // 
            this->FRENCHLEVEL_WRITTEN_COMBOBOX->FormattingEnabled = true;
            this->FRENCHLEVEL_WRITTEN_COMBOBOX->Location = System::Drawing::Point(718, 216);
            this->FRENCHLEVEL_WRITTEN_COMBOBOX->Name = L"FRENCHLEVEL_WRITTEN_COMBOBOX";
            this->FRENCHLEVEL_WRITTEN_COMBOBOX->Size = System::Drawing::Size(214, 21);
            this->FRENCHLEVEL_WRITTEN_COMBOBOX->TabIndex = 29;
            // 
            // FRENCHLEVEL_WRITTEN_LABEL
            // 
            this->FRENCHLEVEL_WRITTEN_LABEL->AutoSize = true;
            this->FRENCHLEVEL_WRITTEN_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->FRENCHLEVEL_WRITTEN_LABEL->Location = System::Drawing::Point(665, 213);
            this->FRENCHLEVEL_WRITTEN_LABEL->Name = L"FRENCHLEVEL_WRITTEN_LABEL";
            this->FRENCHLEVEL_WRITTEN_LABEL->Size = System::Drawing::Size(47, 24);
            this->FRENCHLEVEL_WRITTEN_LABEL->TabIndex = 30;
            this->FRENCHLEVEL_WRITTEN_LABEL->Text = L"Écrit";
            // 
            // ARABELEVEL_ORAL_LABEL
            // 
            this->ARABELEVEL_ORAL_LABEL->AutoSize = true;
            this->ARABELEVEL_ORAL_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->ARABELEVEL_ORAL_LABEL->Location = System::Drawing::Point(70, 287);
            this->ARABELEVEL_ORAL_LABEL->Name = L"ARABELEVEL_ORAL_LABEL";
            this->ARABELEVEL_ORAL_LABEL->Size = System::Drawing::Size(53, 24);
            this->ARABELEVEL_ORAL_LABEL->TabIndex = 31;
            this->ARABELEVEL_ORAL_LABEL->Text = L"Parlé";
            // 
            // ARABELEVEL_READ_LABEL
            // 
            this->ARABELEVEL_READ_LABEL->AutoSize = true;
            this->ARABELEVEL_READ_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->ARABELEVEL_READ_LABEL->Location = System::Drawing::Point(375, 287);
            this->ARABELEVEL_READ_LABEL->Name = L"ARABELEVEL_READ_LABEL";
            this->ARABELEVEL_READ_LABEL->Size = System::Drawing::Size(31, 24);
            this->ARABELEVEL_READ_LABEL->TabIndex = 32;
            this->ARABELEVEL_READ_LABEL->Text = L"Lu";
            // 
            // ARABELEVEL_READ_COMBOBOX
            // 
            this->ARABELEVEL_READ_COMBOBOX->FormattingEnabled = true;
            this->ARABELEVEL_READ_COMBOBOX->Location = System::Drawing::Point(412, 290);
            this->ARABELEVEL_READ_COMBOBOX->Name = L"ARABELEVEL_READ_COMBOBOX";
            this->ARABELEVEL_READ_COMBOBOX->Size = System::Drawing::Size(214, 21);
            this->ARABELEVEL_READ_COMBOBOX->TabIndex = 33;
            // 
            // ARABELEVEL_WRITTEN_LABEL
            // 
            this->ARABELEVEL_WRITTEN_LABEL->AutoSize = true;
            this->ARABELEVEL_WRITTEN_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->ARABELEVEL_WRITTEN_LABEL->Location = System::Drawing::Point(665, 289);
            this->ARABELEVEL_WRITTEN_LABEL->Name = L"ARABELEVEL_WRITTEN_LABEL";
            this->ARABELEVEL_WRITTEN_LABEL->Size = System::Drawing::Size(47, 24);
            this->ARABELEVEL_WRITTEN_LABEL->TabIndex = 34;
            this->ARABELEVEL_WRITTEN_LABEL->Text = L"Écrit";
            // 
            // ARABELEVEL_WRITTEN_COMBOBOX
            // 
            this->ARABELEVEL_WRITTEN_COMBOBOX->FormattingEnabled = true;
            this->ARABELEVEL_WRITTEN_COMBOBOX->Location = System::Drawing::Point(718, 292);
            this->ARABELEVEL_WRITTEN_COMBOBOX->Name = L"ARABELEVEL_WRITTEN_COMBOBOX";
            this->ARABELEVEL_WRITTEN_COMBOBOX->Size = System::Drawing::Size(214, 21);
            this->ARABELEVEL_WRITTEN_COMBOBOX->TabIndex = 35;
            // 
            // BILINGUALISM_LABEL
            // 
            this->BILINGUALISM_LABEL->Controls->Add(this->MISSING_BILINGUALISM_RADIOBUTTON);
            this->BILINGUALISM_LABEL->Controls->Add(this->NO_BILINGUALISM_RADIOBUTTON);
            this->BILINGUALISM_LABEL->Controls->Add(this->YES_LATE_BILINGUALISM_RADIOBUTTON);
            this->BILINGUALISM_LABEL->Controls->Add(this->YES_EARLY_BILINGUALISM_RADIOBUTTON);
            this->BILINGUALISM_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->BILINGUALISM_LABEL->Location = System::Drawing::Point(412, 103);
            this->BILINGUALISM_LABEL->Name = L"BILINGUALISM_LABEL";
            this->BILINGUALISM_LABEL->Size = System::Drawing::Size(493, 86);
            this->BILINGUALISM_LABEL->TabIndex = 36;
            this->BILINGUALISM_LABEL->TabStop = false;
            this->BILINGUALISM_LABEL->Text = L"Bilinguisme";
            // 
            // MISSING_BILINGUALISM_RADIOBUTTON
            // 
            this->MISSING_BILINGUALISM_RADIOBUTTON->AutoSize = true;
            this->MISSING_BILINGUALISM_RADIOBUTTON->Location = System::Drawing::Point(335, 41);
            this->MISSING_BILINGUALISM_RADIOBUTTON->Name = L"MISSING_BILINGUALISM_RADIOBUTTON";
            this->MISSING_BILINGUALISM_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
            this->MISSING_BILINGUALISM_RADIOBUTTON->TabIndex = 3;
            this->MISSING_BILINGUALISM_RADIOBUTTON->TabStop = true;
            this->MISSING_BILINGUALISM_RADIOBUTTON->Text = L"Manquante";
            this->MISSING_BILINGUALISM_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // NO_BILINGUALISM_RADIOBUTTON
            // 
            this->NO_BILINGUALISM_RADIOBUTTON->AutoSize = true;
            this->NO_BILINGUALISM_RADIOBUTTON->Location = System::Drawing::Point(265, 41);
            this->NO_BILINGUALISM_RADIOBUTTON->Name = L"NO_BILINGUALISM_RADIOBUTTON";
            this->NO_BILINGUALISM_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
            this->NO_BILINGUALISM_RADIOBUTTON->TabIndex = 2;
            this->NO_BILINGUALISM_RADIOBUTTON->TabStop = true;
            this->NO_BILINGUALISM_RADIOBUTTON->Text = L"Non";
            this->NO_BILINGUALISM_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // YES_LATE_BILINGUALISM_RADIOBUTTON
            // 
            this->YES_LATE_BILINGUALISM_RADIOBUTTON->AutoSize = true;
            this->YES_LATE_BILINGUALISM_RADIOBUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
            this->YES_LATE_BILINGUALISM_RADIOBUTTON->Location = System::Drawing::Point(151, 41);
            this->YES_LATE_BILINGUALISM_RADIOBUTTON->Name = L"YES_LATE_BILINGUALISM_RADIOBUTTON";
            this->YES_LATE_BILINGUALISM_RADIOBUTTON->Size = System::Drawing::Size(108, 26);
            this->YES_LATE_BILINGUALISM_RADIOBUTTON->TabIndex = 1;
            this->YES_LATE_BILINGUALISM_RADIOBUTTON->TabStop = true;
            this->YES_LATE_BILINGUALISM_RADIOBUTTON->Text = L"Oui Tardif";
            this->YES_LATE_BILINGUALISM_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // YES_EARLY_BILINGUALISM_RADIOBUTTON
            // 
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON->AutoSize = true;
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON->Location = System::Drawing::Point(18, 41);
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON->Name = L"YES_EARLY_BILINGUALISM_RADIOBUTTON";
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON->Size = System::Drawing::Size(127, 26);
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON->TabIndex = 0;
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON->TabStop = true;
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON->Text = L"Oui Précoce";
            this->YES_EARLY_BILINGUALISM_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(812, 419);
            this->CANCEL_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(160, 56);
            this->CANCEL_BUTTON->TabIndex = 46;
            this->CANCEL_BUTTON->Text = L"Annuler";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &LanguageInformation::CANCEL_BUTTON_Click);
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(812, 351);
            this->REGISTER_BUTTON->Margin = System::Windows::Forms::Padding(6);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(160, 56);
            this->REGISTER_BUTTON->TabIndex = 45;
            this->REGISTER_BUTTON->Text = L"Enregistrer";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &LanguageInformation::REGISTER_BUTTON_Click);
            // 
            // LanguageInformation
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(987, 484);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->BILINGUALISM_LABEL);
            this->Controls->Add(this->ARABELEVEL_WRITTEN_COMBOBOX);
            this->Controls->Add(this->ARABELEVEL_WRITTEN_LABEL);
            this->Controls->Add(this->ARABELEVEL_READ_COMBOBOX);
            this->Controls->Add(this->ARABELEVEL_READ_LABEL);
            this->Controls->Add(this->ARABELEVEL_ORAL_LABEL);
            this->Controls->Add(this->FRENCHLEVEL_WRITTEN_LABEL);
            this->Controls->Add(this->FRENCHLEVEL_WRITTEN_COMBOBOX);
            this->Controls->Add(this->FRENCHLEVEL_ORAL_LABEL);
            this->Controls->Add(this->FRENCHLEVEL_READ_LABEL);
            this->Controls->Add(this->FRENCHLEVEL_READ_COMBOBOX);
            this->Controls->Add(this->ARABELEVEL_ORAL_COMBOBOX);
            this->Controls->Add(this->ARABELEVEL_LABEL);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->ALPHABETS_LABEL);
            this->Controls->Add(this->FRENCHLEVEL_ORAL_COMBOBOX);
            this->Controls->Add(this->FRENCHLEVEL_LABEL);
            this->Controls->Add(this->NATIVE_LANGUAGE_LABEL);
            this->Controls->Add(this->NATIVE_LANGUAGE_COMBOBOX);
            this->Name = L"LanguageInformation";
            this->Text = L"LanguageInformation";
            //this->Load += gcnew System::EventHandler(this, &LanguageInformation::LanguageInformation_Load);
            this->ALPHABETS_LABEL->ResumeLayout(false);
            this->ALPHABETS_LABEL->PerformLayout();
            this->BILINGUALISM_LABEL->ResumeLayout(false);
            this->BILINGUALISM_LABEL->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Save Information of the Patient
        completePatientInformationObject();
        LanguageInformation::Close();
    }

    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        LanguageInformation::Close();
    }
};
}
