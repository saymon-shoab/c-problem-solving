#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int mat[3][3],transpos[3][3];
    int i,j;
    printf("enter metrix eliments\n");
    // matrix input function..
    for (size_t i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    // matrix print function...
    printf("metrix elements\n");
    for (size_t i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // transpse functionality
    for (size_t i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            transpos[j][i] = mat[i][j];
        }
    }
    // transpos elements print function..
    printf("transpos elements: \n");
    for (size_t i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ", transpos[i][j]);
        }
        printf("\n");
    }
    return 0;
}
