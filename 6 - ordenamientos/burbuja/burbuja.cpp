// Metodo burbuja
// es el mas ineficiente porque hay que dar varias vueltas para ordenar la lista

#include <iostream>

using namespace std;

int main(){
    int numeros[] = { 4,1,2,3,5 };
    int aux;

    cout<<"Orden original: ";
    for(int i=0; i<5; i++){
        cout<<numeros[i];
    }

    // Algoritmo metodo burbuja
    for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
        // si numero actual es mayor a numero siguiente
        if( numeros[j] > numeros[j+1] ){
            aux = numeros[j];
            numeros[j] = numeros[j+1]; // lo corre para la derecha
            numeros[j+1] = aux;
        }
      }
    }

    cout<<""<<endl;

    cout<<"\n Orden ascendente: ";
    for(int i=0; i<5; i++){
        cout<<numeros[i];
    }

    return 0;
}