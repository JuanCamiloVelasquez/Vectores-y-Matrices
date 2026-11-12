#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    float nota;
};

int main() {

    Persona p;

    cout << "Ingrese su nombre: ";
    cin >> p.nombre;

    cout << "Ingrese su edad: ";
    cin >> p.edad;

    cout << "Ingrese su nota: ";
    cin >> p.nota;

    cout << "\nDatos de la persona" << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Nota: " << p.nota << endl;

    return 0;
}