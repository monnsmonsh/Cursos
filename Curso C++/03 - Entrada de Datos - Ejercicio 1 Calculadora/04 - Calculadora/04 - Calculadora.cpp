//
//Entrada de Datos
//


//Entrada de datos//
///Ejercicio 1 Calculadora
#include<iostream>

using namespace std;

int main() {
    //Definimos Variables
    int n1, n2,
        suma = 0,
        resta = 0,
        multiplicacion = 0,
        division = 0;

    //Mandamos mensaje a consola
    cout << "Digite un numero entero :";cin >> n1;
    cout << "Digite otro numero entero:";cin >> n2;

    //Realizamos las operaciones
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 = n2;
    division = n1 / n2;

    //Mostramos los resultados en la consola
    cout << "\nLa suma es:" << suma << endl;
    cout << "La resta es:" << resta << endl;
    cout << "La multiplicacion es:" << multiplicacion << endl;
    cout << "La division es:" << division << endl;

    return 0;

}