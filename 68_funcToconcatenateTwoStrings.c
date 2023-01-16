// Write a UserDefined function to concatenate the two strings :

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
    int i = 0,j = 0;
    char str1[20]; // Anurag
    char str2[20];
    printf("Enter the first string : ");
    scanf("%s",str1);
    printf("Enter the second string : ");
    scanf("%s",str2);
    while(str1[i] != '\0')
    {
        i++;
    }
    // Now, i = 6
    while(str2[j] != '\0')
    {
        str1[i] = str2[j]; // Initially, j = 0 than j = 1,2 .. until it gets '\0'.Hence we are appending the elements from str2 index 1 to size to the str1 from index 6 onwards
        i ++;
        j ++;
    }
    str1[i] = '\0';
    printf("The concatenated string is : %s\n",str1);
    return 0;
}