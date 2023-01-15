// Write a program in C to find the factorial of the given number : 

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
    int number,factorial = 1;
    printf("Enter the number to find it's factorial : ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
        factorial *= i;
    printf("The factorial of a number %d is : %d\n",number,factorial);
    return 0;
}