/***********************************
 * Autor principal: Gabriel Catillo Castillo (zMRGABOz)
 * Fecha: 13/05/2025
 * Descripción: Algoritmo insertion sort
 * Última modificación: 07/06/2025  
 * Algoritmo inspirado de https://www.programiz.com/dsa/insertion-sort 
*************************************/

#include "insertion_sort.h"

void insertionSort(vector<int>& arr, int left, int right) {
    const int l = left;
    const int r = right;

    for (int i = l + 1; i <= r; ++i) {
        int temp = arr[i];
        int j = i;

        // Evita comparar si ya está ordenado
        if (arr[j - 1] <= temp)
            continue;

        // Desplazar los elementos mayores
        while (j > l && arr[j - 1] > temp) {
            arr[j] = arr[j - 1];
            --j;
        }

        // Solo escribir si hubo movimiento
        arr[j] = temp;
    }
}

