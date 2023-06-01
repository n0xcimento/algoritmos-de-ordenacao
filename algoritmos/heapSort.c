

void build_heap(long int* vet, size_t pai, size_t fim){
    long int aux = vet[pai];
    long int filho = 2 * pai + 1;

    while(filho <= fim){
        if(filho < fim){
            if(vet[filho] < vet[filho +1]){
                ++filho;
            }
        }

        ++comp;
        if(aux < vet[filho]){
            vet[pai] = vet[filho];
            pai = filho;
            filho = 2 * pai +1;
            ++troca;
        }else{
            filho = fim +1;
        }
    }
    vet[pai] = aux;
}


// by Backes
void heapsort(long int* vet, size_t size){
    for(long int i = (size-1)/2; i >= 0; --i){
        build_heap(vet, i, size-1);
    }
    for(long int i = size-1; i >= 1; --i){
        exchange(&vet[0], &vet[i]);
        build_heap(vet, 0, i-1);
    }
}