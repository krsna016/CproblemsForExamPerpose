// Write a program to insert an element at an given index towards the end:

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
    int size, num;
    int index, element;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int array[size + 1];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
            printf("The created array is : ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
    printf("Enter the index where you want to insert the element : ");
    scanf("%d",&index);
    printf("Enter the element for the index : ");
    scanf("%d",&element);
    for (int i = size + 1; i > index; i--)
        array[i] = array[i-1];
    array[index] = element;
    printf("The updated array is : ");
    for (int i = 0; i <= size; i++)
        printf("%d ",array[i]);
    printf("\n");
    return 0;
}