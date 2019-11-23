// sentencia if else

#include <iostream>

using namespace std;

int main() {
  int numero, dato = 5;

  cout<<"Digite un numero: ";
  cin>>numero;

  if (numero == dato) {
    cout<<"EL numero que escribio es igual al dato";
  }  else {
    cout<<"El número es diferente al dato";
  }

  return 0;
}