
// From Cormen
void bubblesort(long int* A, size_t n){

    for(long int i = 0; i < n; ++i){
        for(long int j = n-1; j > i; --j){
            ++comp;
            if(A[j-1] > A[j]){
                exchange(&A[j], &A[j-1]);
                ++troca;
            }
        }
    }
}