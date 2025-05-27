/*
* Autor principal: Gabriel Castillo Castillo (zMRGABOz)
* Fecha: 27/05/2025
* Descripción: Algoritmo heap sort
* Última modificación: 27/05/2025
*/



#include "array_generator.h"

void generarArregloAscendente(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = i;  // Genera números de 0 a n-1 en orden ascendente
    }
}

void generarArregloDescendente(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = n - i - 1;  // Genera números de n-1 a 0 en orden descendente
    }
}

void generarArregloRandom(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Genera números aleatorios entre 0 y 99
    }
}