#include <stdio.h>

int main(void)
{
  int row, a,b,c;
  int i, k;
  
  scanf("%d", &row);
  
  //init part
  a = 1;
  b = 1;
  c = 0;
  
  for(i=1; i <= row; i++){
    for(k=1; k <= i; k++){
      printf("%d ", a);
      
      c = a + b;
      a = b;
      b = c;
    }
    printf("\n");
  }
  
  return 0;
}
