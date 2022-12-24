#include<stdio.h>
#include<math.h>
#include<string.h>

char grade_chack(int m);

int main(){
    int markes;
    scanf("%d", &markes);
    char ans = grade_chack(markes);
    printf("%c", ans);
    return 0;
}

char grade_chack(int m)
{
    if (m>= 80 && m<= 100)
        return m= 'A';    
    else if (m>= 60 && m<= 79)
        return m= 'B';
    else if (m>= 40 && m<= 59)
        return m = 'C';
    else if (m>= 0 && m<= 39)
        return m= 'F';  
    
    return m;
}