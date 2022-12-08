#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int i,n,k;
    int check = 0;
    int ans;
    scanf("%d%d", &n,&k);
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
            check++;
            if (check==k)
            {
                ans=i;
            }
        }
        
    }
    for ( i = 1; i <= n; i++)
    {
        if (i%2==1)
        {
            printf("%d ",i);
            check++;
            if (check==k)
            {
                ans=i;
            }
        }   
    }
    printf("\n");
    printf("the %dth elements in the sequence is %d", k, ans);
    return 0;
}
