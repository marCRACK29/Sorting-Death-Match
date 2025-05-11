#include <iostream>
#include "merge.h"

int main(){
    vector<int> arreglo; 
    int num;
    int n;
    while (cin >> num) arreglo.push_back(num);
    n = arreglo.size();
    
    mergeSort(arreglo, 0, n-1);
    return 0; 
}