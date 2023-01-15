// Write a program to print the first N natural numbers:

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
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
        printf("%d ",i);
    printf("\n");
    return 0;
}