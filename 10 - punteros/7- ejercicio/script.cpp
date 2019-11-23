/* Pedir al usuario N números, almacenerlos en un arreglo dínamico.
luego ordenaor los numeros en orden ascendente y mostrarlos en pantalla.
NOta: usar cualquier metodo de ordenamiento
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void ordenarArr(int *, int); // pasamos el indice 0 y el tamaño del array
void mostrarArreglo(int *, int);

int nElem, *elemento;

int main(){
    pedirDatos();
    ordenarArr(&elemento[0], nElem);
    mostrarArreglo(&elemento[0], nElem);
    delete[] elemento; 
    return 0;
}

void pedirDatos() {
    cout<<"Digite el numero de elemtnos del Arreglo: ";
    cin>>nElem;
    elemento = new int[nElem];
    for(int i=0; i<nElem; i++){
        cout<<"Digite un número["<<i<<"]: ";
        cin>>*(elemento+i);
    }
}

void ordenarArr(int *elemento, int nelemento) {
    int aux;
    // ordenamos con metodo burbuja
    for(int i=0; i<nelemento; i++){
        for(int j=0; j<nelemento-1; j++){
            if(*(elemento+j) > *(elemento+j+1)){ // sin punteros elemento[j] > elemento[j+1]
                aux = *(elemento+j);
                *(elemento+j) = *(elemento+j+1);
                *(elemento+j+1) = aux;
            }
        }
    }
}

void mostrarArreglo(int *elemento, int nElem){
    cout<<"\n\nEl array ordenado es: "<<endl;
    for(int i=0; i<nElem; i++){
        cout<<*(elemento+i)<<endl;
    }
}