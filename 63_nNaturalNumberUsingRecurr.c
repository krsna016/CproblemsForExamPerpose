// Write a program in C to find n natural numbers using recurssion : 

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int n_naturals(int nth_num)
{
    if (nth_num > 1)
        n_naturals(nth_num - 1);
    printf("%d ",nth_num);
    return 0;
}
int main()
{
    int num,answer;
    printf("Enter the nth number : ");
    scanf("%d",&num);
    printf("The first %d numbers are : ",num);
    n_naturals(num);
    printf("\n");
    return 0;
}


