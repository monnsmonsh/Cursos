//
//Entrada de Datos
//


//Entrada de datos
//Ejercicio 4
//--Realiza un programa que ralice la exprecion algebraica 

#include<iostream>

using namespace std;// estandar de c++ para flujos de entrada y salida sencillos

int main() {
    //Declaramos var
    int x, y, aux;

    cout << "Digite el valor de x : ";cin >> x;
    cout << "Digite el valor dey : ";cin >> y;
        
    //cambia el valor x por el de y 
    /*
    x=5
    y=10
    */

    //cambia el valor y por el de x
    aux = x;
    x = y;
    y = aux;


    cout << "\nEl nuevo valor de x es: " << x << endl;
    cout << "El nuevo valor de y es: " << y;

    return 0;

}