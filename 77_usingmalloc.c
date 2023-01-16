// Write a program to dynamically allocate the memory using "malloc()" <- "Memory allocation":

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
    int size,length;
    int *ptr = NULL;
    printf("Enter the size of the array you want to create : ");
    scanf("%d",&size);
// Use of malloc: Here memory is allocating at runtime not in compile time.
    ptr = (int *)malloc(size * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not allocated.\n");
    }
    else
    {
        printf("Memory successfully allocated using malloc().\n");
    }
    printf("The created array before entering the elements is : \n"); // The dynamically allocated memory initially store the "Garbage value"
    for (int i = 0; i < size; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    printf("Enter the elements of the array : \n");
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