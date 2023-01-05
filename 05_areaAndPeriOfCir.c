// Write a program in C to find the area and perimeter of a circle:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.14
int main()
{
    int radius;
    float area, perimeter;
    printf("Enter the radius of the circle : ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    printf("Area of the circle is : %.2f\n\
and,\n\
Perimeter of the circle is : %.2f\n",area,perimeter);
    return 0;
}