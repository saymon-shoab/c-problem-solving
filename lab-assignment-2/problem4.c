#include<stdio.h>
#include<math.h>
#include<string.h>
void consecutive_even_number(int n);
int sum_of_equal(int i_no, int t);
int main(){
    int T;
    scanf("%d", &T);
    int N[T];
    int ans[5000];
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N[i]);
    }
    printf("\n");
    for (int i = 0; i < T; i++)
    {
        consecutive_even_number(N[i]);
        printf("\n");
   
    }
    
    
    
    return 0;
}

void consecutive_even_number(int n){
    for (int i = 0; i <= n; i++)
    {
        if (sum_of_equal(i,n))
        {
            printf("%d %d %d %d", i, i + 2, i + 4, i + 6);
            break;
        }
    }
    return;
}

int sum_of_equal(int i_no, int t){
    int a = i_no;
    int b = i_no+2;
    int c = i_no+4;
    int d = i_no+6;
    if ((a+b+c+d)==t)
    {
        return 1;
    }else
    {
        return 0;
    }
}