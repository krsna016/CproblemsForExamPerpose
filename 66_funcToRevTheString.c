// Write a UserDefined function to reverse the string : 

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void rev_the_string(char *str,int length)
{
    char temp;
    printf("The original string is : "); // ANURAG
    for (int i = 0; i < length; i++)
        printf("%c",str[i]);
    printf("\n");
    for(int i = 0; i < (length/2); i++) // (i = 0) TO (i = 2) 
    {
        temp = str[i]; // temp = 'A','N','U' for i = 0,1,2
        str[i] = str[length-i-1]; // 
        str[length-i-1] = temp;
    }
    printf("The reversed string is : ");
    for (int i = 0; i < length; i++)
    {
        printf("%c",*(str + i));
    }
    printf("\n");
}
int main()
{
    int length;
    char string[40];
    printf("Enter the string : ");
    scanf("%s",string);
    length = strlen(string); // 6
    rev_the_string(string,length); // ANURAG,6
    return 0;
}