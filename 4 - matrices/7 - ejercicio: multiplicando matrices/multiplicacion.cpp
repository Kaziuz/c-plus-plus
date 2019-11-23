/*multiplicar dos matrices de 3*3 */

#include <iostream>
using namespace std;

int main(){
    int m1[3][3] = {
        {2,4,2},
        {2,2,2},
        {1,2,3},
    };

    int m2[3][3] = {
        {2,2,2},
        {3,7,2},
        {1,2,3},
    };

    // mostramos el resultado
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            //c1
            if( i==0 ){
                //cout<<m1[i][j] * m2[]
                //cout<<"en fila"<<i<<endl;
                cout<<m1[i][j] * m2[j][i]<<" ";
            }else if( i==1 ){
                //cout<<m1[i][j] * m2[]
                //cout<<"en fila"<<i<<endl;
                //cout<<m1[i][j];
                cout<<m1[i][j] * m2[j][i]<<" ";
            }
            else if( i==2 ){
                //cout<<m1[i][j] * m2[]
                //cout<<"en fila"<<i<<endl;
                //cout<<m1[i][j];
                cout<<m1[i][j] * m2[j][i]<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}