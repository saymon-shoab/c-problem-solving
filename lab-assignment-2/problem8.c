#include<stdio.h>
#include<math.h>
#include<string.h>

void key_check(char s[]);

int main(){
    char s[10000];
    gets(s);
    key_check(s);
    return 0;
}

void key_check(char s[]){
    int sl = strlen(s);
    for (int i = 0; i < sl; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c", s[i]);
        }else if (i % 2 == 1)
        {
            printf("%c%c", s[i],s[i]);
        }
    }
    
    return;
}