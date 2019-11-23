// copiar el contenido de una cadena a otra - funcion strcpy()

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre[] = "Alejandro";
    char nombre2[20];

    //strcpy(variabole donde vamos a almacenar, variable con el contenido que queremos copiar)
    strcpy(nombre2, nombre);   

    cout<<nombre2<<endl;
}