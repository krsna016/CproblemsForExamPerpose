// Write a program in C to check whether a number is greater than or smaller
// than the other number:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num1,num2;
    printf("Enter num1 and num2 (space seperated) : ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
        printf("%d is larger than %d\n",num1,num2);
    else
        printf("%d is smaller than %d\n",num1,num2);
    return 0;
}