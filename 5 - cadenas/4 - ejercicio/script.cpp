// pedir al usuario una cadena de caracteres
// almacenarla en un array y copiar
// todo el contenido hacia orto array de caracteres

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char textIngresado[10000];
    char otroArray[500];

    cout<<"digite algun texto o palabra: ";

    cin.getline(textIngresado, 10000, '\n');

    cout<<"el texto ingresado es: "<<textIngresado<<endl;

    strcpy(otroArray, textIngresado);

    cout<<"\n en el otro array tenemos: "<<otroArray<<endl;

    return 0;
}