// Write a program in C to do "Linear Searching":

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void linear_search(int *arr,int size,int element)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            flag = 1;
            printf("The element %d is founded at the index : %d\n",element,i);
        }
    }
    if(flag == 0)
        printf("Element is not present in the array\n");
}
int main()
{
    int size,element;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be searched in the array : ");
    scanf("%d",&element);
    linear_search(arr,size,element);
    return 0;
}