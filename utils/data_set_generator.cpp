/*
* Autores: Gabriel Castillo Castillo (zMRGABOz), Marcos Martínez (marCRACK29)
* Fecha: 07/06/2025
* Descripción: Archivo principal para generar los datasets
* Última modificación: 07/06/2025
*/

#include <iostream>
#include <fstream>
#include <vector>
#include "array_generator.h"

using namespace std;

void guardarArregloBinario(const vector<int>& arr, const string& nombreArchivo) {
    ofstream archivo(nombreArchivo, ios::binary);
    if (!archivo) {
        cerr << "Error al abrir el archivo: " << nombreArchivo << endl;
        return;
    }
    
    // Escribir el tamaño del arreglo
    int n = arr.size();
    archivo.write(reinterpret_cast<const char*>(&n), sizeof(n));
    
    // Escribir los elementos del arreglo
    archivo.write(reinterpret_cast<const char*>(arr.data()), n * sizeof(int));
    
    archivo.close();
}

int main() {
    // Crear el directorio datasets si no existe
    system("mkdir -p ../datasets");
    
    // Tamaños de los arreglos a generar
    vector<int> tamanos = {1000000, 10000000, 50000000 , 100000000};
    
    for (int tamano : tamanos) {
        vector<int> arr(tamano);
        
        // Generar y guardar arreglo ascendente
        generarArregloAscendente(arr, tamano);
        guardarArregloBinario(arr, "../datasets/ascendente_" + to_string(tamano/1000000) + "MB.bin");
        
        // Generar y guardar arreglo descendente
        generarArregloDescendente(arr, tamano);
        guardarArregloBinario(arr, "../datasets/descendente_" + to_string(tamano/1000000) + "MB.bin");
        
        // Generar y guardar arreglo aleatorio
        generarArregloRandom(arr, tamano);
        guardarArregloBinario(arr, "../datasets/random_" + to_string(tamano/1000000) + "MB.bin");
        
        // Generar y guardar arreglo mixto
        generarArregloMixto(arr, tamano);
        guardarArregloBinario(arr, "../datasets/mixto_" + to_string(tamano/1000000) + "MB.bin");
        
        cout << "Generados datasets de tamaño " << tamano << endl;
    }
    
    cout << "¡Generación de datasets completada!" << endl;
    return 0;
}