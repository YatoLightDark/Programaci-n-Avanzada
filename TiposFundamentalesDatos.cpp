/*Autor: Juan Esteban Cortes Camargo
*Fecha: 8-2-2003
  Tema: tema, tipos




*/
// Se crea el dominio de la biblioteca iostream "Global"
#include <iostream>
using namespace std;
// Se crea la función principal
int main() {
  cout <<"\n************************************"<<endl;
  cout <<"\n*****Tipos Fundamentales en C++*****"<<endl;
  cout <<"\n************************************"<<endl;
  cout << "\n Tipo de Dato \t Numero de bytes"<<endl;
  cout<< "\n*******************************************"<<endl;
  cout<< "\t char:        \t"<< sizeof(char)<<endl;
  cout<< "\t short:        \t"<< sizeof(short)<<endl;
  cout<< "\t int:         \t"<< sizeof(int)<<endl;
  cout<< "\t long:         \t"<< sizeof(long)<<endl;
  cout<< "\t float:       \t"<< sizeof(float)<<endl;
  cout<< "\t double:       \t"<< sizeof(double)<<endl;
  cout<< "\t long double: \t"<< sizeof(long double)<<endl;
  return 0;
}