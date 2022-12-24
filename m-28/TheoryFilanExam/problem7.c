#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int ara1[row][col];
    int ara2[row][col];
    int sum[row][col];
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scnaf("%d", ara1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ara2[i][j]);
        }
    }
      // addition of two matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
 
    // print sum of two matrix
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
 
            if (j == col - 1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
