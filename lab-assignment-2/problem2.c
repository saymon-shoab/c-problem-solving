#include<stdio.h>
#include<math.h>
#include<string.h>
void sort(char s[]);
int main(){
    char s[10000];
    gets(s);
    sort(s);
    return 0;
}

void sort(char s[]){
    char t;
    int i,j;
    int str_len = strlen(s);
    for ( i = 0; i < str_len -1; i++)
    {
        for ( j = i + 1; j < str_len ; j++)
        {
            if (s[i]< s[j])
            {
                t = s[i];
                s[i] = s[i];
                s[j] = t;
            }
            
        }
        
    }
    printf("%s", s);
    return;
}

