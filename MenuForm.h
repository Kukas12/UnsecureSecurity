#pragma once
#include "Usuario.h"
#include <iostream>
#include <locale>
using namespace std;

int verificar(int largo, string contraseña) {
	int NumSeg=0;
	bool signo = false, mayus = false, minus = false, numero = false, repetida=true;
	for (char letra : contraseña) {

		if (isupper(letra)) {
			mayus = true;
		}
		if (islower(letra)) {
			minus = true;
		}
	}
	if (mayus) {
		NumSeg += 1;
	}
	if (minus){
		NumSeg += 1;
	}


	char arr[]{ 35,36,37,38,39,40,41,42,43,44,45,46,47 };
	for (int i = 0; i < contraseña.length()	; i++) {
		for (int y = 0; y < 13; y++) {
			if (contraseña[i] == arr[y]) {
				signo = true;
			}
		}
	}
	if (signo) {
		NumSeg += 1;
	}

	char arr2[]{ '1','2','3','4','5','6','7','8','9','0'};
	for (int i = 0; i < contraseña.length(); i++) {
		for (int y = 0; y < 10; y++) {
			if (contraseña[i] == arr2[y]) {
				numero = true;
			}
		}
	}
	if (numero) {
		NumSeg += 1;
	}

	if (contraseña.length() >= 12) {
		NumSeg += 1;
	}

	for (int i = 0; i < contraseña.length(); i++) {
		if (contraseña[0] != contraseña[i]) {
			repetida = false;
		}
	}


	if (repetida) {
		return 0;
	}
	else {
		return NumSeg;
	}

}





