/* ingresar un numero del 1 al 10 y que se imprima su tabla de multiplicar */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int numero;

  do{
    cout<<"Ingrese un numero del 1 al 10: "; 
    cin>>numero;
  }while((numero<0)||(numero>10));

  for(int i=1; i<=20; i++){
    cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
  }
  system("pause");
  
  return 0;
}