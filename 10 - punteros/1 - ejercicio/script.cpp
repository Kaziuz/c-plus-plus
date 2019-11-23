// numero impar o par con punteros

#include <iostream>
using namespace std;

int main(){
    int num, *dir_num;

    cout<<"Digite un numero: "; cin>>num;

    dir_num = &num; // guardamos la posición en memoria

    if(*dir_num%2==0){
        cout<<"El número: "<<*dir_num<<" es par"<<endl;
        cout<<"Posición: "<<dir_num<<endl;
    } else {
        cout<<"El número: "<<*dir_num<<" es impar"<<endl;
        cout<<"Posición: "<<dir_num<<endl;
    }

    return 0;
}