// Write a program using "puts()" function : 

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
    char str1[20] = "Hello";
    char str2[20] = "World";
    puts(str1); // Will return non-negative value for successful execution // Autometically does the work of "\n" (Newline character)
    puts(str2);
    printf("\n");
    printf("%s",str1); // Will need to pass "\n"
    printf("%s",str2);    
    return 0;
}