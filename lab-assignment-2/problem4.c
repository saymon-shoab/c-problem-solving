#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int T;
    scanf("%d", &T);
    int N[5000];
    int ans[5000];
    int first_even[3];
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &N[i]);
    }
    printf("\n");
    for (int i = 1; i <= 3; i++)
    {
        first_even[i] = ((N[i]-12)/4);
        printf("%d \n", first_even[i]) ;
    }
    
        for (int i = 1; i <= 4; i++)
        {
            
            printf("%d ", ans[i]+ );
        }
    
    return 0;
}