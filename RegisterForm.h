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
			this->BtConfirm = (gcnew System::Windows::Forms::Button());
			this->BtReturn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(219, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registrarse";
			// 
			// lbNombre
			// 
			this->lbNombre->AutoSize = true;
			this->lbNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNombre->Location = System::Drawing::Point(24, 131);
			this->lbNombre->Name = L"lbNombre";
			this->lbNombre->Size = System::Drawing::Size(87, 25);
			this->lbNombre->TabIndex = 1;
			this->lbNombre->Text = L"Nombre";
			// 
			// lbApellidos
			// 
			this->lbApellidos->AutoSize = true;
			this->lbApellidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbApellidos->Location = System::Drawing::Point(25, 194);
			this->lbApellidos->Name = L"lbApellidos";
			this->lbApellidos->Size = System::Drawing::Size(100, 25);
			this->lbApellidos->TabIndex = 2;
			this->lbApellidos->Text = L"Apellidos";
			// 
			// lbCorreo2
			// 
			this->lbCorreo2->AutoSize = true;
			this->lbCorreo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCorreo2->Location = System::Drawing::Point(24, 268);
			this->lbCorreo2->Name = L"lbCorreo2";
			this->lbCorreo2->Size = System::Drawing::Size(192, 26);
			this->lbCorreo2->TabIndex = 3;
			this->lbCorreo2->Text = L"Correo Electronico";
			// 
			// lbContraseña2
			// 
			this->lbContraseña2->AutoSize = true;
			this->lbContraseña2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbContraseña2->Location = System::Drawing::Point(24, 341);
			this->lbContraseña2->Name = L"lbContraseña2";
			this->lbContraseña2->Size = System::Drawing::Size(124, 26);
			this->lbContraseña2->TabIndex = 4;
			this->lbContraseña2->Text = L"Contraseña";
			// 
			// tbContraseña
			// 
			this->tbContraseña->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbContraseña->Location = System::Drawing::Point(29, 379);
			this->tbContraseña->Name = L"tbContraseña";
			this->tbContraseña->Size = System::Drawing::Size(304, 20);
			this->tbContraseña->TabIndex = 5;
			this->tbContraseña->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// tbCorreo2
			// 
			this->tbCorreo2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCorreo2->Location = System::Drawing::Point(29, 297);
			this->tbCorreo2->Name = L"tbCorreo2";
			this->tbCorreo2->Size = System::Drawing::Size(304, 20);
			this->tbCorreo2->TabIndex = 6;
			this->tbCorreo2->TextChanged += gcnew System::EventHandler(this, &MyForm1::tbCorreo2_TextChanged);
			// 
			// tbApellidos
			// 
			this->tbApellidos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbApellidos->Location = System::Drawing::Point(28, 223);
			this->tbApellidos->Name = L"tbApellidos";
			this->tbApellidos->Size = System::Drawing::Size(305, 20);
			this->tbApellidos->TabIndex = 7;
			this->tbApellidos->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox3_TextChanged);
			// 
			// tbNombre
			// 
			this->tbNombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNombre->Location = System::Drawing::Point(28, 159);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(304, 20);
			this->tbNombre->TabIndex = 8;
			// 
			// BtConfirm
			// 
			this->BtConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtConfirm->Location = System::Drawing::Point(397, 170);
			this->BtConfirm->Margin = System::Windows::Forms::Padding(2);
			this->BtConfirm->Name = L"BtConfirm";
			this->BtConfirm->Size = System::Drawing::Size(187, 73);
			this->BtConfirm->TabIndex = 11;
			this->BtConfirm->Text = L"Confirmar";
			this->BtConfirm->UseVisualStyleBackColor = true;
			this->BtConfirm->Click += gcnew System::EventHandler(this, &MyForm1::BtConfirm_Click);
			// 
			// BtReturn
			// 
			this->BtReturn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtReturn->Location = System::Drawing::Point(396, 288);
			this->BtReturn->Margin = System::Windows::Forms::Padding(2);
			this->BtReturn->Name = L"BtReturn";
			this->BtReturn->Size = System::Drawing::Size(188, 79);
			this->BtReturn->TabIndex = 12;
			this->BtReturn->Text = L"Volver";
			this->BtReturn->UseVisualStyleBackColor = true;
			this->BtReturn->Click += gcnew System::EventHandler(this, &MyForm1::BtReturn_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(617, 458);
			this->Controls->Add(this->BtReturn);
			this->Controls->Add(this->BtConfirm);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->tbApellidos);
			this->Controls->Add(this->tbCorreo2);
			this->Controls->Add(this->tbContraseña);
			this->Controls->Add(this->lbContraseña2);
			this->Controls->Add(this->lbCorreo2);
			this->Controls->Add(this->lbApellidos);
			this->Controls->Add(this->lbNombre);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm1";
			this->Text = L" SecurePass Beta";
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
		if (nombre->Length == 0 || apellidos->Length == 0 || correo->Length == 0 || contraseña->Length == 0) {
			MessageBox::Show("Asegurese de no dejar ningun campo en blanco.", "Error", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ conexion = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=BaseDeDatos1;Integrated Security=True";
			SqlConnection sqlConn(conexion);
			sqlConn.Open();
			String^ Query = "Insert into Usuarios values(@a,@b,@c,@d)";
			SqlCommand comando(Query, % sqlConn);
			comando.Parameters->AddWithValue("@a", nombre);
			comando.Parameters->AddWithValue("@b", apellidos);
			comando.Parameters->AddWithValue("@c", correo);
			comando.Parameters->AddWithValue("@d", contraseña);

			try {
				SqlDataReader^ iniciar = comando.ExecuteReader();
				MessageBox::Show("Registro Completo", "Done", MessageBoxButtons::OK);
				this->cambiarLogin = true;
				this->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("La cuenta ya existe. Por favor, utiliza otro correo.", "Error", MessageBoxButtons::OK);
			}
	

		}
		catch (Exception^ e) {
			MessageBox::Show("La conexión no pudo extablecerse.", "Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void tbCorreo2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}


