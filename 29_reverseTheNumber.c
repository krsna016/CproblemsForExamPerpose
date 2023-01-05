// Write a program in C to reverse the number:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num,temp;
    int rem;
    int reverse_num = 0;
    printf("Enter the number : "); // num = 123
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;                       // 3,2,1
        reverse_num = reverse_num * 10 + rem; // (3),(3*10+2 = 32),(32*10+1 = 321)
        temp = temp / 10;                     // 12,1,0
    }
    printf("The number in the reverse order is : %d\n",reverse_num);
    return 0;
}