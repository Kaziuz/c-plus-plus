// pedir al usuario que escriba un texto, si es mayor a 10 mostrarlo sino no hacer nada

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char nombre[50];
    int longitud;
    cout<<"Porfavor ingrese algun texto: ";
    cin.getline(nombre, 50, '\n');
    longitud = strlen(nombre);
    
    if(longitud > 10) {
     cout<<nombre<<endl;
    }

    return 0;
}