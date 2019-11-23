// determinar el mayor de dos numeros
#include <iostream>

using namespace std;

int main() {
  int num1, num2 = 0;

  cout<<"Ingrese un numero: "; cin>>num1;
  cout<<"Ingrese otro numero: "; cin>>num2;

  if (num1 == num2 ) {
   } else if(num1 > num2){
    cout<<"El primer numero es mayor al segundo";
  } else {
    cout<<"El segundo número es mayor al primero o ";
  }

  return 0;
}
