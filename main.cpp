#include <iostream>
#include "print_array.h"
#include "merge.h"

int main(){
    vector<int> arreglo; 
    int num;
    int n;
    while (cin >> num) arreglo.push_back(num);
    n = arreglo.size();
    
    mergeSort(arreglo, 0, n-1);
    printArray(arreglo);

    return 0; 
}