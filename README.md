# Sorting Death-Match

Estructuras de Datos

## Integrantes

- Gabriel Sebastián Castillo Castillo
- Marcos Emiliano Martínez Rojas

## Cómo ejecutar

Simplemente en terminal, ejecuten el script bash que deseen de la siguiente manera (ejemplo): 
```bash
./run_experiments.sh
```
A continuación se actualizará el archivo formato CSV el cual se encarga de almacenar los resultados. 

## Cómo generar datasets

Para generar los datasets necesarios para los experimentos, sigue estos pasos:

1. Navega al directorio de utilidades:
```bash
cd utils
```

2. Compila el generador de datasets:
```bash
g++ -o data_set_generator data_set_generator.cpp
```

3. Ejecuta el generador:
```bash
./data_set_generator
```

Esto generará la carpeta datasets, en donde estarán los datasets necesarios para la ejecución de los experimentos