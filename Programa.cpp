#include "MyForm.h"
#include "RegisterForm.h"
#include "MenuForm.h"
#include "Usuario.h"


using namespace System::Windows::Forms;



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

	if (usuario != nullptr) {
		Usuario::id = usuario->id;
		MessageBox::Show("Iniciastes Seccion con " + usuario->Nombre, "SecurePass", MessageBoxButtons::OK);
		InterfazGrafica::MenuForm MenuForm;
		MenuForm.ShowDialog();
		bool conectado = true;
		if (conectado) {
			MessageBox::Show("Adios!", "SecurePass", MessageBoxButtons::OK);
		}
	}
	else {
		MessageBox::Show("Inicio de sección Cancelado", "SecurePass", MessageBoxButtons::OK);
	}
	return 0;
}


