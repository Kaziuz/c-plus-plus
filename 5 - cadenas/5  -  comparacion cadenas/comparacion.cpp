// comparar cadenas - función strcmp()

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra1[] = "Hola";
    char palabra2[] = "Hola";

    // cuando digo que es 0 es que ambas cadenas son iguales
    if (strcmp(palabra1, palabra2) == 0) {
        cout<<"Amas cadenas son iguales"<<endl;
    }

    return 0;
}