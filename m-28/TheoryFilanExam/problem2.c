#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int number1=0,number2=1,number3=2,i,n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%d", number1);
    }else if (n==1)
    {
        printf("%d", number2);
    }else if (n==2)
    {
        printf("%d%d",number1,number2);
    }else
    {
        printf("%d, %d", number1, number2);
        for ( i = 2; i < n; i++)
        {
            number3= number1+number2;
            printf("%d",number3);
            number1 = number2;
            number2 = number3;
        }   
    }
    return 0;
}
