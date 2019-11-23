/*
    paso de parametros tipo vector

    ASI SE DEFINE UNA FUNCIÓN QUE VA A RECIBIR PARAMETROS DE TIPO VECTOR:
        void nombreFunction(tipo nombreArreglo[], int tamañoArreglo)

    PARA LLAMAR A LA FUNCTION
        nombreFunction(nombreArreglo, tamañoArreglo)
*/

#include <iostream>
using namespace std;

void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main(){
    const int TAM = 5;
    int vec[TAM] = {1, 2, 3, 4, 5};

    muestra(vec, TAM);
    cuadrado(vec, TAM);
    muestra(vec, TAM);

    return 0;
}

void cuadrado(int vec[], int tam){
    for(int i=0; i<tam; i++){
        vec[i] *= vec[i];
    }
}

void muestra(int vec[], int tam){
    for(int i=0; i<tam; i++){
        cout<<"el valor es: "<<vec[i]<<" "<<endl;
    }
    cout<<endl;
}

