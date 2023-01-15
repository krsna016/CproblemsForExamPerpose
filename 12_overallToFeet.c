// Write a program to add feet and inches together such that inches are converted into corresponding feet:

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
    float feet, inch, overall;
    printf("Enter the value in feet : ");
    scanf("%f", &feet);
    printf("Enter the value in inch : ");
    scanf("%f", &inch);
    overall = feet + inch*1/12;
    printf("The overall value in feet is : %.2f\n",overall);

    return 0;
}