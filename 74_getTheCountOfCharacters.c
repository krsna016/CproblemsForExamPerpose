// write a program to get the count of characters in the string or number etc.

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
int main()
{
    int input,count = 0;
    printf("Enter the number to count it's number of digits : ");
    scanf("%d", &input);
    while(input != 0)
    {
        input = input / 10;
        count++;
    }
    printf("The number of digits are : %d\n",count);
    return 0;
}