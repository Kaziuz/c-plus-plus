// intercambiar el valor de 2 variables utilizando paso de parametros por referencia

#include <iostream>
using namespace std;

void intercambio(int&, int&);

int main(){
    int num1 = 10, num2=20;

    cout<<"num1 vale: "<<num1<<endl;
    cout<<"num2 vale: "<<num2<<endl;

    intercambio(num1, num2);

    cout<<"ahora num1 vale: "<<num1<<endl;
    cout<<"ahora num2 vale: "<<num2<<endl;

    return 0;
}

void intercambio(int& num1, int& num2){
    int aux;
    // num1 = 10
    // num2 = 20
    aux = num1;  // aux = 10
    num1 = num2; // num1 = 20
    num2 = aux;  // num2 = 10
}

