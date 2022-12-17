#include<stdio.h>
#include<math.h>
#include<string.h>
int sum(int numbers[], int length);

int main(){
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int result = sum(ara,n);
    printf("%d", result);
    return 0;
}
int sum(int numbers[], int n){
    int s= 0;
    for (int i = 0; i < n; i++)
    {
        if ((i+1)%2==0 && numbers[i]%2==0)
        {
            s+= (numbers[i]+(i+1));
        }else if ((i + 1) % 2 != 0 && numbers[i] % 2 != 0)
        {
            s += (numbers[i]+(i+1));
        }
    }
    return s;
}
