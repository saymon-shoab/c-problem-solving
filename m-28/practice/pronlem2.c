#include<stdio.h>
#include<stdlib.h> 

struct Comp
{
    double real;
    double img;
};

void printcomp(struct comp c){
    printf("%0.lf + %0.lf", c.real, c.img)
}

int main(){
    struct Comp c1 = {5,3};
    printcomp(c1);
    return 0;
}