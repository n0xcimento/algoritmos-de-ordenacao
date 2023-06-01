#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "auxiliares.c"
#include "algoritmos.h"


int main(int argc, char const *argv[])
{
    long int *V = NULL;
    size_t n;

    if(argc < 3)
        usage(argv[0], argv[1]);

    // lê o arquivo que possui os valores que serão armazenados no vetor
    n = readfile(&V, argv[2]);

    clock_t begin = clock();

    if(!strcmp(argv[1], "bubblesort")){
        bubblesort(V, n);
    }else if(!strcmp(argv[1], "insertionsort")){
        insertionsort(V, 0, n);
    }else if(!strcmp(argv[1], "selectionsort")){
        selectionsort(V, n);
    }else if(!strcmp(argv[1], "mergesort")){
        mergesort(V, 0, n-1);
    }else if(!strcmp(argv[1], "quicksort")){
        quicksort(V, 0, n-1);
    }else if(!strcmp(argv[1], "heapsort")){
        heapsort(V, n);
    }else if(!strcmp(argv[1], "timsort")){
        timsort(V, n);
    }else if(!strcmp(argv[1], "shellsort")){
        shellsort(V, n);
    }else if(!strcmp(argv[1], "gnomesort")){
        gnomesort(V, n);
    }else{
        puts("ALGORITHM:\vbubblesort|insertionsort|selectionsort|mergesort|\n\
          quicksort|heapsort|timsort|shellsort|gnomesort");
        exit(1);
    }

    clock_t end = clock();
    double time = (double)(end-begin)/CLOCKS_PER_SEC;

    printf("%lu  %f  %lu  %lu\n", n, time, comp, troca);

    if(argc == 4) vetprint(V, n);

    return 0;
}