// Write a program to find SI and CI for given rate,time and principal amount:

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
    float SI;
    float CI;
    float principal,time,rate;
    printf("Enter the value of 'PRINCIPAL' (amount) : ");
    scanf("%f",&principal);
    printf("Enter the value of 'RATE' (percent) : ");
    scanf("%f",&rate);
    printf("Enter the value of 'TIME' (yrs) : ");
    scanf("%f",&time);
    SI = (principal*rate*time)/100;
    CI = principal * pow((1+rate/100),time) - principal;
    printf("The SI for %.1f years is : %.1f\n\
and,\
The CI for %.1f years is : %.1f\n",time,SI,time,CI);
    return 0;
}