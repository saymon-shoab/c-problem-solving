#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    n=5;
    int *ptr;
    prt =(int*) malloc(n*sizeof(int));
    if (ptr==NULL)
    {
        printf("memory allocation failled.\n")
    }else
    {
        for (int i = 0; i < n; i++)
        {
        scanf("%d", (ptr+i));
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d", *(ptr+i));
        }
    }
    n = 10;
    ptr = realloc(ptr,n*sizeof(int));
    printf("%p\n",ptr)
    if (ptr==NULL)
    {
        printf("memory allocation failed.\n");
    }
    else
    {
        for (int i = 5; i < n; i++)
        {
            printf("%d ", (ptr+i));
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d", *(prt+i));
        }
        
        
    }
    free(ptr);
    return 0;
}