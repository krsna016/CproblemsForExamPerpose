// Write a program to find the sum of diagonals of a 2D matrix:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int row,coloum,sum = 0;
    printf("Enter the row and coloum of the 2D array : ");
    scanf("%d %d",&row,&coloum);
    int arr[row][coloum];
    printf("Enter the elements for the 2D matrix : \n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < coloum; j++)
            scanf("%d",&arr[i][j]);
    printf("The created matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 1; i <= row; i++)
        for (int j = 1; j <= coloum; j++)
            if(i == j || ((i + j) == (row + 1)))
            {
                sum += arr[i-1][j-1];
            }
    printf("The sum of the diagonal elements of the array is : %d\n",sum);
    return 0;
}