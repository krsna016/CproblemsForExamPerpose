/*
 * Write a program in C to check whether a entered number is
 * "greater than" or "lesser than" or "equals to" the other number ?
 
 * Student name : Anurag pareek
 * Sec : J-1
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    int num_1,num_2;
    printf("Enter the first number : ");
    scanf("%d",&num_1);
    printf("Enter the second number : ");
    scanf("%d",&num_2);
    if (num_1 == num_2)
    {
        printf("The numbers are same/equal.\n");
    }
    else if (num_1 > num_2)
    {
        printf("%d is greater than %d.\n",num_1,num_2);
    }
    else
    {
        printf("%d is smaller than %d.\n",num_1,num_2);
    }
    return 0;
}
