// Write a program in C to insert an element at the 
// beginning of the array :
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num,size,element;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size+1];
    printf("Enter the elements in the array : ");
    for (int i = 0; i < size; i++)
        scanf("%d",&array[i]);
    printf("The created array is : ");
    for (int i = 0; i < size; i++)
        printf("%d ",array[i]);
    printf("\n");
    printf("Enter the element to be placed at the beginning of the array : ");
    scanf("%d",&element);
    for (int i = size+1; i > 0; i--)
        array[i] = array[i-1];
    array[0] = element;
    printf("The updated array is : ");
    for (int i = 0; i <= size; i++)
        printf("%d ",array[i]);
    printf("\n");
    return 0;
}