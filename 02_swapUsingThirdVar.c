// Write a program to swap two numbers using third variable:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num1,num2;
    int temp;
    printf("Enter number - 1 : ");
    scanf("%d",&num1);
    printf("Enter number - 2 :");
    scanf("%d",&num2);
    printf("Number 1 before swapping is : %d\n\
Number 2 before swapping is : %d\n",num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Number 1 after swapping is : %d\n\
Number 2 after swapping is : %d\n",num1,num2);
    return 0;
}