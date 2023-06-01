
// key é o maior valor da parte esquerda; ou seja, será o pivô

long int partition(long int* A, long int inicio, long int final){
    long int key = A[final], iterador = inicio -1;

    for(long int j = inicio; j < final; ++j){
        ++comp;
        if(A[j] < key){
            ++iterador;
            exchange(&A[iterador], &A[j]);
            ++troca;
        }
    }
    exchange(&A[iterador+1], &A[final]);
    ++troca;
    return iterador +1;  // retorna o index do pivõ
}


void quicksort(long int* A, long int inicio, long int fim){
    if(inicio < fim){
        long int pivo = partition(A, inicio, fim);
        quicksort(A, inicio, pivo -1);
        quicksort(A, pivo +1, fim);
    }
}