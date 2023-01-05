// Write a program to check whether a number is odd or even:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int number;
    printf("Enter the number to check for Even and Odd : ");
    scanf("%d",&number);
    if(number%2 == 0)
        printf("The number is EVEN\n");
    else
        printf("The number is ODD\n");
    return 0;
}