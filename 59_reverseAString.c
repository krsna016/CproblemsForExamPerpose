// Write a program to reverse the string using "strrev()" :

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
    printf("Enter the string : ");
    char string[40];
    scanf("%s",string);
    printf("The string is : ");
    printf("%s",string);
    printf("The reversed string is : ");
    printf("%lu",strrev(string)); // "strrev()" is non standard and deprecated function. So dont work on modern compilers.
    return 0;
}
