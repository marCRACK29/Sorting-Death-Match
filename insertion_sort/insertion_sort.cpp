/***********************************
 * Autor principal: Gabriel Catillo Castillo (zMRGABOz)
 * Fecha: 13/05/2025
 * Descripción: Algoritmo insertion sort
 * Última modificación: 13/05/2025
 * Algoritmo inspirado de https://www.programiz.com/dsa/insertion-sort 
*************************************/

#include "insertion_sort.h"

void insertionSort(vector<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
