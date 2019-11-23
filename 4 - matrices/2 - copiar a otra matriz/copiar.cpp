/* Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz */

 #include <iostream>

 using namespace std;

 int main() {
     int numeros[2][2] = {{1,2}, {3,4}};
     int matriz2[2][2];

    // la matriz 2 inicialmente tiene estos valores
     for(int i=0; i<2; i++){
         for(int j=0; j<2; j++){
            cout<<matriz2[i][j];
         }
         cout<<"\n";
     }

    // pasando el contenido de numeros hacia matriz2
     for(int i=0; i<2; i++){
         for(int j=0; j<2; j++){
             matriz2[i][j] = numeros[i][j];
         }
     }

     // Ahora los valores de la matriz 2 son
     for(int i=0; i<2; i++){
         for(int j=0; j<2; j++){
            cout<<matriz2[i][j];
         }
         cout<<"\n";
     }

    return 0;
 }