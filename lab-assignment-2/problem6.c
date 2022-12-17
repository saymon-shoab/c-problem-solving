#include<stdio.h>
#include<math.h>
#include<string.h>

int divisible_counter(int ara[], int length);
int divided_by_three(int n);
int divided_by_five(int n);

int main(){
    int n, count = 0;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    divisible_counter(ara,n);
    return 0;
}

int divisible_counter(int ara[], int length){
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (divided_by_three(ara[i]) && divided_by_five(ara[i]))
        {
            counter++;
        }else if (divided_by_three(ara[i])|| divided_by_five(ara[i]))
        {
            counter++;
        }        
    }
            if (counter>0)
        {
            printf("%d", counter);
            return counter;
        }else
        {
            printf("_1");
            return -1;
        }
}

int divided_by_three(int n)
{
   if (n % 3 == 0)
   {
      return 1;
   }else
   {
       return 0;
   }
   
   
}

int divided_by_five(int n)
{
    if (n%5==0)
    {
        return 1;
    }else
    {
        return 0;
    }
}