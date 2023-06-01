
// from Backes
void selectionsort(long int* A, size_t n){
    
    for(size_t i = 0; i < n-1; ++i){
        size_t menor = i;

        for(size_t j = i+1; j < n; ++j){
            ++comp;
            if(A[j] < A[menor]){
                menor = j;
            }
        }

        if(i != menor){
            exchange(&A[i], &A[menor]);
            ++troca;
        }
    }   
}