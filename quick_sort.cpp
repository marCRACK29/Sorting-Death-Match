/*
* Autor principal: Gabriel Catillo Castillo (zMRGABOz)
* Fecha: 13/05/2025
* Descripción: Algoritmo quick sort
* Última modificación: 05/06/2025
*/
#include <iostream>
#include <chrono>
#include "quick_sort.h"


int particion(vector<int> &arreglo, int comienzo, int fin){
    //Se elige un pivote aleatorio
    int pivote = arreglo[comienzo + rand() % (fin - comienzo + 1)];
    
    int index = comienzo;
    int right = fin; 
    //Los elementos mayores que el pivote se moverán a la derecha de index, y los menores a la izquierda
    while(index <= right){
        while(arreglo[index] < pivote){
            index++;
        }
        while(arreglo[right] > pivote){
            right--;
        }
        if(index <= right){
            swap(arreglo[index], arreglo[right]); // Intercambiamos los elementos
            index++;
            right--;
        }
    }
    return right;
}

void quickSort(vector<int> &arreglo, int comienzo, int fin){
    if(comienzo < fin){
        int ind = particion(arreglo, comienzo, fin); // Obtener el índice del pivote
        quickSort(arreglo, comienzo, ind); // Ordenar la sección izquierda
        quickSort(arreglo, ind + 1, fin); // Ordenar la sección derecha
    }
}

