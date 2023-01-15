// Write a program in C to do "Binary Searching":

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int binary_search(int *arr,int size,int element)
{
    int low = arr[0],mid,high = arr[size-1];
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int size,element,index_is;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : ");
    // Array must be sorted for the binary search
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to search in the array : ");
    scanf("%d",&element);
    index_is = binary_search(arr,size,element);
    printf("The element is present at index : %d\n",index_is);
    return 0;
}