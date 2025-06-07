#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include <vector>
using namespace std;


/**
 * @brief Función que organiza una partición alrededor de un pivote
 * 
 * @param arreglo Arreglo a organizar.
 * @param comienzo Índice de inicio de partición.
 * @param fin Índice del final de la partición.
 */
int particion(vector<int>& arreglo, int comienzo, int fin);


/**
 * @brief Función que implementa el algoritmo quick-sort de forma recursiva.
 * 
 * @param arreglo Arreglo a organizar.
 * @param comienzo Índice de inicio de partición.
 * @param fin Índice del final de la partición.
 */

void quickSort(vector<int>& arreglo, int comienzo, int fin);

#endif