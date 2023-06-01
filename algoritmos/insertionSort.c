

void insertionsort(long int* vet, long int left, long int right){
   for (size_t i = left+1; i < right; i++){
      long int key = vet[i];
      long int j = i -1;
      ++comp;
      while(j >= left && key < vet[j]){
         vet[j+1] = vet[j];
         --j;
         ++troca;
      }
      vet[j+1] = key;
   }
}