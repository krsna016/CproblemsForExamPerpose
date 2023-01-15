// Write a program to find the prime numbers for the given range:

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// 1 is neither prime nor composite.
// 0 is neither prime nor composite.
// primes are integers greater than one with no positive divisors besides one and itself. 
// Negative numbers are excluded.
// 2 is a only even prime number.

/********* Program to print the prime numbers in the given range *************/
/*
int main()
{
    int num1,num2,flag;
    printf("Enter number - 1 : ");
    scanf("%d",&num1);
    printf("Enter number - 2 : ");
    scanf("%d",&num2);
    printf("The prime numbers are : ");
    for (int i = num1; i <= num2; i++)
    {
        flag = 0;
        for (int j = 2; j <= i/2; j++)
            if(i % j == 0)
                flag = 1;
        if(flag == 0)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
*/

/******************** Program to check the prime number *********************/
/*
int main(int argc, char const *argv[])
{
    int number,flag;
    printf("Enter the number : ");
    scanf("%d",&number);
    for (int i = 2; i < number; i++)
    {
        flag = 0;
        if(number % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("Number is not prime\n");
    else
        printf("Number is prime\n");
    return 0;
}
*/
