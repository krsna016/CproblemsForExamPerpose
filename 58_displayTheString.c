// Write a program in C to display the string : 

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
    char string[200];
    printf("Enter the string to display : ");
    scanf("%s",string);
    printf("The string is : %s\n",string);
    printf("The length of the string is : %lu\n",strlen(string));
    return 0;
}

