#ifndef ARRAY_GENERATOR_H
#define ARRAY_GENERATOR_H
#include <vector>
#include <iostream>
using namespace std;

/**
 * @brief Genera un arreglo ordenado ascendentemente
 * 
 * @param arr Arreglo a llenar
 * @param n Tamaño del arreglo
 */
void generarArregloAscendente(vector<int>& arr, int n);

/**
 * @brief Genera un arreglo ordenado descendentemente
 * 
 * @param arr Arreglo a llenar
 * @param n Tamaño del arreglo
 */
void generarArregloDescendente(vector<int>& arr, int n);

/**
 * @brief Genera un arreglo aleatorio
 * 
 * @param arr Arreglo a llenar
 * @param n Tamaño del arreglo
 */
void generarArregloRandom(vector<int>& arr, int n);

#endif