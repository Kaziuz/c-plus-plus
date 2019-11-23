/* Realice un programa que calcule la suma de dos matrices cuadradas de 3*3 */

#include <iostream>
using namespace std;

int main(){
    int matriz1[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    int matriz2[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    cout<<"La suma de las matrices son:\n";

    // leo
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matriz1[i][j] + matriz1[i][j];
        }
        cout<<"\n";
    }


    return 0;
}