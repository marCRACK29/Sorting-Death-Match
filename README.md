# Sorting Death-Match

Estructuras de Datos

## Integrantes

- Gabriel Sebastián Castillo Castillo
- Marcos Emiliano Martínez Rojas

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

## Cómo ejecutar

Simplemente en terminal, en carpeta raiz ejecuten el script bash que deseen de la siguiente manera (ejemplo): 
```bash
bash ./run_experiments_asc.sh > resultados_asc.csv
```
A continuación se actualizará el archivo formato CSV el cual se encarga de almacenar los resultados. 

