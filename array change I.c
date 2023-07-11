#include <stdio.h>
 
int main() {
  
  int arr[20];
  int reverseArr[20];

  for (int i = 0; i <= 19; i++){
    scanf("%d", &arr[i]);
  }

  for (int j = 19, k = 0; j >= 0; j--, k++){
    reverseArr[k] = arr[j];
    printf("N[%d] = %d\n", k, reverseArr[k]);
  }

  return 0;  
}