String^ securePass(int cantidad) {
	String^ contraseña;
	char* letras = new char[(cantidad+1)];
	for (int i = 0; i < cantidad; i++) {
		letras[i] = 35 + rand() % (126 - 35);
	}
	letras[cantidad] = '\0';
	contraseña = gcnew String(letras);
	delete[] letras;
	return contraseña;
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
	private: System::Windows::Forms::TextBox^ txbVerificacion;


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
	private: System::Windows::Forms::Button^ btSalir;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ pnlBienvenida;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ lblSeguridad;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label24;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->btContr = (gcnew System::Windows::Forms::Button());
			this->bnVerificar = (gcnew System::Windows::Forms::Button());
			this->bnVerBD = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txbConGenerada = (gcnew System::Windows::Forms::TextBox());
			this->pnlVercontraseñas = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->datagv1 = (gcnew System::Windows::Forms::DataGridView());
			this->pnlVerificar = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->lblSeguridad = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->BtnVerificar = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txbVerificacion = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlBienvenida = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
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
			this->btSalir = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pnlVercontraseñas->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagv1))->BeginInit();
			this->pnlVerificar->SuspendLayout();
			this->pnlBienvenida->SuspendLayout();
			this->pnlGenerar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->longCaracteres))->BeginInit();
			this->SuspendLayout();
			// 
			// btContr
			// 
			this->btContr->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btContr.BackgroundImage")));
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
			this->txbConGenerada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->pnlVercontraseñas->BackColor = System::Drawing::Color::Transparent;
			this->pnlVercontraseñas->Controls->Add(this->label4);
			this->pnlVercontraseñas->Controls->Add(this->datagv1);
			this->pnlVercontraseñas->Location = System::Drawing::Point(207, 22);
			this->pnlVercontraseñas->Name = L"pnlVercontraseñas";
			this->pnlVercontraseñas->Size = System::Drawing::Size(751, 625);
			this->pnlVercontraseñas->TabIndex = 7;
			this->pnlVercontraseñas->Visible = false;
			this->pnlVercontraseñas->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuForm::panel1_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Russo One", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(410, 39);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Contraseñas Guardadas:";
			// 
			// datagv1
			// 
			this->datagv1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->datagv1->BackgroundColor = System::Drawing::Color::Silver;
			this->datagv1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagv1->Location = System::Drawing::Point(19, 81);
			this->datagv1->Name = L"datagv1";
			this->datagv1->ReadOnly = true;
			this->datagv1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->datagv1->Size = System::Drawing::Size(701, 524);
			this->datagv1->TabIndex = 0;
			// 
			// pnlVerificar
			// 
			this->pnlVerificar->BackColor = System::Drawing::Color::Transparent;
			this->pnlVerificar->Controls->Add(this->label23);
			this->pnlVerificar->Controls->Add(this->label22);
			this->pnlVerificar->Controls->Add(this->label21);
			this->pnlVerificar->Controls->Add(this->label20);
			this->pnlVerificar->Controls->Add(this->label19);
			this->pnlVerificar->Controls->Add(this->label18);
			this->pnlVerificar->Controls->Add(this->lblSeguridad);
			this->pnlVerificar->Controls->Add(this->label17);
			this->pnlVerificar->Controls->Add(this->BtnVerificar);
			this->pnlVerificar->Controls->Add(this->label10);
			this->pnlVerificar->Controls->Add(this->txbVerificacion);
			this->pnlVerificar->Controls->Add(this->label3);
			this->pnlVerificar->Location = System::Drawing::Point(204, 12);
			this->pnlVerificar->Name = L"pnlVerificar";
			this->pnlVerificar->Size = System::Drawing::Size(751, 625);
			this->pnlVerificar->TabIndex = 8;
			this->pnlVerificar->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Russo One", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(29, 354);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(242, 25);
			this->label23->TabIndex = 11;
			this->label23->Text = L"Niveles de Seguridad:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(57, 525);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(305, 25);
			this->label22->TabIndex = 10;
			this->label22->Text = L"4 - Extremadamente Segura";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(57, 491);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(173, 25);
			this->label21->TabIndex = 9;
			this->label21->Text = L"3 - Muy Segura";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(57, 455);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(122, 25);
			this->label20->TabIndex = 8;
			this->label20->Text = L"2 - Segura";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(57, 425);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(182, 25);
			this->label19->TabIndex = 7;
			this->label19->Text = L"1 - Poco Segura";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(57, 389);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(190, 25);
			this->label18->TabIndex = 6;
			this->label18->Text = L"0 - No es Segura";
			// 
			// lblSeguridad
			// 
			this->lblSeguridad->AutoSize = true;
			this->lblSeguridad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSeguridad->Location = System::Drawing::Point(326, 263);
			this->lblSeguridad->Name = L"lblSeguridad";
			this->lblSeguridad->Size = System::Drawing::Size(186, 55);
			this->lblSeguridad->TabIndex = 5;
			this->lblSeguridad->Text = L"label18";
			this->lblSeguridad->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Russo One", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(144, 212);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(435, 35);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Su contraseña es de nivel: ";
			// 
			// BtnVerificar
			// 
			this->BtnVerificar->Location = System::Drawing::Point(561, 125);
			this->BtnVerificar->Name = L"BtnVerificar";
			this->BtnVerificar->Size = System::Drawing::Size(137, 38);
			this->BtnVerificar->TabIndex = 3;
			this->BtnVerificar->Text = L"Verificar";
			this->BtnVerificar->UseVisualStyleBackColor = true;
			this->BtnVerificar->Click += gcnew System::EventHandler(this, &MenuForm::BtnVerificar_Click);
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
			// txbVerificacion
			// 
			this->txbVerificacion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txbVerificacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txbVerificacion->Location = System::Drawing::Point(29, 126);
			this->txbVerificacion->Name = L"txbVerificacion";
			this->txbVerificacion->Size = System::Drawing::Size(506, 38);
			this->txbVerificacion->TabIndex = 1;
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
			// pnlBienvenida
			// 
			this->pnlBienvenida->BackColor = System::Drawing::Color::Transparent;
			this->pnlBienvenida->Controls->Add(this->label12);
			this->pnlBienvenida->Controls->Add(this->label11);
			this->pnlBienvenida->Location = System::Drawing::Point(207, 19);
			this->pnlBienvenida->Name = L"pnlBienvenida";
			this->pnlBienvenida->Size = System::Drawing::Size(751, 625);
			this->pnlBienvenida->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(105, 313);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(574, 44);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Elija lo que desee hacer para empezar!";
			this->label12->Click += gcnew System::EventHandler(this, &MenuForm::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Russo One", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(287, 264);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(197, 39);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Bienvenido";
			// 
			// pnlGenerar
			// 
			this->pnlGenerar->BackColor = System::Drawing::Color::Transparent;
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
			this->pnlGenerar->Location = System::Drawing::Point(204, 9);
			this->pnlGenerar->Name = L"pnlGenerar";
			this->pnlGenerar->Size = System::Drawing::Size(751, 625);
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
			this->btGenerar->BackColor = System::Drawing::Color::Transparent;
			this->btGenerar->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btGenerar->Location = System::Drawing::Point(12, 183);
			this->btGenerar->Name = L"btGenerar";
			this->btGenerar->Size = System::Drawing::Size(175, 43);
			this->btGenerar->TabIndex = 15;
			this->btGenerar->Text = L"Generar Contraseña";
			this->btGenerar->UseVisualStyleBackColor = false;
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
			this->tbGuardarServicio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->tbGuardarEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbGuardarEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbGuardarEmail->Location = System::Drawing::Point(11, 421);
			this->tbGuardarEmail->Name = L"tbGuardarEmail";
			this->tbGuardarEmail->Size = System::Drawing::Size(244, 38);
			this->tbGuardarEmail->TabIndex = 9;
			// 
			// tbGuardarCont
			// 
			this->tbGuardarCont->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			// btSalir
			// 
			this->btSalir->Location = System::Drawing::Point(33, 520);
			this->btSalir->Name = L"btSalir";
			this->btSalir->Size = System::Drawing::Size(152, 85);
			this->btSalir->TabIndex = 21;
			this->btSalir->Text = L"Salir";
			this->btSalir->UseVisualStyleBackColor = true;
			this->btSalir->Click += gcnew System::EventHandler(this, &MenuForm::btSalir_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(29, 432);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(113, 20);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Versión Beta";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(29, 452);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 20);
			this->label14->TabIndex = 24;
			this->label14->Text = L"Por:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(29, 471);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(144, 20);
			this->label15->TabIndex = 25;
			this->label15->Text = L"José G. Centeno";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(29, 491);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(130, 20);
			this->label16->TabIndex = 26;
			this->label16->Text = L"Yahir G. Quiles";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(29, 411);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(105, 20);
			this->label24->TabIndex = 27;
			this->label24->Text = L"SecurePass";
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(970, 656);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pnlGenerar);
			this->Controls->Add(this->pnlVerificar);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->pnlBienvenida);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->btSalir);
			this->Controls->Add(this->bnVerificar);
			this->Controls->Add(this->pnlVercontraseñas);
			this->Controls->Add(this->bnVerBD);
			this->Controls->Add(this->btContr);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MenuForm";
			this->Text = L"SecurePass Beta";
			this->pnlVercontraseñas->ResumeLayout(false);
			this->pnlVercontraseñas->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagv1))->EndInit();
			this->pnlVerificar->ResumeLayout(false);
			this->pnlVerificar->PerformLayout();
			this->pnlBienvenida->ResumeLayout(false);
			this->pnlBienvenida->PerformLayout();
			this->pnlGenerar->ResumeLayout(false);
			this->pnlGenerar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->longCaracteres))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

    private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
	private: System::Void bnVerificar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pnlBienvenida->Visible = false;
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
	this->pnlBienvenida->Visible = false;
	this->pnlVercontraseñas->Visible=false;
	this->pnlGenerar->Visible = true;
	this->pnlVerificar->Visible = false;
}
	private: System::Void bnVerBD_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		InterfazGrafica::MyForm MyForm;
		if (Usuario::BaseDatos) {
			this->pnlBienvenida->Visible = false;
			this->pnlVercontraseñas->Visible = true;
			this->pnlVerificar->Visible = false;
			this->pnlGenerar->Visible = false;

			String^ conecion = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=BaseDeDatos1;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(conecion);
			sqlConn->Open();

			String^ Query1 = "Select CorreoElecServicio AS 'Correo Electronico', ContraseñaServicio AS 'Contraseña', Servicio FROM TableContraseña WHERE ForeingKey=@d";
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
private: System::Void btSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnVerificar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ contraseña = this->txbVerificacion->Text;
	if (contraseña->Length == 0) {
		MessageBox::Show("Por favor, Introduzca una contraseña", "Error", MessageBoxButtons::OK);
		this->lblSeguridad->Visible = false;
		return;
	}
	int seguridad;

	//https://stackoverflow.com/questions/946813/c-cli-converting-from-systemstring-to-stdstring/946841#946841

	char cStr[50] = { 0 };
	if (contraseña->Length < sizeof(cStr))
		sprintf(cStr, "%s", contraseña);
	std::string contraseña2(cStr);
	int largo = contraseña->Length;

	seguridad=verificar(largo, contraseña2);
	if (contraseña2.length() < 6) {
		this->lblSeguridad->Text = "0";
	}else{

		switch (seguridad) {
		case 0:
			this->lblSeguridad->Text = "0";
			break;
		case 1:
			this->lblSeguridad->Text = "0";
			break;
		case 2:
			this->lblSeguridad->Text = "1";
			break;
		case 3:
			this->lblSeguridad->Text = "2";
			break;
		case 4:
			this->lblSeguridad->Text = "3";
			break;
		case 5:
			this->lblSeguridad->Text = "4";
			break;
		}
	}
	this->lblSeguridad->Visible = true;
}
};

}


