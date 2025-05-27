/*
* Autor principal: Marcos Martínez Rojas (marCRACK29)
* Fecha: 11/05/2025
* Descripción: Algoritmo heap sort
* Última modificación: 27/05/2025
*/
/* Obtenido de: https://www.geeksforgeeks.org/heap-sort/ */
#include <iostream>
#include <chrono>
#include "heap_sort.h"

void heapify(vector<int>& arr, int n, int i){
    int l = 2*i + 1; // Hijo izquierdo
    int r = 2*i + 2; // Hijo derecho
    int largest = i;

    if (l<n && arr[l]>arr[largest]) largest = l;
    if (r<n && arr[r]>arr[largest]) largest = r; 
    // Si el nodo padre es menor que el hijo
    // entonces se intercambian los valores
    if (largest != i){
        swap(arr[i], arr[largest]); 
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr, int n){
    int start = (n/2)-1; // El último nodo que puede tener hijos esta en ese índice
    
    // Construcción del heap
    for (int i=start;i>=0;i--)
        heapify(arr, n, i);
    
    // Extracción de los elementos del heap
    // y colocación en el arreglo
    for (int i=n-1;i>0;i--){ 
        swap(arr[0], arr[i]);
        heapify(arr,i,0);
    }
}
