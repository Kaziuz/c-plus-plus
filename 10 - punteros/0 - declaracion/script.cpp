// declaración de punteros
/* que es un puntero: es una variable que va a almacenar la dirección en memoria donde se esta guardando otra variable
en resumen: es una variable que va a almacenar la dirección en memoria de otra variable

&n = la dirección de n
*n = la variable cuya dirección esta almacenada en n
*/

#include <iostream>
using namespace std;

int main(){
   int num = 20;
   int *dir_num;

   dir_num = &num; // agregamos la posición en memoria de la variable num

   // show the VALOR de lo que hay almacenado en esa 
   // posición en memoria
   cout<<"Número: "<<*dir_num<<endl;
   // show the DIRECCION en memoria donde 
   // esta almacenada esa variable
   cout<<"Dirección en memor: "<<dir_num<<endl; 
    return 0;
}
