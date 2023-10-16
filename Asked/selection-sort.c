#include <stdio.h>

// A[] = Array, n = Size of the array
void selection_sort(int A[], int n)
{
  int i, k, mi, temp; // mi = index with minimum value, temp for swapping
  for(int i=0; i < n; ++i){
    mi = i;
    for(k = i + 1; k < n; ++k){
      if( A[k] < A[mi] ) mi = k;
    }

    if( mi != i ){
      // Swapping
      temp = A[i];
      A[i] = A[mi];
      A[mi] = temp;
    }
  }
  // Now array has been sorted
}

int main(void)
{
  int A[15], n, i;

  scanf("%d", &n);
  if( n > 15 || n < 1 ) return 1; // invalid input
  
  for(i = 0; i < n; ++i){
    scanf("%d", &A[i]);
  }

  selection_sort(A,n);

  for(i=0; i < n; ++i){
    printf("%d ", A[i] );
  }
  printf("\n");
  
  return 0;
}
