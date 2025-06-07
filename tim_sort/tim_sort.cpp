/*
* Autores: Gabriel Catillo Castillo (zMRGABOz) y Marcos Martínez Rojas (marCRACK29)
* Fecha: 15/05/2025
* Descripción: Algoritmo Timsort
* Última modificación: 15/05/2025
* Obtenido de: https://www.geeksforgeeks.org/timsort/ 
*/

#include <algorithm>
#include "tim_sort.h"
#include "../merge_sort/merge_sort.h"
#include "../insertion_sort/insertion_sort.h"

const int RUN = 32; // Tamaño máximo de un subarreglo 

void timSort(vector<int>& arr, int n) {

    // Ordenar subarreglos individuales de tamaño RUN 
    for (int i = 0; i < n; i += RUN)
        insertionSort(arr, i, min((i + RUN - 1), (n - 1))); // Implementación en insertion_sort.cpp

    // Inicia el merge con tamaño RUN (32), luego 64, 128, y asi ...
    for (int size = RUN; size < n; size = 2 * size) {
        // Se hace merge de los dos arreglos y se va duplicando el tamaño. 
        for (int left = 0; left < n; left += 2 * size) {
            // Se busca el punto final del subarreglo izquierdo 
            // mid+1 es el punto inicial del subarreglo derecho 
            int mid = left + size - 1;
            int right = min((left + 2 * size - 1), (n - 1));

            if (mid < right)
                merge(arr, left, mid, right); // Implementación en merge_sort.cpp
        }
    }
}

