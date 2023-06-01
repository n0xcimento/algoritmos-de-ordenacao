
// contam a quantidade de comparações e trocas que
// um algoritmo realizou para processar determinada entrada.
unsigned long int comp=0, troca=0;


unsigned long int readfile(long int** V, const char* fileName){
	FILE *fPtr = NULL;
	long int *vetor = malloc(sizeof(long int));
	unsigned long int size = 0;

	if((fPtr = fopen(fileName, "r")) == NULL){
		printf("Erro na abertura de %s\n", fileName);
		exit(1);

	}else{
		fscanf(fPtr, "%ld", &vetor[size]);

		while(!feof(fPtr)){
			++size;
			vetor = realloc(vetor, (size+1) * sizeof(long int));
			fscanf(fPtr, "%ld", &vetor[size]);
		}
	}

	fclose(fPtr);
	*V = vetor;
	return size+1;
}


void vetprint(unsigned long int* vetor, unsigned long int n){
	for(unsigned long int a = 0; a < n; ++a){
		printf("%ld ", vetor[a]);
	}putchar('\n');
}


void exchange(unsigned long int* a, unsigned long int* b){
	unsigned long int temp = *a;
	*a = *b;
	*b = temp;
}


void usage(const char* bin, const char* algoritmo){
    
    printf(
"USAGE:\v%s ALGORITHM DIR/*.in\n\nALGORITHM:\v\
bubblesort|insertionsort|selectionsort|mergesort|\n\
          quicksort|heapsort|timsort|gnomesort\n\n\
DIR:\valeatorio|crescente|decrescente\n", bin, algoritmo);
    exit(1);
}