// busqueda Binaria

// para poder usar la busqueda ordinaria el array debe de estar ordenado de forma ascendente

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1, 2, 3, 4, 5};
    int inf, sup, mitad, dato;
    char band = 'F';

    dato = 2;

    // busqueda binaria
    inf = 0;
    sup = 5;

    while (inf <= sup) {
        mitad = (inf+sup)/2;

        if(numeros[mitad] == dato) { // aqui encontramos el número
            band = 'V';
            break;
        }

        if(numeros[mitad] > dato){
            sup = mitad;
            mitad = (inf+sup)/2;
        }

        if(numeros[mitad] < dato){
            inf = mitad;
            mitad = (inf+sup)/2;
        }
        
    }

    if(band == 'V'){
        cout<<"El número a sido encontrado en la pos: "<<mitad<<endl;
    } else {
        cout<<"El número no ha sido encontrado: "<<mitad<<endl;
    }
    

    return 0;
}