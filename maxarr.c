#include<stdio.h>

int main(){
    int N = 6;
    int arr[N];
    int i ;
    for ( i = 0; i < N; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }
    int max = arr[0];

for ( i = 0; i < N; i++)
{
    /* code */
    if (arr[i]>max)
    {
        /* code */
        max = arr[i];
    }
}
    printf("the highest value of arr is = %d\n",max);
    return 0;
}