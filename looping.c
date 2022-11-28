#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char name[] = "sadiaSultana";
    char name2[] = "saymonshoab";     
    printf("%d\n",strlen(name) );
    strncat(name, name2,3);
    puts(name);
    printf("%d", strlen(name));
    return 0;
}