#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <msclr\marshal.h>
#include "Dependencies/queryNodes.h"
#include "NewPatient.h"
#include "AlreadyOneTest.h"
#include "Patient.h"
#include "TestManager.h"

namespace WacomTabletApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for PatientsManager
	/// </summary>
	public ref class PatientManager : public System::Windows::Forms::Form
	{

		
	public: String^ currentLanguage;

	public:
		PatientManager(String^ language)
		{
			currentLanguage = language;
			InitializeComponent();
			UpdateLanguage_PatientManagerForm(currentLanguage);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PatientManager()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: void WacomTabletApplication::PatientManager::UpdateLanguage_PatientManagerForm(String^ language);
	private: void WacomTabletApplication::PatientManager::DeletePatient();
	private: void WacomTabletApplication::PatientManager::BeginTest(TestTypes t);
	private: LONG WacomTabletApplication::PatientManager::DeleteDirectoryAndAllSubfolders(LPCWSTR wzDirectory);
	private: void WacomTabletApplication::PatientManager::removePatientFromList(String^ removePatient);

	private: System::Windows::Forms::Button^  NEW_EXERCISE_BROCA_FRENCH;
	private: System::Windows::Forms::Button^  EXERCISE_HISTORY;
	private: System::Windows::Forms::Button^  UPDATE_INFO_BUTTON;
	private: System::Windows::Forms::Button^  NEW_EXERCISE_SIGNATURE;
	private: System::Windows::Forms::Button^  NEW_EXERCISE_BROCA_ARAB;
	private: System::Windows::Forms::Button^  LEAP_MOTION_TOOLS_BUTTON;
	private: System::Windows::Forms::Button^  LEAP_MOTION_HANDS_BUTTON;
	private: System::Windows::Forms::Button^  DELETE_PATIENT_BUTTON;
	private: System::Windows::Forms::Label^  INCOMPLETE_INFO_LABEL;
	private: System::Windows::Forms::Button^  NEW_PATIENT_BUTTON;
	private: System::Windows::Forms::Label^  LABEL_SELECT_PATIENT;
	private: System::Windows::Forms::ComboBox^  COMBOBOX_SELECT_PATIENT;
	

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
		void InitializeComponent()
		{
			this->NEW_EXERCISE_BROCA_FRENCH = (gcnew System::Windows::Forms::Button());
			this->EXERCISE_HISTORY = (gcnew System::Windows::Forms::Button());
			this->NEW_PATIENT_BUTTON = (gcnew System::Windows::Forms::Button());
			this->LABEL_SELECT_PATIENT = (gcnew System::Windows::Forms::Label());
			this->COMBOBOX_SELECT_PATIENT = (gcnew System::Windows::Forms::ComboBox());
			this->UPDATE_INFO_BUTTON = (gcnew System::Windows::Forms::Button());
			this->NEW_EXERCISE_SIGNATURE = (gcnew System::Windows::Forms::Button());
			this->INCOMPLETE_INFO_LABEL = (gcnew System::Windows::Forms::Label());
			this->NEW_EXERCISE_BROCA_ARAB = (gcnew System::Windows::Forms::Button());
			this->LEAP_MOTION_TOOLS_BUTTON = (gcnew System::Windows::Forms::Button());
			this->LEAP_MOTION_HANDS_BUTTON = (gcnew System::Windows::Forms::Button());
			this->DELETE_PATIENT_BUTTON = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NEW_EXERCISE_BROCA_FRENCH
			// 
			this->NEW_EXERCISE_BROCA_FRENCH->Enabled = false;
			this->NEW_EXERCISE_BROCA_FRENCH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NEW_EXERCISE_BROCA_FRENCH->Location = System::Drawing::Point(514, 115);
			this->NEW_EXERCISE_BROCA_FRENCH->Name = L"NEW_EXERCISE_BROCA_FRENCH";
			this->NEW_EXERCISE_BROCA_FRENCH->Size = System::Drawing::Size(187, 66);
			this->NEW_EXERCISE_BROCA_FRENCH->TabIndex = 0;
			this->NEW_EXERCISE_BROCA_FRENCH->Text = L"Nouvel Exercice Broca (Français)";
			this->NEW_EXERCISE_BROCA_FRENCH->UseVisualStyleBackColor = true;
			this->NEW_EXERCISE_BROCA_FRENCH->Click += gcnew System::EventHandler(this, &PatientManager::NEW_EXERCISE_BROCA_FRENCH_Click);
			// 
			// EXERCISE_HISTORY
			// 
			this->EXERCISE_HISTORY->Enabled = false;
			this->EXERCISE_HISTORY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EXERCISE_HISTORY->Location = System::Drawing::Point(616, 385);
			this->EXERCISE_HISTORY->Name = L"EXERCISE_HISTORY";
			this->EXERCISE_HISTORY->Size = System::Drawing::Size(187, 66);
			this->EXERCISE_HISTORY->TabIndex = 1;
			this->EXERCISE_HISTORY->Text = L"Historique du Patient";
			this->EXERCISE_HISTORY->UseVisualStyleBackColor = true;
			this->EXERCISE_HISTORY->Click += gcnew System::EventHandler(this, &PatientManager::EXERCISE_HISTORY_Click);
			// 
			// NEW_PATIENT_BUTTON
			// 
			this->NEW_PATIENT_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NEW_PATIENT_BUTTON->Location = System::Drawing::Point(409, 27);
			this->NEW_PATIENT_BUTTON->Name = L"NEW_PATIENT_BUTTON";
			this->NEW_PATIENT_BUTTON->Size = System::Drawing::Size(187, 66);
			this->NEW_PATIENT_BUTTON->TabIndex = 3;
			this->NEW_PATIENT_BUTTON->Text = L"Nouveau Patient";
			this->NEW_PATIENT_BUTTON->UseVisualStyleBackColor = true;
			this->NEW_PATIENT_BUTTON->Click += gcnew System::EventHandler(this, &PatientManager::NEW_PATIENT_BUTTON_Click);
			// 
			// LABEL_SELECT_PATIENT
			// 
			this->LABEL_SELECT_PATIENT->AutoSize = true;
			this->LABEL_SELECT_PATIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LABEL_SELECT_PATIENT->Location = System::Drawing::Point(39, 90);
			this->LABEL_SELECT_PATIENT->Name = L"LABEL_SELECT_PATIENT";
			this->LABEL_SELECT_PATIENT->Size = System::Drawing::Size(204, 24);
			this->LABEL_SELECT_PATIENT->TabIndex = 5;
			this->LABEL_SELECT_PATIENT->Text = L"Sélectionner un Patient";
			// 
			// COMBOBOX_SELECT_PATIENT
			// 
			this->COMBOBOX_SELECT_PATIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->COMBOBOX_SELECT_PATIENT->FormattingEnabled = true;
			this->COMBOBOX_SELECT_PATIENT->Location = System::Drawing::Point(43, 117);
			this->COMBOBOX_SELECT_PATIENT->Name = L"COMBOBOX_SELECT_PATIENT";
			this->COMBOBOX_SELECT_PATIENT->Size = System::Drawing::Size(283, 32);
			this->COMBOBOX_SELECT_PATIENT->Sorted = true;
			this->COMBOBOX_SELECT_PATIENT->TabIndex = 13;
			this->COMBOBOX_SELECT_PATIENT->SelectedIndexChanged += gcnew System::EventHandler(this, &PatientManager::COMBOBOX_SELECT_PATIENT_SelectedIndexChanged);
			this->COMBOBOX_SELECT_PATIENT->Click += gcnew System::EventHandler(this, &PatientManager::COMBOBOX_SELECT_PATIENT_Click);
			// 
			// UPDATE_INFO_BUTTON
			// 
			this->UPDATE_INFO_BUTTON->Enabled = false;
			this->UPDATE_INFO_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UPDATE_INFO_BUTTON->Location = System::Drawing::Point(616, 27);
			this->UPDATE_INFO_BUTTON->Name = L"UPDATE_INFO_BUTTON";
			this->UPDATE_INFO_BUTTON->Size = System::Drawing::Size(187, 66);
			this->UPDATE_INFO_BUTTON->TabIndex = 14;
			this->UPDATE_INFO_BUTTON->Text = L"Mettre à Jour les Informations";
			this->UPDATE_INFO_BUTTON->UseVisualStyleBackColor = true;
			this->UPDATE_INFO_BUTTON->Click += gcnew System::EventHandler(this, &PatientManager::UPDATE_INFO_BUTTON_Click);
			// 
			// NEW_EXERCISE_SIGNATURE
			// 
			this->NEW_EXERCISE_SIGNATURE->Enabled = false;
			this->NEW_EXERCISE_SIGNATURE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NEW_EXERCISE_SIGNATURE->Location = System::Drawing::Point(616, 294);
			this->NEW_EXERCISE_SIGNATURE->Name = L"NEW_EXERCISE_SIGNATURE";
			this->NEW_EXERCISE_SIGNATURE->Size = System::Drawing::Size(187, 66);
			this->NEW_EXERCISE_SIGNATURE->TabIndex = 15;
			this->NEW_EXERCISE_SIGNATURE->Text = L"Nouvel Exercice Signatures";
			this->NEW_EXERCISE_SIGNATURE->UseVisualStyleBackColor = true;
			this->NEW_EXERCISE_SIGNATURE->Click += gcnew System::EventHandler(this, &PatientManager::NEW_EXERCISE_SIGNATURE_Click);
			// 
			// INCOMPLETE_INFO_LABEL
			// 
			this->INCOMPLETE_INFO_LABEL->AutoSize = true;
			this->INCOMPLETE_INFO_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->INCOMPLETE_INFO_LABEL->ForeColor = System::Drawing::Color::Red;
			this->INCOMPLETE_INFO_LABEL->Location = System::Drawing::Point(39, 48);
			this->INCOMPLETE_INFO_LABEL->Name = L"INCOMPLETE_INFO_LABEL";
			this->INCOMPLETE_INFO_LABEL->Size = System::Drawing::Size(0, 24);
			this->INCOMPLETE_INFO_LABEL->TabIndex = 16;
			// 
			// NEW_EXERCISE_BROCA_ARAB
			// 
			this->NEW_EXERCISE_BROCA_ARAB->Enabled = false;
			this->NEW_EXERCISE_BROCA_ARAB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NEW_EXERCISE_BROCA_ARAB->Location = System::Drawing::Point(721, 115);
			this->NEW_EXERCISE_BROCA_ARAB->Name = L"NEW_EXERCISE_BROCA_ARAB";
			this->NEW_EXERCISE_BROCA_ARAB->Size = System::Drawing::Size(187, 66);
			this->NEW_EXERCISE_BROCA_ARAB->TabIndex = 17;
			this->NEW_EXERCISE_BROCA_ARAB->Text = L"Nouvel Exercice Broca (Arabe)";
			this->NEW_EXERCISE_BROCA_ARAB->UseVisualStyleBackColor = true;
			this->NEW_EXERCISE_BROCA_ARAB->Click += gcnew System::EventHandler(this, &PatientManager::NEW_EXERCISE_BROCA_ARAB_Click);
			// 
			// LEAP_MOTION_TOOLS_BUTTON
			// 
			this->LEAP_MOTION_TOOLS_BUTTON->Enabled = false;
			this->LEAP_MOTION_TOOLS_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LEAP_MOTION_TOOLS_BUTTON->Location = System::Drawing::Point(514, 205);
			this->LEAP_MOTION_TOOLS_BUTTON->Name = L"LEAP_MOTION_TOOLS_BUTTON";
			this->LEAP_MOTION_TOOLS_BUTTON->Size = System::Drawing::Size(187, 66);
			this->LEAP_MOTION_TOOLS_BUTTON->TabIndex = 18;
			this->LEAP_MOTION_TOOLS_BUTTON->Text = L"Leap Motion Tools";
			this->LEAP_MOTION_TOOLS_BUTTON->UseVisualStyleBackColor = true;
			this->LEAP_MOTION_TOOLS_BUTTON->Click += gcnew System::EventHandler(this, &PatientManager::LEAP_MOTION_TOOLS_BUTTON_Click);
			// 
			// LEAP_MOTION_HANDS_BUTTON
			// 
			this->LEAP_MOTION_HANDS_BUTTON->Enabled = false;
			this->LEAP_MOTION_HANDS_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LEAP_MOTION_HANDS_BUTTON->Location = System::Drawing::Point(721, 205);
			this->LEAP_MOTION_HANDS_BUTTON->Name = L"LEAP_MOTION_HANDS_BUTTON";
			this->LEAP_MOTION_HANDS_BUTTON->Size = System::Drawing::Size(187, 66);
			this->LEAP_MOTION_HANDS_BUTTON->TabIndex = 19;
			this->LEAP_MOTION_HANDS_BUTTON->Text = L"Leap Motion Hands";
			this->LEAP_MOTION_HANDS_BUTTON->UseVisualStyleBackColor = true;
			this->LEAP_MOTION_HANDS_BUTTON->Click += gcnew System::EventHandler(this, &PatientManager::LEAP_MOTION_HANDS_BUTTON_Click);
			// 
			// DELETE_PATIENT_BUTTON
			// 
			this->DELETE_PATIENT_BUTTON->Enabled = false;
			this->DELETE_PATIENT_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DELETE_PATIENT_BUTTON->Location = System::Drawing::Point(822, 27);
			this->DELETE_PATIENT_BUTTON->Name = L"DELETE_PATIENT_BUTTON";
			this->DELETE_PATIENT_BUTTON->Size = System::Drawing::Size(187, 66);
			this->DELETE_PATIENT_BUTTON->TabIndex = 20;
			this->DELETE_PATIENT_BUTTON->Text = L"Supprimer Patient";
			this->DELETE_PATIENT_BUTTON->UseVisualStyleBackColor = true;
			this->DELETE_PATIENT_BUTTON->Click += gcnew System::EventHandler(this, &PatientManager::DELETE_PATIENT_BUTTON_Click);
			// 
			// PatientManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1021, 478);
			this->Controls->Add(this->DELETE_PATIENT_BUTTON);
			this->Controls->Add(this->LEAP_MOTION_HANDS_BUTTON);
			this->Controls->Add(this->LEAP_MOTION_TOOLS_BUTTON);
			this->Controls->Add(this->NEW_EXERCISE_BROCA_ARAB);
			this->Controls->Add(this->INCOMPLETE_INFO_LABEL);
			this->Controls->Add(this->NEW_EXERCISE_SIGNATURE);
			this->Controls->Add(this->UPDATE_INFO_BUTTON);
			this->Controls->Add(this->COMBOBOX_SELECT_PATIENT);
			this->Controls->Add(this->LABEL_SELECT_PATIENT);
			this->Controls->Add(this->NEW_PATIENT_BUTTON);
			this->Controls->Add(this->EXERCISE_HISTORY);
			this->Controls->Add(this->NEW_EXERCISE_BROCA_FRENCH);
			this->Name = L"PatientManager";
			this->Text = L"Patients Manager";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void COMBOBOX_SELECT_PATIENT_Click(System::Object^  sender, System::EventArgs^  e) {
		
		ifstream File("Patients Records\\PatientList.txt");
		string line;
		if (File) {
			COMBOBOX_SELECT_PATIENT->Items->Clear();
			while (File) {
				if (std::getline(File, line)) {
					COMBOBOX_SELECT_PATIENT->Items->Add(gcnew String(line.c_str()));
				}
			}
		}
		File.close();
	}

	//Add New Patient
	private: System::Void NEW_PATIENT_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		Patient *myPatient = new Patient();
		NewPatient ^form = gcnew NewPatient(myPatient, currentLanguage, true);
		form->ShowDialog();
	}

	private: System::Void NEW_EXERCISE_BROCA_FRENCH_Click(System::Object^  sender, System::EventArgs^  e) {
		BeginTest(TestTypes::Broca_French);
	}
	
	//Patient Selection
	private: System::Void COMBOBOX_SELECT_PATIENT_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//If a patient is selected enable the buttons for Exercise History and Modification
		if (COMBOBOX_SELECT_PATIENT->Text->Length > 1) {
			UPDATE_INFO_BUTTON->Enabled = true;
			NEW_EXERCISE_SIGNATURE->Enabled = true;
			NEW_EXERCISE_BROCA_FRENCH->Enabled = true;
			NEW_EXERCISE_BROCA_ARAB->Enabled = true;
			LEAP_MOTION_HANDS_BUTTON->Enabled = true;
			LEAP_MOTION_TOOLS_BUTTON->Enabled = true;
			EXERCISE_HISTORY->Enabled = true;
			DELETE_PATIENT_BUTTON->Enabled = true;
		}
		else {
			UPDATE_INFO_BUTTON->Enabled = false;
			NEW_EXERCISE_SIGNATURE->Enabled = false;
			NEW_EXERCISE_BROCA_FRENCH->Enabled = false;
			NEW_EXERCISE_BROCA_ARAB->Enabled = false;
			LEAP_MOTION_HANDS_BUTTON->Enabled = false;
			LEAP_MOTION_TOOLS_BUTTON->Enabled = false;
			EXERCISE_HISTORY->Enabled = false;
			DELETE_PATIENT_BUTTON->Enabled = false;
		}
	}


	private: System::Void UPDATE_INFO_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		Patient *myPatient = new Patient();
		//TODO: Complete the Patient information from a file (serialization?)
		NewPatient ^form = gcnew NewPatient(myPatient, currentLanguage, false);
		form->ShowDialog();
	}

	private: System::Void NEW_EXERCISE_SIGNATURE_Click(System::Object^  sender, System::EventArgs^  e) {
		BeginTest(TestTypes::Signatures);
	}

	private: System::Void EXERCISE_HISTORY_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}


	private: System::Void NEW_EXERCISE_BROCA_ARAB_Click(System::Object^  sender, System::EventArgs^  e) {
		BeginTest(TestTypes::Broca_Arab);
	}

	private: System::Void DELETE_PATIENT_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Deleting a Patient also deletes all of his/her recordings. Are you sure?",
			"Delete a Patient", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)	DeletePatient();
	}

	private: System::Void LEAP_MOTION_TOOLS_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		BeginTest(TestTypes::LeapTools);
	}

	private: System::Void LEAP_MOTION_HANDS_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		BeginTest(TestTypes::LeapHand);
	}

};
}
