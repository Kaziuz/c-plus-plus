/* Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados ṕor 2 y muestre el segundo arreglo */

#include <iostream>
using namespace std;

int main() {
  int numeros[] = {1,2,3,4,5};
  int newArr[5];

  for(int i=0; i<5; i++) {
    newArr[i] = numeros[i] * 2;
  }

  for(int i=0; i<5; i++) {
    cout<<"el nuevo array tiene: "<<newArr[i]<<" valor"<<endl;
  }

  return 0;
}