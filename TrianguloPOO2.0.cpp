#include <iostream>
#include <cmath>

using namespace std;

class Triangulo {
    float ladoA, ladoB, hipotenusa;
    
    public:
        Triangulo(float a, float b){
            ladoA = a;
            ladoB = b;
            hipotenusa = sqrt(ladoA * ladoA + ladoB * ladoB);
        }
        
        float area(){
            float s = ladoA * ladoB / 2;
            return s;
        }
        
        float perimetro(){
            float h = sqrt(ladoA * ladoA + ladoB * ladoB);
            return ladoA + ladoB + h;
        }
        
        float Hipotenusa(){
            return hipotenusa;
        }
        
        float calcularLadoA(){
            float a = sqrt(hipotenusa*hipotenusa - ladoB*ladoB);
            return a;
        }
};

int main(){
    float a, b;
    cout << "Ingrese el lado a del triangulo: ";
    cin >> a;
    cout << "Ingrese el lado b del triangulo: ";
    cin >> b;
    Triangulo tri(a, b);
    cout << "Area: " << tri.area() << endl;
    cout << "Perimetro: " << tri.perimetro() << endl;
    cout << "Hipotenusa: " << tri.Hipotenusa() << endl;
    cout << "Lado a: " << tri.calcularLadoA() << endl;

    return 0;
}
