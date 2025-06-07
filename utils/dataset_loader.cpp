#include "dataset_loader.h"
#include <fstream>
#include <iostream>

std::vector<int> cargarDataset(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo, std::ios::binary);
    if (!archivo) {
        std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
        return std::vector<int>();
    }
    
    // Leer el tamaño del arreglo
    int n;
    archivo.read(reinterpret_cast<char*>(&n), sizeof(n));
    
    // Leer los elementos del arreglo
    std::vector<int> arr(n);
    archivo.read(reinterpret_cast<char*>(arr.data()), n * sizeof(int));
    
    archivo.close();
    return arr;
} 