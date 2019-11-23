// operaciones aritmeticas
/* 1. Escribe un programa que lea la entrada estándar de dos números y muestre en la salida
su suma, resta, multiplicacion y división. */

#include<iostream>
using namespace std;

int main()
{
    int numero1, numero2, sumar = 0, restar = 0, multiplicar = 0, dividir = 0;

    cout<<"Ingrese dos numeros\n";

    cout<<"Ingrese el primer número:"; cin>>numero1;
    cout<<"Ingrese el segundo número: "; cin>>numero2;

    cout<<"los numeros ingresados fuerón:"<<numero1<<" y "<<numero2<<"\n";

    sumar = numero1 + numero2;
    restar = numero1 - numero2;
    multiplicar = numero1 * numero2;
    dividir = numero1 / numero2;

    cout<<"\nLa suma de los números es: "<<sumar;
    cout<<"\nLa resta de los números es: "<<restar;
    cout<<"\nLa multiplicación de los números es: "<<multiplicar;
    cout<<"\nLa división de los números es: "<<dividir;

    return 0;
}
