#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num1,num2;
    printf("Enter the first number : ");
    scanf("%d",&num1); 
    printf("Enter the second number : ");
    scanf("%d",&num2);
    printf("\n\n");
    printf("Number-1 before swapping : %d\n\
and,\n\
Number-2 before swapping : %d\n\n",num1,num2);
    // num1 = 3 -> bin = 0011
    // num2 = 6 -> bin = 0110
    // num1 ^ num2 = 0011^0110 = 0101 = 5
    num1 = num1^num2; // num1 = 3^6 = 5
    num2 = num1^num2; // num2 = 0101^0110 = 0011 = 3
    num1 = num1^num2; // num1 = 0101^0011 = 0110 = 6
    printf("Number-1 after swapping : %d\n\
and,\n\
Number-2 after swapping : %d\n",num1,num2);
    return 0;
}
