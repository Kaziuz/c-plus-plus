// insertar elementos en la pila
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
  int dato;
  Nodo *siguiente;
};

void agregarPila(Nodo *, int); // prototipo

int main(){
    // PASO 1: creamos el puntero pila
    Nodo *pila = NULL;
    int n1, n2;

    cout<<"Digite un número: ";
    cin>>n1;
    agregarPila(pila, n1); // Agregamos el primer elemento a la pila

    cout<<"Digite otro número: ";
    cin>>n2;
    agregarPila(pila, n2); // Agregamos el primer elemento a la pila

    cout<<"la pila contiene: "<<pila->dato<<endl;    
    
    return 0;
}

// agregamos elementos a una pila
void agregarPila(Nodo *pila, int dataNode){
    // PASO 1: Reservamos espacio en memoria par ese nuevo nodo
    // osea un nuevo struct
    Nodo *new_node = new Nodo();
    // PASO 2: creamos el nuevo nodo
    new_node->dato = dataNode;
    // PASO 3: enlazamos hacia el nuevo nodo
    new_node->siguiente = pila;
    // Paso 4: Asignamos la nueva pila al nuevo nodo
    pila = new_node;

    cout<<"elemento: "<<dataNode<<" Agregado a la pila"<<endl;
}
