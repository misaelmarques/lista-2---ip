#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int TEST_CASES;
    scanf("%d", &TEST_CASES);

    for (int i = 0; i < TEST_CASES; i++){
        long long int num;
        scanf("%lld", &num);
        long long int fibArr[60];
        fibArr[0] = 0;
        fibArr[1] = 1;

        for (int j = 2; j < 61; j++){
            fibArr[j] = fibArr[j - 1] + fibArr[j - 2];
        }
        
        printf("Fib(%lld) = %lld\n", num, fibArr[num]);
    }

    return 0;
}