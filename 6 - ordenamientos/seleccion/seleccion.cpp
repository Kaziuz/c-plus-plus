// algoritmo de ordenamiento por selección

#include <iostream>

using namespace std;

int main() {
    int numeros[] = {3, 2, 1, 5, 4};
    int i, j, aux, min;

    for(i=0; i<5; i++){
        // suponemos que inicialmente en la posición 0 esta el numero minimo
        min = i;
        for (j=i+1; j<5; j++){
            // encontramos el número menor del arreglo
            if(numeros[j] < numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout<<"orden ascendente: ";
    for(int i=0; i<5; i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"\n orden descendente: ";
    for(int i=4; i>=0; i--){
        cout<<numeros[i]<<" ";
    }

    return 0;
}