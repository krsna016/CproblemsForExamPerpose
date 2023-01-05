// Write a program in C to find the average of all
// the elements in a given array: 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num,size,element;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    int sum = 0; 
    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
        sum += array[i];
    }
    printf("The created array is : ");
    for (int i = 0; i < size; i++)
        printf("%d ",array[i]);
    printf("\n");
    int average = sum/size;
    printf("The average of all the elements of the array is : %d\n",average);
    return 0;
}