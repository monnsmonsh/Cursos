//
//Entrada de Datos
//


//Entrada de datos
//Ejercicio 4
//--Realiza un programa que ralice la exprecion algebraica 

#include<iostream>

using namespace std;// estandar de c++ para flujos de entrada y salida sencillos

int main() {
    float a, b, c, d, e, f, resultado = 0;

    cout << "\n El siguiente programa resuleve la siguiente operacion :(a + (b / c)) / (d + (e / f)) ";

    cout << "\nDigite el valor de a : ";cin >> a;
    cout << "Digite el valor de b : ";cin >> b;
    cout << "Digite el valor de c : ";cin >> c;
    cout << "Digite el valor de d : ";cin >> d;
    cout << "Digite el valor de e : ";cin >> e;
    cout << "Digite el valor de f:";cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));
    cout.precision(4);//se usa para controlar los numeros mostrados despues del punto decimal en float

    cout << "\nEl resultado es:" << resultado << endl;
    return 0;
}