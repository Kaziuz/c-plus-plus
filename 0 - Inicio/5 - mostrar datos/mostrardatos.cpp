/*
    Pedir estos datos y mostrarlos ne pantalla:
        edad: dato entero
        sexo: dato caracter
        altura: dato real
*/

#include<iostream>

using namespace std;

int main() {
    int edad;
    char sexo[10]; // guardo diez espacios
    float altura;

    cout<<"Ingrese su edad: "; cin>>edad;
    cout<<"Ingrese su sexo: "; cin>>sexo;
    cout<<"\nIngrese su altura en metros: "; cin>>altura;

    // mostramos los datos en pantalla
    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura en metros: "<<altura<<endl;

    return 0;
}
