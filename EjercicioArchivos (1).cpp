/********************************************
  fecha: 3-2-2023
  Autor: Juan Esteban Cortes
  Tema:Biblioteca "fstream "
Problema
Se necesita crear una aplicacion que solicite datos de usuarios' para posteriormente almacenarlos
en un fichero.
  El almacenamiento ha de ser cada dato en una linea.
  No se desea o permite que se almacene mas de una palabra por linea(No espacios en blanco). 
Solucion:
*Se hace uso de la biblioteca "fstream"
*Se crea un TDA para la coleccion de datos.
*Se almacena datos del TDA en el fichero.
*Finalmente, se leen los datos del fichero y se presentan por pantalla.
************/
#include <iostream>
#include <fstream>

using namespace std;
//Se hace un TDA simple, de captura de nombre,apellido y edad.
struct persona{
 string nombre;
string apellido;
int edad;
};
int main() {
  // se declaran variables a usar
  int i,j,cantidad_usuarios;
  //variable auxiliar para cada linea como lectura
  string linea;
  //Se crea el fichero con la biblioteca fstream para escritura
  ofstream myfile("usuarios.txt");
  // se hace la bienvenida
  cout << "\n**********************************************************\n";
    cout << "\n************* Escritura-Lectura Archivos ***************\n"; 
    cout << "\n********************************************************\n";
    // Se solicita cantidad de usuarios en el fichero
    cout<< "Cuantos usuarios quiere ingresar?"<< endl;
  cin>> cantidad_usuarios;
  //Se crea el objeto TDA tipo vector, de tamaño cantidad_usuarios;
  persona usuarios[cantidad_usuarios];
  //se abre el archivo para escritura(si se puede )
  if(myfile.is_open()){
  // se cres bucle para recorrer el srreglo
  for(i=0;i<cantidad_usuarios;i++){
    cout <<  "ingrese nombre de usuario ["<<i+1<<"]:"<< endl;
    cin>> usuarios[i].nombre;
    myfile<<usuarios[i].nombre;
    cout <<  "ingrese apellido del usuario ["<<i+1<<"]:"<< endl;
    cin>> usuarios[i].apellido;
     myfile<<usuarios[i].apellido;
    cout <<  "ingrese edad del usuario ["<<i+1<<"]:"<< endl;
    cin>> usuarios[i].edad; 
     myfile<<usuarios[i].edad;
    myfile.close();
    }
    }
  else
  {
    cout<< "No se pudo abrir el archivo "<<endl;
  }
   //Se crea el fichero con la biblioteca fstream para escritura
  ifstream milectura("usuarios.txt");
  //Se lee los datos del fichero
  if(milectura.is_open()){
    //Se hcae un bucle para literar por cada linea a leer
          while(getline(milectura,linea)){
            cout<<linea<<endl;
          }
    milectura.close();
  }
  cout<< "Fin del programa exito"<<endl;
  return 0;
  
}