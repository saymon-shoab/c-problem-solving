#include<stdio.h>
#include<math.h>
void is_even(int x)
// main function bellow...
int  main(){
    int n;
    scanf("%d",&n);
    int i;
    int is_prime = 1;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            is_prime = 0;
        }
        
    }
    if (is_prime==1)
    {
        printf("prime Number\n");
    }else
    {
        printf("compositive number\n");
    }
    
    
    return 0;
}

int is_even(int x){
    if (x%2==0)
        return 1;
    else
        return 0;
    
}
