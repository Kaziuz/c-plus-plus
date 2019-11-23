// Busqueda secuencial en un array

// la idea es saber si un numero que tenemos almacenado esta en un array
//a[5] = {3,4,2,1,5}; dato = 4;

#include <iostream>

using namespace std;

int main(){
    int a[] = {3,4,2,1,5};
    int dato, i;
    char band = 'F';

    dato = 64;

    // busqueda secuencial
    i=0;
    while((band == 'F') && (i<5)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"El número a buscar no existe en el arreglo";
    } else if (band == 'V'){
        cout<<"El número a sido encontrado en la pos: "<<i-1<<endl;
    }

    return 0;
}