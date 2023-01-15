// WAP to find the sum of all the elements in the array : 

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
    int num,size,elements;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array : (space Seperated / New Line) : ");
    for (int i = 0; i < size; i++)
        scanf("%d",&array[i]);
    printf("The created array is : ");
    for (int i = 0; i < size; i++)
        printf("%d ",array[i]);
    printf("\n");
    int sum = 0;
    printf("The sum of all the elements of the created array is : ");
    for (int i = 0; i < size; i++)
        sum += array[i];
    printf("%d\n",sum);
    return 0;
}