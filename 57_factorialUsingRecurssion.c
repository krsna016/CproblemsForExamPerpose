// Write a program in C to find the factorial using recurssion : 

int factorial(num)
{
    
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int number,fact;
    printf("Enter the number to find it's factorial : ");
    scanf("%d",&number);
    fact = factorial(number);
    printf("The factorial of the number %d is : %d\n",number,fact);
    return 0;
}