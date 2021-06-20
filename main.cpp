#include <iostream>

using namespace std;

//4. Se ingresa un entero por teclado. Se desea determinar si el
// número ingresado es primo o no. Utilice bucles "while".

int main() {

    int numero, intentos, cont;
    cout << "Ingrese un numero entero" << endl;
    cin >> numero;

    intentos = 1;
    cont = 0;
    while (intentos <= numero) {
        if (numero % intentos == 0) {
            if (cont == 3) {
                break;
            }
            cont++;
        }
        intentos++;
    }

    if (cont == 2) {
        cout << "Primo" << numero;
    } else {
        cout << "No primo" << numero;
    }

    return 0;
}