// templates functions
/* un template function se usa para globalizar las variables de entrada de una function, 
    es decir: si es un numero el que entra no sabemos si es entero o flotante
*/

#include <iostream>

using namespace std;

// prototipo de la functon
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){

    int num = -4;
    float num2 = 56.67;
    double num3 = -123.938474;

    mostrarAbs(num);
    mostrarAbs(num2);
    mostrarAbs(num3);

    return 0;
}



template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero < 0) {
        numero = numero * -1;
    }

    cout<<"\n El valor absoluto del numero es: "<<numero;
}