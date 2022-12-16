#include<stdio.h>
#include<math.h>
#include<string.h>
bouble_short(char name[i]);
int main(){
    char name[100];
    fgets(name,sizeof(name),stdin);
    for (int i = 0; name[i] != 0; i++)
    {
        if (name[i]>= 'a' && name[i]<='z')
        {
            // name[i] -= 32;
            bouble_short(name[i]);
        }else if ( name[i]>= 'A' && name[i]<='Z')
        {
            // name[i] += 32;
            bouble_short(name[i]);
        }
    }
    return 0;
}

char bouble_short( char name[i]){

    return;
}