#include <iostream>
#include <chrono>
#include "quick_sort.h"
#include "array_generator.h"    
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
    if(argc < 3) {
        cerr << "Usage: " << argv[0] << " <cantidad de elementos> <tipo_orden>" << endl;
        cerr << "Tipos de orden disponibles: ascendente, descendente, mixto, random" << endl;
        return 1;
    }
    
    int n = atoi(argv[1]);
    if(n <= 0) {
        cerr << "Error: La cantidad de elementos debe ser un número positivo" << endl;
        return 1;
    }

    vector<int> arr(n);
    if(strcmp(argv[2], "ascendente")) {
        generarArregloAscendente(arr, n);
    } 
    else if(strcmp(argv[2], "descendente")) {
        generarArregloDescendente(arr, n);
    } 
    else  if(strcmp(argv[2], "random")){
        generarArregloRandom(arr, n);
    }
    else if(strcmp(argv[2], "mixto")){
        generarArregloMixto(arr, n);
    }

    auto start = chrono::high_resolution_clock::now();
    quickSort(arr, 0, n - 1);
    auto end = chrono::high_resolution_clock::now();
    double running_time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    running_time *= 1e-9; // Convertir a segundos
    cout << argv[0] << ";" << n << ";" << running_time << endl;
    
    return 0;
}