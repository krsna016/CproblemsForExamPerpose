// Write a program to print the pyramid:

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
    int height;
    printf("Enter the height of the pyramid : ");
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}