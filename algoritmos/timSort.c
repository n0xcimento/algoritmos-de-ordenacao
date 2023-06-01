#define min(x,y) (x < y ? x : y)

// from geeksforgeeks
const int RUN = 32;
void timsort(long int* vet, size_t n){
    for (size_t i=0; i < n; i+=RUN)
        insertionsort(vet, i, min((i+31), n)); //Call insertionSort()

    for (size_t s = RUN; s < n; s = 2*s){
        for (size_t left = 0; left < n; left += 2*s){
            // mid é o índice final do array1
            // mid+1 é o índice incial do array2
            long int mid = left + s - 1; 
            long int right = min((left + 2*s - 1), (n-1));
            
            if(mid < right)
                merge(vet, left, mid, right); // merge sub array
        }
    }
}