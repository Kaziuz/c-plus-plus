/* Realice un programa que lea una matriz de 3*3 y cree su matriz transpuesta */
/*
|1 2 3| |1 4 7|
|4 5 6| |2 5 8|
|7 8 9| |3 6 9|
*/

#include <iostream>

using namespace std;

int main(){
    int numero[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Ingrese un numero:";
            cin>>numero[i][j];
        }
    }

    cout<<"la matrix realizada es:\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<numero[i][j];
        }
        cout<<"\n";
    }

    cout<<"\nla matrix transpuesta es:\n";

    // transponemos la matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<numero[j][i];
        }
        cout<<"\n";
    }

    return 0;
}