#include <stdio.h>
 
int main() {
  
  int n;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int sum = 0;
    while (1){
      if (x % 2 == 1 || x % 2 == -1){
        sum += x;
        y--;

        if (y == 0){
          break;
        }
      }
      x++;
    }
    printf("%d\n", sum);
  }
  return 0;
}
