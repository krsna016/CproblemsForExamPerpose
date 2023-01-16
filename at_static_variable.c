// Without static:
#include <stdio.h>
int func()
{
    int static a = 2;
    a++;
    return a;
}
int main()
{
    printf("The value of the function in 1st call is : %d\n",func());
    printf("The value of the functionin second call is : %d\n",func());
    return 0;
}

// With static:
#include <stdio.h>
int func()
{ 
    int static a = 2;
    a++;
    return a;
}
int main()
{
    printf("The value of the function in 1st call is : %d\n",func());
    printf("The value of the functionin second call is : %d\n",func());
    return 0;
}