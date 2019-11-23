/* Escriba un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos */

#include <iostream>

int main(){
  int vector[] = { 1, 3, 5, 8 };
  int resultado, acumulacion;

  for(int i=0; i<4; i++){
    std::cout<<"la multiplicación de los valores es: "<<vector[i]<<std::endl;
    resultado = vector[i] * vector[i];
    std::cout<<"resultado: "<<resultado<<std::endl;
  }

  return 0;
}