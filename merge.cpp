/***********************************
 * Autor principal: Marcos Martínez Rojas (marCRACK29)
 * Fecha: 11/05/2025
 * Descripción: Algoritmo merge sort
 * Última modificación: 11/05/2025
*************************************/

#include "merge.h"

void merge(vector<int>& arr, int left, int mid, int right){
    //Tamaño de los subarreglos
    int n1 = mid - left + 1; 
    int n2 = right - mid; 
    vector<int> L(n1), R(n2);
    //Rellenar los subarreglos L y R
    //con los elementos del arreglo original
    for (int i=0;i<n1;i++) L[i] = arr[left+i];
    for (int j=0;j<n2;j++) R[j] = arr[mid+1+j];

    //Índices iniciales de los subarreglos
    int i = 0, j = 0; 
    int k = left; 

    //Realiza el ordenamiento de los subarreglos
    while (i<n1 && j<n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    
    //Copiar los elementos restantes de los
    //subarreglos L y R si los hay
    while (i<n1){
        arr[k] = L[i];
        i++;    
        k++;
    }
    while (j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right){
    //Caso base
    if (left >= right) return; 

    //Dividir el arreglo en dos mitades recursivamente.
    //Luego, combinar los subarreglos ordenados
    //en un solo arreglo ordenado.
    int mid = left + (right - left) / 2; 
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}