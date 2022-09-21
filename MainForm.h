#pragma once
#include ".\Classes\User.h"
#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

namespace MyRestaurantProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		    lbNameEntry->Text = user->name;
			lbSurnameEntry->Text = user->surname;
			lbAddressEntry->Text = user->address;
			lbEmailEntry->Text = user->email;
			lbPhoneEntry->Text = user->phone;
			lbWelcomeUser->Text = "Welcome " + user->email;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbWelcomeUser;
	private: System::Windows::Forms::GroupBox^ gbPersonalDetails;
	private: System::Windows::Forms::Label^ lbSurname;
	private: System::Windows::Forms::Label^ lbAddress;


	private: System::Windows::Forms::Label^ lbPhone;

	private: System::Windows::Forms::Label^ lbEmail;

	private: System::Windows::Forms::Label^ lbName;


	private: System::Windows::Forms::Label^ lbAddressEntry;
	private: System::Windows::Forms::Label^ lbPhoneEntry;
	private: System::Windows::Forms::Label^ lbEmailEntry;
	private: System::Windows::Forms::Label^ lbSurnameEntry;
	private: System::Windows::Forms::Label^ lbNameEntry;












	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbWelcomeUser = (gcnew System::Windows::Forms::Label());
			this->gbPersonalDetails = (gcnew System::Windows::Forms::GroupBox());
			this->lbAddressEntry = (gcnew System::Windows::Forms::Label());
			this->lbPhoneEntry = (gcnew System::Windows::Forms::Label());
			this->lbEmailEntry = (gcnew System::Windows::Forms::Label());
			this->lbSurnameEntry = (gcnew System::Windows::Forms::Label());
			this->lbNameEntry = (gcnew System::Windows::Forms::Label());
			this->lbSurname = (gcnew System::Windows::Forms::Label());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->lbPhone = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->gbPersonalDetails->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(995, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Dashboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbWelcomeUser
			// 
			this->lbWelcomeUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbWelcomeUser->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->lbWelcomeUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWelcomeUser->Location = System::Drawing::Point(12, 495);
			this->lbWelcomeUser->Name = L"lbWelcomeUser";
			this->lbWelcomeUser->Size = System::Drawing::Size(999, 69);
			this->lbWelcomeUser->TabIndex = 1;
			this->lbWelcomeUser->Text = L"Welcome <user>";
			this->lbWelcomeUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gbPersonalDetails
			// 
			this->gbPersonalDetails->BackColor = System::Drawing::SystemColors::ControlLight;
			this->gbPersonalDetails->Controls->Add(this->lbAddressEntry);
			this->gbPersonalDetails->Controls->Add(this->lbPhoneEntry);
			this->gbPersonalDetails->Controls->Add(this->lbEmailEntry);
			this->gbPersonalDetails->Controls->Add(this->lbSurnameEntry);
			this->gbPersonalDetails->Controls->Add(this->lbNameEntry);
			this->gbPersonalDetails->Controls->Add(this->lbSurname);
			this->gbPersonalDetails->Controls->Add(this->lbAddress);
			this->gbPersonalDetails->Controls->Add(this->lbPhone);
			this->gbPersonalDetails->Controls->Add(this->lbEmail);
			this->gbPersonalDetails->Controls->Add(this->lbName);
			this->gbPersonalDetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->gbPersonalDetails->Location = System::Drawing::Point(12, 99);
			this->gbPersonalDetails->Name = L"gbPersonalDetails";
			this->gbPersonalDetails->Size = System::Drawing::Size(348, 206);
			this->gbPersonalDetails->TabIndex = 2;
			this->gbPersonalDetails->TabStop = false;
			this->gbPersonalDetails->Text = L"Personal Details";
			// 
			// lbAddressEntry
			// 
			this->lbAddressEntry->AutoSize = true;
			this->lbAddressEntry->Location = System::Drawing::Point(113, 169);
			this->lbAddressEntry->Name = L"lbAddressEntry";
			this->lbAddressEntry->Size = System::Drawing::Size(81, 20);
			this->lbAddressEntry->TabIndex = 9;
			this->lbAddressEntry->Text = L"Address: ";
			// 
			// lbPhoneEntry
			// 
			this->lbPhoneEntry->AutoSize = true;
			this->lbPhoneEntry->Location = System::Drawing::Point(113, 137);
			this->lbPhoneEntry->Name = L"lbPhoneEntry";
			this->lbPhoneEntry->Size = System::Drawing::Size(66, 20);
			this->lbPhoneEntry->TabIndex = 8;
			this->lbPhoneEntry->Text = L"Phone: ";
			// 
			// lbEmailEntry
			// 
			this->lbEmailEntry->AutoSize = true;
			this->lbEmailEntry->Location = System::Drawing::Point(113, 101);
			this->lbEmailEntry->Name = L"lbEmailEntry";
			this->lbEmailEntry->Size = System::Drawing::Size(61, 20);
			this->lbEmailEntry->TabIndex = 7;
			this->lbEmailEntry->Text = L"Email: ";
			// 
			// lbSurnameEntry
			// 
			this->lbSurnameEntry->AutoSize = true;
			this->lbSurnameEntry->Location = System::Drawing::Point(113, 68);
			this->lbSurnameEntry->Name = L"lbSurnameEntry";
			this->lbSurnameEntry->Size = System::Drawing::Size(86, 20);
			this->lbSurnameEntry->TabIndex = 6;
			this->lbSurnameEntry->Text = L"Surname: ";
			// 
			// lbNameEntry
			// 
			this->lbNameEntry->AutoSize = true;
			this->lbNameEntry->Location = System::Drawing::Point(113, 34);
			this->lbNameEntry->Name = L"lbNameEntry";
			this->lbNameEntry->Size = System::Drawing::Size(63, 20);
			this->lbNameEntry->TabIndex = 5;
			this->lbNameEntry->Text = L"Name: ";
			// 
			// lbSurname
			// 
			this->lbSurname->AutoSize = true;
			this->lbSurname->Location = System::Drawing::Point(9, 68);
			this->lbSurname->Name = L"lbSurname";
			this->lbSurname->Size = System::Drawing::Size(86, 20);
			this->lbSurname->TabIndex = 4;
			this->lbSurname->Text = L"Surname: ";
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Location = System::Drawing::Point(13, 169);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(81, 20);
			this->lbAddress->TabIndex = 3;
			this->lbAddress->Text = L"Address: ";
			// 
			// lbPhone
			// 
			this->lbPhone->AutoSize = true;
			this->lbPhone->Location = System::Drawing::Point(13, 137);
			this->lbPhone->Name = L"lbPhone";
			this->lbPhone->Size = System::Drawing::Size(66, 20);
			this->lbPhone->TabIndex = 2;
			this->lbPhone->Text = L"Phone: ";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Location = System::Drawing::Point(13, 101);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(61, 20);
			this->lbEmail->TabIndex = 1;
			this->lbEmail->Text = L"Email: ";
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(13, 34);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(63, 20);
			this->lbName->TabIndex = 0;
			this->lbName->Text = L"Name: ";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1023, 573);
			this->Controls->Add(this->gbPersonalDetails);
			this->Controls->Add(this->lbWelcomeUser);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->gbPersonalDetails->ResumeLayout(false);
			this->gbPersonalDetails->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
};
}
