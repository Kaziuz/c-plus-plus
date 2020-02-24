// crear una clase

#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
  private: // Atributos
    int edad;
    string nombre;
  public: // metodos
    Persona(int, string); // constructor
    void leer();
    void correr();
};

// inicializamos el constructor
// inicializamos los atributos
Persona::Persona(int _edad, string _nombre) {
  edad = _edad;
  nombre = _nombre;
}

void Persona::leer(){
  cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
  cout<<"soy "<<nombre<<" y estoy corriendo en el centro"<<" y tengo "<<edad<<" años"<<endl;
}

int main() {
  // creamos un objeto
  Persona p1 =  Persona(20, "Alex");

  p1.leer();
  p1.correr();

  return 0;
}