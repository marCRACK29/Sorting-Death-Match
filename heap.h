#ifndef HEAP_H
#define HEAP_H
#include <vector>
using namespace std;
/**
 * @brief Función que organiza un arreglo en forma de heap.
 * 
 * @param arr Arreglo a organizar.
 * @param n Tamaño del arreglo.
 * @param i Índice del nodo a organizar.
 */
void heapify(vector<int>& arr, int n, int i);

/**
 * @brief Función que ordena un arreglo usando el algoritmo heap sort.
 * 
 * @param arr Arreglo a ordenar.
 * @param n Tamaño del arreglo.
 */
void heapSort(vector<int>& arr, int n);

#endif