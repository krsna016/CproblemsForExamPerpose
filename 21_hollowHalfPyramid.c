#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int height;
    printf("Enter the height of the pyramid : ");
    scanf("%d",&height);
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i == j || j == 1 || i == height)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}