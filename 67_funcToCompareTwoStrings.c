// Write a UserDefined function to compare the two strings : 

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
    char str1[20];
    char str2[20];
    int non_match = 0;
    printf("Enter the first string : ");
    scanf("%s",str1);
    printf("Enter the second string : ");
    scanf("%s",str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if((int)str1[i] > (int)str2[i])
            {
                non_match ++;
                break;
            }
            if((int)str1[i] < (int)str2[i])
            {
                non_match --;
                break;
            }
        }
        if(non_match == 0)
        {
            printf("The return value is : %d\n",non_match);
            printf("Hence, The string's are same.\n");
        }
        else
        {
            printf("The return value is : %d\n",non_match);
            printf("Hence, The string's are not same.\n");
        }
    }
    else
    {
        printf("The length of the string's are not same. So can't be compared.\n");
    }
    return 0;
}