#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // string input functionality...
    // int stringSize = 10;
    char S[25];
    // gets(s);
    scanf("%s", S);
    int length = strlen(S);
    printf("%s\n", S);
    // printf("lenght of the string is = %d\n", length);
    // number input functionality..
    int a,b;
    printf("enter two number: \n");
    scanf("%d %d", &a, &b);
    printf("%d %d", a,b);
    printf("\n");
    // loop functionality...
    int i;
    int temp=0;
    for ( i = 0; i < length; i++)
    {
        if (S[i]== '+')
        {
            temp = temp+(a+b);
        }else if (S[i]== '*')
        {
            temp = temp+(a*b);
        }
    }
    printf("ans is = %d", temp);

    return 0;
}