#include <iostream>
#include "print_array.h"

void printArray(vector<int>& arr){
    for(int i=0;i<arr.size();i++)
        cout << arr[i] <<" ";
    cout << endl;
}