// una estructura anidada es una structura dentro de otra

#include <iostream>
using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){
    // cuando se pide el segundo emepleado
    // no deja escribir el nombre y es porque el buffer esta lleno
    // 

    for (int i=0; i<2; i++){ // array es de 2
        fflush(stdin); // vaciar el buffer y permitir digitar los valores
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n'); // guardo nombre
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion, 30, '\n'); // guardo dirección
        cout<<"Digite su ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n'); // guardo dirección
        cout<<"Digite su provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n'); // guardo provincia
        cout<<"Digite su salario: ";
        cin>>empleados[i].salario; // guardo salario
        cout<<"\n";
    }

    // muestro los datos
    for(int i=0; i<2; i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Dirección: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        cout<<"\n";
    }

    return 0;
}