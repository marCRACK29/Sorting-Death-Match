#!/bin/bash

# Imprimir una cabecera para el archivo CSV
echo "ejecutable;numElementos;tiempo"

# Repetir experimentos 30 veces
for ((c=1; c<=30; c++))
do
    # Ejecutar el programa con diferentes tamaños de entrada
    for n in 1 10 50 100
    do
        ./merge_sort/mergesort datasets/descendente_${n}MB.bin
    done

    for n in 1 10 50 100
    do 
        ./heap_sort/heapsort datasets/descendente_${n}MB.bin
    done

    for n in 1 10 50 100
    do 
        ./quick_sort/quicksort datasets/descendente_${n}MB.bin
    done
    
    for n in 1 10 50 100
    do 
        ./sort datasets/descendente_${n}MB.bin
    done

    for n in 1 10 50 100
    do 
        ./tim_sort/timsort datasets/descendente_${n}MB.bin
    done
    
done

# Insertion Sort separado porque se demora mucho y afecta a los otros algoritmos
for ((z=1; z<=10; z++))
do

    for n in 1 10 50 100
    do 
       ./insertion_sort/insertionsort datasets/descendente_${n}MB.bin
    done


done