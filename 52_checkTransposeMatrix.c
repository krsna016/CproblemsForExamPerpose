// Write a program to check for the transpose of a matrix :

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int row,coloum;
    printf("Enter the row and coloum of the array : ");
    scanf("%d %d",&row,&coloum);
    int matrix[row][coloum];
    int transpose[row][coloum];
    // Entering the element of the matrix:
    printf("Enter the elements for the matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    // Printing the matrix:
    printf("The created matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    // Transpose of a matrix: 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    // Printing the transpose of a matrix:
    printf("The transpose of the matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}