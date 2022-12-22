
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n1,n2;
    printf("Enter Number_1");
    scanf("%d", &n1);
    printf("Enter Number_2");
    scanf("%d", &n2);
    int max = n1>n2?n1:n2;
    return 0;
}
