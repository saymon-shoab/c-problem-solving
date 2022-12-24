#include<stdio.h>
#include<math.h>
#include<string.h>


double compare_fac(int a, int b);
double fac(int number);

int main(){
    int a=4,b=3;
    int ans = compare_fac(a,b);
    printf("%d", ans);
    return 0;
}

double fac(int number)
{
  double result = 1;
    for (int i = 1; i <= number; i++)
    {
        result = result * i;
    }
    return result;
}

double compare_fac(int a, int b)
{
    return fac(a)/fac(b);
} 
