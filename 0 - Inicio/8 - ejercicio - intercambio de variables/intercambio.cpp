/* Escriba un fragmento de programa que intercambie los valores de dos variables */

#include <iostream>

using namespace std;

int main() {
  int var1, var2, inter = 0;

  cout<<"introduzca el primer valor: "; cin>>var1;
  cout<<"introduzca el segundo valor: "; cin>>var2;
  cout<<"los valores fueron"<<var1<<" y "<<var2<<endl;

  /*
    x = 10
    y = 5

    inter = x
    x = y
    y = inter
  */

  inter = var1;
  var1 = var2;
  var2 = inter;

  cout<<"\nEl nuevo valor de var1 es: "<<var1<<endl;
  cout<<"El nuevo valor de var2 es: "<<var2<<endl;
  
  return 0;
}