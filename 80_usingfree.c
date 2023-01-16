// Write a program to free the dynamically allocated memory using "free()" <- "Freeing up the memory" :

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
    int size,size_new;
    int *ptr = NULL;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    ptr = (int *)malloc(size * sizeof(int));
    if(ptr == NULL)
    {
        printf("The memory is not allocated yet.\n");
    }
    else
    {
        printf("The memory is successfully allocated.\n");
    }
    printf("The created array before entering the elements : \n");
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
    printf("\n\n");
    
    printf("Enter the new size of the array : \n");
    scanf("%d",&size_new);
    ptr = (int *)realloc(ptr,size_new * sizeof(int));
    printf("Enter the elements for the array : \n");
    for (int i = 0; i < size_new; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The new created array is (before using free() or before freeing up the dynamically allocated memory) : \n");
    for (int i = 0; i < size_new; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    // Use of free: It free up the dynamically allocated memory.
    free(ptr); 
    printf("The array is (After freeing up the memory using free()) : \n");
    for (int i = 0; i < size_new; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    return 0;
}