// Write a program in C to find the exponent using recurssion : 

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int power_of_num(int num,int power)
{
    if (power != 0)
        return num*power_of_num(num,power-1);
    else
        return 1;
}
int main()
{
    int num,power,expo;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the power : ");
    scanf("%d",&power);
    expo = power_of_num(num,power);
    printf("%d to the power %d is : %d\n",num,power,expo);
    return 0;
}

