#!/bin/bash

# Imprimir una cabecera para el archivo CSV
echo "ejecutable;numElementos;tiempo"

# Repetir experimentos 30 veces
for ((c=1; c<=30; c++))
do
    # Ejecutar el programa con diferentes tamaños de entrada
    for n in 100000 200000 300000 400000 500000 
    do
        ./mergesort $n random
    done

    for n in 100000 200000 300000 400000 500000
    do 
        ./heapsort $n random
    done

    for n in 100000 200000 300000 400000 500000
    do 
        ./quicksort $n random
    done

    for n in 100000 200000 300000 400000 500000
    do 
       ./insertionsort $n random
    done
    
    for n in 100000 200000 300000 400000 500000
    do 
        ./sort $n random
    done

    for n in 100000 200000 300000 400000 500000
    do 
        ./timsort $n random
    done
    
done