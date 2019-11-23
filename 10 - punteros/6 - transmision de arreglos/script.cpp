/* transmision de arreglos

Ejemplo: Hallar el máximo elemento de un arreglo */

#include <iostream>
using namespace std;

int hallarMax(int *, int);


int main(){
    const int nElem = 5;
    int numeros[nElem] = {3, 5, 1, 2, 3};

    // enviamos la primera posición del arreglo y ademas el número de elementos
    cout<<"El mayor elemento es: "<<hallarMax(&numeros[0], nElem);

    return 0;
}

int hallarMax(int *dirVec, int nElementos){
    int max = 0;

    // compruebo aqui cual es el mayor numero del array
    for(int i=0; i<nElementos; i++){
        if(*(dirVec+i)>max){ // obtenemos el valor del array
            max = *(dirVec+i);
        }
    }

    return max;
}