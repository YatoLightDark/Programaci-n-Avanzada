#include <iostream>
#include <cmath> //Se incluye la librería cmath para poder utilizar la función sqrt()

using namespace std;

class Triangulo {
    //Propiedades
    float ladoA, ladoB;
    
    public:
        //Constructor
        Triangulo(float a, float b){
            ladoA = a;
            ladoB = b;
        }
        //Metodos
        float area(){
            float s = ladoA * ladoB / 2; // Se corrige el cálculo del área
            return s;
        }
        float perimetro(){
            float h = sqrt(ladoA * ladoA + ladoB * ladoB); // Se calcula la hipotenusa
            return ladoA + ladoB + h; // Se retorna la suma de los lados y la hipotenusa
        }
        float hipotenusa(){
            float h = sqrt(ladoA * ladoA + ladoB * ladoB);
            return h; // Se retorna la hipotenusa
        }
};

int main(){
    float a, b;
    cout << "Ingrese el lado a del triangulo: ";
    cin >> a;
    cout << "Ingrese el lado b del triangulo: ";
    cin >> b;
    Triangulo tri(a, b); //Se crea el objeto del tipo Triangulo con el constructor que se definió en la clase
    cout << "Area: " << tri.area() << endl;
    cout << "Perimetro: " << tri.perimetro() << endl;
    cout << "Hipotenusa: " << tri.hipotenusa() << endl;

    return 0;
}
