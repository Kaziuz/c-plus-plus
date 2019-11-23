/*
  6. Escriba un programa que solicite la edad e indique si su edad esta en el rango de 
  [18 - 25] años
*/

#include<iostream>
using namespace std;

int main(){
  int edad;

  cout<<"Ingrese su edad: ";
  cin>>edad;

  if((edad>=18)&&(edad<=25)){
    cout<<"\nUsted tiene entre 18 y 25 años";
  } else {
    cout<<"\nusted es un niño aun y ya comienza a ser adulto";
  }
  
  return 0;
}
