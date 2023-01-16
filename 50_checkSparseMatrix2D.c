// Write a program in C to "Check for sparse Matrix" : 

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
    int row,coloum,i,j,count = 0; // i and j for the element/value
    printf("Enter the number of 'rows' and 'coloum' (SpaceSeperated) : ");
    scanf("%d %d",&row,&coloum);
    int matrix[row][coloum];
    printf("Enter the elements for the matric (SpaceSeperated) : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j] == 0)
            {
                count ++;
            }
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
    if(count > ((row*coloum)/2))
    {
        printf("It's a sparse matrix.\n");
    }
    else
    {
        printf("It's not a sparse matrix.\n");
    }
    printf("There are %d zeroes in the matrix and %d other elements.\n",count,(row*coloum)-count);
    return 0;
}