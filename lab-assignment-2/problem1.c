#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int n,j,i,sum=0,m=-1,lc=1;
    scanf("%d", &n);
    for ( i = 1; i <= ceil(n/3.0); i++)
    {
        m= m*(-1);
        for ( j = 0; j < 3; j++)
        {
             sum += lc * m;
             lc++;
             if (lc>n)
                break;
        }
    }
    printf("%d", sum);
    return 0;
}


