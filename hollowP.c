#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int row,col;
    int N;
    scanf("%d", &N);
    for ( row = 1; row<=N; row++)
    {
        printf("%d",row);
    }
    printf("\n");
    for ( row = 2; row<N; row++)
    {
        printf("%d",row);
        for ( col = 1; col<=(N-2); col++)
        {
            printf(" ");
        }
        printf("%d",N);
        printf("\n");
    }
    for ( row = 1; row<=N; row++)
    {
        printf("%d",N);
    }
    return 0;
}