// // ------1------
// #include <stdio.h>
// int main()
// {
//     int a = 345;
//     float b = 8.3;
//     void *ptr;
//     void *ptr1;
//     ptr = &a;
//     ptr1 = &b;
//     // printf("The value of 'a' is : %d\n",*ptr); // We can't dereferance the void pointer
//     printf("The value of 'a' is : %d\n",*((int*)ptr)); // We can dereferance the typecasted pointer <- Now pointer is 'int' pointer
//     printf("The value of 'b' is : %.1f\n",*((float*)ptr1)); // We can dereferance the typecasted pointer <- Now pointer is 'float' pointer
//     return 0;
// }

// // -------2-------
#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("The value of 'a' is : %d\n",*((int*)ptr)); // We can dereferance the typecasted pointer <- Now pointer is 'int' pointer
    ptr = &b; // A single void pointer can store multiple addresses.so,it's also called "General Perpose Pointer"
    printf("The value of 'b' is : %.1f\n",*((float*)ptr)); // We can dereferance the typecasted pointer <- Now pointer is 'float' pointer
    return 0;
}