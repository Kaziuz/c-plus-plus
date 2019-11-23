// struct - structuras
// una estructura es una forma de guardar datos, es una forma de guardar muchas variables en una variable

#include <stdio.h>
#include <string.h>
#include <iostream>

struct alumno{
    int nota;
    char nombre[40];
    int edad;
};

int main(void){
    int x;
    char nombre_aux[] = "alexander";

    struct alumno alex;

    alex.nota = 4;
    alex.edad = 19;
    strcpy(alex.nombre, nombre_aux);

    //printf("la nota es:%d ", alex.nota);
    printf("El alumno %s ,edad %d tiene nota %d\n", alex.nombre, alex.edad, alex.nota);
    
    return 0;
}