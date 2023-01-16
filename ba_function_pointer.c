#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int sum(int a,int b)
{
    return(a+b);
}
int main()
{
    printf("The sum of the numbers are : ");
    int (*fun_ptr) (int,int);
    fun_ptr = &sum;
    int d = (*fun_ptr)(4,6);
    printf("%d\n",d);
    return 0;
}