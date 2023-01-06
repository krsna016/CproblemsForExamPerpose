#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int height;
    printf("Enter the height of the square : ");
    scanf("%d",&height);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}