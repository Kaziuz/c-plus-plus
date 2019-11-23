// ordenamiento por insercción

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {4, 2, 3, 1, 5};
    int pos, aux;

    for(int i=0; i<5; i++){
        pos = i;
        aux = numeros[i];

        // si en el array no hay nada a la izquierda y
        // numero en la pos izquierda del actual es mayor al auxial cambio
        while((pos > 0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
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