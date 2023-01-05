#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
        printf("%d ",i);
    printf("\n");
    return 0;
}