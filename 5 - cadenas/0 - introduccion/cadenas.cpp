//cadenas de caracteres

#include <iostream>
#include <string.h>
using namespace std;

int main() {
     char palabra[] = "Alex";
     char palabra2[] = {'A','l','e','x'};
     char nombre[20];

     cout<<"Digite su nombre: ";
     
     // cin es una variable apropiada para guardar caracteres
     // cin.getline(nombre de la variable, espacio que tiene para almacenar, termine de almacenar cuando? )
     cin.getline(nombre, 20, '\n');

     cout<<nombre<<endl;

     return  0;
}


