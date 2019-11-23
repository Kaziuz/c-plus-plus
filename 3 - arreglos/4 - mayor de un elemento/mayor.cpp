/* Desarrolle un programa que lea de la entrada un vector de enteros y determine el mayor elemento del vector */

#include<iostream>

using namespace std;

int main() {
  int numeros[100], n, mayor=0;

  cout<<"Digite el número de elementos del arreglo: ";
  cin>>n;

  for(int i=0; i<n; i++){
    cout<<"Digite un número: ";
    cin>>numeros[i];

    if(numeros[i] > mayor) {
      mayor = numeros[i];
    }
  }

  cout<<"EL número mayor es: "<<mayor<<endl;
  return 0;
}