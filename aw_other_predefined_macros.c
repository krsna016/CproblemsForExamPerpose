#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    printf("The file name is : %s\n", __FILE__);
    printf("The current time is : %s\n", __TIME__);
    printf("The current time is : %s\n", __DATE__);
    printf("The current line is : %d\n", __LINE__);
    printf("The 0->Not ANSI,1->ANSI is : %d\n", __STDC__);
    return 0;
}