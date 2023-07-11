#include <stdio.h>
 
int main() {

  double n;
  scanf("%lf", &n);

  double myArr[100];
  myArr[0] = n;
  printf("N[0] = %.4lf\n", n);

  for (int i = 1; i < 100; i++){
    myArr[i] = n / 2.0;
    n /= 2;
    printf("N[%d] = %.4lf\n", i, myArr[i]);
  }

  return 0;  
}