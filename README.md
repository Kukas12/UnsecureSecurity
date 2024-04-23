#include <iostream>
#include <locale>
using namespace std;

void verificar() {
    string contrasena;
    cin >> contrasena;
    int cantidad = contrasena.length();
    for (char letra : contrasena) {

        if (isupper(letra)) {
            cout << "mayuscula ";
        }
        else if (islower(letra)) {
            cout << "minuscula ";
        }
    }
    cout << endl;
    if (cantidad >= 12 and cantidad <= 16) {
        cout << "La contrasena tiene " << contrasena.length() << " caracteres"<<endl;
    }
    else  if (cantidad < 12) {
        cout << "La contrasena tiene menos de 12 caracteres"<<endl;
    }
    else if (cantidad > 16) {
        cout << "La contrasena tiene mas de 16 caracteres"<<endl;
    }
}

int main()
{
    cout << "*Bienvenido a PassVerificator*" << endl;
    cout << "Este programa se encarga de verificar que tan segura es tu contrasena" << endl;
    cout << "Entre su contrasena: ";
    verificar();
}
