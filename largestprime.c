#include <stdio.h>
#include <stdlib.h>

int main(void){
int t,k;
for(k=0;k<t;k++)
{
    int N;
    scanf("%d", &N);
    int divisor = 1,i,j;

    for (i = 2; i <= N; i++){
        if (N % i == 0){
            for (j = 2; j < i; j++){
                if (i % j == 0 && j != i){
                    break;
                }
                else{
                divisor = i;
                }
            }
        }
    }
    printf("%i\n", divisor);
}
    return EXIT_SUCCESS;
}
