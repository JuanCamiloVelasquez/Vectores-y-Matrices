#include <iostream>
using namespace std;

int main() {

    int numeros[5];

    // Ingresar los numeros
    for(int i = 0; i < 5; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    // Mostrar los numeros
    cout << "\nLos numeros ingresados son:" << endl;

    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << endl;
    }

    return 0;
}