#pragma once
#include "Usuario.h"
#using <mscorlib.dll>


String^ securePass(int cantidad) {
	String^ contrasena;
	char* letras = new char[(cantidad+1)];
	for (int i = 0; i < cantidad; i++) {
		letras[i] = 35 + rand() % (126 - 35);
	}
	letras[cantidad] = '\0';
	contrasena = gcnew String(letras);
	delete[] letras;
	return contrasena;
}



namespace InterfazGrafica {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ btContr;
	private: System::Windows::Forms::Button^ bnVerificar;
	private: System::Windows::Forms::Button^ bnVerBD;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txbConGenerada;
	private: System::Windows::Forms::Panel^ pnlVercontraseñas;


	private: System::Windows::Forms::TextBox^ tbGuardarCont;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnlVerificar;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::TextBox^ tbGuardarEmail;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbGuardarServicio;

	private: System::Windows::Forms::Button^ btnGuardarServ;
	private: System::Windows::Forms::Button^ btGenerar;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ longCaracteres;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ BtnVerificar;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btnCopiar;
	private: System::Windows::Forms::Panel^ pnlGenerar;
	private: System::Windows::Forms::DataGridView^ datagv1;








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
		void InitializeComponent(void)
		{
			this->btContr = (gcnew System::Windows::Forms::Button());
			this->bnVerificar = (gcnew System::Windows::Forms::Button());
			this->bnVerBD = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txbConGenerada = (gcnew System::Windows::Forms::TextBox());
			this->pnlVercontraseñas = (gcnew System::Windows::Forms::Panel());
			this->datagv1 = (gcnew System::Windows::Forms::DataGridView());
			this->pnlVerificar = (gcnew System::Windows::Forms::Panel());
			this->BtnVerificar = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlGenerar = (gcnew System::Windows::Forms::Panel());
			this->btnCopiar = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->longCaracteres = (gcnew System::Windows::Forms::NumericUpDown());
			this->btGenerar = (gcnew System::Windows::Forms::Button());
			this->btnGuardarServ = (gcnew System::Windows::Forms::Button());
			this->tbGuardarServicio = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbGuardarEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbGuardarCont = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlVercontraseñas->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagv1))->BeginInit();
			this->pnlVerificar->SuspendLayout();
			this->pnlGenerar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->longCaracteres))->BeginInit();
			this->SuspendLayout();
			// 
			// btContr
			// 
			this->btContr->Location = System::Drawing::Point(33, 59);
			this->btContr->Name = L"btContr";
			this->btContr->Size = System::Drawing::Size(155, 77);
			this->btContr->TabIndex = 1;
			this->btContr->Text = L"Generar Contraseña";
			this->btContr->UseVisualStyleBackColor = true;
			this->btContr->Click += gcnew System::EventHandler(this, &MenuForm::btContr_Click_1);
			// 
			// bnVerificar
			// 
			this->bnVerificar->Location = System::Drawing::Point(33, 186);
			this->bnVerificar->Name = L"bnVerificar";
			this->bnVerificar->Size = System::Drawing::Size(155, 84);
			this->bnVerificar->TabIndex = 2;
			this->bnVerificar->Text = L"Verificar ";
			this->bnVerificar->UseVisualStyleBackColor = true;
			this->bnVerificar->Click += gcnew System::EventHandler(this, &MenuForm::bnVerificar_Click);
			// 
			// bnVerBD
			// 
			this->bnVerBD->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bnVerBD->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->bnVerBD->Location = System::Drawing::Point(33, 309);
			this->bnVerBD->Name = L"bnVerBD";
			this->bnVerBD->Size = System::Drawing::Size(153, 91);
			this->bnVerBD->TabIndex = 3;
			this->bnVerBD->Text = L"Ver Contraseñas";
			this->bnVerBD->UseVisualStyleBackColor = false;
			this->bnVerBD->Click += gcnew System::EventHandler(this, &MenuForm::bnVerBD_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Russo One", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(589, 39);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Generador de Contraseñas Seguras";
			this->label1->Click += gcnew System::EventHandler(this, &MenuForm::label1_Click);
			// 
			// txbConGenerada
			// 
			this->txbConGenerada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbConGenerada->Location = System::Drawing::Point(11, 126);
			this->txbConGenerada->MaxLength = 3000;
			this->txbConGenerada->Name = L"txbConGenerada";
			this->txbConGenerada->ReadOnly = true;
			this->txbConGenerada->Size = System::Drawing::Size(597, 38);
			this->txbConGenerada->TabIndex = 6;
			// 
			// pnlVercontraseñas
			// 
			this->pnlVercontraseñas->Controls->Add(this->datagv1);
			this->pnlVercontraseñas->Location = System::Drawing::Point(217, 12);
			this->pnlVercontraseñas->Name = L"pnlVercontraseñas";
			this->pnlVercontraseñas->Size = System::Drawing::Size(750, 628);
			this->pnlVercontraseñas->TabIndex = 7;
			this->pnlVercontraseñas->Visible = false;
			this->pnlVercontraseñas->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuForm::panel1_Paint);
			// 
			// datagv1
			// 
			this->datagv1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->datagv1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagv1->Location = System::Drawing::Point(19, 27);
			this->datagv1->Name = L"datagv1";
			this->datagv1->ReadOnly = true;
			this->datagv1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->datagv1->Size = System::Drawing::Size(701, 578);
			this->datagv1->TabIndex = 0;
			// 
			// pnlVerificar
			// 
			this->pnlVerificar->Controls->Add(this->BtnVerificar);
			this->pnlVerificar->Controls->Add(this->label10);
			this->pnlVerificar->Controls->Add(this->textBox3);
			this->pnlVerificar->Controls->Add(this->label3);
			this->pnlVerificar->Location = System::Drawing::Point(217, 12);
			this->pnlVerificar->Name = L"pnlVerificar";
			this->pnlVerificar->Size = System::Drawing::Size(750, 628);
			this->pnlVerificar->TabIndex = 8;
			this->pnlVerificar->Visible = false;
			// 
			// BtnVerificar
			// 
			this->BtnVerificar->Location = System::Drawing::Point(561, 125);
			this->BtnVerificar->Name = L"BtnVerificar";
			this->BtnVerificar->Size = System::Drawing::Size(137, 38);
			this->BtnVerificar->TabIndex = 3;
			this->BtnVerificar->Text = L"Verificar";
			this->BtnVerificar->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(24, 98);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(247, 25);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Introduce la Contraseña:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(29, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(506, 38);
			this->textBox3->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Russo One", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(461, 39);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Verificador de Contraseñas";
			// 
			// pnlGenerar
			// 
			this->pnlGenerar->Controls->Add(this->btnCopiar);
			this->pnlGenerar->Controls->Add(this->label9);
			this->pnlGenerar->Controls->Add(this->label8);
			this->pnlGenerar->Controls->Add(this->longCaracteres);
			this->pnlGenerar->Controls->Add(this->btGenerar);
			this->pnlGenerar->Controls->Add(this->btnGuardarServ);
			this->pnlGenerar->Controls->Add(this->tbGuardarServicio);
			this->pnlGenerar->Controls->Add(this->label7);
			this->pnlGenerar->Controls->Add(this->label6);
			this->pnlGenerar->Controls->Add(this->label5);
			this->pnlGenerar->Controls->Add(this->tbGuardarEmail);
			this->pnlGenerar->Controls->Add(this->tbGuardarCont);
			this->pnlGenerar->Controls->Add(this->label2);
			this->pnlGenerar->Controls->Add(this->txbConGenerada);
			this->pnlGenerar->Controls->Add(this->label1);
			this->pnlGenerar->Location = System::Drawing::Point(217, 12);
			this->pnlGenerar->Name = L"pnlGenerar";
			this->pnlGenerar->Size = System::Drawing::Size(750, 628);
			this->pnlGenerar->TabIndex = 20;
			this->pnlGenerar->Visible = false;
			// 
			// btnCopiar
			// 
			this->btnCopiar->Location = System::Drawing::Point(193, 183);
			this->btnCopiar->Name = L"btnCopiar";
			this->btnCopiar->Size = System::Drawing::Size(135, 43);
			this->btnCopiar->TabIndex = 19;
			this->btnCopiar->Text = L"Copiar";
			this->btnCopiar->UseVisualStyleBackColor = true;
			this->btnCopiar->Click += gcnew System::EventHandler(this, &MenuForm::btnCopiar_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(7, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(230, 25);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Contraseña Generada:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(620, 151);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Caracteres";
			// 
			// longCaracteres
			// 
			this->longCaracteres->Location = System::Drawing::Point(623, 125);
			this->longCaracteres->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->longCaracteres->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->longCaracteres->Name = L"longCaracteres";
			this->longCaracteres->Size = System::Drawing::Size(35, 20);
			this->longCaracteres->TabIndex = 16;
			this->longCaracteres->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->longCaracteres->ValueChanged += gcnew System::EventHandler(this, &MenuForm::longCaracteres_ValueChanged);
			// 
			// btGenerar
			// 
			this->btGenerar->Location = System::Drawing::Point(12, 183);
			this->btGenerar->Name = L"btGenerar";
			this->btGenerar->Size = System::Drawing::Size(175, 43);
			this->btGenerar->TabIndex = 15;
			this->btGenerar->Text = L"Generar Contraseña";
			this->btGenerar->UseVisualStyleBackColor = true;
			this->btGenerar->Click += gcnew System::EventHandler(this, &MenuForm::btGenerar_Click);
			// 
			// btnGuardarServ
			// 
			this->btnGuardarServ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardarServ->Location = System::Drawing::Point(318, 440);
			this->btnGuardarServ->Name = L"btnGuardarServ";
			this->btnGuardarServ->Size = System::Drawing::Size(290, 99);
			this->btnGuardarServ->TabIndex = 14;
			this->btnGuardarServ->Text = L"Guardar";
			this->btnGuardarServ->UseVisualStyleBackColor = true;
			this->btnGuardarServ->Click += gcnew System::EventHandler(this, &MenuForm::btnGuardarServ_Click_1);
			// 
			// tbGuardarServicio
			// 
			this->tbGuardarServicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tbGuardarServicio->Location = System::Drawing::Point(12, 508);
			this->tbGuardarServicio->Name = L"tbGuardarServicio";
			this->tbGuardarServicio->Size = System::Drawing::Size(242, 38);
			this->tbGuardarServicio->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(7, 480);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Servicio";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(7, 393);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(308, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Correo Electronico del Servicio";
			this->label6->Click += gcnew System::EventHandler(this, &MenuForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(7, 305);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Contraseña";
			// 
			// tbGuardarEmail
			// 
			this->tbGuardarEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbGuardarEmail->Location = System::Drawing::Point(11, 421);
			this->tbGuardarEmail->Name = L"tbGuardarEmail";
			this->tbGuardarEmail->Size = System::Drawing::Size(244, 38);
			this->tbGuardarEmail->TabIndex = 9;
			// 
			// tbGuardarCont
			// 
			this->tbGuardarCont->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbGuardarCont->Location = System::Drawing::Point(11, 333);
			this->tbGuardarCont->Name = L"tbGuardarCont";
			this->tbGuardarCont->Size = System::Drawing::Size(597, 38);
			this->tbGuardarCont->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Russo One", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(2, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(359, 39);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Guardar Contraseñas";
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(973, 645);
			this->Controls->Add(this->pnlVerificar);
			this->Controls->Add(this->pnlGenerar);
			this->Controls->Add(this->bnVerificar);
			this->Controls->Add(this->pnlVercontraseñas);
			this->Controls->Add(this->bnVerBD);
			this->Controls->Add(this->btContr);
			this->Name = L"MenuForm";
			this->Text = L"SecurePass ";
			this->pnlVercontraseñas->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagv1))->EndInit();
			this->pnlVerificar->ResumeLayout(false);
			this->pnlVerificar->PerformLayout();
			this->pnlGenerar->ResumeLayout(false);
			this->pnlGenerar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->longCaracteres))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

    private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
	private: System::Void bnVerificar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pnlVercontraseñas->Visible = false;
		this->pnlVerificar->Visible = true;
		this->pnlGenerar->Visible = false;
	}
  
    private: System::Void longCaracteres_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	
    }
    private: System::Void btnCopiar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txbConGenerada->Copy();
    }

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}


