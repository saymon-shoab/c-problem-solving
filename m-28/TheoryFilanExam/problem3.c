#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int sum(int x, int y)
{
    return x+y;
}

int main(){
    int x = 2 , y = 3;
    printf("sum is = %d", sum(x,y));
}
