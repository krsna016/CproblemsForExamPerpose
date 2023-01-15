// Write a program to reverse the number :

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
int main()
{
    int number,num,rem,result = 0;  // number = 371
    printf("Enter the number: ");
    scanf("%d",&number);
    num = number;
    while(num != 0)
    {
        rem = num%10;
        result = (result*10) + rem;
        num = num/10;
    }
    printf("%d\n",result);
    return 0;
}