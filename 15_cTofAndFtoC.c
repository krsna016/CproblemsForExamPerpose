// Write a program to convert celcius to faenheit and vice-versa:

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
    int celcius, farenheit, f_to_c, c_to_f;
    printf("Enter the value in •Celcius : ");
    scanf("%d", &celcius);
    printf("Enter the value in Farenheit : ");
    scanf("%d", &farenheit);
    f_to_c = (1.8 * celcius) + 32;
    c_to_f = (farenheit - 32) / (1.8);
    printf("The value of %d F in celcius is : %d\n",farenheit,f_to_c);
    printf("The value of %d •c in farenheit is : %d\n",celcius,c_to_f);
    return 0;
}