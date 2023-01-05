// Write a program to find the sum/difference/product
// and remainder of two arrays and store the result 
// in third array:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];
    int sum[size];
    int diff[size];
    int prod[size];
    int rema[size];
    printf("Enter the elements of the first array : ");
    for (int i = 0; i < size; i++)
        scanf("%d",&arr1[i]);
    printf("Enter the elements of the second array : ");
    for (int i = 0; i < size; i++)
        scanf("%d",&arr2[i]);
    // Summation:
    for (int i = 0; i < size; i++)
        sum[i] = (arr1[i] + arr2[i]);
    // Difference:
    for (int i = 0; i < size; i++)
        diff[i] = (arr1[i] - arr2[i]);
    // Product:
    for (int i = 0; i < size; i++)
        prod[i] = (arr1[i] * arr2[i]);
    // Remainder:
    for (int i = 0; i < size; i++)
        rema[i] = (arr1[i] % arr2[i]);
    printf("The summation of the two array's are : \n");
    for (int i = 0; i < size; i++)
        printf("%d ",sum[i]);
    printf("The difference of the two array's are : \n");
    for (int i = 0; i < size; i++)
        printf("%d ",diff[i]);
    printf("The product of the two array's are : \n");
    for (int i = 0; i < size; i++)
        printf("%d ",prod[i]);
    printf("The remainder of the two array's are : \n");
    for (int i = 0; i < size; i++)
        printf("%d ",rema[i]);
    printf("\n");
    return 0;
}