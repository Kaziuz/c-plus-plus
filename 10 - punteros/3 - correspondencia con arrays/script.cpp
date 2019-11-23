// correspondencia entre arrays y punteros

#include <iostream>
using namespace std;

int main(){
    int num[] = {1, 2, 3, 4, 5};
    int *dir_num;

    dir_num = num; // asigno el primer indice el array num

    // mostramos los valores
    for(int i=0; i<5; i++){
        // para que imprima cada indice se debe de agregar ++ al array
        cout<<"Elemnto del vector ["<<i<<"]: "<<*dir_num++<<endl;
    }

    return 0;
}