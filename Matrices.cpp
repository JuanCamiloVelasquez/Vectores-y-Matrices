#include <iostream>
using namespace std;

int main() {

int matriz[3][3];

// Ingresar los datos
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {

        cout << "Ingrese un numero: ";
        cin >> matriz[i][j];

    }
}

// Mostrar la matriz
cout << "\nLa matriz es:" << endl;

for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {

        cout << matriz[i][j] << " ";

    }

    cout << endl;
}

return 0;
}