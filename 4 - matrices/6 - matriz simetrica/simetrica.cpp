/* Realice un programa que determine si una matriz es simétrica o no. 
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta */
/*
|8 1 3| |1 4 7|
|1 7 4| |2 5 8|
|3 4 9| |3 6 9|
*/

#include <iostream>
using namespace std;

int main(){
    int numeros[100][100], filas, columnas;
    char band = 'F';

    cout<<"Digite el número de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    if(filas == columnas){ // si la matriz es cuadrada
        for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                if(numeros[i][j] == numeros[j][i]){ // si la matriz ingresada es igual a su transpuesta
                    band = 'V';
                }
            }
        }
    }

    // mostramos el mensaje
    if(band == 'F') {
        cout<<"La matriz no es simetrica";
    } else {
        cout<<"La matriz es simetrica";
    }

    return 0;
}