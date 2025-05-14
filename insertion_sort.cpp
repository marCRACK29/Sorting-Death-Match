/*
* Autor principal: Gabriel Catillo Castillo (zMRGABOz)
* Fecha: 13/05/2025
* Descripción: Algoritmo insertion sort
* Última modificación: 13/05/2025
*/

/*Algoritmo inspirado de https://www.programiz.com/dsa/insertion-sort */

#include <iostream>
#include <chrono>
#include "insertion_sort.h"


void insertionSort(vector<int>& arreglo){
    for (int step = 1; step < arreglo.size(); step++) {
        //Valor actual que se está ordenando
        int key = arreglo[step]; 
        int j = step - 1;

        //Ciclo que mueve los elementos mayores a key hacia la derecha.
        while (j >=0 && key < arreglo[j]) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        // Inserta 'key' en su posición correcta
        arreglo[j + 1] = key;
  }
}



int main(int argc, char** argv) {
    if(argc < 2) {
        cerr << "Usage: " << argv[0] << " <cantidad de elementos>" << endl;
    }
    int n = atoi(argv[1]);
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Genera números aleatorios entre 0 y 99
    }

    auto start = chrono::high_resolution_clock::now();
    insertionSort(arr);
    auto end = chrono::high_resolution_clock::now();
    double running_time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    running_time *= 1e-9; // Convertir a segundos
    cout << argv[0] << ";" << n << ";" << running_time << endl;
    
    return 0;
}