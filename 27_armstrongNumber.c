// Write a program to print the Armstrong numbers : 

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
    int order = 0, number, temp;
    int rem1, rem2, store = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    temp = number;
    while (temp != 0)
    {
        rem1 = temp % 10;
        temp = temp / 10;
        order++;
    }
    temp = number;
    while(temp != 0)
    {
        rem2 = temp % 10;
        store += pow(rem2,order);
        temp = temp/10;
    }
    if(store == number)
        printf("The number %d is a armstrong number\n",number);
    else
        printf("The number %d is not an armstrong number\n",number);
    return 0;
}