/*
* Autor principal: Gabriel Catillo Castillo (zMRGABOz)
* Fecha: 13/05/2025
* Descripción: Algoritmo quick sort
* Última modificación: 13/05/2025
*/
/* Obtenido de: https://www.techiedelight.com/es/quicksort/ */
#include <iostream>
#include <chrono>
#include "quick_sort.h"


int particion( vector<int> &arreglo, int comienzo, int fin){
    //Se elige como pivote al elemento al final de la particion
    int pivote = arreglo[fin];
    //Los elementos mayores que el pivote se moverán a la derecha de index, y los menores a la izquierda
    int index = comienzo;

    //Cada vez que se encuentra un elemento menor o igual que el pivote, index aumenta y el elemento se posiciona antes que el pivote
    for(int i = comienzo; i< fin ; i++){
        if(arreglo[i] <= pivote){
            swap(arreglo[i], arreglo[index]);
            index++;
        }
    }

    //Intercambia index con pivote
    swap (arreglo[index], arreglo[fin]);
    
    return index;

}

void quickSort(vector<int> &arreglo, int comienzo, int fin){
    //Condición base
    if(comienzo >= fin){
        return;
    }

    // Se obtiene el índice del pivote después de la partición
    int pivote = particion(arreglo, comienzo, fin);
 
    //Se ordenan los subarreglos izquierdo y derecho
    quickSort(arreglo, comienzo, pivote - 1);
    quickSort(arreglo, pivote + 1, fin);

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
    quickSort(arr, 0, n - 1);
    auto end = chrono::high_resolution_clock::now();
    double running_time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    running_time *= 1e-9; // Convertir a segundos
    cout << argv[0] << ";" << n << ";" << running_time << endl;
    
    return 0;
}
