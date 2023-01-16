// Write a UserDefined function to copy the string : 

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
    int i = 0;
    char string[20];
    char string_copy[20];
    printf("Enter the string : ");
    scanf("%s",string);
    while(string[i] != '\0')
    {
        string_copy[i] = string[i];
        i++;
    }
    printf("The copied string is : %s\n",string_copy);
    return 0;
}