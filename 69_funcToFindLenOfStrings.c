// Write a UserDefined function to find the length of the string :

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
    printf("Enter the string : ");
    scanf("%s",string);
    while(string[i] != '\0')
        i++;
    printf("The length of the string is : %d\n",i);
    return 0;
}