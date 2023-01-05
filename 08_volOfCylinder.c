// Write a program to find volume of a cylinder using 
// upto two decimal places :
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.14
int main()
{
    float height,radius,volume;
    printf("Enter the height of the cylinder : ");
    scanf("%f",&height);
    printf("Enter the radius of the cylinder : ");
    scanf("%f",&radius);
    volume = PI*radius*radius*height;
    printf("The volume of the cylinder is : %.1f\n",volume);
    return 0;
}