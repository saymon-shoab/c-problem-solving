#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int x,y;
    scanf("%d %d", &x,&y);
    int* ptrX;
    int* ptrY;
    ptrX = &x;
    ptrY=&y;
    printf("%d \n", *ptrX);
    printf("%d \n", *ptrY);
    return 0;
}