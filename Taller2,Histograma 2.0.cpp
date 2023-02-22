/******************************************************************************
 Fecha: 15/02/2023
  *Autor: Juan Esteban Cortes
  *Tema: Arrays, Clase Vector, Aletoriedad,Funciones
  *
  *Problema:
      * Crear una forma para generar un conjunto de numeros aleatorios, tal que, 
      * se puede contar la frecuencia y´poder graficar tipo histograma. Se
  recomienda usar, funciones, arrays y la clase vetor de stl. para generar el
  conjunto de aleatorios se debera preguntar la cantidad  de elementos al
  usuario. Se reocmineda tambien hacer un menu.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarNumerosAleatorios(int n, int numeros[]);
void mostrarHistograma(int n, int numeros[]);
int main() {
    int n, opcion;
    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> n;
    
    int numeros[n];
    
    cout << "Seleccione una opcion:\n";
    cout << "1. Generar numeros aleatorios\n";
    cout << "2. Mostrar histograma\n";
    cout << "3. Salir\n";
    
    do {
        cout << "Opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                generarNumerosAleatorios(n, numeros);
                cout << "\n Numeros aleatorios generados\n";
                break;
            case 2:
                mostrarHistograma(n, numeros);
                break;
            case 3:
                cout << "Saliendo del programa\n";
                break;
            default:
                cout << "Opcion no valida\n";
                break;
        }
    } while (opcion != 3);
    
    return 0;
}

void generarNumerosAleatorios(int n, int numeros[]) {
    srand(time(NULL));  // Inicializar la semilla aleatoria con el tiempo actual
    cout << "Vector aleatorio\n"<<"tamaño:"<<n<<endl;
    for (int i = 0; i < n; i++) {
        numeros[i] = rand() % 21;  // Generar un número aleatorio entre 0 y 20
        cout << numeros[i]<<" ";
    }
}

void mostrarHistograma(int n, int numeros[]) {
    int frecuencia[21] = {0};  // Inicializar el arreglo de frecuencias en cero
    
    for (int i = 0; i < n; i++) {
        frecuencia[numeros[i]]++;  // Incrementar la frecuencia del número correspondiente
    }
    
    cout << "Histograma:\n";
    
    for (int i = 0; i < 21; i++) {
        cout << i << ": ";
        
        for (int j = 0; j < frecuencia[i]; j++) {
            cout << "*";
        }
        
        cout << "\n";
    }
}
