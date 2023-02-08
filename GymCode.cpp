/******************************************************************************

Fecha: 1/2/2003
Autor: Juan Esteban Cortes Camargo
Tema: Primer ejercicio sobre Estructuras de Datos(EDA)
Problema: Se tiene un GYM, el cual solicita hacer el registro de usuarios.
La cantidad de registros deben ser indicados al principios. Los datos solicitdados denerian ser exhaustivos.
Finalmente, se debe presentar o impirmir los nombres de los usuarios con registros satisfactorios.

*nombre
* apellido
* edad
* genero
* fechainscripcion
* hijos
* masa muscular
* plan
* franja horaria
* lesiones
* altura
*******************************************************************************/

#include <iostream>

using namespace std;
/* Declaracion de una estrctura de datos que capturan 
los datos solicitdados*/
struct DatosPersonsas{
    string nombre;
    string apellido;
    string fechainscripcion;
    string genero;
    string plan;
    string lesiones;
    float altura;
    int hijos;
    float masamuscular;
    int edad;
    string franjahoraria;
};

int main(){

    // se crea objeto estructura DatosPersonsas
 
 int i;
 int cantidad_personas;
 cout <<"*****************************************"<<endl;
 cout<<"*****************Bienvenidos**************"<<endl;
 cout <<"*****************************************"<<endl;
     /* se pide la cantidad de personas a registrar*/
     cout << "¿Cuantas personas van a ingresar?"<<endl;
     cin >> cantidad_personas;
     // se crea vector tipos DatosPersonsas
     DatosPersonsas persona[cantidad_personas]={};
     //se hace un bucle para capturar los datos de las personas 
     for(i=0;i<cantidad_personas;i++){
         //Se presenta la pregunta y la captura
         cout<< "nombre del usuario"<<endl;
         cin>> persona[i].nombre;
         
         cout << "apellido del usuario"<<endl;
         cin>> persona[i].apellido;
         cout<< "edad del usuario"<< endl;
         cin>> persona[i].edad;
         cout<<"genero del usuario"<< endl;
         cin >> persona[i].genero;
         cout<< "fecha de inscripcion del usuario"<< endl;
         cin>> persona[i].fechainscripcion;
         cout <<"hijos del usuario"<<endl;
         cin>> persona[i].hijos;
         cout<<"masa muscular del usuario"<<endl;
         cin>>persona[i].masamuscular;
        cout<< "plan del usuario"<<endl;
        cin >> persona[i].plan;
        cout<< "franja horaria del usuario";
        cin>> persona[i].franjahoraria;
        cout <<"lesiones del usuario";
        cin>>persona[i].lesiones;
        cout << "altura del usuario";
        cin >> persona[i].altura;
     }
     cout<< persona[i].apellido<<endl;
      cout<< persona[i].edad<<endl;
       cout<< persona[i].genero<<endl;
        cout<< persona[i].fechainscripcion<<endl;
         cout<< persona[i].hijos<<endl;
          cout<< persona[i].masamuscular<<endl;
           cout<< persona[i].plan;
            cout<<persona[i].franjahoraria;
             cout<<persona[i].lesiones;
              cout<<persona[i].altura;
}