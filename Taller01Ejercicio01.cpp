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
#include <stdlib.h>
#include <time.h>

const int tam = 10;
using namespace std;
//Contrato de la funcion
void RandomNumbers(int ArregloAleatorioR[tam],int tam);
int main()
{
  //se crea el Arreglo
   int ArregloAleatorio[tam]={};
  RandomNumbers(ArregloAleatorio,tam );
// se crea puntero
int *puntero;
puntero = ArregloAleatorio;
cout << puntero;
    return 0;
}
//Se crea funcion con el proposito de llenar el arreglo con numeros aleatorios
void RandomNumbers(int ArregloAleatorioR[tam ],int tam) {
  srand(time(NULL));
  //se selecciona el rango de numeros que se tomaran en cuenta para el llenado del arreglo
  int min = 0;
  int max = 25;
  // se hace un bucle con la intencion de recorrer el arreglo
  for (int i = 0; i < tam; i++) {
   ArregloAleatorioR[i]= min + rand() % (max + 1 - min);
   cout <<"|i|";
    cout << "\nValor:" << ArregloAleatorioR[i];
  }
}

  
