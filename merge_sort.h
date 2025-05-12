#ifndef MERGE_SORT_H
#define MERGE_SORT_H
#include <vector>
using namespace std;

/**
 * @brief crea los subarreglos de arr[].
 * 
 * @param arr Arreglo el cual se hará merge.
 * @param left índice más izquierdo (el inicio del primer arreglo).
 * @param mid índice limitador del primer subarreglo (y comienzo del segundo).
 * @param right índicie limitador del segundo arreglo.
 */
void merge(vector<int>& arr, int left, int mid, int right);

/**
 * @brief Ordena los subarreglos de forma recursiva.
 * 
 * @param arr Arreglo
 * @param left Comienzo con índice left.
 * @param right Final con índice right.
 */
void mergeSort(vector<int>& arr, int left, int right);

#endif  
