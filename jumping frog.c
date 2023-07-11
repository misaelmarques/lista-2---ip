#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int jump_height;
    int npipes;

    scanf("%d", &jump_height);
    scanf("%d", &npipes);

    int pipes[npipes];

    for (int i = 0; i < npipes; i++){
        scanf("%d", &pipes[i]);
    }

    for (int pipe = 1; pipe < npipes; pipe++){
        if (pipes[pipe] > pipes[pipe - 1]){
            if ((pipes[pipe - 1] + jump_height) < pipes[pipe]){
                // printf("pipe %d\n", pipes[pipe]);
                // printf("pipe + 1%d\n", pipes[(pipe + 1)]);
                printf("GAME OVER\n");
                // printf("1\n");
                return 0;
            }
        }

        if (pipes[pipe] < pipes[pipe - 1]){
            if ((pipes[pipe - 1] - jump_height) > pipes[pipe]){
                printf("GAME OVER\n");
                return 0;
            }
        }
    }
    
    printf("YOU WIN\n");

    return 0;
}