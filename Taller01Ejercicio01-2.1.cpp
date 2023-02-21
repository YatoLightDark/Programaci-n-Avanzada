#include <iostream>
#include <cstdlib>

using namespace std;

int generarNumeroAleatorio(); // genera un numero aleatorio

int main() {
    int numAleatorios[10];
    for (int i = 0; i < 10; i++) {
    numAleatorios[i] = generarNumeroAleatorio(); //genera y guarda numero en array
  }
  int *puntero = numAleatorios; //se ubica el puntero en el array
     for (int i = 0; i < 10; i++) {
    cout << *(puntero + i) << " "; //imprime cada valor de la array
  }
  cout << endl;
  for (int i = 0; i < 10; i++) {
        cout << puntero + i << " "; //imprime cada posicion de cada valor de la array
    }
  cout << endl;

  return 0;
}
int generarNumeroAleatorio() { // genera un numero aleatorio
  return rand() % 26; 
}


