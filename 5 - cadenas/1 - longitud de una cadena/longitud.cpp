// longitud de una cadena de caracteres - función strlen()

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char palabra[] = "hola";
    int longitud=0;

    // con strlen me doy cuenta del tamaño de una cadena
    longitud = strlen(palabra);

    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;


    return 0;
}