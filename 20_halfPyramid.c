// Write a program in C to print the half pyramid:

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void half_pyramid_1(height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void half_pyramid_2(height)
{
    for (int i = height; i > 0; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void half_pyramid_3(height)
{
    for (int i = height; i > 0; i--)
    {
        for (int j = i-1; j > 0; j--)
        {
            printf("  ");
        }
        for (int k = 1; k <= height-i+1; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
int main()
{
    int height;
    printf("Enter the height for the pyramid : ");
    scanf("%d",&height);
    printf("The half pyramid of type-1 is : \n");
    half_pyramid_1(height);
    printf("The half pyramid of type-2 is : \n");
    half_pyramid_2(height);
    printf("The half pyramid of type-3 is : \n");
    half_pyramid_3(height);
    return 0;
}