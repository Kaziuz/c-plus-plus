/* definir dos vectores de caracteres y después almacene el contenido de ambos en uno solo */

#include <iostream>

using namespace std;

int main() {
  char letras1[] = {'a','b','c','d','e'};
  char letras2[] = {'f','g','h','i','j'};
  char letras3[10];

  cout<<"El vector 3 inicialmente tiene: "<<letras3<<endl;

  // copiando los elementos de letras1 hacia letras3
  for(int i=0; i<5; i++) {
    letras3[i] = letras1[i];
  }

  // copiando los elementos de letras2 hacia letras3
  for(int i=5; i<10; i++){
    letras3[i] = letras2[i-5]; // restamos cinco porque el indice empieza en 5 y en indice del vector empieza en 0
  }

  cout<<"El resultado del vector 3 es:"<<letras3<<endl;

  return 0;
}