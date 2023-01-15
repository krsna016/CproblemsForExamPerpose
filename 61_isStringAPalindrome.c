// Write a program to check for "Palindromic" String: (Used strcmp(),strlen(),strcpy())

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void rev_the_string(char *str,int len)
{
    char temp;
    for (int i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
int main()
{
    int len,result;
    char str[20],str_cpy[20];
    printf("Enter the string : ");
    scanf("%s",str);
    strcpy(str_cpy,str);
    len = strlen(str);
    rev_the_string(str,len);
    result = strcmp(str,str_cpy);
    if(result == 0)
        printf("The Strings are palindrome.\n");
    else
        printf("The Strings are not the palindrome.\n");
    return 0;
}