// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// int sum(int a,int b)
// {
//     return(a+b);
// }
// void greet_hello_and_execute(int (*fptr)(int,int))
// {
//     printf("Hello User\n");
//     printf("The sum of the two numbers is : %d\n",fptr(5,7));
// }
// void greet_good_morning_and_execute(int (*fptr)(int,int))
// {
//     printf("Good morning User\n");
//     printf("The sum of the two numbers is : %d\n",fptr(5,7));
// }
// int main()
// {
//     int (*ptr)(int,int);
//     ptr = sum;
//     greet_good_morning_and_execute(ptr);
//     greet_hello_and_execute(ptr);
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int average(int a,int b)
{
    return (a+b)/2;
}
void greet_good_evening(int (*fun_ptr)(int,int))
{
    printf("Good Evening User\n");
    printf("The average of the two numbers are : %d\n",fun_ptr(2,8));
}
void greet_good_afternoon(int (*fun_ptr)(int,int))
{
    printf("Good Afternoon User\n");
    printf("The average of the two numbers are : %d\n",fun_ptr(2,8));
}
int main()
{
    int (*ptr)(int,int);
    ptr = average;
    greet_good_afternoon(ptr);
    greet_good_evening(ptr);
    return 0;
}