// Write a program to find sum of n natural numbers using recurssion : 

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int sum_of_n(int nth_num)
{
    if (nth_num != 0)
        return nth_num + sum_of_n(nth_num - 1);
    else
        return nth_num;
}
int main()
{
    int num,answer;
    printf("Enter the nth number : ");
    scanf("%d",&num);
    answer = sum_of_n(num);
    printf("The sum of first %d numbers are : %d\n",num,answer);
    return 0;
}