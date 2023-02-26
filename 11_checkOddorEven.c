/*
 * Write a program in C to check whether a number is "ODD or "EVEN" ? 

 * Student name : Anurag pareek
 * Sec : J-1
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to check whether EVEN or ODD : ");
    scanf("%d",&number);
    if (number % 2 == 0)
    {
        printf("%d is an EVEN number.\n",number);
    }
    else
    {
        printf("%d is an ODD number.\n",number);
    }
    return 0;
}
