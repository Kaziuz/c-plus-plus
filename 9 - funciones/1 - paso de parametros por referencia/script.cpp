// paso de parametros por referencia &
/*
    existen dos formas en c++ de pasarle los valores a una function
    por valor: pasarle el valor directamente a la function
    por referencia: no es pasarle el valor sino pasarle la dirección en memoria donde esta almacenado ese valor

*/

#include <iostream>
using namespace std;

// cuando declaro las variables de la funcion asi
// le indico que los tome o lo coja de la memoria, osea de donde estan almacenados en memoria, la dirección!
void valNuevo(int&, int&); 

int main(){
    int num1, num2;

    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;

    valNuevo(num1, num2);

    cout<<"\n El nuevo valor del primer numero es: "<<num1<<endl;
    cout<<"\n El nuevo valor del segundo numero es: "<<num2<<endl;

    return 0;
}

void valNuevo(int& xnum, int& ynum){
    cout<<"\n El valor del primer numero es: "<<xnum<<endl;
    cout<<"\n El valor del primer numero es: "<<ynum<<endl;

    // se borran los datos en memoria y se actualizan por estos
    xnum = 89;
    ynum = 45;
}