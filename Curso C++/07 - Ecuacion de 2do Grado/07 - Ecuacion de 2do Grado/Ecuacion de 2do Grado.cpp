//
//Entrada de Datos
//


//Rxpreciones
//Ejercicio 
//--Realiza un programa que calcule la hipotenusa en c++

#include<iostream>
#include<math.h>//nos permite realizar raiz cuadra

using namespace std;// estandar de c++ para flujos de entrada y salida sencillos

int main() {
    float a,
        b,
        c,
        resultado1 = 0,
        resultado2 = 0;

    cout << "Cual es el valor de a:";cin >> a;
    cout << "Cual es el valor de b:";cin >> b;
    cout << "Cual es el valor de c:";cin >> c;

    //realizamos ecuacion de 2do grado
    resultado1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
    resultado2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);

    cout << "\nEl resultado numero 1 es: " << resultado1 << endl;
    cout << "El resultadon umero 2 es: " << resultado2 << endl;

        return 0;
}