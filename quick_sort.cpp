/*
* Autor principal: Gabriel Catillo Castillo (zMRGABOz)
* Fecha: 13/05/2025
* Descripción: Algoritmo quick sort
* Última modificación: 27/05/2025
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

