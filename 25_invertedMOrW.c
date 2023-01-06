#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int height;
    printf("Enter the height of 'W' : ");
    scanf("%d",&height);
    for (int i = 1; i <= (2*height)-1; i++)
    {
        printf(" *");
    }
    printf("\n");
    for (int i = 0; i < height-1; i++)
    {
        for (int j = 0; j < height-i-1; j++) // print Left half inverse pyramid
        {
            printf(" *");
        }
        for (int k = 0; k < 2*i+1; k++) // print the blanks between
        {
            printf("  ");
        }
        for (int l = 0; l < height-i-1; l++) // print the Right half inverse pyramid
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}