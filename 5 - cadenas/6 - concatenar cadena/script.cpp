// Añadir o concatenar una cadena con otra - Función strcat()

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo";
    char cad3[50];

    strcpy(cad3,cad1); // cad3 = "esto es una cadena"

    strcat(cad3,cad2);

    cout<<"la cadena quedo asi: "<<cad3<<endl;
    return 0;
}