/* Autor: Juan Esteban Cortés Camargo
*Fecha: 8-2-2023
Tema: Square Root */
 double SquareRoot(double x1, double x2,double x3);
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double x1=0;
  double x2=0;
  double x3=0;
  cout<< "give me a value for x1 with the intention to get it square root\n";
  cin>> x1;
  cout<< "give me a value for x2 with the intention to get it square root\n";
  cin>> x2;
  cout<< "give me a value for x3 with the intention to get it square root\n";
  cin >> x3;
  SquareRoot(x1, x2,x3);
  return 0;
}
double SquareRoot(double x1, double x2,double x3){
  cout<< "\n Number \t Square Root"<<endl;
  cout<< "\n " << x1<<" \t"<< sqrt(x1)
      <<"\n " << x1<<" \t"<< sqrt(x2)
      <<"\n " << x1<<" \t"<< sqrt(x3)<< endl;
  cout << "\nType a number whose square root is to be"
                                          "computed.";
  cin>> x1;
  cout <<"\n Number \t Square Root"<<endl;
  cout<<"\n"<<x1<<"\t"<<sqrt(x1)<<endl;
  cout<<"\n"<<x2<<"\t"<<sqrt(x2)<<endl;
  cout<<"\n"<<x3<<"\t"<<sqrt(x3)<<endl;
  return 0;
  }