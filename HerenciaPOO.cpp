#include <iostream>
#include <cstring> // Se incluye la librería cstring para poder utilizar la función strcpy()

using namespace std;

class Persona {
    // Propiedades
protected:
    char nombre[50];
    
public:
    // Constructor
    Persona(char nombre[]) {
        strcpy(this->nombre, nombre); // Copia el nombre recibido como parámetro en la propiedad "nombre" de la instancia
    }
    
    // Métodos
    void presentarse() {
        cout << "Hola, me llamo " << nombre << "." << endl;
    }
};

class Profesor: public Persona {
    // Propiedades
    char enseña[50];  
    
public:
    // Constructor
    Profesor(char nombre[], char enseña[]): Persona(nombre) {
        strcpy(this->enseña, enseña); // Copia la materia que enseña recibida como parámetro en la propiedad "enseña" de la instancia
    }
    
    // Métodos
    void presentarse() {
        cout << "Hola, me llamo " << nombre << " y enseño " << enseña << "." << endl;
    }
};

class Estudiante: public Persona {
    // Propiedades
    int grado;
    
public:
    // Constructor
    Estudiante(char nombre[], int grado): Persona(nombre) {
        this->grado = grado;
    }
    
    // Métodos
    void presentarse() {
        cout << "Hola, me llamo " << nombre << " y estoy en " << grado << "° grado." << endl;
    }
    
    bool puedeCursarProgramacion() {
        return this->grado > 9;
    }
};

int main() {
    // Se crea un objeto de cada clase
    Persona* persona = new Persona(strdup("Juan"));
Profesor* profesor = new Profesor(strdup("María"), strdup("matemáticas"));
Estudiante* estudiante = new Estudiante(strdup("Pedro"), 10);

    // Se invocan los métodos correspondientes y se muestra su resultado en pantalla
    persona->presentarse();
    profesor->presentarse();
    estudiante->presentarse();
    
    if (estudiante->puedeCursarProgramacion()) {
        cout << "Pedro puede cursar programación." << endl;
    } else {
        cout << "Pedro no puede cursar programación." << endl;
    }
    
    return 0;
}
