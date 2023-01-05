// Write a program to create an array and display all 
// it's elements : 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int size,elements;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element-%d of the array : ",i+1);
        scanf("%d",&array[i]);
    }
    printf("The array created is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}