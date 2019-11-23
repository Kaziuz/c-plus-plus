/* La sentencia do while

  do{
    conjunto de instrucciones:; Siempre se van a ejecutar al menos una vez
  }
*/

 #include <iostream>

 using namespace std;

 int main() {
   int i;
   i = 1;

   do{
     cout<<"el valir de i es: "<<i<<endl;
     i++;
   }while(i<=50);

  return 0;
 }