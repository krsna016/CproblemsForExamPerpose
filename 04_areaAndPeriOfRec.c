// Write a program in C to find the area and perimeter of a Rectangle:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int area,perimeter;
    int length,width;
    printf("Enter the length of the Rectangle : ");
    scanf("%d",&length);
    printf("Enter the width of the Rectangle : ");
    scanf("%d",&width);
    area = length*width;
    perimeter = 2*(length+width);
    printf("The area of the rectangle is : %d\n\
and,\n\
The perimeter of the rectangle is : %d\n",area,perimeter);
    return 0;
}