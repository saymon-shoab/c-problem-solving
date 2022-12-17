#include<stdio.h>
#include<math.h>
#include<string.h>

int prime_check(int n);
double avarage_even(int *numbers , int l);

int main(){
    int n,i;
    scanf("%d", &n);
    int ara[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int prime_counter = 0;

    for ( i = 0; i < n; i++)
    {
        if (prime_check(ara[i]))
        {
            prime_counter++;
        }
        
    }
    printf("prime number: %d\n", prime_counter);
    
    avarage_even(ara,n);
    return 0;
}

int prime_check(int n){
    int flag = 1;
    if (n == 0 || n == 1 || n < 0)
    {
        flag = 0;
        return flag;
    }
 
    for (int i = 2; i <= floor(sqrt(n)); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

double avarage_even(int *numbers , int l){
    double even_number = 0, sum= 0;
    for (int i = 0; i < l; i++)
    {
        if (numbers[i]%2 == 0)
        {
            even_number++;
            sum+= *(numbers+i);
        }
    }
    // int avarage_even_number = (sum/even_number);
    printf("avarage of all even: %.2lf", sum/even_number);
    return sum/even_number;
}