private: System::Void btContr_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->pnlVercontraseñas->Visible=false;
	this->pnlGenerar->Visible = true;
	this->pnlVerificar->Visible = false;
}
	private: System::Void bnVerBD_Click_1(System::Object^ sender, System::EventArgs^ e) {
		InterfazGrafica::MyForm MyForm;
		if (Usuario::BaseDatos) {
			this->pnlVercontraseñas->Visible = true;
			this->pnlVerificar->Visible = false;
			this->pnlGenerar->Visible = false;

			String^ conecion = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=BaseDeDatos1;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(conecion);
			sqlConn->Open();

			String^ Query1 = "SELECT CorreoElecServicio AS 'Correo Electronico', ContraseñaServicio AS 'Contraseña', Servicio FROM TableContraseña WHERE ForeingKey=@d";
			SqlCommand^ command = gcnew SqlCommand(Query1, sqlConn);
			command->Parameters->AddWithValue("@d", Usuario::id);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

			DataSet^ dataSet = gcnew DataSet();


			adapter->Fill(dataSet, "TableData");


			datagv1->DataSource = dataSet->Tables["TableData"];

			sqlConn->Close();
		}
		else {
			MessageBox::Show("Esta caracteristica solo funciona con una Base de Datos conectada", "Error", MessageBoxButtons::OK);
		}
	}
