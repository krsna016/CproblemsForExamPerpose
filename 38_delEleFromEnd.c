// Write a program to delete an element from
// the end of the array:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int size,num;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++)
        scanf("%d",&array[i]);
    printf("The created array is : ");
    for (int i = 0; i < size; i++)
        printf("%d ",array[i]);
    printf("\n");
    printf("The updated array is : ");
    for (int i = 0; i < size-1; i++)
        printf("%d ",array[i]);
    print("\n");
    return 0;
}