/*
 * Write a program in C to add "feet" and "inches" together such that
 * inches are converted into corresponding feet ?

 * Student name : Anurag pareek
 * Sec : J-1
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    float in_feet,in_inches,sum_inch_feet;
    printf("Enter the value in 'feet' : ");
    scanf("%f",&in_feet);
    printf("Enter the value in 'inches' : ");
    scanf("%f",&in_inches);
    sum_inch_feet = in_feet + in_inches;
    printf("The total sum in feet are : %.2f feet.\n",in_feet+(in_inches/12));
    printf("The total value in inches are : %.2f inches.\n",in_inches+(in_feet*12));
    return 0;
}
