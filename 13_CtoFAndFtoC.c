/*
 * Write a program in C to convert CELCIUS into FARENHEIT and
 * viceversa depending upon users choice ? 
 
 * Student name : Anurag pareek
 * Sec : J-1
 * Contact : anurag020416@gmail.com
 */

# include <math.h>
# include <stdio.h>
int main()
{
    float P,T,R,simple_interest,compound_interest,power;
    printf("Enter the 'rate' of intrest : ");
    scanf("%f",&R);
    printf("Enter the 'time' value (in years) : ");
    scanf("%f",&T);
    printf("Enter the 'principal' amount : ");
    scanf("%f",&P);
    simple_interest = (R*T*P)/100;
    power = pow((1+R),T);
    compound_interest = (P*power)-P;
    printf("The simple interest is : %0.4f\n",simple_interest);
    printf("The compound interest is : %0.4f\n",compound_interest);
    return 0;
}
