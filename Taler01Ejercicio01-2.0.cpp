/******************************************************************************
 * Autor: Juan Esteban Cortes Camargo
 * Fecha:16/02/2003
 * Tema: Arreglos,Punteros, Funciones
 * Problema:
 * 1.- Crear un array con 10 elementos
 * 2.- Crear una función para generar números aleatorios entre 0 y 25
 * 3.- Llenar el array con 10 números aleatorios
 * 4.- Crear un puntero
 * 5.- Imprimir el contenido del array usando el puntero
 * 6.- Imprimir las direcciones del contenido del array usando el puntero.

*******************************************************************************/
#include <iostream>
#include <cstdlib>

using namespace std;
//Contrato de la funcion para que sea funcional
int generarNumeroAleatorio();

int main() {
    //Se crea arreglo con tamaño 10
    int numAleatorios[10];
    for (int i = 0; i < 10; i++) {
        // se iguala el arreglo en la posicion i para que se guarde un numero aleatorio con la funcion dependiendo de su posicion
    numAleatorios[i] = generarNumeroAleatorio();
  }
  //creacion del puntero
  int *puntero = numAleatorios;
     for (int i = 0; i < 10; i++) {
         // se suma +i para imprimir cada posicion
    cout << *(puntero + i) << " ";
  }
  cout << endl;
  for (int i = 0; i < 10; i++) {
        cout << puntero + i << " ";
    }
  cout << endl;

  return 0;
}
//se usa la funcion rand
int generarNumeroAleatorio() {
  return rand() % 25; 
}


