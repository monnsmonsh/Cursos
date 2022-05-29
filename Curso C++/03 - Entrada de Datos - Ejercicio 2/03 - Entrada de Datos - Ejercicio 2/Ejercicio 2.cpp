//
//Entrada de Datos
//


//Entrada de datos
//Ejercicio 2 Calculadora

#include<iostream>

using namespace std;

int main() {

	//Declaramos variables
	float precio, iva, precioFinal;

	cout << "\nEste programa calcula el precio de un producto mas iva (16%)";

	cout << "\nDigite el precio del producto:";
	cin >> precio;//guardamos el dato en variable

	//Realizamos operaciones
	iva =precio *0.21;
	precioFinal = precio + iva;
	
	//Mostramos Resultados
	cout << "\nEl precio final es:" << precioFinal << endl;

	return 0;
}
