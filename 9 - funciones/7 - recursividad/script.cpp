// recursividad -> es una función que se llama a si misma // puede reemplazar la iteración
// tiene un caso base y un caso general
/*
    Ejemplo: factorial de un numero
    
    0!= 1

    factorial(n) = 1                , si n=0 caso base
                   n*factorial(n-1) , si n>0 caso general
*/

#include <iostream>
using namespace std;

int factorial(int);

int main(){
    cout<<factorial(3)<<endl;
    return 0;
}

// function recursive
int factorial(int n){
    if(n==0){
        n = 1;
    } else {
        n = n * factorial(n-1); // cuando se llama a ella misma nos damos cuanta que es recursividad (phantom function en JS)
    }
    return n;
}