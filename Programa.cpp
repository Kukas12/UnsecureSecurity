#include "MyForm.h"
#include "RegisterForm.h"
#include "MenuForm.h"
#include "Usuario.h"
#include <iostream>
#include <fstream>
#include<chrono>
#include<ctime>


using namespace System::Windows::Forms;
using namespace std;

void registro() {
	Usuario^ usuario = nullptr;
	auto reloj = chrono::system_clock::now();
	time_t horaActual = chrono::system_clock::to_time_t(reloj);
	ofstream MyFile("Acesso.txt", std::ios::app);
	MyFile << "Accedió al sistema el usuario " << usuario->id << " en " << ctime(&horaActual);
	MyFile.close();
}

void Despedida() {
	bool conectado = true;
	if (conectado) {
		MessageBox::Show("Adios!", "SecurePass", MessageBoxButtons::OK);
	}
}

int main() {


	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	InterfazGrafica::MyForm  MyForm;

	Usuario^ usuario = nullptr;
    



	while (true) {
		InterfazGrafica::MyForm MyForm;
		MyForm.ShowDialog();

		if (MyForm.cambiarRegistro) {
			InterfazGrafica::MyForm1 MyForm1;
			MyForm1.ShowDialog();
			
			if (MyForm1.cambiarLogin) {
				continue;
			}
			else {
				usuario = MyForm.usuario;
				
				break;
			}


		}
		
		InterfazGrafica::MyForm1 MyForm1;
		   if (MyForm1.cambiarLogin == false) {
			   usuario = MyForm.usuario;
			   break;
		}

	}
	if (usuario != nullptr || Usuario::BaseDatos==false) {
		Usuario::id = usuario->id;
	
		if (Usuario::BaseDatos) {
			MessageBox::Show("Iniciastes Seccion con " + usuario->Nombre, "SecurePass", MessageBoxButtons::OK);
			registro();
			InterfazGrafica::MenuForm MenuForm;
			MenuForm.ShowDialog();
			Despedida();
		}
		else{ 
			InterfazGrafica::MenuForm MenuForm;
			MenuForm.ShowDialog();
			Despedida();
		}
	}
	else {
		MessageBox::Show("Inicio de sección Cancelado", "SecurePass", MessageBoxButtons::OK);
	}
	return 0;
}


