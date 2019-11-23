/* Transmisión de Direcciones
// enviar variables hacia una función pero de tipo puntero

Ejemplo: Intercambiar el valor de 2 varibales. */

#include <iostream>
using namespace std;

void intercambio(float *, float *); // prototipo

int main(){
    float num1 = 20.8, num2 = 6.78;

    cout<<"Primer numero: "<<num1<<endl;
    cout<<"Segundo numero: "<<num2<<endl;

    // le pasamos como parametros la direccion donde estan almacenados los numeros
    intercambio(&num1, &num2);

    cout<<"\n\nDespues del intercambio: \n\n";

    cout<<"El nuevo valor de num1: "<<num1<<endl;
    cout<<"El nuevo valor de num2: "<<num2<<endl;

    return 0;
}

// se debe de poner asterisco al inicio cuando los parametros de la función son enteros
void intercambio(float *dirNm1, float *dirNm2){ // num1 = 4, num2 = 2
    float aux;

    // intercambiar los valores de las variables
    aux = *dirNm1;     //aux=4
    *dirNm1 = *dirNm2; //num1=2
    *dirNm2 = aux;     //num2=4
}

