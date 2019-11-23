/* Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas.
  postrarla en pantalla 
*/

#include <iostream>

using namespace std;

int main() {
  int numeros[100][100], filas, columnas;

  cout<<"Digite el número de filas: "; cin>>filas;
  cout<<"Digite el número de columnas: "; cin>>columnas;

  // pidiendo los indices de las filas y las columnas
  for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++) {
      cout<<"Digite un número: ";
      cin>>numeros[i][j];
    }
  }

  // mostrando la matríz
  for(int i=0; i<filas; i++) {
    for(int j=0; j<columnas; j++) {
      cout<<numeros[i][j];
    }
    cout<<"\n";
  }

  return 0;
}