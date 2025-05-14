/*
* Autores: Marcos Martínez Rojas (marCRACK29), Gabriel Castillo Castillo (zMRGABOz)
* Fecha: 14/05/2025
* Descripción: función sort() de la STL C++
* Última modificación: 14/05/2025
*/

#include <iostream>
#include <vector>
#include <algorithm> // Para la función sort()
#include <chrono>
using namespace std; 

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
    sort(arr.begin(), arr.end()); // Orden ascendente
    auto end = chrono::high_resolution_clock::now();
    double running_time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    running_time *= 1e-9; // Convertir a segundos
    cout << argv[0] << ";" << n << ";" << running_time << endl;
    
    return 0; 
}