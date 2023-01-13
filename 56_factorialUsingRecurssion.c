#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
long int factorial(int num)
{
    if(num == 1)
        return 1;
    else
    {
        long int fact;
        fact *= num * factorial(num - 1);
        return fact;
    }
}
int main()
{
    int num;
    long int factorial_value;
    printf("Enter the number : ");
    scanf("%d",&num);
    factorial_value = factorial(num);
    printf("The value of the factorial of %d is : %ld\n",num,factorial_value);
    return 0;
}