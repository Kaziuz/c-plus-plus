// calcular si un numerpo es primo o no con punteros

#include <iostream>
using namespace std;

int main(){
    int a = 0, n, *dir_n;

    cout << "Ingrese numero" << endl; cin >> n;

    dir_n = &n;

    for (int i=1; i<(*dir_n + 1); i++){
        if (*dir_n % i == 0){
            a++;
        }
    }

    if (a != 2){
        cout << "No es Primo";
    } else{
        cout << "Si es Primo";
    }

    return 0;
}