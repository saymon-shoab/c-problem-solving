#include<stdio.h>
#include<math.h>
#include<string.h>

void swap(int *x, int *y);

int main(){
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int si;
    scanf("%d", &si);
    int si_ara[si][2];
    for (int i = 0; i < si; i++)
    {
        scanf("%d %d", &si_ara[i][0], &si_ara[i][1]);
    }
    for (int i = 0; i < si; i++)
    {
        int a = si_ara[i][0]-1;
        int b = si_ara[i][1]-1;
        swap(&ara[a], &ara[b]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    return;
}
