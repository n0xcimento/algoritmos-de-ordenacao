#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include "auxiliares.c"
#include "gquick.c"
// #include "algoritmos.h"


double* exectime(void (*algorithm)(long int* vet ,size_t size), long int* vet ,size_t size){
/*
    exectime recebe como argumento o nome de uma função e os argumentos que essa função 
 */
    clock_t begin = clock();

    algorithm(vet, size);

    clock_t end = clock();

    double *time;
    *time = (double)(end-begin)/CLOCKS_PER_SEC;
    return time;
}


int main(int argc, char const *argv[])
{
    long int size;
    long int *vet;

    size = readfile(&vet, argv[1]);

    quickSort(vet, 0, size -1);

    // printf("t:%f c:%lu  tr:%lu\n", *time, comp, troca);

   if(argc == 3) vetprint(vet, size);
}