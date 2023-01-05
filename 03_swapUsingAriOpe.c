// Write a program to swap two numbers without using
// third variable:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num1,num2;
    printf("Enter the number - 1 : ");
    scanf("%d",&num1);
    printf("Enter the number - 2 : ");
    scanf("%d",&num2);
    printf("Number - 1 before swapping is : %d\n\
Number - 2 before swapping is : %d\n",num1,num2);
    // num1 = 60
    // num2 = 40
    num1 = num1 + num2; // num1 = 100
    num2 = num1 - num2; // num2 = 100 - 40 = 60
    num1 = num1 - num2; // num1 = 100 - 60 = 40
    printf("Number - 1 after swapping is : %d\n\
Number - 2 after swapping is : %d\n",num1,num2);
    return 0;
}