 /*
  Programa que lee la entrada de numeros y muestra esos numeros asociados a un indice de un vector
 */

#include<iostream>

using namespace std;

int main(){
  int numeros[100], n;

  cout<<"Digite el número de elementos que va a tener el arreglo: ";
  cin>>n;

  for(int i=0; i<n; i++){
    cout<<"Digite un número: ";
    cin>>numeros[i]; // Guardando elementos en el vector
  }

  // Ahora, vamos a mostrar los elementos con sus indices asociados
  for(int i=0; i<n; i++){
    cout<<i<<" -> "<<numeros[i]<<endl;
  }

  return 0;
}