#include<stdio.h>

int main(){
    int array[5];
    int i ;
     for(i=0; i<5; i++)
     {
        scanf("%d", &array[i]);
     }
     for ( i = 0; i < 5; i++)
     {
        /* code */
        printf("%d-th possition value=  %d \n", i ,  array[i]);
     }
     
    return 0;
}