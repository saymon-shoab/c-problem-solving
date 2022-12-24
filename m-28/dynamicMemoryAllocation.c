#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    int ara[10];
    scanf("%d", &n);
    int* ptr;
    // ptr = (int*) malloc(n*sizeof(int));
    ptr = (int*) calloc(n, sizeof(int));
    for ( i = 0; i < n; i++)
    {
        scanf("%d", (ptr+i));
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%dth position-> %d\n",i, *(ptr+i));
    }





























    // for ( i = 0; i < n; i++)
    // {
    //     ara[i] = i+1;
    // }
    // for ( i = 0; i < n; i++)
    // {
    //     printf("%d\n", ara[i]);
    // }
    return 0;
}