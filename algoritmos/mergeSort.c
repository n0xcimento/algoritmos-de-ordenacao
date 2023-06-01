

void merge(long int* vet, long int l, long int m, long int r){
   long int len1 = m -l +1, len2 = r -m;
   long int left[len1], right[len2];

   for (size_t i = 0; i < len1; i++)
      left[i] = vet[l + i]; // Filling left array
   for (size_t i = 0; i < len2; i++)
      right[i] = vet[m +1 +i]; // Filling right array

   size_t i = 0;
   size_t j = 0;
   size_t k = l;
   while (i < len1 && j < len2){ // Iterate into both arrays left and right{
   	++comp;
      if (left[i] <= right[j]){ // IF element in left is less then increment i by pushing into larger array{
         vet[k] = left[i];
         i++;
      } else {
         vet[k] = right[j]; // Element in right array is greater
         j++;
         ++troca;
      }
      k++;
   }
   while (i < len1){ // This loop copies remaining element in left array{
      vet[k] = left[i];
      k++;
      i++;
   }
   while (j < len2){ // This loop copies remaining element in right array{
      vet[k] = right[j];
      k++;
      j++;
   }
}


void mergesort(long int* A, size_t inicio, size_t fim){

	if(inicio < fim){
		size_t meio = (inicio+fim)/2;
		mergesort(A, inicio, meio);
		mergesort(A, meio+1, fim);
		merge(A, inicio, meio, fim);
	}
}