//
//Entrada de Datos
//


//Rxpreciones
//Ejercicio 
//--Realiza un programa que calcule la hipotenusa en c++

#include<iostream>

using namespace std;// estandar de c++ para flujos de entrada y salida sencillos


int main() {
    //def variables
    float cateto1,
        cateto2,
        hipotenusa;

    cout << "Este programa calcula la hipotenusa de un triangulo";

    cout << "\nDigite el valor del cateto 1:";
    cin >> cateto1;
    cout << "Digite el valor del cateto 2:";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout.precision(4);//def el numero de decimales
    cout << "\nLa hipotenusa del triangulo es:" << hipotenusa << endl;


    return 0;
}