#include <stdio.h>
// no argument and with return values
int added()
{
    int a, b, s = 0;
    printf("Enter a and b\n");
 
    scanf("%d %d", &a, &b);
    s = a + b;
    return s;
}
 
int main()
{
    // function call
    printf("Sum of a and b is %d", added());
    return 0;
}
