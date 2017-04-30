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
    /// Summary for SocialSituation
    /// </summary>
    public ref class SocialSituation : public System::Windows::Forms::Form
    {
    public: String^ currentLanguage;
    private: System::Windows::Forms::GroupBox^  SOCIAL_EVALUATION_LABEL;
    private: System::Windows::Forms::GroupBox^  WALKING_TOOLS_LABEL;
    private: System::Windows::Forms::CheckBox^  WHEELCHAIR_WALKING_TOOLS_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  WALKER_WALKING_TOOLS_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  CANE_WALKING_TOOLS_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  OUTSIDE_WALKING_TOOLS_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  HOUSE_WALKING_TOOLS_CHECKBOX;
    private: System::Windows::Forms::RadioButton^  MISSING_WALKING_TOOLS_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  NO_WALKING_TOOLS_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  YES_WALKING_TOOLS_RADIOBUTTON;
    private: System::Windows::Forms::GroupBox^  GOES_OUT_OFTEN_LABEL;
    private: System::Windows::Forms::RadioButton^  YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  MISSING_GOES_OUT_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  NO_GOES_OUT_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  YES_GOES_OUT_ALONE_RADIOBUTTON;
    private: System::Windows::Forms::GroupBox^  LIVES_IN_HOUSE_LABEL;
    private: System::Windows::Forms::RadioButton^  MISSING_LIVES_IN_HOUSE_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  NO_LIVES_IN_HOUSE_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  YES_LIVES_IN_HOUSE_RADIOBUTTON;
    private: System::Windows::Forms::CheckBox^  MEMENTO_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  BALTAZAR_CHECKBOX;
    private: System::Windows::Forms::CheckBox^  LEOPOLD_CHECKBOX;
    private: System::Windows::Forms::Label^  OTHER_PROTOCOLS_LABEL;
    public: Patient *myPatient;
    public:
        SocialSituation(Patient *inputPatient, String^ language, bool treatAsNew)
        {
            currentLanguage = language;
            myPatient = inputPatient;
            InitializeComponent();
            UpdateLanguage_SocialSituationForm(currentLanguage);
            if (!treatAsNew) fillFormWithPreviousPatientData();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~SocialSituation()
        {
            if (components)
            {
                delete components;
            }
        }

    private: void WacomTabletApplication::SocialSituation::UpdateLanguage_SocialSituationForm(String^ language);
    private: void WacomTabletApplication::SocialSituation::UpdateLanguage_ProfessionCombobox_SocialSituationForm(String^ language);
    private: void WacomTabletApplication::SocialSituation::completePatientInformationObject();
    private: void WacomTabletApplication::SocialSituation::fillFormWithPreviousPatientData();


    
    private: System::Windows::Forms::ComboBox^  LAST_PROFESSION_COMBOBOX;
    protected:
    private: System::Windows::Forms::Label^  LAST_PROFESSION_LABEL;
    private: System::Windows::Forms::Label^  PRINCIPAL_PROFESSION_LABEL;
    private: System::Windows::Forms::ComboBox^  PRINCIPAL_PROFESSION_COMBOBOX;


    private: System::Windows::Forms::GroupBox^  CURRENTLY_WORKING_LABEL;
    private: System::Windows::Forms::RadioButton^  NO_CURRENTLY_WORKING_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  YES_CURRENTLY_WORKING_RADIOBUTTON;
    private: System::Windows::Forms::Label^  RETIREMENT_AGE_LABEL;
    private: System::Windows::Forms::NumericUpDown^  RETIREMENT_AGE_COUNTER;
    private: System::Windows::Forms::GroupBox^  CIVILSTATE_LABEL;
    private: System::Windows::Forms::Label^  NUMBEROFCHILDREN_LABEL;
    private: System::Windows::Forms::RadioButton^  SINGLE_RADIOBUTTON;
    private: System::Windows::Forms::NumericUpDown^  NUMBEROFCHILDREN_COUNTER;
    private: System::Windows::Forms::RadioButton^  WIDOW_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  DIVORCED_RADIOBUTTON;
    private: System::Windows::Forms::RadioButton^  MARRIED_RADIOBUTTON;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::ComboBox^  SOCIOEDUCATIVE_COMBOBOX;
    private: System::Windows::Forms::Label^  SOCIOEDUCATIVE_LABEL;
    private: System::Windows::Forms::ComboBox^  WRITING_FREQ_COMBOBOX;
    private: System::Windows::Forms::Label^  WRITING_FREQ_LABEL;
    private: System::Windows::Forms::Button^  REGISTER_BUTTON;
    private: System::Windows::Forms::Button^  CANCEL_BUTTON;



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
            this->LAST_PROFESSION_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->LAST_PROFESSION_LABEL = (gcnew System::Windows::Forms::Label());
            this->PRINCIPAL_PROFESSION_LABEL = (gcnew System::Windows::Forms::Label());
            this->PRINCIPAL_PROFESSION_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
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
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->SOCIOEDUCATIVE_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->SOCIOEDUCATIVE_LABEL = (gcnew System::Windows::Forms::Label());
            this->WRITING_FREQ_COMBOBOX = (gcnew System::Windows::Forms::ComboBox());
            this->WRITING_FREQ_LABEL = (gcnew System::Windows::Forms::Label());
            this->REGISTER_BUTTON = (gcnew System::Windows::Forms::Button());
            this->CANCEL_BUTTON = (gcnew System::Windows::Forms::Button());
            this->SOCIAL_EVALUATION_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->WALKING_TOOLS_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->WALKER_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->CANE_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->OUTSIDE_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->HOUSE_WALKING_TOOLS_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->MISSING_WALKING_TOOLS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->NO_WALKING_TOOLS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->YES_WALKING_TOOLS_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->GOES_OUT_OFTEN_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->MISSING_GOES_OUT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->NO_GOES_OUT_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->YES_GOES_OUT_ALONE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->LIVES_IN_HOUSE_LABEL = (gcnew System::Windows::Forms::GroupBox());
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON = (gcnew System::Windows::Forms::RadioButton());
            this->MEMENTO_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->BALTAZAR_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->LEOPOLD_CHECKBOX = (gcnew System::Windows::Forms::CheckBox());
            this->OTHER_PROTOCOLS_LABEL = (gcnew System::Windows::Forms::Label());
            this->CURRENTLY_WORKING_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RETIREMENT_AGE_COUNTER))->BeginInit();
            this->CIVILSTATE_LABEL->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUMBEROFCHILDREN_COUNTER))->BeginInit();
            this->SOCIAL_EVALUATION_LABEL->SuspendLayout();
            this->WALKING_TOOLS_LABEL->SuspendLayout();
            this->GOES_OUT_OFTEN_LABEL->SuspendLayout();
            this->LIVES_IN_HOUSE_LABEL->SuspendLayout();
            this->SuspendLayout();
            // 
            // LAST_PROFESSION_COMBOBOX
            // 
            this->LAST_PROFESSION_COMBOBOX->FormattingEnabled = true;
            this->LAST_PROFESSION_COMBOBOX->Location = System::Drawing::Point(713, 115);
            this->LAST_PROFESSION_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
            this->LAST_PROFESSION_COMBOBOX->Name = L"LAST_PROFESSION_COMBOBOX";
            this->LAST_PROFESSION_COMBOBOX->Size = System::Drawing::Size(330, 21);
            this->LAST_PROFESSION_COMBOBOX->Sorted = true;
            this->LAST_PROFESSION_COMBOBOX->TabIndex = 7;
            // 
            // LAST_PROFESSION_LABEL
            // 
            this->LAST_PROFESSION_LABEL->AutoSize = true;
            this->LAST_PROFESSION_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->LAST_PROFESSION_LABEL->Location = System::Drawing::Point(709, 85);
            this->LAST_PROFESSION_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->LAST_PROFESSION_LABEL->Name = L"LAST_PROFESSION_LABEL";
            this->LAST_PROFESSION_LABEL->Size = System::Drawing::Size(258, 24);
            this->LAST_PROFESSION_LABEL->TabIndex = 39;
            this->LAST_PROFESSION_LABEL->Text = L"Dernière Profession Exercée ";
            // 
            // PRINCIPAL_PROFESSION_LABEL
            // 
            this->PRINCIPAL_PROFESSION_LABEL->AutoSize = true;
            this->PRINCIPAL_PROFESSION_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->PRINCIPAL_PROFESSION_LABEL->Location = System::Drawing::Point(369, 85);
            this->PRINCIPAL_PROFESSION_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->PRINCIPAL_PROFESSION_LABEL->Name = L"PRINCIPAL_PROFESSION_LABEL";
            this->PRINCIPAL_PROFESSION_LABEL->Size = System::Drawing::Size(186, 24);
            this->PRINCIPAL_PROFESSION_LABEL->TabIndex = 36;
            this->PRINCIPAL_PROFESSION_LABEL->Text = L"Profession Principale";
            // 
            // PRINCIPAL_PROFESSION_COMBOBOX
            // 
            this->PRINCIPAL_PROFESSION_COMBOBOX->FormattingEnabled = true;
            this->PRINCIPAL_PROFESSION_COMBOBOX->Location = System::Drawing::Point(375, 115);
            this->PRINCIPAL_PROFESSION_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
            this->PRINCIPAL_PROFESSION_COMBOBOX->Name = L"PRINCIPAL_PROFESSION_COMBOBOX";
            this->PRINCIPAL_PROFESSION_COMBOBOX->Size = System::Drawing::Size(328, 21);
            this->PRINCIPAL_PROFESSION_COMBOBOX->Sorted = true;
            this->PRINCIPAL_PROFESSION_COMBOBOX->TabIndex = 6;
            // 
            // CURRENTLY_WORKING_LABEL
            // 
            this->CURRENTLY_WORKING_LABEL->Controls->Add(this->NO_CURRENTLY_WORKING_RADIOBUTTON);
            this->CURRENTLY_WORKING_LABEL->Controls->Add(this->YES_CURRENTLY_WORKING_RADIOBUTTON);
            this->CURRENTLY_WORKING_LABEL->Controls->Add(this->RETIREMENT_AGE_LABEL);
            this->CURRENTLY_WORKING_LABEL->Controls->Add(this->RETIREMENT_AGE_COUNTER);
            this->CURRENTLY_WORKING_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->CURRENTLY_WORKING_LABEL->Location = System::Drawing::Point(18, 286);
            this->CURRENTLY_WORKING_LABEL->Margin = System::Windows::Forms::Padding(6);
            this->CURRENTLY_WORKING_LABEL->Name = L"CURRENTLY_WORKING_LABEL";
            this->CURRENTLY_WORKING_LABEL->Padding = System::Windows::Forms::Padding(6);
            this->CURRENTLY_WORKING_LABEL->Size = System::Drawing::Size(328, 108);
            this->CURRENTLY_WORKING_LABEL->TabIndex = 42;
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
            this->NO_CURRENTLY_WORKING_RADIOBUTTON->TabIndex = 11;
            this->NO_CURRENTLY_WORKING_RADIOBUTTON->TabStop = true;
            this->NO_CURRENTLY_WORKING_RADIOBUTTON->Text = L"Non";
            this->NO_CURRENTLY_WORKING_RADIOBUTTON->UseVisualStyleBackColor = true;
            this->NO_CURRENTLY_WORKING_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &SocialSituation::NO_CURRENTLY_WORKING_RADIOBUTTON_CheckedChanged);
            // 
            // YES_CURRENTLY_WORKING_RADIOBUTTON
            // 
            this->YES_CURRENTLY_WORKING_RADIOBUTTON->AutoSize = true;
            this->YES_CURRENTLY_WORKING_RADIOBUTTON->Location = System::Drawing::Point(24, 34);
            this->YES_CURRENTLY_WORKING_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->YES_CURRENTLY_WORKING_RADIOBUTTON->Name = L"YES_CURRENTLY_WORKING_RADIOBUTTON";
            this->YES_CURRENTLY_WORKING_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
            this->YES_CURRENTLY_WORKING_RADIOBUTTON->TabIndex = 10;
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
            this->RETIREMENT_AGE_COUNTER->TabIndex = 12;
            // 
            // CIVILSTATE_LABEL
            // 
            this->CIVILSTATE_LABEL->Controls->Add(this->NUMBEROFCHILDREN_LABEL);
            this->CIVILSTATE_LABEL->Controls->Add(this->SINGLE_RADIOBUTTON);
            this->CIVILSTATE_LABEL->Controls->Add(this->NUMBEROFCHILDREN_COUNTER);
            this->CIVILSTATE_LABEL->Controls->Add(this->WIDOW_RADIOBUTTON);
            this->CIVILSTATE_LABEL->Controls->Add(this->DIVORCED_RADIOBUTTON);
            this->CIVILSTATE_LABEL->Controls->Add(this->MARRIED_RADIOBUTTON);
            this->CIVILSTATE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->CIVILSTATE_LABEL->Location = System::Drawing::Point(18, 85);
            this->CIVILSTATE_LABEL->Name = L"CIVILSTATE_LABEL";
            this->CIVILSTATE_LABEL->Size = System::Drawing::Size(336, 173);
            this->CIVILSTATE_LABEL->TabIndex = 43;
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
            this->SINGLE_RADIOBUTTON->TabIndex = 4;
            this->SINGLE_RADIOBUTTON->TabStop = true;
            this->SINGLE_RADIOBUTTON->Text = L"Célibataire";
            this->SINGLE_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // NUMBEROFCHILDREN_COUNTER
            // 
            this->NUMBEROFCHILDREN_COUNTER->Location = System::Drawing::Point(213, 131);
            this->NUMBEROFCHILDREN_COUNTER->Name = L"NUMBEROFCHILDREN_COUNTER";
            this->NUMBEROFCHILDREN_COUNTER->Size = System::Drawing::Size(83, 29);
            this->NUMBEROFCHILDREN_COUNTER->TabIndex = 5;
            // 
            // WIDOW_RADIOBUTTON
            // 
            this->WIDOW_RADIOBUTTON->AutoSize = true;
            this->WIDOW_RADIOBUTTON->Location = System::Drawing::Point(16, 71);
            this->WIDOW_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->WIDOW_RADIOBUTTON->Name = L"WIDOW_RADIOBUTTON";
            this->WIDOW_RADIOBUTTON->Size = System::Drawing::Size(67, 28);
            this->WIDOW_RADIOBUTTON->TabIndex = 3;
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
            this->DIVORCED_RADIOBUTTON->TabIndex = 2;
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
            this->MARRIED_RADIOBUTTON->TabIndex = 1;
            this->MARRIED_RADIOBUTTON->TabStop = true;
            this->MARRIED_RADIOBUTTON->Text = L"Marié(e)";
            this->MARRIED_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label2->Location = System::Drawing::Point(12, 24);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(201, 31);
            this->label2->TabIndex = 45;
            this->label2->Text = L"Social Situation";
            // 
            // SOCIOEDUCATIVE_COMBOBOX
            // 
            this->SOCIOEDUCATIVE_COMBOBOX->FormattingEnabled = true;
            this->SOCIOEDUCATIVE_COMBOBOX->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"NC1: Illettré", L"NC2: Lis, Écris et Compte",
                    L"NC3: Études Primaires", L"NC4: CAP o BEP (Brevet)", L"NC5: Classe Terminale ou Niveau Ouvrier/Artisan", L"NC6: Baccalauréat",
                    L"NC7: Diplôme Universitaire"
            });
            this->SOCIOEDUCATIVE_COMBOBOX->Location = System::Drawing::Point(373, 180);
            this->SOCIOEDUCATIVE_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
            this->SOCIOEDUCATIVE_COMBOBOX->Name = L"SOCIOEDUCATIVE_COMBOBOX";
            this->SOCIOEDUCATIVE_COMBOBOX->Size = System::Drawing::Size(330, 21);
            this->SOCIOEDUCATIVE_COMBOBOX->TabIndex = 8;
            // 
            // SOCIOEDUCATIVE_LABEL
            // 
            this->SOCIOEDUCATIVE_LABEL->AutoSize = true;
            this->SOCIOEDUCATIVE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->SOCIOEDUCATIVE_LABEL->Location = System::Drawing::Point(369, 150);
            this->SOCIOEDUCATIVE_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->SOCIOEDUCATIVE_LABEL->Name = L"SOCIOEDUCATIVE_LABEL";
            this->SOCIOEDUCATIVE_LABEL->Size = System::Drawing::Size(200, 24);
            this->SOCIOEDUCATIVE_LABEL->TabIndex = 47;
            this->SOCIOEDUCATIVE_LABEL->Text = L"Niveau Socio-Éducatif ";
            // 
            // WRITING_FREQ_COMBOBOX
            // 
            this->WRITING_FREQ_COMBOBOX->FormattingEnabled = true;
            this->WRITING_FREQ_COMBOBOX->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Moins de 1 fois par semaine", L"1-2 fois par semaine",
                    L"3-5 fois par semaine", L"6-7 fois par semaine", L"Tous les jours, Plusieurs fois par jour"
            });
            this->WRITING_FREQ_COMBOBOX->Location = System::Drawing::Point(713, 180);
            this->WRITING_FREQ_COMBOBOX->Margin = System::Windows::Forms::Padding(6);
            this->WRITING_FREQ_COMBOBOX->Name = L"WRITING_FREQ_COMBOBOX";
            this->WRITING_FREQ_COMBOBOX->Size = System::Drawing::Size(329, 21);
            this->WRITING_FREQ_COMBOBOX->TabIndex = 9;
            // 
            // WRITING_FREQ_LABEL
            // 
            this->WRITING_FREQ_LABEL->AutoSize = true;
            this->WRITING_FREQ_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->WRITING_FREQ_LABEL->Location = System::Drawing::Point(711, 150);
            this->WRITING_FREQ_LABEL->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->WRITING_FREQ_LABEL->Name = L"WRITING_FREQ_LABEL";
            this->WRITING_FREQ_LABEL->Size = System::Drawing::Size(136, 24);
            this->WRITING_FREQ_LABEL->TabIndex = 49;
            this->WRITING_FREQ_LABEL->Text = L"Le patient écrit:";
            // 
            // REGISTER_BUTTON
            // 
            this->REGISTER_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->REGISTER_BUTTON->Location = System::Drawing::Point(831, 494);
            this->REGISTER_BUTTON->Name = L"REGISTER_BUTTON";
            this->REGISTER_BUTTON->Size = System::Drawing::Size(92, 39);
            this->REGISTER_BUTTON->TabIndex = 31;
            this->REGISTER_BUTTON->Text = L"Register";
            this->REGISTER_BUTTON->UseVisualStyleBackColor = true;
            this->REGISTER_BUTTON->Click += gcnew System::EventHandler(this, &SocialSituation::REGISTER_BUTTON_Click);
            // 
            // CANCEL_BUTTON
            // 
            this->CANCEL_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->CANCEL_BUTTON->Location = System::Drawing::Point(947, 493);
            this->CANCEL_BUTTON->Name = L"CANCEL_BUTTON";
            this->CANCEL_BUTTON->Size = System::Drawing::Size(98, 40);
            this->CANCEL_BUTTON->TabIndex = 32;
            this->CANCEL_BUTTON->Text = L"Cancel";
            this->CANCEL_BUTTON->UseVisualStyleBackColor = true;
            this->CANCEL_BUTTON->Click += gcnew System::EventHandler(this, &SocialSituation::CANCEL_BUTTON_Click);
            // 
            // SOCIAL_EVALUATION_LABEL
            // 
            this->SOCIAL_EVALUATION_LABEL->Controls->Add(this->WALKING_TOOLS_LABEL);
            this->SOCIAL_EVALUATION_LABEL->Controls->Add(this->GOES_OUT_OFTEN_LABEL);
            this->SOCIAL_EVALUATION_LABEL->Controls->Add(this->LIVES_IN_HOUSE_LABEL);
            this->SOCIAL_EVALUATION_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->SOCIAL_EVALUATION_LABEL->Location = System::Drawing::Point(373, 218);
            this->SOCIAL_EVALUATION_LABEL->Name = L"SOCIAL_EVALUATION_LABEL";
            this->SOCIAL_EVALUATION_LABEL->Size = System::Drawing::Size(703, 225);
            this->SOCIAL_EVALUATION_LABEL->TabIndex = 39;
            this->SOCIAL_EVALUATION_LABEL->TabStop = false;
            this->SOCIAL_EVALUATION_LABEL->Text = L"Évaluation Sociale";
            // 
            // WALKING_TOOLS_LABEL
            // 
            this->WALKING_TOOLS_LABEL->Controls->Add(this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX);
            this->WALKING_TOOLS_LABEL->Controls->Add(this->WALKER_WALKING_TOOLS_CHECKBOX);
            this->WALKING_TOOLS_LABEL->Controls->Add(this->CANE_WALKING_TOOLS_CHECKBOX);
            this->WALKING_TOOLS_LABEL->Controls->Add(this->OUTSIDE_WALKING_TOOLS_CHECKBOX);
            this->WALKING_TOOLS_LABEL->Controls->Add(this->HOUSE_WALKING_TOOLS_CHECKBOX);
            this->WALKING_TOOLS_LABEL->Controls->Add(this->MISSING_WALKING_TOOLS_RADIOBUTTON);
            this->WALKING_TOOLS_LABEL->Controls->Add(this->NO_WALKING_TOOLS_RADIOBUTTON);
            this->WALKING_TOOLS_LABEL->Controls->Add(this->YES_WALKING_TOOLS_RADIOBUTTON);
            this->WALKING_TOOLS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->WALKING_TOOLS_LABEL->Location = System::Drawing::Point(344, 37);
            this->WALKING_TOOLS_LABEL->Name = L"WALKING_TOOLS_LABEL";
            this->WALKING_TOOLS_LABEL->Size = System::Drawing::Size(342, 178);
            this->WALKING_TOOLS_LABEL->TabIndex = 8;
            this->WALKING_TOOLS_LABEL->TabStop = false;
            this->WALKING_TOOLS_LABEL->Text = L"Utilisation d\'aides à la marche";
            // 
            // WHEELCHAIR_WALKING_TOOLS_CHECKBOX
            // 
            this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->AutoSize = true;
            this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Enabled = false;
            this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(171, 140);
            this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Name = L"WHEELCHAIR_WALKING_TOOLS_CHECKBOX";
            this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(165, 28);
            this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->TabIndex = 27;
            this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Text = L"Fauteuil Roulant";
            this->WHEELCHAIR_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // WALKER_WALKING_TOOLS_CHECKBOX
            // 
            this->WALKER_WALKING_TOOLS_CHECKBOX->AutoSize = true;
            this->WALKER_WALKING_TOOLS_CHECKBOX->Enabled = false;
            this->WALKER_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(171, 106);
            this->WALKER_WALKING_TOOLS_CHECKBOX->Name = L"WALKER_WALKING_TOOLS_CHECKBOX";
            this->WALKER_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(147, 28);
            this->WALKER_WALKING_TOOLS_CHECKBOX->TabIndex = 26;
            this->WALKER_WALKING_TOOLS_CHECKBOX->Text = L"Déambulateur";
            this->WALKER_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // CANE_WALKING_TOOLS_CHECKBOX
            // 
            this->CANE_WALKING_TOOLS_CHECKBOX->AutoSize = true;
            this->CANE_WALKING_TOOLS_CHECKBOX->Enabled = false;
            this->CANE_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(171, 72);
            this->CANE_WALKING_TOOLS_CHECKBOX->Name = L"CANE_WALKING_TOOLS_CHECKBOX";
            this->CANE_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(85, 28);
            this->CANE_WALKING_TOOLS_CHECKBOX->TabIndex = 24;
            this->CANE_WALKING_TOOLS_CHECKBOX->Text = L"Canne";
            this->CANE_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // OUTSIDE_WALKING_TOOLS_CHECKBOX
            // 
            this->OUTSIDE_WALKING_TOOLS_CHECKBOX->AutoSize = true;
            this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Enabled = false;
            this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(28, 106);
            this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Name = L"OUTSIDE_WALKING_TOOLS_CHECKBOX";
            this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(131, 28);
            this->OUTSIDE_WALKING_TOOLS_CHECKBOX->TabIndex = 25;
            this->OUTSIDE_WALKING_TOOLS_CHECKBOX->Text = L"À l\'Extérieur";
            this->OUTSIDE_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // HOUSE_WALKING_TOOLS_CHECKBOX
            // 
            this->HOUSE_WALKING_TOOLS_CHECKBOX->AutoSize = true;
            this->HOUSE_WALKING_TOOLS_CHECKBOX->Enabled = false;
            this->HOUSE_WALKING_TOOLS_CHECKBOX->Location = System::Drawing::Point(28, 72);
            this->HOUSE_WALKING_TOOLS_CHECKBOX->Name = L"HOUSE_WALKING_TOOLS_CHECKBOX";
            this->HOUSE_WALKING_TOOLS_CHECKBOX->Size = System::Drawing::Size(120, 28);
            this->HOUSE_WALKING_TOOLS_CHECKBOX->TabIndex = 23;
            this->HOUSE_WALKING_TOOLS_CHECKBOX->Text = L"À Domicile";
            this->HOUSE_WALKING_TOOLS_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // MISSING_WALKING_TOOLS_RADIOBUTTON
            // 
            this->MISSING_WALKING_TOOLS_RADIOBUTTON->AutoSize = true;
            this->MISSING_WALKING_TOOLS_RADIOBUTTON->Location = System::Drawing::Point(175, 31);
            this->MISSING_WALKING_TOOLS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->MISSING_WALKING_TOOLS_RADIOBUTTON->Name = L"MISSING_WALKING_TOOLS_RADIOBUTTON";
            this->MISSING_WALKING_TOOLS_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
            this->MISSING_WALKING_TOOLS_RADIOBUTTON->TabIndex = 22;
            this->MISSING_WALKING_TOOLS_RADIOBUTTON->TabStop = true;
            this->MISSING_WALKING_TOOLS_RADIOBUTTON->Text = L"Manquante";
            this->MISSING_WALKING_TOOLS_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // NO_WALKING_TOOLS_RADIOBUTTON
            // 
            this->NO_WALKING_TOOLS_RADIOBUTTON->AutoSize = true;
            this->NO_WALKING_TOOLS_RADIOBUTTON->Location = System::Drawing::Point(99, 31);
            this->NO_WALKING_TOOLS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->NO_WALKING_TOOLS_RADIOBUTTON->Name = L"NO_WALKING_TOOLS_RADIOBUTTON";
            this->NO_WALKING_TOOLS_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
            this->NO_WALKING_TOOLS_RADIOBUTTON->TabIndex = 21;
            this->NO_WALKING_TOOLS_RADIOBUTTON->TabStop = true;
            this->NO_WALKING_TOOLS_RADIOBUTTON->Text = L"Non";
            this->NO_WALKING_TOOLS_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // YES_WALKING_TOOLS_RADIOBUTTON
            // 
            this->YES_WALKING_TOOLS_RADIOBUTTON->AutoSize = true;
            this->YES_WALKING_TOOLS_RADIOBUTTON->Location = System::Drawing::Point(29, 31);
            this->YES_WALKING_TOOLS_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->YES_WALKING_TOOLS_RADIOBUTTON->Name = L"YES_WALKING_TOOLS_RADIOBUTTON";
            this->YES_WALKING_TOOLS_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
            this->YES_WALKING_TOOLS_RADIOBUTTON->TabIndex = 20;
            this->YES_WALKING_TOOLS_RADIOBUTTON->TabStop = true;
            this->YES_WALKING_TOOLS_RADIOBUTTON->Text = L"Oui";
            this->YES_WALKING_TOOLS_RADIOBUTTON->UseVisualStyleBackColor = true;
            this->YES_WALKING_TOOLS_RADIOBUTTON->CheckedChanged += gcnew System::EventHandler(this, &SocialSituation::YES_WALKING_TOOLS_RADIOBUTTON_CheckedChanged);
            // 
            // GOES_OUT_OFTEN_LABEL
            // 
            this->GOES_OUT_OFTEN_LABEL->Controls->Add(this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON);
            this->GOES_OUT_OFTEN_LABEL->Controls->Add(this->MISSING_GOES_OUT_RADIOBUTTON);
            this->GOES_OUT_OFTEN_LABEL->Controls->Add(this->NO_GOES_OUT_RADIOBUTTON);
            this->GOES_OUT_OFTEN_LABEL->Controls->Add(this->YES_GOES_OUT_ALONE_RADIOBUTTON);
            this->GOES_OUT_OFTEN_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->GOES_OUT_OFTEN_LABEL->Location = System::Drawing::Point(20, 115);
            this->GOES_OUT_OFTEN_LABEL->Name = L"GOES_OUT_OFTEN_LABEL";
            this->GOES_OUT_OFTEN_LABEL->Size = System::Drawing::Size(318, 100);
            this->GOES_OUT_OFTEN_LABEL->TabIndex = 4;
            this->GOES_OUT_OFTEN_LABEL->TabStop = false;
            this->GOES_OUT_OFTEN_LABEL->Text = L"Sort Régulièrement du Domicile ";
            // 
            // YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON
            // 
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->AutoSize = true;
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Location = System::Drawing::Point(127, 31);
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Name = L"YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON";
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Size = System::Drawing::Size(182, 28);
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->TabIndex = 17;
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->TabStop = true;
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->Text = L"Oui, Accompagné";
            this->YES_GOES_OUT_ACCOMPANIED_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // MISSING_GOES_OUT_RADIOBUTTON
            // 
            this->MISSING_GOES_OUT_RADIOBUTTON->AutoSize = true;
            this->MISSING_GOES_OUT_RADIOBUTTON->Location = System::Drawing::Point(127, 62);
            this->MISSING_GOES_OUT_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->MISSING_GOES_OUT_RADIOBUTTON->Name = L"MISSING_GOES_OUT_RADIOBUTTON";
            this->MISSING_GOES_OUT_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
            this->MISSING_GOES_OUT_RADIOBUTTON->TabIndex = 19;
            this->MISSING_GOES_OUT_RADIOBUTTON->TabStop = true;
            this->MISSING_GOES_OUT_RADIOBUTTON->Text = L"Manquante";
            this->MISSING_GOES_OUT_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // NO_GOES_OUT_RADIOBUTTON
            // 
            this->NO_GOES_OUT_RADIOBUTTON->AutoSize = true;
            this->NO_GOES_OUT_RADIOBUTTON->Location = System::Drawing::Point(9, 62);
            this->NO_GOES_OUT_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->NO_GOES_OUT_RADIOBUTTON->Name = L"NO_GOES_OUT_RADIOBUTTON";
            this->NO_GOES_OUT_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
            this->NO_GOES_OUT_RADIOBUTTON->TabIndex = 18;
            this->NO_GOES_OUT_RADIOBUTTON->TabStop = true;
            this->NO_GOES_OUT_RADIOBUTTON->Text = L"Non";
            this->NO_GOES_OUT_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // YES_GOES_OUT_ALONE_RADIOBUTTON
            // 
            this->YES_GOES_OUT_ALONE_RADIOBUTTON->AutoSize = true;
            this->YES_GOES_OUT_ALONE_RADIOBUTTON->Location = System::Drawing::Point(9, 31);
            this->YES_GOES_OUT_ALONE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->YES_GOES_OUT_ALONE_RADIOBUTTON->Name = L"YES_GOES_OUT_ALONE_RADIOBUTTON";
            this->YES_GOES_OUT_ALONE_RADIOBUTTON->Size = System::Drawing::Size(106, 28);
            this->YES_GOES_OUT_ALONE_RADIOBUTTON->TabIndex = 16;
            this->YES_GOES_OUT_ALONE_RADIOBUTTON->TabStop = true;
            this->YES_GOES_OUT_ALONE_RADIOBUTTON->Text = L"Oui, Seul";
            this->YES_GOES_OUT_ALONE_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // LIVES_IN_HOUSE_LABEL
            // 
            this->LIVES_IN_HOUSE_LABEL->Controls->Add(this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON);
            this->LIVES_IN_HOUSE_LABEL->Controls->Add(this->NO_LIVES_IN_HOUSE_RADIOBUTTON);
            this->LIVES_IN_HOUSE_LABEL->Controls->Add(this->YES_LIVES_IN_HOUSE_RADIOBUTTON);
            this->LIVES_IN_HOUSE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->LIVES_IN_HOUSE_LABEL->Location = System::Drawing::Point(20, 37);
            this->LIVES_IN_HOUSE_LABEL->Name = L"LIVES_IN_HOUSE_LABEL";
            this->LIVES_IN_HOUSE_LABEL->Size = System::Drawing::Size(318, 68);
            this->LIVES_IN_HOUSE_LABEL->TabIndex = 1;
            this->LIVES_IN_HOUSE_LABEL->TabStop = false;
            this->LIVES_IN_HOUSE_LABEL->Text = L"Vit à Domicile";
            // 
            // MISSING_LIVES_IN_HOUSE_RADIOBUTTON
            // 
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->AutoSize = true;
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Location = System::Drawing::Point(175, 31);
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Name = L"MISSING_LIVES_IN_HOUSE_RADIOBUTTON";
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Size = System::Drawing::Size(123, 28);
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->TabIndex = 15;
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->TabStop = true;
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->Text = L"Manquante";
            this->MISSING_LIVES_IN_HOUSE_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // NO_LIVES_IN_HOUSE_RADIOBUTTON
            // 
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON->AutoSize = true;
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Location = System::Drawing::Point(99, 31);
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Name = L"NO_LIVES_IN_HOUSE_RADIOBUTTON";
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Size = System::Drawing::Size(64, 28);
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON->TabIndex = 14;
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON->TabStop = true;
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON->Text = L"Non";
            this->NO_LIVES_IN_HOUSE_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // YES_LIVES_IN_HOUSE_RADIOBUTTON
            // 
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON->AutoSize = true;
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Location = System::Drawing::Point(29, 31);
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Margin = System::Windows::Forms::Padding(6);
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Name = L"YES_LIVES_IN_HOUSE_RADIOBUTTON";
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Size = System::Drawing::Size(58, 28);
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON->TabIndex = 13;
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON->TabStop = true;
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON->Text = L"Oui";
            this->YES_LIVES_IN_HOUSE_RADIOBUTTON->UseVisualStyleBackColor = true;
            // 
            // MEMENTO_CHECKBOX
            // 
            this->MEMENTO_CHECKBOX->AutoSize = true;
            this->MEMENTO_CHECKBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->MEMENTO_CHECKBOX->Location = System::Drawing::Point(317, 478);
            this->MEMENTO_CHECKBOX->Name = L"MEMENTO_CHECKBOX";
            this->MEMENTO_CHECKBOX->Size = System::Drawing::Size(128, 28);
            this->MEMENTO_CHECKBOX->TabIndex = 30;
            this->MEMENTO_CHECKBOX->Text = L"MEMENTO";
            this->MEMENTO_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // BALTAZAR_CHECKBOX
            // 
            this->BALTAZAR_CHECKBOX->AutoSize = true;
            this->BALTAZAR_CHECKBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->BALTAZAR_CHECKBOX->Location = System::Drawing::Point(160, 478);
            this->BALTAZAR_CHECKBOX->Name = L"BALTAZAR_CHECKBOX";
            this->BALTAZAR_CHECKBOX->Size = System::Drawing::Size(127, 28);
            this->BALTAZAR_CHECKBOX->TabIndex = 29;
            this->BALTAZAR_CHECKBOX->Text = L"BALTAZAR";
            this->BALTAZAR_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // LEOPOLD_CHECKBOX
            // 
            this->LEOPOLD_CHECKBOX->AutoSize = true;
            this->LEOPOLD_CHECKBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->LEOPOLD_CHECKBOX->Location = System::Drawing::Point(21, 478);
            this->LEOPOLD_CHECKBOX->Name = L"LEOPOLD_CHECKBOX";
            this->LEOPOLD_CHECKBOX->Size = System::Drawing::Size(117, 28);
            this->LEOPOLD_CHECKBOX->TabIndex = 28;
            this->LEOPOLD_CHECKBOX->Text = L"LEOPOLD";
            this->LEOPOLD_CHECKBOX->UseVisualStyleBackColor = true;
            // 
            // OTHER_PROTOCOLS_LABEL
            // 
            this->OTHER_PROTOCOLS_LABEL->AutoSize = true;
            this->OTHER_PROTOCOLS_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->OTHER_PROTOCOLS_LABEL->Location = System::Drawing::Point(17, 440);
            this->OTHER_PROTOCOLS_LABEL->Name = L"OTHER_PROTOCOLS_LABEL";
            this->OTHER_PROTOCOLS_LABEL->Size = System::Drawing::Size(295, 24);
            this->OTHER_PROTOCOLS_LABEL->TabIndex = 52;
            this->OTHER_PROTOCOLS_LABEL->Text = L"Participation à d\'autres protocoles:";
            // 
            // SocialSituation
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1123, 557);
            this->Controls->Add(this->MEMENTO_CHECKBOX);
            this->Controls->Add(this->BALTAZAR_CHECKBOX);
            this->Controls->Add(this->LEOPOLD_CHECKBOX);
            this->Controls->Add(this->OTHER_PROTOCOLS_LABEL);
            this->Controls->Add(this->SOCIAL_EVALUATION_LABEL);
            this->Controls->Add(this->CANCEL_BUTTON);
            this->Controls->Add(this->REGISTER_BUTTON);
            this->Controls->Add(this->WRITING_FREQ_COMBOBOX);
            this->Controls->Add(this->WRITING_FREQ_LABEL);
            this->Controls->Add(this->SOCIOEDUCATIVE_COMBOBOX);
            this->Controls->Add(this->SOCIOEDUCATIVE_LABEL);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->CIVILSTATE_LABEL);
            this->Controls->Add(this->CURRENTLY_WORKING_LABEL);
            this->Controls->Add(this->LAST_PROFESSION_COMBOBOX);
            this->Controls->Add(this->LAST_PROFESSION_LABEL);
            this->Controls->Add(this->PRINCIPAL_PROFESSION_LABEL);
            this->Controls->Add(this->PRINCIPAL_PROFESSION_COMBOBOX);
            this->Name = L"SocialSituation";
            this->Text = L"SocialSituation";
            this->CURRENTLY_WORKING_LABEL->ResumeLayout(false);
            this->CURRENTLY_WORKING_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RETIREMENT_AGE_COUNTER))->EndInit();
            this->CIVILSTATE_LABEL->ResumeLayout(false);
            this->CIVILSTATE_LABEL->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUMBEROFCHILDREN_COUNTER))->EndInit();
            this->SOCIAL_EVALUATION_LABEL->ResumeLayout(false);
            this->WALKING_TOOLS_LABEL->ResumeLayout(false);
            this->WALKING_TOOLS_LABEL->PerformLayout();
            this->GOES_OUT_OFTEN_LABEL->ResumeLayout(false);
            this->GOES_OUT_OFTEN_LABEL->PerformLayout();
            this->LIVES_IN_HOUSE_LABEL->ResumeLayout(false);
            this->LIVES_IN_HOUSE_LABEL->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion
    private: System::Void REGISTER_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Save Information of the Patient
        completePatientInformationObject();
        SocialSituation::Close();
    }
    
    private: System::Void CANCEL_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
        //Exit Without Doing Anything
        SocialSituation::Close();
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

    private: System::Void YES_WALKING_TOOLS_RADIOBUTTON_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
        if (YES_WALKING_TOOLS_RADIOBUTTON->Checked) {
            //Enable the checkboxes for more detail
            HOUSE_WALKING_TOOLS_CHECKBOX->Enabled = true;
            OUTSIDE_WALKING_TOOLS_CHECKBOX->Enabled = true;
            CANE_WALKING_TOOLS_CHECKBOX->Enabled = true;
            WALKER_WALKING_TOOLS_CHECKBOX->Enabled = true;
            WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Enabled = true;
        } else {
            //Disable and empty the checkboxes if option yes is not selected
            HOUSE_WALKING_TOOLS_CHECKBOX->Enabled = false;
            OUTSIDE_WALKING_TOOLS_CHECKBOX->Enabled = false;
            CANE_WALKING_TOOLS_CHECKBOX->Enabled = false;
            WALKER_WALKING_TOOLS_CHECKBOX->Enabled = false;
            WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Enabled = false;
            HOUSE_WALKING_TOOLS_CHECKBOX->Checked = false;
            OUTSIDE_WALKING_TOOLS_CHECKBOX->Checked = false;
            CANE_WALKING_TOOLS_CHECKBOX->Checked = false;
            WALKER_WALKING_TOOLS_CHECKBOX->Checked = false;
            WHEELCHAIR_WALKING_TOOLS_CHECKBOX->Checked = false;
        }
    }
};
}
