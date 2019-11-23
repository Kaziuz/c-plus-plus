// este es otro ejemplo de como declarar una strcutura

#include <iostream>
using namespace std;
 
struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Alejandro", 20},
persona2 = {"Alex", 15};

int main(){
    cout<<"nombre 1: "<<persona1.nombre<<endl;
    cout<<"Edad 1: "<<persona1.edad<<endl;

    cout<<"nombre 2: "<<persona2.nombre<<endl;
    cout<<"Edad 2: "<<persona1.edad<<endl;

    return 0;
}

