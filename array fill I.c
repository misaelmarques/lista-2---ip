#include <stdio.h>
 
int main() {
  
  int arr[10];
  int n;
  scanf("%d", &n);

  arr[0] = n;
  
  for (int i = 1; i < 10; i++){
    arr[i] = n * 2;
    n *= 2;
  }

  for (int j = 0; j < 10; j++){
    printf("N[%d] = %d\n", j, arr[j]);
  }

  return 0;  
}