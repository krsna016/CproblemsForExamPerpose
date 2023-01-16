// Write a UserDefined function to make string in lower case : 

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
    int arr_lwr[26];
    int index = 0;
    for (int i = 65; i <= 90; i++)
    {
        arr_lwr[index] = i;
        index ++;
    }
    int length_str;
    char string[20];
    printf("Enter the string : ");
    scanf("%s",string);
    int k = 0;
    length_str = strlen(string);
    for (int i = 0; i < 26; i++)
    {
        while(k < length_str)
        {
            if((int)string[k] == arr_lwr[i])
            {
                string[k] = (char)(arr_lwr[i] + 32);
            }
            k++;
        }
        k = 0;
    }
    printf("The string in lower case is : %s\n",string);
    return 0;
}