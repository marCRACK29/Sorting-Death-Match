/*
* Autores: Gabriel Castillo Castillo (zMRGABOz), Marcos Martínez (marCRACK29)
* Fecha: 27/05/2025
* Descripción: Funciones para generar distintos tipos de arreglos 
* Última modificación: 07/06/2025
*/

#include "array_generator.h"

void generarArregloAscendente(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) 
        arr[i] = i;  // Genera números de 0 a n-1 en orden ascendente
}

void generarArregloDescendente(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) 
        arr[i] = n - i - 1;  // Genera números de n-1 a 0 en orden descendente    
}

void generarArregloRandom(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) 
        arr[i] = rand() % 100; // Genera números aleatorios entre 0 y 99
}

void generarArregloMixto(vector<int>& arr, int n) {
    const int TAMANO_SECCION = 1000;  // Tamaño de cada sección ascendente/descendente
    int valor = 0;
    
    for(int i = 0; i < n; i++) {
        // Determinar si estamos en una sección ascendente o descendente
        int seccion = i / TAMANO_SECCION;
        // si es par -> sección ascendente
        // si es impar -> sección descendente
        arr[i] = (seccion % 2 == 0) ? valor++ : valor--;
    }
}