#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter the three sides of a tringle");
    scanf("%d %d %d", &a, &b, &c);
    float s;
    s= (a+b+c)/2.0;
    printf("half perimeter = %f", s);
    double area;
    area = s*(s-a)*(s-b)*(s-c);
    area = sqrt(area);
    printf("Area = %lf", area);
    return 0;
}



