#include <stdio.h>
 
int main() {
  
  int myN[10];

  for (int i = 0; i < 10; i++){
    scanf("%d", &myN[i]);
    if (myN[i] < 0 || myN[i] == '\0'){
      myN[i] = 1;
    }
  }

  for (int k = 0; k < 10; k++){
    printf("X[%d] = %d\n", k, myN[k]);
  }

  return 0;  
}
