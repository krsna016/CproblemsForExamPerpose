#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 4555)
    {
        printf("Welcome to the world.\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        // As we are not using free(i2) so in per run the memory usage by the program will increase and we encounter a situation of "Memory Leak".
    }
    return 0;
}