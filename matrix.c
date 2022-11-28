#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int i,j;
    int mat1[3][3],mat2[3][3],ans[3][3];
    // loop for input..
    printf("enter the elements of the first metrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
 
    // loop for 2nd input..
    printf("enter the elements of 2nd petrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
        // mat1 er i row er sathe mat2 er j col er gun 
          ans[i][j]= mat1[i][0]*mat2[0][j]+ mat1[i][1]*mat2[1][j]+ mat1[i][2]*mat2[2][j];
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}