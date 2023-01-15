// Write a program in C to find the second largest number in the given array:

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
    int size,temp;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    for (int i = 0; i < size-1; i++)
        for (int j = 0; j < size-1-i; j++)
            if(arr[j]<arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
    printf("The ordered array is : ");
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    printf("\n");
    printf("The second largest number in the array is : %d\n",arr[1]);
    return 0;
}