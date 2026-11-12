#include <iostream>
#include <string>
using namespace std;

void producto() {

    string nombre;
    int cantidad;
    float precio;

    cout << "Ingrese el nombre del producto: ";
    cin >> nombre;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    cout << "Ingrese el precio: ";
    cin >> precio;

    cout << "\n--- DATOS DEL PRODUCTO ---" << endl;
    cout << "Producto: " << nombre << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Precio: $" << precio << endl;
}

int main() {

    producto();

    return 0;
}
