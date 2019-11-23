// devolver valores multiples
#include <iostream>
using namespace std;

// la función calcular recibe 4 variables
// dos por valor y dos por referencia
void calc(int, int, int&, int&);

int main(){
    int num1, num2, suma=0, producto=0;

    cout<<"Digite dos numeros: ";
    cin>>num1>>num2;

    calc(num1, num2, suma, producto);

    cout<<"la suma es: "<<suma<<endl;
    cout<<"la multiplicación es: "<<producto<<endl;

    return 0;
}

void calc(int num1, int num2, int& suma, int& producto){
    suma = num1+num2;
    producto = num1 * num2;
}