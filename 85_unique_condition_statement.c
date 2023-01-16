#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    a>b?printf("'a' is greater than 'b'\n"): printf("'b' is greater than 'a'\n");
    return 0;
}