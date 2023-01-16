// write a program to get the Indivisual number from a set of numbers.

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
int main()
{
    int num,get; // num = 123
    printf("Enter the number : ");
    scanf("%d", &num);
    while(num != 0)
    {
        get = num % 10; // num = 3
        num = num / 10; // num = 12
        printf("%d\n", get); // get = 3,2,1
    }
    return 0;
}