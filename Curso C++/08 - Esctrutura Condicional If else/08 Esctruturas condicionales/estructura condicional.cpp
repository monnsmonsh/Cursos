//
//Estructura condicional
//

#include<iostream>

using namespace std;// estandar de c++ para flujos de entrada y salida sencillos

int main() {
    int numero, 
        dato = 5;

    cout << "Digite un numero:";cin >> numero;

    //
    if (numero != dato) {// si numero es diferente de dato entonces...
        cout << "El numero no es 5";
    }
    else {// si numero es igual de dato entonces...
        cout << "El numero es5";
    }

    return 0;
}
    
    