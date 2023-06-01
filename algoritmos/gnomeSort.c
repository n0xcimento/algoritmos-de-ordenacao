

// from geeksforgeeks
void gnomesort(long int *arr, size_t n){
    long int index = 0;
  
    while(index < n){
        ++comp;
        if(index == 0)
            index++;
        if(arr[index -1] <= arr[index])
            index++;
        else{
            exchange(&arr[index], &arr[index -1]);
            index--;
            ++troca;
        }
    }
}