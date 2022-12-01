#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial = %d", fact);
    retrun 0;
}