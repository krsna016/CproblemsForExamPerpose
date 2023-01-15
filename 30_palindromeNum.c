// Write a program in C to check the number is palindrome or not:

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
    int num,rev = 0,rem,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if(num == rev)
        printf("Number is a palindrome\n");
    else
        printf("Number is not a plaindrome\n");
    return 0;
}