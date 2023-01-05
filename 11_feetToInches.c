// Write a program to convert feet into corresponding inches:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    float feet,inches;
    printf("Enter the value in Feet : ");
    scanf("%f",&feet);
    printf("The value of %.1f feet in inches is : %.2f\n",feet,feet*12);
    return 0;
}