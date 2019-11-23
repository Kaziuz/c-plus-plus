// paso de parametros tipo struct

#include <iostream>
using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}p1;

void pedirDatos();
void mostrarDatos(Persona); // en el prototipo de la function solo se le pasa que se va a usar el struct

int main(){
    pedirDatos();
    mostrarDatos(p1);
    return 0;
}

void pedirDatos(){
    cout<<"Digite nombre: ";
    cin.getline(p1.nombre, 30, '\n');
    cout<<"Digite edad: ";
    cin>>p1.edad;
}

void mostrarDatos(Persona person) {
    cout<<"El nombre es: "<<person.nombre<<endl;
    cout<<"El nombre es: "<<person.edad;
}

