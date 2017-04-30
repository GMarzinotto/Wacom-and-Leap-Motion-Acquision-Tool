#pragma once

#include <string>
#include <msclr\marshal.h>
#include "TestManager.h"
#include "Patient.h"

namespace WacomTabletApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;


	

	/// <summary>
	/// Summary for AlreadyOneTest
	/// </summary>
	public ref class AlreadyOneTest : public System::Windows::Forms::Form
	{
	public:
		String^ patientName;
		String^ currentLanguage;
		String^ previousTestFolderPath;
		String^ personPath;
		SYSTEMTIME *testTime;
		TestTypes testType;
		Patient *myPatient;

	public:
		AlreadyOneTest(Patient *myPat, String^ language, String^ patientN ,SYSTEMTIME *testT , TestTypes test)
		{
			testType = test;
			patientName = patientN;
			testTime = testT;
			currentLanguage = language;
			myPatient = myPat;

			InitializeComponent();
			switch (testType) {
			case TestTypes::Broca_Arab:   previousTestFolderPath = String::Concat(L"Patients Records\\HW-ARAB\\", patientN, "\\TestDay", System::Convert::ToString((*testTime).wDay), "-", System::Convert::ToString((*testTime).wMonth), "-", System::Convert::ToString((*testTime).wYear)); break;
			case TestTypes::Broca_French: previousTestFolderPath = String::Concat(L"Patients Records\\HW-FRENCH\\", patientN, "\\TestDay", System::Convert::ToString((*testTime).wDay), "-", System::Convert::ToString((*testTime).wMonth), "-", System::Convert::ToString((*testTime).wYear)); break;
			case TestTypes::LeapTools: previousTestFolderPath = String::Concat(L"Patients Records\\LEAP-TOOLS\\", patientN, "\\TestDay", System::Convert::ToString((*testTime).wDay), "-", System::Convert::ToString((*testTime).wMonth), "-", System::Convert::ToString((*testTime).wYear)); break;
			case TestTypes::LeapHand: previousTestFolderPath = String::Concat(L"Patients Records\\LEAP-HAND\\", patientN, "\\TestDay", System::Convert::ToString((*testTime).wDay), "-", System::Convert::ToString((*testTime).wMonth), "-", System::Convert::ToString((*testTime).wYear)); break;
			case TestTypes::Signatures:previousTestFolderPath = String::Concat(L"Patients Records\\SIGNATURES\\", patientN, "\\TestDay", System::Convert::ToString((*testTime).wDay), "-", System::Convert::ToString((*testTime).wMonth), "-", System::Convert::ToString((*testTime).wYear)); break;
			default: break;
			}
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AlreadyOneTest()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: BOOL WacomTabletApplication::AlreadyOneTest::DirectoryExists(LPCTSTR szPath);
	public: int  WacomTabletApplication::AlreadyOneTest::getLastTestIDXFolder();
	private: LONG WacomTabletApplication::AlreadyOneTest::DeleteDirectoryAndAllSubfolders(LPCWSTR wzDirectory);
	private: void WacomTabletApplication::AlreadyOneTest::DeletePreviousRecording();

	private: System::Windows::Forms::Button^  DELETE_BUTTON;
	private: System::Windows::Forms::Button^  CONTINUE_BUTTON;
	private: System::Windows::Forms::Button^  NEW_BUTTON;
	private: System::Windows::Forms::Label^  LABEL_1;
	private: System::Windows::Forms::Label^  LABEL_2;



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
			this->DELETE_BUTTON = (gcnew System::Windows::Forms::Button());
			this->CONTINUE_BUTTON = (gcnew System::Windows::Forms::Button());
			this->NEW_BUTTON = (gcnew System::Windows::Forms::Button());
			this->LABEL_1 = (gcnew System::Windows::Forms::Label());
			this->LABEL_2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// DELETE_BUTTON
			// 
			this->DELETE_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->DELETE_BUTTON->Location = System::Drawing::Point(30, 167);
			this->DELETE_BUTTON->Name = L"DELETE_BUTTON";
			this->DELETE_BUTTON->Size = System::Drawing::Size(163, 104);
			this->DELETE_BUTTON->TabIndex = 1;
			this->DELETE_BUTTON->Text = L"Supprimer l\'Enregistrement Précédent";
			this->DELETE_BUTTON->UseVisualStyleBackColor = true;
			this->DELETE_BUTTON->Click += gcnew System::EventHandler(this, &AlreadyOneTest::DELETE_BUTTON_Click);
			// 
			// CONTINUE_BUTTON
			// 
			this->CONTINUE_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->CONTINUE_BUTTON->Location = System::Drawing::Point(234, 167);
			this->CONTINUE_BUTTON->Name = L"CONTINUE_BUTTON";
			this->CONTINUE_BUTTON->Size = System::Drawing::Size(163, 104);
			this->CONTINUE_BUTTON->TabIndex = 2;
			this->CONTINUE_BUTTON->Text = L"Continuer le Dernier Enregistrement";
			this->CONTINUE_BUTTON->UseVisualStyleBackColor = true;
			this->CONTINUE_BUTTON->Click += gcnew System::EventHandler(this, &AlreadyOneTest::CONTINUE_BUTTON_Click);
			// 
			// NEW_BUTTON
			// 
			this->NEW_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->NEW_BUTTON->Location = System::Drawing::Point(435, 167);
			this->NEW_BUTTON->Name = L"NEW_BUTTON";
			this->NEW_BUTTON->Size = System::Drawing::Size(163, 104);
			this->NEW_BUTTON->TabIndex = 3;
			this->NEW_BUTTON->Text = L"Créer un Nouvel Enregistrement";
			this->NEW_BUTTON->UseVisualStyleBackColor = true;
			this->NEW_BUTTON->Click += gcnew System::EventHandler(this, &AlreadyOneTest::NEW_BUTTON_Click);
			// 
			// LABEL_1
			// 
			this->LABEL_1->AutoSize = true;
			this->LABEL_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LABEL_1->Location = System::Drawing::Point(26, 45);
			this->LABEL_1->Name = L"LABEL_1";
			this->LABEL_1->Size = System::Drawing::Size(561, 24);
			this->LABEL_1->TabIndex = 4;
			this->LABEL_1->Text = L"Un enregistrement a été effectué pour cette personne aujourd\'hui.";
			// 
			// LABEL_2
			// 
			this->LABEL_2->AutoSize = true;
			this->LABEL_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LABEL_2->Location = System::Drawing::Point(26, 69);
			this->LABEL_2->Name = L"LABEL_2";
			this->LABEL_2->Size = System::Drawing::Size(125, 24);
			this->LABEL_2->TabIndex = 4;
			this->LABEL_2->Text = L"Voulez-vous :";
			// 
			// AlreadyOneTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 311);
			this->Controls->Add(this->LABEL_2);
			this->Controls->Add(this->LABEL_1);
			this->Controls->Add(this->NEW_BUTTON);
			this->Controls->Add(this->CONTINUE_BUTTON);
			this->Controls->Add(this->DELETE_BUTTON);
			this->Name = L"AlreadyOneTest";
			this->Text = L"AlreadyOneTest";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Remove Previous Recording
	private: System::Void DELETE_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {

		int lastFolderIDX;

		if (MessageBox::Show("You're about to delete today's previous recording. Are you sure?",
			"Delete Previous Recording", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		
			lastFolderIDX = getLastTestIDXFolder();
			DeletePreviousRecording();

			AlreadyOneTest::Hide();

			TestManager ^form;
			form = gcnew TestManager(currentLanguage, patientName, testTime, testType, lastFolderIDX);
			form->ShowDialog();

			AlreadyOneTest::Close();
		}
		
	}

	//Continue on Last Recording
	private: System::Void CONTINUE_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {

		msclr::interop::marshal_context context;

		int lastFolderIDX = getLastTestIDXFolder();
		if (lastFolderIDX>1) previousTestFolderPath = previousTestFolderPath + " (" + System::Convert::ToString(lastFolderIDX) + ")";
		
		
		AlreadyOneTest::Hide();

		TestManager ^form;
		form = gcnew TestManager(currentLanguage, patientName, testTime, testType, lastFolderIDX);
		form->ShowDialog();

		AlreadyOneTest::Close();
	}

	//Create New Recording
	private: System::Void NEW_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {

		msclr::interop::marshal_context context;

		int nextFolderIDX = getLastTestIDXFolder() + 1;
		LPCTSTR next_path = context.marshal_as<const TCHAR*>(String::Concat(previousTestFolderPath, L" (", System::Convert::ToString(nextFolderIDX), L")"));

		if (CreateDirectory(next_path, NULL)) {
			AlreadyOneTest::Hide();
			TestManager ^form;
			form = gcnew TestManager(currentLanguage, patientName, testTime, testType, nextFolderIDX);
			form->ShowDialog();
		}else{
			//TODO: Give Error Message!!!!
		}
		AlreadyOneTest::Close();
		
	}

	


};
}