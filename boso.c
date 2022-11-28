#include<stdio.h>

int main(){
    int i,j,t,N=11;
    int ara[11]={12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    printf("\n");
    for ( j = 0; j < 5; j++)
    {
        for ( i = 0; i < (N-1); i++)
        {
            if (ara[i]>ara[i+1])
            {
                t = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = t;
            } 
        }
        for ( i = 0; i <= N; i++)
        {
            
            printf("%d ", ara[i]);
        }
        printf("\n");
    }
    return 0;
}