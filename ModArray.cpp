/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int DistanceArray(int arreglo[],int counter, int repetitions,int greaterNumber,int tam);
int main()
{
    int counter=0;
    int repetitions =0;
    int greaterNumber =0;
    int arreglo[]={4,31,2,9,0,31,11,2,31} ;
    DistanceArray(arreglo,0,0,0,7);
    
    return 0;
}
int DistanceArray(int arreglo,int counter, int repetitions,int greaterNumber,int tam){
    for(int i=0;i<tam;i++){
        counter =1;
    
    for(int j= i +1; j<tam;j++){
        if(arreglo[i] == arreglo[j]){
            counter++;
        }
        if(counter>repetitions){
            repetitions=counter;
            greaterNumber= arreglo[i];
        }
    }
}
cout << "el numero qu emas se repite es" << greaterNumber<<endl;
    cout<< " y tiene una cantidad de repeticiones"<<repetitions<<endl;

}
