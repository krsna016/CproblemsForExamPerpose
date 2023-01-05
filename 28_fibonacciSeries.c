// Write a program to print the fibonacci series:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num1 = 0, num2 = 1, num3 = num1 + num2;
    int length;
    printf("Enter the length of the fibonacci series : ");
    scanf("%d", &length);
    printf("%d ",num1);
    printf("%d ",num2);
    for (int i = 0; i < length-2; i++)
    {
        printf("%d ",num3);
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }
    printf("\n");
    return 0;
}