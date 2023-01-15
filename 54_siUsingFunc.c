// Write a program in C to find SI using parametrised function:

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

float simple_interest(float p,float r, float t)
{
    int SI = (p*r*t)/100;
    return SI;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    float principal,rate,time,simp_int;
    printf("Enter the principal amount : ");
    scanf("%f",&principal);
    printf("Enter the time(yrs) : ");
    scanf("%f",&time);
    printf("Enter the rate of interest : ");
    scanf("%f",&rate);
    simp_int = simple_interest(principal,rate,time);
    printf("The SI is : %.2f\n",simp_int);
    return 0;
}