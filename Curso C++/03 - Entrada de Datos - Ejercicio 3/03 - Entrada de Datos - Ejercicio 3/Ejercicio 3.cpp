//
//Entrada de Datos
//


//Entrada de datos
//Ejercicio 3
//--Realiza un programa que te pida datos personales nombre, edad, sexo, altura y peso

#include<iostream>

using namespace std;
int main() {

    //Declaramos variables
    char nombre[27];
    int edad;
    char sexo[10];//declaramos el maximo de caracteres permitidos
    float altura;
    float peso;

    cout << "¿Cual es tu nombre?"; cin >> nombre;
    cout << "¿Cual es tu edad?"; cin >> edad;
    cout << "¿Cual es tu sexo?"; cin >> sexo;
    cout << "¿Cual es tu altura?";cin >> altura;
    cout << "¿Cual es tu peso en KG?";cin >> altura;



    cout << "\nHola: " << nombre << " tu edad es" << edad << " eres " << sexo << " mides " << altura << " y pesas " << peso << endl;

    return 0;
}