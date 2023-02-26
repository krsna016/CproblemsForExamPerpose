/*
 * Write a program in C to find the volume of a cylinder upto two
 * decimal places ?
 
 * Student name : Anurag pareek
 * Sec : J-1
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    float radius,height,volume_cylinder;
    printf("Enter the radius for the cylinder : ");
    scanf("%f",&radius);
    printf("Enter the height for the cylinder : ");
    scanf("%f",&height);
    volume_cylinder = 3.14*radius*radius*height;
    printf("The volume of the cylinder is : %.2f\n",volume_cylinder);
    return 0; 
}
