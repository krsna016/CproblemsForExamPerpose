// Write a program to find the sum of the border
// elements of a 2D matrix:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int row, coloum, sum = 0;
    printf("Enter the row of the array : ");
    scanf("%d", &row);
    printf("Enter the coloum of the array : ");
    scanf("%d", &coloum);
    int matrix[row][coloum];
    printf("Enter the elements of the matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The created matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            if (i == 0 || j == 0 || j == coloum - 1 || i == row - 1)
            {
                sum += matrix[i][j];
            }
        }
    }
    printf("The sum of the border elements of the matrix is : %d\n",sum);
    return 0;
}