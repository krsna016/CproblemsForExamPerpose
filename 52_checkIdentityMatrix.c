// Write a program in C to check for the Identity matrix:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int row,coloum,flag = 0;
    printf("Enter the row and coloum of the matrix : ");
    scanf("%d %d",&row,&coloum);
    int matrix[row][coloum];
    printf("Enter the elements of the matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The created matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            if(i == j && matrix[i][j] != 1)
                flag = -1;
            if(i != j && matrix[i][j] != 0)
                flag = -1;
        }
    }
    if(flag != 0)
    {
        printf("The matrix is not an Identity matrix\n");
    }
    else
    {
        printf("The matrix is an Identity matrix\n");
    }
    return 0;
}
