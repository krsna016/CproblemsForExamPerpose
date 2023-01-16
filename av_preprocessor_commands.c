#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Defining a preprocessor variable.
# define PI 3.14
// Using this content in our file.
#include "test_variable.c" // Looking into this directory.
// Defining macros.
#define SQUARE(x) x*x
int main()
{   
    printf("%d\n",SQUARE(2));
    printf("%.2f\n",PI);
    printf("%d\n",func(10));
    return 0;
}