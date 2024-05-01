#pragma once
#include <iostream>
#include "Usuario.h"
namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ bt_Login;
	private: System::Windows::Forms::Button^ BtSignUp;
	private: System::Windows::Forms::Button^ btNoDB;






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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->bt_Login = (gcnew System::Windows::Forms::Button());
			this->BtSignUp = (gcnew System::Windows::Forms::Button());
			this->btNoDB = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(187, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Correo Electronico";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 269);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 227);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(380, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 312);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(379, 20);
			this->textBox2->TabIndex = 4;
			// 
			// bt_Login
			// 
			this->bt_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_Login->Location = System::Drawing::Point(114, 385);
			this->bt_Login->Name = L"bt_Login";
			this->bt_Login->Size = System::Drawing::Size(246, 65);
			this->bt_Login->TabIndex = 5;
			this->bt_Login->Text = L"Log In";
			this->bt_Login->UseVisualStyleBackColor = true;
			this->bt_Login->Click += gcnew System::EventHandler(this, &MyForm::bt_Login_Click);
			// 
			// BtSignUp
			// 
			this->BtSignUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtSignUp->Location = System::Drawing::Point(114, 482);
			this->BtSignUp->Name = L"BtSignUp";
			this->BtSignUp->Size = System::Drawing::Size(245, 70);
			this->BtSignUp->TabIndex = 6;
			this->BtSignUp->Text = L"Sign Up";
			this->BtSignUp->UseVisualStyleBackColor = true;
			this->BtSignUp->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btNoDB
			// 
			this->btNoDB->Location = System::Drawing::Point(315, 568);
			this->btNoDB->Name = L"btNoDB";
			this->btNoDB->Size = System::Drawing::Size(167, 25);
			this->btNoDB->TabIndex = 7;
			this->btNoDB->Text = L"Usar sin Base de Datos";
			this->btNoDB->UseVisualStyleBackColor = true;
			this->btNoDB->Click += gcnew System::EventHandler(this, &MyForm::btNoDB_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(489, 603);
			this->Controls->Add(this->btNoDB);
			this->Controls->Add(this->BtSignUp);
			this->Controls->Add(this->bt_Login);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"SecurePass";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public: Usuario^ usuario = nullptr;
	private: System::Void bt_Login_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ correo = this->textBox1->Text;
		String^ contraseña = this->textBox2->Text;

		if (correo->Length==0 || contraseña->Length==0) {
			MessageBox::Show("Por favor asegurese de que los datos sean correctos.", "Error", MessageBoxButtons::OK);
			return;
		}
			try {
				String^ conecion = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=BaseDeDatos1;Integrated Security=True";
				SqlConnection sqlConn(conecion);
				sqlConn.Open();
				String^ Query = "Select * from TablaUsuarios where CorreoElectronico=@email and Contraseña=@Password";
				SqlCommand command(Query, % sqlConn);
				command.Parameters->AddWithValue("@email", correo);
				command.Parameters->AddWithValue("@Password", contraseña);

				SqlDataReader^ iniciar = command.ExecuteReader();
				if (iniciar->Read()) {
					usuario = gcnew Usuario;
					usuario->id = iniciar->GetInt32(0);
					usuario->Nombre = iniciar->GetString(1);
					usuario->Apellido = iniciar->GetString(2);
					usuario->CorreoElectronico = iniciar->GetString(3);
					usuario->Contraseña = iniciar->GetString(4);
					usuario->Telefono = iniciar->GetString(5);
					this->Close();



				}
				else {
					MessageBox::Show("Usuario o Contraseña incorrecto", "Error!", MessageBoxButtons::OK);
				}
			}
			catch (Exception^ e) {
				MessageBox::Show("La conecion no pudo establecerse", "Error", MessageBoxButtons::OK);
			}
		
	}
	public: bool cambiarRegistro = false;
  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	  this->cambiarRegistro = true;
	  this->Close();
  }

    private: System::Void btNoDB_Click(System::Object^ sender, System::EventArgs^ e) {
		Usuario::BaseDatos = false;
	    this->Close();
}
};
}
