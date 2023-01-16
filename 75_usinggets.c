// Write a program using "gets()" function :

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
    char str1[40];
    char str2[40];
    gets(str1); // However due to security concerns gets() is now depricated // It takes input until the Newline comes.
    printf("%s",str1);
    printf("\n\n");
    scanf("%s",str2); // It take input until a whitespace comes.
    printf("%s",str2);
    return 0;
}