#include<stdio.h>
#include<math.h>
#include<string.h>

void seven_counter(int *numbers, int n, int *count);
int is_seven(int a);

int main(){
    int n,i;
    scanf("%d", &n);
    int n_arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &n_arr[i]);
    }
    int seven_count = 0;
    seven_counter(n_arr,n,&seven_count);

    if (seven_count >= ceil(n / 2.0))
    {
        printf("beautiful");
    }else
    {
        printf("ugly");
    }
    return 0;
}

void seven_counter(int *numbers, int n, int *count){
     for (int i = 0; i < n; i++)
     {
        if (is_seven(* (numbers + i)))
        {
            *count = *count+1;
        }
        
     }
     
}

int is_seven(int svn)
{
    while (svn > 0)
    {
        if (svn % 10 == 7)
        {
            return 1;
        }
        svn /= 10;
    }
    return 0;
}
