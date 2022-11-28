#include<stdio.h>

int main(){
    int N;
    int ara[100];
    int i;

    scanf("%d", &N);

    for ( i = 0; i < N; i++)
    {
        /* code */
        scanf("%d", &ara[i]);
    }
    int e_c = 0;
    int o_c = 0;

    for ( i = 0; i < N; i++)
    {
        /* code */
        if (ara[i]%2==0)
        {
            /* code */
            e_c++;
        }else
        {
            o_c++;
        }
        printf("No. of evens = %d\n", e_c);
        printf("No. of odds = %d\n", o_c);
        
    }
    // float arr[5] = {1,2,3,4,5};
// next question

//   int arr[5],i,sum=0;
//     for(i=1; i<=5; i+=1)
//     {
//         arr[i-1]=i-1;
//     }
//     for(i=0; i<5; i+=1)
//     {
//         printf("%d ",arr[i]);
//     }

    return 0;
}