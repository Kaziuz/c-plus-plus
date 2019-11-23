/* hacer una función para almacenar N núimeros en un arreglo
 dínamico, posteriormente en otra función buscar un número en particular.
 usar cualquier metodo de búsqueda (secuencial, binaria)
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void getData();
void showData(int *, int);
void findNumber(int *, int);

int nElem, *dir_elem;

int main(){
    getData();
    showData(&dir_elem[0], nElem);
    findNumber(&dir_elem[0], nElem);
    delete[] dir_elem;
    return 0;
}

void getData(){
    cout<<"Ingrese el numero de elementos: ";
    cin>>nElem;

    dir_elem = new int[nElem];

    for(int i=0; i<nElem; i++){
        cout<<"ingrese un numero: ["<<i<<"]: ";
        cin>>*(dir_elem+i);
    }
}

void showData(int *elem, int nElem){
    for(int i=0; i<nElem; i++){
        cout<<"los numeros ingreados fueron: ["<<i<<"]: ";
        cout<<*(dir_elem+i)<<endl;
    }
}

void findNumber(int *elem, int nElem) {
    int findNumber = 0, i=0;
    char flag = 'F';

    cout<<"introduzca un número a buscar: "<<endl;
    cin>>findNumber;
    // busqueda secuencial
    while((flag == 'F') && (i<nElem)){
        if(*(dir_elem+i) == findNumber){
            flag = 'V';
        }
        i++;
    }

    if(flag == 'F'){
        cout<<"El número a buscar no existe en el arreglo";
    } else if (flag == 'V'){
        cout<<"El número a sido encontrado en la pos: "<<i-1<<endl;
    }
}
