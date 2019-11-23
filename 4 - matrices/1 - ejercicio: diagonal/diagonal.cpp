/* Relizar un programa que defina una matriz de 3*3 y escriba un ciclo para que 
muestyre la diagonal principal de la matriz */

#include <iostream>

using namespace std;

int main() {
    int matriz[3][3] = { { 0,1,2 }, { 4,5,6 }, {7,8,9} };

    // cout<<"La posicion [1, 1] deberia ser 5 y es:"<<matriz[1][1]<<endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if((i==0 && j==0) || (i==1 && j==1) || (i==2 && j==2)){
                cout<<matriz[i][j];
            }
        }
        cout<<"\n";
    }

    return 0;
}