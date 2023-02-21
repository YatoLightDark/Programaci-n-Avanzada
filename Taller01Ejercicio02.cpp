/*  fecha: 20-2-2023
  Autor: Juan Esteban Cortes Camargo
  Tema:Biblioteca "fstream "
Problema
Se desea capturar los datos de los clientes para ser impreso en la factura. Se requiere
crear una estructura de datos, que encapsule los datos de los usuarios. Se requiere que
el uso de la estructura sea a través de punteros. Se requiere imprimir las facturas en
un fichero de texto.
*******************************************************************************/
#include <fstream>
#include <iostream>

//Se hace un TDA simple, de captura de nombre,apellido,edad y id.


using namespace std;
struct usuario{
string nombre;
string apellido;
int edad;
string id;
};
int main()
{
    //se declaran variables
    int i,j,cantidad_usuarios;
    string linea;
    
   ofstream ArchivoClientes; // CREACION DE FLUJO
   ArchivoClientes.open("ArchivoClientes.cpp");//Apertura del archivo con nombre
 // se hace la bienvenida
  cout << "\n**********************************************************\n";
    cout << "\n************* Bienvenidos ***************\n"; 
    cout << "\n********************************************************\n";
     // Se solicita cantidad de usuarios en el fichero
    cout<< "Cuantos usuarios quiere ingresar?"<< endl;
  cin>> cantidad_usuarios;
  usuario cliente[cantidad_usuarios];
  if(ArchivoClientes.is_open()){
      // se cres bucle para recorrer el srreglo
  for(i=0;i<cantidad_usuarios;i++){
    cout <<  "ingrese nombre de usuario ["<<i+1<<"]:"<< endl;
    cin>> cliente[i].nombre;
    ArchivoClientes<<cliente[i].nombre;
    cout <<  "ingrese apellido del usuario ["<<i+1<<"]:"<< endl;
    cin>> cliente[i].apellido;
     ArchivoClientes<<cliente[i].apellido;
    cout <<  "ingrese edad del usuario ["<<i+1<<"]:"<< endl;
    cin>> cliente[i].edad; 
     ArchivoClientes<<cliente[i].edad;
     cout << " Ingrese el id del usuario ["<<i+1<<"]:"<<endl;
     cin>> cliente[i].id;
     ArchivoClientes<< cliente[i].id;
    ArchivoClientes.close();
    }
  }
     else{
    cout<< "No se pudo abrir el archivo "<<endl;}
   //Se crea el fichero con la biblioteca fstream para escritura
  ifstream milectura("ArchivoClientes.cpp");
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


