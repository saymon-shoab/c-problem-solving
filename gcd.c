#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int i,gcd;
    for ( i = 1; i <= a; i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd = i;
            break;
        } 
    }
    printf("gcd is %d\n", gcd);
    return 0;
}