// Write a program to dynamically allocate the memory using "calloc()" <- "Continuous memory allocation" :

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
    int size;
    int *ptr = NULL;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
// Use of calloc: Here memory is allocating at runtime not in compile time.
    ptr = (int *)calloc(size,sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not allocated.\n");
    }
    else
    {
        printf("Memory successfully allocated using calloc().\n");
    }
    printf("The created array before entering the elements : \n"); // The dynamically allocated memory here initially store the value = 0
    for (int i = 0; i < size; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    printf("Enter the elements for the array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The created array is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    return 0;
}