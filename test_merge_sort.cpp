#include <iostream>
#include <chrono>
#include "merge_sort.h"

int main(int argc, char** argv) {
    if(argc < 2) 
        cerr << "Usage: " << argv[0] << " <cantidad de elementos>" << endl;
    
    int n = atoi(argv[1]);
    vector<int> arr(n);
    for(int i = 0; i < n; i++) 
        arr[i] = rand() % 100; // Genera números aleatorios entre 0 y 99
    

    //Medir el tiempo que tarda el algoritmo 
    auto start = chrono::high_resolution_clock::now();
    mergeSort(arr, 0, n - 1);
    auto end = chrono::high_resolution_clock::now();

    double running_time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    running_time *= 1e-9; // Convertir a segundos
    cout << argv[0] << ";" << n << ";" << running_time << endl;
    
    return 0;
}