private: System::Void btGenerar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txbConGenerada->Text = securePass(int(this->longCaracteres->Value));
}
private: System::Void btnGuardarServ_Click_1(System::Object^ sender, System::EventArgs^ e) {
	InterfazGrafica::MyForm MyForm;
	if (Usuario::BaseDatos) {
		String^ correoservicio = this->tbGuardarEmail->Text;
		String^ contraseñaservicio = this->tbGuardarCont->Text;
		String^ servicio = this->tbGuardarServicio->Text;
		if (correoservicio->Length == 0 || contraseñaservicio->Length == 0 || servicio->Length == 0) {
			MessageBox::Show("Asegurese de no dejar ningun campo en blanco antes de guardar su contraseña!", "Error", MessageBoxButtons::OK);
			return;
		}

		try {

			String^ conecion = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=BaseDeDatos1;Integrated Security=True";
			SqlConnection sqlConn(conecion);
			sqlConn.Open();
			String^ Query1 = "Insert into TableContraseña values(@a,@b,@c,@d)";
			SqlCommand comando(Query1, % sqlConn);
			comando.Parameters->AddWithValue("@a", correoservicio);
			comando.Parameters->AddWithValue("@b", contraseñaservicio);
			comando.Parameters->AddWithValue("@c", servicio);
			comando.Parameters->AddWithValue("@d", Usuario::id);


			SqlDataReader^ iniciar = comando.ExecuteReader();


			MessageBox::Show("Guardado Correcto", "Done", MessageBoxButtons::OK);
			this->txbConGenerada->Text = "";
			this->tbGuardarCont->Text = "";
			this->tbGuardarEmail->Text = "";
			this->tbGuardarServicio->Text = "";
		}
		catch (Exception^ e) {
			MessageBox::Show("No se pudo Guardar la contraseña", "Error", MessageBoxButtons::OK);
		}
	}
	else {
		MessageBox::Show("Esta caracteristica solo funciona con una Base de Datos conectada", "Error", MessageBoxButtons::OK);
	}
}
};

}


