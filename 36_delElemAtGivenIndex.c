// Write a program to delete an element at a given index:

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
    int num,element,size,index;
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
    printf("Enter the index to delete the element there : ");
    scanf("%d",&index);
    for (int i = index; i < size-1; i++)
        array[i] = array[i+1];
    printf("The updated array is : ");
    for (int i = 0; i < size-1; i++)
        printf("%d ",array[i]);
    printf("\n");
    return 0;
}