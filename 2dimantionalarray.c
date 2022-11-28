#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int i,j;
    int marks[3][7];
    // marks[0][4] = 12;
    // marks[1][5] = 46;
    // marks[1][1] = 18;
    
    // input functionality
    for ( i = 0; i < 3; i++)
    {    
        for ( j = 0; j < 7; j++)
        {
            scanf("%d ", &marks[i][j]);
        }
        printf("\n");
        
    }
    // output functionality
    printf("output");
    for ( i = 0; i < 3; i++)
    {    
        for ( j = 0; j < 7; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
        
    }

    
    return 0;
} 