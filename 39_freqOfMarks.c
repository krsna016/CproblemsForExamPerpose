// Write a program in C to take input of the marks of 10 students and count the frequency of students scoring each marks greater than 70:

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
    int strength,marks;
    int frequency[30] = {0};
    printf("Enter the strength of the students : ");
    scanf("%d",&strength);
    printf("Enter the marks for the students : ");
    int result[strength];
    for (int i = 0; i < strength; i++)
        scanf("%d",&result[i]);
    for (int i = 0; i < strength; i++)
        if(result[i] > 70)
            frequency[29-(100-result[i])]++;
    printf("The result of the students are : \n");
    for (int i = 0; i < 30; i++)
        if(frequency[i] != 0)
            printf("The number of students got %d marks is : %d\n",71+i,frequency[i]);
    return 0;
}