#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <msclr\marshal.h>

#using<system.dll>

#include "Dependencies/queryNodes.h"
#include "WacomRecorder.h"
#include "Patient.h"
#include "LMRecorder.h"

#define SIGNATURES_PER_EXERCISE 25


namespace WacomTabletApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::IO;
	using namespace std;

	private enum class BrocaExercises { Task0A, Task0B, Task1, Task2, Task3, Task4, Task5, Task6, Task7, Task8, Task9, Task10, Task11, Task12, None};
	private enum class LeapExercises {Digit0, Digit1, Digit2, Digit3, Digit4, Digit5, Digit6, Digit7, Digit8, Digit9, None};
	private enum class SignatureExercises { Task1, Task2, Task3, None};
	public enum class TestTypes { Broca_French, Broca_Arab, Signatures, LeapTools, LeapHand };


	/// <summary>
	/// Summary for TestManager
	/// </summary>
	public ref class TestManager : public System::Windows::Forms::Form
	{
		BrocaExercises CurrentTest_Broca;
		LeapExercises CurrentTest_Leap;
		SignatureExercises CurrentTest_Signatures;
		SampleListener *myLeapListener;
		Controller *myController;
		TestTypes testType;

		int leapCounter=0;
		int signatureCounter=0;
		int trialNumber;


		String^ patientName;
		String^ currentLanguage;
		//String^ previousTestFolderPath;
		String^ personPath;
		SYSTEMTIME *testTime;
		Patient *myPatient;


	public:
		TestManager(String^ language, String^ patientN, SYSTEMTIME *testT, TestTypes type, int trial)
		{
			InitializeComponent();
			
			testType = type;
			patientName = patientN;
			currentLanguage = language;
			testTime = testT;
			trialNumber = trial;
			myController = new Controller();
			myLeapListener = nullptr;

			prepareFunctions();
			refreshInterface();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TestManager()
		{
			if (components)
			{
				delete components;
			}
		}


	public: void WacomTabletApplication::TestManager::moveInterfaceNextExercise();
	public: void WacomTabletApplication::TestManager::moveInterfaceNextExercise_Leap();
	public: void WacomTabletApplication::TestManager::moveInterfaceNextExercise_Broca();
	public: void WacomTabletApplication::TestManager::moveInterfaceNextExercise_Signatures();
	
	public: void WacomTabletApplication::TestManager::moveInterfacePreviousExercise();
	public: void WacomTabletApplication::TestManager::moveInterfacePreviousExercise_Leap();
	public: void WacomTabletApplication::TestManager::moveInterfacePreviousExercise_Broca();
	public: void WacomTabletApplication::TestManager::moveInterfacePreviousExercise_Signatures();

	public: void WacomTabletApplication::TestManager::refreshInterface();
	public: void WacomTabletApplication::TestManager::refreshInterface_Broca();
	public: void WacomTabletApplication::TestManager::refreshInterface_Leap();
	public: void WacomTabletApplication::TestManager::refreshInterface_Signatures();

	public: void WacomTabletApplication::TestManager::startRecordingExercise();
	public: void WacomTabletApplication::TestManager::startRecordingExercise_Broca();
	public: void WacomTabletApplication::TestManager::startRecordingExercise_Leap();
	public: void WacomTabletApplication::TestManager::startRecordingExercise_Signatures();

	public: void WacomTabletApplication::TestManager::stopRecordingExercise();
	public: void WacomTabletApplication::TestManager::stopRecordingExercise_Broca();
	public: void WacomTabletApplication::TestManager::stopRecordingExercise_Leap();
	public: void WacomTabletApplication::TestManager::stopRecordingExercise_Signatures();

	public: String^ WacomTabletApplication::TestManager::getPathToDestinationFile();
	public: String^ WacomTabletApplication::TestManager::getPathToDestinationFile_Broca();
	public: String^ WacomTabletApplication::TestManager::getPathToDestinationFile_Leap();
	public: String^ WacomTabletApplication::TestManager::getPathToDestinationFile_Signatures();

	public: void WacomTabletApplication::TestManager::createRecordResultsFile();
	public: void WacomTabletApplication::TestManager::createRecordResultsFile_Broca();
	public: void WacomTabletApplication::TestManager::createRecordResultsFile_Leap();
	public: void WacomTabletApplication::TestManager::createRecordResultsFile_Signatures();

	public: void WacomTabletApplication::TestManager::launchWacomRecording(int RecordTime);
	public: void WacomTabletApplication::TestManager::killWacomRecording();
	public: void WacomTabletApplication::TestManager::killLeapRecording();
	public: void WacomTabletApplication::TestManager::waitingWacomRecorder();


	public: String^ WacomTabletApplication::TestManager::getPathToDestinationPatientInfo();
	public: BOOL WacomTabletApplication::TestManager::fileExists(const std::string& name);

	public: void WacomTabletApplication::TestManager::runAndWaitVisualizer();
	public: void WacomTabletApplication::TestManager::prepareFunctions();


	private: System::Windows::Forms::Button^  START_RECORDING_BUTTON;
	private: System::Windows::Forms::Button^  STOP_RECORDING_BUTTON;
	private: System::Windows::Forms::PictureBox^  INSTRUCTIONS_PICTUREBOX;
	private: System::Windows::Forms::Label^  INSTRUCTIONS_TITLE_LABEL;
	private: System::Windows::Forms::Label^  INSTRUCTIONS_DETAIL_LABEL;
	protected:

	protected:
	private: System::Windows::Forms::Button^  NEXT_EXERCISE_BUTTON;
	private: System::Windows::Forms::Button^  PREVIOUS_EXERCISE_BUTTON;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  END_BUTTON;




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
			this->STOP_RECORDING_BUTTON = (gcnew System::Windows::Forms::Button());
			this->START_RECORDING_BUTTON = (gcnew System::Windows::Forms::Button());
			this->INSTRUCTIONS_PICTUREBOX = (gcnew System::Windows::Forms::PictureBox());
			this->INSTRUCTIONS_TITLE_LABEL = (gcnew System::Windows::Forms::Label());
			this->INSTRUCTIONS_DETAIL_LABEL = (gcnew System::Windows::Forms::Label());
			this->NEXT_EXERCISE_BUTTON = (gcnew System::Windows::Forms::Button());
			this->PREVIOUS_EXERCISE_BUTTON = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->END_BUTTON = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->INSTRUCTIONS_PICTUREBOX))->BeginInit();
			this->SuspendLayout();
			// 
			// STOP_RECORDING_BUTTON
			// 
			this->STOP_RECORDING_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->STOP_RECORDING_BUTTON->Location = System::Drawing::Point(630, 350);
			this->STOP_RECORDING_BUTTON->Name = L"STOP_RECORDING_BUTTON";
			this->STOP_RECORDING_BUTTON->Size = System::Drawing::Size(198, 67);
			this->STOP_RECORDING_BUTTON->TabIndex = 3;
			this->STOP_RECORDING_BUTTON->Text = L"Arrêter l\'Enregristrement";
			this->STOP_RECORDING_BUTTON->UseVisualStyleBackColor = true;
			this->STOP_RECORDING_BUTTON->Click += gcnew System::EventHandler(this, &TestManager::STOP_RECORDING_BUTTON_Click);
			// 
			// START_RECORDING_BUTTON
			// 
			this->START_RECORDING_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->START_RECORDING_BUTTON->Location = System::Drawing::Point(630, 249);
			this->START_RECORDING_BUTTON->Name = L"START_RECORDING_BUTTON";
			this->START_RECORDING_BUTTON->Size = System::Drawing::Size(198, 66);
			this->START_RECORDING_BUTTON->TabIndex = 2;
			this->START_RECORDING_BUTTON->Text = L"Commencer l\'Enregistrement";
			this->START_RECORDING_BUTTON->UseVisualStyleBackColor = true;
			this->START_RECORDING_BUTTON->Click += gcnew System::EventHandler(this, &TestManager::START_RECORDING_BUTTON_Click);
			// 
			// INSTRUCTIONS_PICTUREBOX
			// 
			this->INSTRUCTIONS_PICTUREBOX->ImageLocation = L"Images\\SheetSprite1.gif";
			this->INSTRUCTIONS_PICTUREBOX->Location = System::Drawing::Point(44, 249);
			this->INSTRUCTIONS_PICTUREBOX->Name = L"INSTRUCTIONS_PICTUREBOX";
			this->INSTRUCTIONS_PICTUREBOX->Size = System::Drawing::Size(557, 384);
			this->INSTRUCTIONS_PICTUREBOX->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->INSTRUCTIONS_PICTUREBOX->TabIndex = 4;
			this->INSTRUCTIONS_PICTUREBOX->TabStop = false;
			// 
			// INSTRUCTIONS_TITLE_LABEL
			// 
			this->INSTRUCTIONS_TITLE_LABEL->AutoSize = true;
			this->INSTRUCTIONS_TITLE_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->INSTRUCTIONS_TITLE_LABEL->Location = System::Drawing::Point(39, 128);
			this->INSTRUCTIONS_TITLE_LABEL->Name = L"INSTRUCTIONS_TITLE_LABEL";
			this->INSTRUCTIONS_TITLE_LABEL->Size = System::Drawing::Size(331, 26);
			this->INSTRUCTIONS_TITLE_LABEL->TabIndex = 5;
			this->INSTRUCTIONS_TITLE_LABEL->Text = L"Exercice #1: Texte à Recopier";
			// 
			// INSTRUCTIONS_DETAIL_LABEL
			// 
			this->INSTRUCTIONS_DETAIL_LABEL->AllowDrop = true;
			this->INSTRUCTIONS_DETAIL_LABEL->AutoSize = true;
			this->INSTRUCTIONS_DETAIL_LABEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->INSTRUCTIONS_DETAIL_LABEL->Location = System::Drawing::Point(40, 154);
			this->INSTRUCTIONS_DETAIL_LABEL->MaximumSize = System::Drawing::Size(700, 0);
			this->INSTRUCTIONS_DETAIL_LABEL->MinimumSize = System::Drawing::Size(200, 20);
			this->INSTRUCTIONS_DETAIL_LABEL->Name = L"INSTRUCTIONS_DETAIL_LABEL";
			this->INSTRUCTIONS_DETAIL_LABEL->Size = System::Drawing::Size(683, 24);
			this->INSTRUCTIONS_DETAIL_LABEL->TabIndex = 6;
			this->INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit récopier le texte proposé  sur la partie haute à gauche de la feu"
				L"ille";
			// 
			// NEXT_EXERCISE_BUTTON
			// 
			this->NEXT_EXERCISE_BUTTON->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->NEXT_EXERCISE_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->NEXT_EXERCISE_BUTTON->Location = System::Drawing::Point(297, 72);
			this->NEXT_EXERCISE_BUTTON->Name = L"NEXT_EXERCISE_BUTTON";
			this->NEXT_EXERCISE_BUTTON->Size = System::Drawing::Size(223, 40);
			this->NEXT_EXERCISE_BUTTON->TabIndex = 7;
			this->NEXT_EXERCISE_BUTTON->Text = L"Exercice Suivant >>";
			this->NEXT_EXERCISE_BUTTON->UseVisualStyleBackColor = true;
			this->NEXT_EXERCISE_BUTTON->Click += gcnew System::EventHandler(this, &TestManager::NEXT_EXERCISE_BUTTON_Click);
			// 
			// PREVIOUS_EXERCISE_BUTTON
			// 
			this->PREVIOUS_EXERCISE_BUTTON->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->PREVIOUS_EXERCISE_BUTTON->Enabled = false;
			this->PREVIOUS_EXERCISE_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->PREVIOUS_EXERCISE_BUTTON->Location = System::Drawing::Point(44, 70);
			this->PREVIOUS_EXERCISE_BUTTON->Name = L"PREVIOUS_EXERCISE_BUTTON";
			this->PREVIOUS_EXERCISE_BUTTON->Size = System::Drawing::Size(223, 42);
			this->PREVIOUS_EXERCISE_BUTTON->TabIndex = 8;
			this->PREVIOUS_EXERCISE_BUTTON->Text = L"<< Exercice Précédent";
			this->PREVIOUS_EXERCISE_BUTTON->UseVisualStyleBackColor = true;
			this->PREVIOUS_EXERCISE_BUTTON->Click += gcnew System::EventHandler(this, &TestManager::PREVIOUS_EXERCISE_BUTTON_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Underline));
			this->label3->Location = System::Drawing::Point(168, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 26);
			this->label3->TabIndex = 9;
			// 
			// END_BUTTON
			// 
			this->END_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->END_BUTTON->Location = System::Drawing::Point(596, 74);
			this->END_BUTTON->Name = L"END_BUTTON";
			this->END_BUTTON->Size = System::Drawing::Size(75, 40);
			this->END_BUTTON->TabIndex = 10;
			this->END_BUTTON->Text = L"Finir";
			this->END_BUTTON->UseVisualStyleBackColor = true;
			this->END_BUTTON->Click += gcnew System::EventHandler(this, &TestManager::END_BUTTON_Click);
			// 
			// TestManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 645);
			this->Controls->Add(this->END_BUTTON);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PREVIOUS_EXERCISE_BUTTON);
			this->Controls->Add(this->NEXT_EXERCISE_BUTTON);
			this->Controls->Add(this->INSTRUCTIONS_DETAIL_LABEL);
			this->Controls->Add(this->INSTRUCTIONS_TITLE_LABEL);
			this->Controls->Add(this->INSTRUCTIONS_PICTUREBOX);
			this->Controls->Add(this->STOP_RECORDING_BUTTON);
			this->Controls->Add(this->START_RECORDING_BUTTON);
			this->Name = L"TestManager";
			this->Text = L"TestManager";
			this->Load += gcnew System::EventHandler(this, &TestManager::TestManager_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->INSTRUCTIONS_PICTUREBOX))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TestManager_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void PREVIOUS_EXERCISE_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		moveInterfacePreviousExercise();
		refreshInterface();
	}

	private: System::Void NEXT_EXERCISE_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		moveInterfaceNextExercise();
		refreshInterface();
	}

	private: System::Void START_RECORDING_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		startRecordingExercise();
	}

	private: System::Void STOP_RECORDING_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		stopRecordingExercise();
	}

	private: System::Void END_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		TestManager::Close();
	}
private: System::Void TestManager_Load_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
