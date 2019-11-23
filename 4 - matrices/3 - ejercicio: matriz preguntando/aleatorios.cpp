/*Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de números aleatorios
copiar el contenido a otra matriz y por último mostrarla e pantalla*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  int numeros[100][100], filas, columnas, random;

  // initialize random 
  srand(time(NULL));

  cout<<"Digite el número de filas: "; cin>>filas;
  cout<<"Digite el número de columnas: "; cin>>columnas;

  // lleno la matriz con numeros aleatorios
  for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++) {
      random = rand() % 100;
      numeros[i][j] = random;
    }
  }

  // mostrando la matríz
  for(int i=0; i<filas; i++) {
    for(int j=0; j<columnas; j++) {
      cout<<numeros[i][j]<<",";
    }
    cout<<"\n";
  }

  return 0;
}
