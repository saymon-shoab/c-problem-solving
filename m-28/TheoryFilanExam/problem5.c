#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int N;
    printf("Enter Number of Elements: ");
    scanf("%d", &N);
    int *ptr;
    ptr = (int *)malloc(N * sizeof(int));
 
    for (int i = 0; i < N; i++)
    {
        printf("Enter %d th element: ", i + 1);
        scanf("%d", (ptr + i));
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d th position value is %d\n", i, *(ptr + i));
    }
 
    free(ptr);
}
