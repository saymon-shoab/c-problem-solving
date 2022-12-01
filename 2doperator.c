#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    // int N,M,i,j;
    // scanf("%d%d", &N,&M);
    // int matrix[N][M];
    // for ( i = 0; i < M; i++)
    // {
    //     for ( j = 0; j < N; j++)
    //     {
    //         scanf("%d", &matrix[i][j]);
    //     }
        
    // }

    // for ( i = 0; i < M; i++)
    // {
    //     for ( j = 0; j < N; j++)
    //     {
    //         if (matrix[i][j]==i && matrix[i][j]==j)
    //         {
    //             matrix[i][j] =(matrix[i][j]+3);
    //         }else if (matrix[i][j]==i )
    //         {
    //             matrix[i][j]=(matrix[i][j]+2);
    //         }else if (matrix[i][j]==j)
    //         {
    //             matrix[i][j+1]= (matrix[i][j]+1);
    //         }   
    //     }
    // }
    // for ( i = 0; i < M; i++)
    // {
    //     for ( j = 0; j < N; j++)
    //     {
    //         printf("%d ", matrix[i][j]);
    //         printf("\n");
            
    //     }
    // }
     int array[100][100],row, col;
    scanf("%d %d", &row, &col);

    for(int i=1; i<=row; i++)
        for(int j=1; j<=col; j++)
            scanf("%d",&array[i][j]);

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if(array[i][j] == i && array[i][j] == j)
            {
               array[i][j] += 3;
            }
            else if(array[i][j] == i)
            {
                array[i][j]+= 2;
            }
            else if (array[i][j] == j)
            {
                array[i][j]+= 1;
            }
        }
    }


    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }



    return 0;
}
