#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define max_length 256
#define 
// int sum(int x, int y)
// {
//     return x+y;
// }

// int main(){
//     int x = 2 , y = 3;
//     printf("sum is = %d", sum(x,y));
// }
void input(char input[], int *length)
{
    gets(input);
    *length = strlen(input);
    return;
}


int main (){
    char ch[max_length];
    int m= 0;
    input(ch,&n);
    printf("%s", ch);
    printf("%d", n );
}

