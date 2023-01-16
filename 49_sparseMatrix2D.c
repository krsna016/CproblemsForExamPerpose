// Write a program in C to "Sparse a Matrix" :

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
    int rows,coloums,size = 0;
    printf("Enter the number of rows and coloums (SpaceSeperated) : ");
    scanf("%d %d",&rows,&coloums);
    int matrix[rows][coloums]; // Creating a matrix 
    printf("Enter the elements for the 2D-matrix : \n"); // Entering the elements for the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloums; j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j] != 0)
            {
                size ++;
            }
        }
    }
    printf("The created matrix is : \n"); // Printing the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloums; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    if(size < ((rows*coloums)/2)) // Checking for the sparse matrix
        printf("The matrix is a sparse matrix.\n");
    else
        printf("The matrix is not a sparse matrix.\n");
    int compact_matrix[3][size]; // We used 3 in rows as we want rows like "Rows" than "Coloum" and then "Value"
    if(size < ((rows*coloums)/2)) // Will Enter the loop and print the required only when the matrix is a sparse matrix
    {
        int k = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < coloums; j++)
            {
                if(matrix[i][j] != 0)
                {
                    compact_matrix[0][k] = i; // Row of non-zero element
                    compact_matrix[1][k] = j; // Coloum of non-zero element
                    compact_matrix[2][k] = matrix[i][j]; // Value of that non-zero element
                    k++;
                }
            }
        }
        printf("The compact matrix is : \n"); // Printing the compact matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < size; j++)
            {
                printf("%d ",compact_matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}