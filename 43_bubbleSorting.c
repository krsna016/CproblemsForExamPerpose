#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void show_array(int *arr,int size) 
{
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]); // arr[i] = *(arr + i) 
    printf("\n");
}

void bubble_sort(int *arr,int size)
{
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    printf("The unsorted array is : ");
    show_array(arr,size);
    bubble_sort(arr,size);
    printf("The sorted array is : ");
    show_array(arr,size);
    return 0;
}