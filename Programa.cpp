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

//Libreria de fstream
//JOSE G. CENTENO
void registro() {
	Usuario^ usuario = nullptr;
	auto reloj = chrono::system_clock::now();
	time_t horaActual = chrono::system_clock::to_time_t(reloj);
	ofstream MyFile("Acesso.txt", std::ios::app);
	MyFile << "" <<endl;
	MyFile << "Accedió al sistema el usuario #" << usuario->id << " en " << ctime(&horaActual);
	MyFile.close();
}

//Cerrar el programa
void Despedida() {
	bool conectado = true;
	if (conectado) {
		MessageBox::Show("Adios!", "SecurePass", MessageBoxButtons::OK);
	}
}

int main() {

	//Se empieza a ejecutar la aplicacion.
	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	InterfazGrafica::MyForm  MyForm;
	InterfazGrafica::MenuForm MenuForm;
	InterfazGrafica::MyForm1 MyForm1;
	Usuario^ usuario = nullptr;
    


	//se hace un loop infinito hasta que no se rompa
	while (true) {
		MyForm.cambiarRegistro = false;
		//Abre el LOGIN
		MyForm.ShowDialog();

		//Abre la ventana de Registro
		if (MyForm.cambiarRegistro) {
			MyForm1.ShowDialog();
			
			if (MyForm1.cambiarLogin) {
				continue;
			}
			else {
				//Cierre del programa
				usuario = MyForm.usuario;
				
				break;
			}


		}
		else {
			//Cierre del programa
			usuario = MyForm.usuario;

			break;
		}
		
		if (MyForm1.cambiarLogin == false) {
			usuario = MyForm.usuario;
			break;
		}

	}
	//Inicio de Seccion o uso de la app sin Base de Datos
	if (usuario != nullptr || Usuario::BaseDatos==false) {
		Usuario::id = usuario->id;
	
		//Si se detecta una base de dato
		if (Usuario::BaseDatos) {
			MessageBox::Show("Iniciastes Seccion con " + usuario->Nombre, "SecurePass", MessageBoxButtons::OK);
			registro();
			MenuForm.ShowDialog();
			Despedida();
		}
		else{ 
			//Si no se detecta una base de dato
			MenuForm.ShowDialog();
			Despedida();
		}
	}
	else {
		//Cuando se cierra la aplicacion
		MessageBox::Show("Inicio de sección Cancelado", "SecurePass", MessageBoxButtons::OK);
	}
	return 0;
}


