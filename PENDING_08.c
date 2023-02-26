/*
Write a program in C to find the value of Pi = 3.14 without
using 22/7 or 3.14 or it's equivalents?
Student name : Anurag pareek
Sec : J
*/
# include <stdio.h>
int main()
{
    int circumference,diameter,radius,pi,value_of_pi;
    printf("Enter the radius for the circle : ");
    scanf("%d",&radius);
    printf("Enter the circumference of the circle : ");
    scanf("%d",&circumference);
/*
As we know, Pi = Circumference of the circle / Diameter of the circle
*/
    circumference = 2*pi*radius;
    diameter = 2 * radius;
    value_of_pi = circumference/diameter;
    printf("The value of 'pi' is : %d\n",value_of_pi);
    return 0;
}
