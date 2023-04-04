#include <iostream>

using namespace std;

class Circulo{
    //Propiedades
    float radio;
   
    public:
        //Constructor
        Circulo(float radio){
            this->radio = radio;
        }
        //Metodos
        float area(){
            return (radio*radio)*3.1416;
        }
        float perimetro(){
            return 3.1416*radio*2;
        }
        float diametro(){
            return 2*radio;
        }
};

int main(){
    float radio;
    cout << "Dame un radio: ";
    cin >> radio;
    Circulo circ(radio); //Se crea el objeto del tipo Circulo con el constructor que se definió en la clase
    cout << "Area: " << circ.area() << endl;
    cout << "Perimetro: " << circ.perimetro() << endl;
    cout << "Diametro: " << circ.diametro() << endl;

    return 0;
}