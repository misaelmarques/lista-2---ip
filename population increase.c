#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int TEST_CASES;
    scanf("%d", &TEST_CASES);

    int pA, pB;
    int years;
    double growthA, growthB;
    double absoluteA, absoluteB;

    for (int i = 0; i < TEST_CASES; i++){
        

        scanf("%d", &pA);
        scanf("%d", &pB);
        scanf("%lf", &growthA);
        scanf("%lf", &growthB);

        while(pA <= pB && years < 101){

            absoluteA = (int)((pA * growthA) / 100);
            absoluteB = (int)((pB * growthB) / 100);

            pA += absoluteA;
            pB += absoluteB;            
            years++;
        }

        if (years > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }

        years = 0;
        absoluteA = 0;
        absoluteB = 0;
    };

    return 0;
}