// Write a program to find the average of marks using return statement : 

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

float average(float m1, float m2, float m3, float m4, float m5)
{
    float average = (m1+m2+m3+m4+m5)/5;
    return average;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    float m1,m2,m3,m4,m5,avg;
    printf("Enter the marks for the 5 subjects : ");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    avg = average(m1,m2,m3,m4,m5);
    printf("The average marks are : %.2f\n",avg);
    return 0;
}