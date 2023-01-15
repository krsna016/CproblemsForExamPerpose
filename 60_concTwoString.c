// Write a program to concatenate the string using "strcat()" :

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
    char string_1[100],string_2[100];
    printf("Enter the string-1 : ");
    scanf("%s",string_1);
    printf("Enter the string-2 : ");
    scanf("%s",string_2);
    printf("(String-1 + String-2) is : %s\n",strcat(string_1,string_2));
    return 0;
}
