// Write a program in C to check whether a given number is Perfect or not:

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
    int factor_sum = 0,number;
    printf("Enter a number : ");
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
        if(number%i == 0)
            factor_sum += i;
    if(factor_sum == number)
        printf("Number %d is a Perfect number\n",number);
    else
        printf("Number is not a perfect number\n");
    return 0;
}