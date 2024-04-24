#pragma once
namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbNombre;
	protected:

	private: System::Windows::Forms::Label^ lbApellidos;
	private: System::Windows::Forms::Label^ lbCorreo2;
	private: System::Windows::Forms::Label^ lbContraseña2;



	private: System::Windows::Forms::TextBox^ tbContraseña;
	private: System::Windows::Forms::TextBox^ tbCorreo2;
	private: System::Windows::Forms::TextBox^ tbApellidos;
	private: System::Windows::Forms::TextBox^ tbNombre;
	private: System::Windows::Forms::Label^ lbTelefono;





	private: System::Windows::Forms::TextBox^ tbTelefono;
	private: System::Windows::Forms::Button^ BtConfirm;
	private: System::Windows::Forms::Button^ BtReturn;


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
			this->lbNombre = (gcnew System::Windows::Forms::Label());
			this->lbApellidos = (gcnew System::Windows::Forms::Label());
			this->lbCorreo2 = (gcnew System::Windows::Forms::Label());
			this->lbContraseña2 = (gcnew System::Windows::Forms::Label());
			this->tbContraseña = (gcnew System::Windows::Forms::TextBox());
			this->tbCorreo2 = (gcnew System::Windows::Forms::TextBox());
			this->tbApellidos = (gcnew System::Windows::Forms::TextBox());
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->lbTelefono = (gcnew System::Windows::Forms::Label());
			this->tbTelefono = (gcnew System::Windows::Forms::TextBox());
			this->BtConfirm = (gcnew System::Windows::Forms::Button());
			this->BtReturn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(436, 88);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 73);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			// 
			// lbNombre
			// 
			this->lbNombre->AutoSize = true;
			this->lbNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNombre->Location = System::Drawing::Point(50, 213);
			this->lbNombre->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lbNombre->Name = L"lbNombre";
			this->lbNombre->Size = System::Drawing::Size(168, 48);
			this->lbNombre->TabIndex = 1;
			this->lbNombre->Text = L"Nombre";
			// 
			// lbApellidos
			// 
			this->lbApellidos->AutoSize = true;
			this->lbApellidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbApellidos->Location = System::Drawing::Point(50, 338);
			this->lbApellidos->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lbApellidos->Name = L"lbApellidos";
			this->lbApellidos->Size = System::Drawing::Size(191, 48);
			this->lbApellidos->TabIndex = 2;
			this->lbApellidos->Text = L"Apellidos";
			// 
			// lbCorreo2
			// 
			this->lbCorreo2->AutoSize = true;
			this->lbCorreo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCorreo2->Location = System::Drawing::Point(49, 460);
			this->lbCorreo2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lbCorreo2->Name = L"lbCorreo2";
			this->lbCorreo2->Size = System::Drawing::Size(379, 51);
			this->lbCorreo2->TabIndex = 3;
			this->lbCorreo2->Text = L"Correo Electronico";
			// 
			// lbContraseña2
			// 
			this->lbContraseña2->AutoSize = true;
			this->lbContraseña2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbContraseña2->Location = System::Drawing::Point(49, 593);
			this->lbContraseña2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lbContraseña2->Name = L"lbContraseña2";
			this->lbContraseña2->Size = System::Drawing::Size(245, 51);
			this->lbContraseña2->TabIndex = 4;
			this->lbContraseña2->Text = L"Contraseña";
			// 
			// tbContraseña
			// 
			this->tbContraseña->Location = System::Drawing::Point(58, 650);
			this->tbContraseña->Margin = System::Windows::Forms::Padding(6);
			this->tbContraseña->Name = L"tbContraseña";
			this->tbContraseña->Size = System::Drawing::Size(604, 31);
			this->tbContraseña->TabIndex = 5;
			this->tbContraseña->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// tbCorreo2
			// 
			this->tbCorreo2->Location = System::Drawing::Point(58, 517);
			this->tbCorreo2->Margin = System::Windows::Forms::Padding(6);
			this->tbCorreo2->Name = L"tbCorreo2";
			this->tbCorreo2->Size = System::Drawing::Size(604, 31);
			this->tbCorreo2->TabIndex = 6;
			// 
			// tbApellidos
			// 
			this->tbApellidos->Location = System::Drawing::Point(58, 392);
			this->tbApellidos->Margin = System::Windows::Forms::Padding(6);
			this->tbApellidos->Name = L"tbApellidos";
			this->tbApellidos->Size = System::Drawing::Size(606, 31);
			this->tbApellidos->TabIndex = 7;
			this->tbApellidos->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox3_TextChanged);
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(58, 267);
			this->tbNombre->Margin = System::Windows::Forms::Padding(6);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(604, 31);
			this->tbNombre->TabIndex = 8;
			
			// 
			// lbTelefono
			// 
			this->lbTelefono->AutoSize = true;
			this->lbTelefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTelefono->Location = System::Drawing::Point(49, 705);
			this->lbTelefono->Name = L"lbTelefono";
			this->lbTelefono->Size = System::Drawing::Size(190, 51);
			this->lbTelefono->TabIndex = 9;
			this->lbTelefono->Text = L"Telefono";
			this->lbTelefono->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// tbTelefono
			// 
			this->tbTelefono->Location = System::Drawing::Point(60, 773);
			this->tbTelefono->Name = L"tbTelefono";
			this->tbTelefono->Size = System::Drawing::Size(601, 31);
			this->tbTelefono->TabIndex = 10;
			// 
			// BtConfirm
			// 
			this->BtConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtConfirm->Location = System::Drawing::Point(794, 326);
			this->BtConfirm->Name = L"BtConfirm";
			this->BtConfirm->Size = System::Drawing::Size(374, 140);
			this->BtConfirm->TabIndex = 11;
			this->BtConfirm->Text = L"Confirm";
			this->BtConfirm->UseVisualStyleBackColor = true;
			this->BtConfirm->Click += gcnew System::EventHandler(this, &MyForm1::BtConfirm_Click);
			// 
			// BtReturn
			// 
			this->BtReturn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtReturn->Location = System::Drawing::Point(792, 553);
			this->BtReturn->Name = L"BtReturn";
			this->BtReturn->Size = System::Drawing::Size(375, 152);
			this->BtReturn->TabIndex = 12;
			this->BtReturn->Text = L"Return";
			this->BtReturn->UseVisualStyleBackColor = true;
			this->BtReturn->Click += gcnew System::EventHandler(this, &MyForm1::BtReturn_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1234, 881);
			this->Controls->Add(this->BtReturn);
			this->Controls->Add(this->BtConfirm);
			this->Controls->Add(this->tbTelefono);
			this->Controls->Add(this->lbTelefono);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->tbApellidos);
			this->Controls->Add(this->tbCorreo2);
			this->Controls->Add(this->tbContraseña);
			this->Controls->Add(this->lbContraseña2);
			this->Controls->Add(this->lbCorreo2);
			this->Controls->Add(this->lbApellidos);
			this->Controls->Add(this->lbNombre);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm1";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool cambiarLogin = false;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->cambiarLogin = true;
		this->Close();
	}
	private: System::Void BtConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		//confirm
		String^ nombre = this->tbNombre->Text;
		String^ apellidos = this->tbApellidos->Text;
		String^ correo = this->tbCorreo2->Text;
		String^ contraseña = this->tbContraseña->Text;
		String^ telefono = this->tbTelefono->Text;
		if (nombre->Length == 0 || apellidos->Length == 0 || correo->Length == 0 || contraseña->Length == 0 || telefono->Length == 0) {
			MessageBox::Show("Asegurese de no dejar ningun campo en blanco.", "Error", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ conecion = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=BaseDeDatos1;Integrated Security=True";
			SqlConnection sqlConn(conecion);
			sqlConn.Open();
			String^ Query = "Insert into TablaUsuarios values(@a,@b,@c,@d,@e)";
			SqlCommand command(Query, % sqlConn);
			command.Parameters->AddWithValue("@a", nombre);
			command.Parameters->AddWithValue("@b", apellidos);
			command.Parameters->AddWithValue("@c", correo);
			command.Parameters->AddWithValue("@d", contraseña);
			command.Parameters->AddWithValue("@e", telefono);

			SqlDataReader^ iniciar = command.ExecuteReader();


			MessageBox::Show("Registro Completo", "Done", MessageBoxButtons::OK);
			this->cambiarLogin = true;
			this->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("No se pudo registrar", "Error", MessageBoxButtons::OK);
		}
	}
	};
}


