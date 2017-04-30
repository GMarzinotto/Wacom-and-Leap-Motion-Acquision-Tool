#pragma once
#include <string>
#include <msclr\marshal.h>
#include "PatientManager.h"
#include "Dependencies/queryNodes.h"

namespace WacomTabletApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for LogIn
	/// </summary>
	public ref class LogIn : public System::Windows::Forms::Form
	{
		String^ currentLanguage;
	public:
		LogIn(void)
		{
			InitializeComponent();
			currentLanguage = "French";
			UpdateLanguage_LogInForm("French");
			checkFileSystem();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	

	protected:
	private: System::Windows::Forms::Button^  LANG_ESP_BUTTON;
	private: System::Windows::Forms::Button^  LANG_FRA_BUTTON;
	private: System::Windows::Forms::Button^  LANG_ENG_BUTTON;
	private: System::Windows::Forms::Button^  LANG_ARB_BUTTON;
	private: System::Windows::Forms::TextBox^  USERNAME_TEXTBOX;
	private: System::Windows::Forms::TextBox^  PASSWORD_TEXTBOX;
	private: System::Windows::Forms::Label^  LABEL_USERNAME;
	private: System::Windows::Forms::Label^  LABEL_PASSWORD;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  LOG_IN_BUTTON;



	private: void UpdateLanguage_LogInForm(String^ language);
	private: bool checkUsernamePassword();
	private: void IncorrectPasswordMessage(String^ language);
	private: void WacomTabletApplication::LogIn::checkFileSystem();
	private: BOOL WacomTabletApplication::LogIn::DirectoryExists(LPCTSTR szPath);
	
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LogIn::typeid));
			this->LANG_ESP_BUTTON = (gcnew System::Windows::Forms::Button());
			this->LANG_FRA_BUTTON = (gcnew System::Windows::Forms::Button());
			this->LANG_ENG_BUTTON = (gcnew System::Windows::Forms::Button());
			this->LANG_ARB_BUTTON = (gcnew System::Windows::Forms::Button());
			this->USERNAME_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->PASSWORD_TEXTBOX = (gcnew System::Windows::Forms::TextBox());
			this->LABEL_USERNAME = (gcnew System::Windows::Forms::Label());
			this->LABEL_PASSWORD = (gcnew System::Windows::Forms::Label());
			this->LOG_IN_BUTTON = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LANG_ESP_BUTTON
			// 
			this->LANG_ESP_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LANG_ESP_BUTTON->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LANG_ESP_BUTTON.Image")));
			this->LANG_ESP_BUTTON->Location = System::Drawing::Point(337, 25);
			this->LANG_ESP_BUTTON->Name = L"LANG_ESP_BUTTON";
			this->LANG_ESP_BUTTON->Size = System::Drawing::Size(80, 80);
			this->LANG_ESP_BUTTON->TabIndex = 0;
			this->LANG_ESP_BUTTON->Text = L"ESP";
			this->LANG_ESP_BUTTON->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->LANG_ESP_BUTTON->UseVisualStyleBackColor = true;
			this->LANG_ESP_BUTTON->Click += gcnew System::EventHandler(this, &LogIn::LANG_ESP_BUTTON_Click);
			// 
			// LANG_FRA_BUTTON
			// 
			this->LANG_FRA_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->LANG_FRA_BUTTON->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LANG_FRA_BUTTON.Image")));
			this->LANG_FRA_BUTTON->Location = System::Drawing::Point(122, 25);
			this->LANG_FRA_BUTTON->Name = L"LANG_FRA_BUTTON";
			this->LANG_FRA_BUTTON->Size = System::Drawing::Size(80, 80);
			this->LANG_FRA_BUTTON->TabIndex = 1;
			this->LANG_FRA_BUTTON->Text = L"FRA";
			this->LANG_FRA_BUTTON->UseVisualStyleBackColor = true;
			this->LANG_FRA_BUTTON->Click += gcnew System::EventHandler(this, &LogIn::LANG_FRA_BUTTON_Click);
			// 
			// LANG_ENG_BUTTON
			// 
			this->LANG_ENG_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LANG_ENG_BUTTON->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LANG_ENG_BUTTON.Image")));
			this->LANG_ENG_BUTTON->Location = System::Drawing::Point(228, 25);
			this->LANG_ENG_BUTTON->Name = L"LANG_ENG_BUTTON";
			this->LANG_ENG_BUTTON->Size = System::Drawing::Size(80, 80);
			this->LANG_ENG_BUTTON->TabIndex = 2;
			this->LANG_ENG_BUTTON->Text = L"ENG";
			this->LANG_ENG_BUTTON->UseVisualStyleBackColor = true;
			this->LANG_ENG_BUTTON->Click += gcnew System::EventHandler(this, &LogIn::LANG_ENG_BUTTON_Click);
			// 
			// LANG_ARB_BUTTON
			// 
			this->LANG_ARB_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LANG_ARB_BUTTON->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LANG_ARB_BUTTON.Image")));
			this->LANG_ARB_BUTTON->Location = System::Drawing::Point(447, 25);
			this->LANG_ARB_BUTTON->Name = L"LANG_ARB_BUTTON";
			this->LANG_ARB_BUTTON->Size = System::Drawing::Size(80, 80);
			this->LANG_ARB_BUTTON->TabIndex = 3;
			this->LANG_ARB_BUTTON->Text = L"ARB";
			this->LANG_ARB_BUTTON->UseVisualStyleBackColor = true;
			this->LANG_ARB_BUTTON->Click += gcnew System::EventHandler(this, &LogIn::LANG_ARB_BUTTON_Click);
			// 
			// USERNAME_TEXTBOX
			// 
			this->USERNAME_TEXTBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->USERNAME_TEXTBOX->Location = System::Drawing::Point(182, 206);
			this->USERNAME_TEXTBOX->Name = L"USERNAME_TEXTBOX";
			this->USERNAME_TEXTBOX->Size = System::Drawing::Size(270, 30);
			this->USERNAME_TEXTBOX->TabIndex = 4;
			// 
			// PASSWORD_TEXTBOX
			// 
			this->PASSWORD_TEXTBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->PASSWORD_TEXTBOX->Location = System::Drawing::Point(182, 302);
			this->PASSWORD_TEXTBOX->Name = L"PASSWORD_TEXTBOX";
			this->PASSWORD_TEXTBOX->PasswordChar = '*';
			this->PASSWORD_TEXTBOX->Size = System::Drawing::Size(270, 30);
			this->PASSWORD_TEXTBOX->TabIndex = 5;
			// 
			// LABEL_USERNAME
			// 
			this->LABEL_USERNAME->AutoSize = true;
			this->LABEL_USERNAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->LABEL_USERNAME->Location = System::Drawing::Point(177, 178);
			this->LABEL_USERNAME->Name = L"LABEL_USERNAME";
			this->LABEL_USERNAME->Size = System::Drawing::Size(102, 25);
			this->LABEL_USERNAME->TabIndex = 6;
			this->LABEL_USERNAME->Text = L"Username";
			// 
			// LABEL_PASSWORD
			// 
			this->LABEL_PASSWORD->AutoSize = true;
			this->LABEL_PASSWORD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->LABEL_PASSWORD->Location = System::Drawing::Point(177, 274);
			this->LABEL_PASSWORD->Name = L"LABEL_PASSWORD";
			this->LABEL_PASSWORD->Size = System::Drawing::Size(98, 25);
			this->LABEL_PASSWORD->TabIndex = 7;
			this->LABEL_PASSWORD->Text = L"Password";
			// 
			// LOG_IN_BUTTON
			// 
			this->LOG_IN_BUTTON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->LOG_IN_BUTTON->Location = System::Drawing::Point(224, 366);
			this->LOG_IN_BUTTON->Name = L"LOG_IN_BUTTON";
			this->LOG_IN_BUTTON->Size = System::Drawing::Size(188, 45);
			this->LOG_IN_BUTTON->TabIndex = 8;
			this->LOG_IN_BUTTON->Text = L"Log In";
			this->LOG_IN_BUTTON->UseVisualStyleBackColor = true;
			this->LOG_IN_BUTTON->Click += gcnew System::EventHandler(this, &LogIn::LOG_IN_BUTTON_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(179, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 9;
			// 
			// LogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 503);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LOG_IN_BUTTON);
			this->Controls->Add(this->LABEL_PASSWORD);
			this->Controls->Add(this->LABEL_USERNAME);
			this->Controls->Add(this->PASSWORD_TEXTBOX);
			this->Controls->Add(this->USERNAME_TEXTBOX);
			this->Controls->Add(this->LANG_ARB_BUTTON);
			this->Controls->Add(this->LANG_ENG_BUTTON);
			this->Controls->Add(this->LANG_FRA_BUTTON);
			this->Controls->Add(this->LANG_ESP_BUTTON);
			this->Name = L"LogIn";
			this->Text = L"Log In";
			this->Load += gcnew System::EventHandler(this, &LogIn::LogIn_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogIn_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	//LANG_ESP_BUTTON Changes language to Spanish
	private: System::Void LANG_ESP_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		if (currentLanguage != "Spanish") {
			UpdateLanguage_LogInForm("Spanish");
			currentLanguage = "Spanish";
			label1->Text = "";
		}
	}

	//LANG_FRA_BUTTON Changes language to French
	private: System::Void LANG_FRA_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		if (currentLanguage != "French") {
			UpdateLanguage_LogInForm("French");
			currentLanguage = "French";
			label1->Text = "";
		}
	}

	//LANG_ENG_BUTTON Changes language to English
	private: System::Void LANG_ENG_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		if (currentLanguage != "English") {
			UpdateLanguage_LogInForm("English");
			currentLanguage = "English";
			label1->Text = "";
		}

	}
	
	//LANG_ARB_BUTTON Changes language to Arab
	private: System::Void LANG_ARB_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		if (currentLanguage != "Arab") {
			UpdateLanguage_LogInForm("Arab");
			currentLanguage = "Arab";
			label1->Text = "";
		}
	}

	//Press Log In Button
	private: System::Void LOG_IN_BUTTON_Click(System::Object^  sender, System::EventArgs^  e) {
		if (checkUsernamePassword()) {
			PatientManager ^form = gcnew PatientManager(currentLanguage);
			form->ShowDialog();
		}
	}

};
}