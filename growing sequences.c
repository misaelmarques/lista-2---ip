#include <stdio.h>
 
int main() {
  
  int x;

  while(1){

    scanf("%d", &x);

    if (x == 0){
      return 0;
    }

    for (int j = 1; j <= x; j++){
      if (j == x){
        printf("%d\n", j);
        break;
      }
      printf("%d ", j);
    }
  }

  return 0;
}