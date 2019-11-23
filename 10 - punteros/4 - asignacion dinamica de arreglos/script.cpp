// asignación dinamica de arreglos : significa usar solamente el espacio que necesita el array
/* OPERADORES PRINCIPALES
new: reserva el número de bytes solicitado por la declaración.
delete: libera un bloque de bytes reservado con anterioridad
*/
// Pdir al usuario n calificaciones y almacenarlos en un arreglo dinamico

#include <iostream>
#include <stdlib.h> // para crear arreglos dinamicos
using namespace std;

//prototipo de funcion
void pedirNotas();
void mostrarNotas();
int numCalif, *calif;

int main(){
    pedirNotas();
    mostrarNotas();

    // liberamos la memoria
    // el DELETE se pone despues de usar el new
    delete[] calif;
    return 0;
}

void pedirNotas(){
    cout<<"Digite el número de calificaciones: ";
    cin>>numCalif;

    calif = new int[numCalif]; // creamos el arreglo dinamico 

    // pedimos las notas
    for(int i=0; i<numCalif; i++){
        cout<<"ingrese una nota: "<<endl;
        cin>>calif[i]; // recorremos el aray y por indice almacenamos nota
    }
}

void mostrarNotas(){
    cout<<"\n\nMostrando notas del usuario: \n";
    for(int i=0; i<numCalif; i++){
        cout<<calif[i]<<endl;
    }
}