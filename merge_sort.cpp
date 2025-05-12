/***********************************
 * Autor principal: Marcos Martínez Rojas (marCRACK29)
 * Fecha: 11/05/2025
 * Descripción: Algoritmo merge sort
 * Última modificación: 11/05/2025
*************************************/

#include <iostream>
#include <chrono>
#include "merge_sort.h"

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

int main(int argc, char** argv) {
    if(argc < 2) {
        cerr << "Usage: " << argv[0] << " <cantidad de elementos>" << endl;
    }
    int n = atoi(argv[1]);
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Genera números aleatorios entre 0 y 99
    }

    auto start = chrono::high_resolution_clock::now();
    mergeSort(arr, 0, n - 1);
    auto end = chrono::high_resolution_clock::now();
    double running_time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    running_time *= 1e-9; // Convertir a segundos
    cout << argv[0] << ";" << n << ";" << running_time << endl;
    


    return 0;
}