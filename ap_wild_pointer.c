#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int a = 334;
    int *ptr; // It's a wild pointer
    // *ptr = 34; // This is so nasty work as *ptr is a garbage value and we are initializing it 34
    ptr = &a; // ptr is not longer a wild pointer
    printf("The value of 'a' is : %d\n",*ptr);
    return 0;
}