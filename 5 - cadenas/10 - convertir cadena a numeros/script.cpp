// transformar una cadena a numeros - funcion atoi() y atof()

// atoi convierte una cadena de caracteres de numeros enteros "123" -> 123
// atof conviertte una cadena que contienen numeros flotantes 

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    char cad1[] = "123";
    char cad2[] = "123.56";

    int numero1;
    float numero2;

    numero1 = atoi(cad1);
    numero2 = atof(cad2);

    cout<<numero1<<endl;
    cout<<numero2<<endl;



    return 0;
}