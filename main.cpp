#include <iostream>
#include <chrono>
#include "print_array.h"
#include "merge.h"
#include "heap.h"

int main(){
    vector<int> arreglo; 
    int num;
    int n;
    while (cin >> num) arreglo.push_back(num);
    n = arreglo.size();
    
    //mergeSort(arreglo, 0, n-1);
    heapSort(arreglo, n);    
    printArray(arreglo);

    auto start = chrono::high_resolution_clock::now();
    auto end = chrono::high_resolution_clock::now();
    double running_time = chrono::duration_cast<chrono::microseconds>(end - start).count();
    return 0; 
}