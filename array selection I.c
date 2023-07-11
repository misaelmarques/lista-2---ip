#include <stdio.h>
 
int main() {
  
  double arr[100];  
  double n;
  for (int i = 0; i <= 99; i++){
    scanf("%lf", &arr[i]);
  }

  for (int j = 0; j <= 99; j++){
    if (arr[j] <= 10){
      n = arr[j] * 1.0;
      printf("A[%d] = %.1lf\n", j, n);
    }
  }

  return 0;  
}