#include <iostream>
#include <algorithm>
#include <chrono>
#include "tim_sort.h"
#include "../utils/dataset_loader.h"
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
    if(argc < 2) {
        cerr << "Usage: " << argv[0] << " <nombre_archivo_binario>" << endl;
        return 1;
    }

    string nombreArchivo = argv[1];
    vector<int> arr = cargarDataset(nombreArchivo);
    
    if (arr.empty()) {
        cerr << "No se pudo cargar el dataset" << endl;
        return 1;
    }

    auto start = chrono::high_resolution_clock::now();
    timSort(arr, arr.size());
    auto end = chrono::high_resolution_clock::now();
    
    double running_time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    running_time *= 1e-9; // Convertir a segundos
    
    cout << argv[0] << ";" << arr.size() << ";" << running_time << endl;
    
    return 0;
}
