#pragma once
#include ".\Classes\User.h"

namespace MyRestaurantProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbName;
	protected:

	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ lbEmail;


	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ lbPhone;

	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::Label^ lbAddress;

	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ lbPassword;

	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ lbConfirmPassword;

	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;
	private: System::Windows::Forms::Label^ lbSurname;
	private: System::Windows::Forms::TextBox^ tbSurname;


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
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->lbPhone = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->lbConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->lbSurname = (gcnew System::Windows::Forms::Label());
			this->tbSurname = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(505, 68);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(14, 101);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(90, 31);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(274, 102);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(284, 37);
			this->tbName->TabIndex = 2;
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Location = System::Drawing::Point(14, 170);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(86, 31);
			this->lbEmail->TabIndex = 1;
			this->lbEmail->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(274, 171);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(284, 37);
			this->tbEmail->TabIndex = 2;
			// 
			// lbPhone
			// 
			this->lbPhone->AutoSize = true;
			this->lbPhone->Location = System::Drawing::Point(14, 207);
			this->lbPhone->Name = L"lbPhone";
			this->lbPhone->Size = System::Drawing::Size(97, 31);
			this->lbPhone->TabIndex = 1;
			this->lbPhone->Text = L"Phone";
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(274, 207);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(284, 37);
			this->tbPhone->TabIndex = 2;
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Location = System::Drawing::Point(14, 244);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(121, 31);
			this->lbAddress->TabIndex = 1;
			this->lbAddress->Text = L"Address";
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(274, 239);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(284, 37);
			this->tbAddress->TabIndex = 2;
			// 
			// lbPassword
			// 
			this->lbPassword->AutoSize = true;
			this->lbPassword->Location = System::Drawing::Point(14, 281);
			this->lbPassword->Name = L"lbPassword";
			this->lbPassword->Size = System::Drawing::Size(142, 31);
			this->lbPassword->TabIndex = 1;
			this->lbPassword->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(274, 275);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(284, 37);
			this->tbPassword->TabIndex = 2;
			// 
			// lbConfirmPassword
			// 
			this->lbConfirmPassword->AutoSize = true;
			this->lbConfirmPassword->Location = System::Drawing::Point(14, 318);
			this->lbConfirmPassword->Name = L"lbConfirmPassword";
			this->lbConfirmPassword->Size = System::Drawing::Size(252, 31);
			this->lbConfirmPassword->TabIndex = 1;
			this->lbConfirmPassword->Text = L"Confirm Password";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(274, 312);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(284, 37);
			this->tbConfirmPassword->TabIndex = 2;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(274, 372);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(144, 36);
			this->btnOK->TabIndex = 3;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(424, 371);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(133, 36);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(487, 410);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(85, 31);
			this->llLogin->TabIndex = 4;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// lbSurname
			// 
			this->lbSurname->AutoSize = true;
			this->lbSurname->Location = System::Drawing::Point(14, 135);
			this->lbSurname->Name = L"lbSurname";
			this->lbSurname->Size = System::Drawing::Size(130, 31);
			this->lbSurname->TabIndex = 5;
			this->lbSurname->Text = L"Surname";
			// 
			// tbSurname
			// 
			this->tbSurname->Location = System::Drawing::Point(274, 135);
			this->tbSurname->Name = L"tbSurname";
			this->tbSurname->Size = System::Drawing::Size(284, 37);
			this->tbSurname->TabIndex = 6;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(587, 462);
			this->Controls->Add(this->tbSurname);
			this->Controls->Add(this->lbSurname);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->lbConfirmPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->lbPassword);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->lbAddress);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->lbPhone);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}

	public: User^ user = nullptr;

	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ surname = tbSurname->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbPhone->Text;
		String^ address = tbAddress->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;

		if (name->Length == 0 || email->Length == 0
			|| phone->Length == 0 || address->Length == 0
			|| password->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"One or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=employees;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(id, name, surname, email, phone, address, password) \nVALUES" +
				"(@id, @name, @surname, @email, @phone, @address, @password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", email);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@surname", surname);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->surname = surname;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;

			this->switchToLogin = true;

			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}
	private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
