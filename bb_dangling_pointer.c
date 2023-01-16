#include <stdio.h>
#include <stdlib.h>
int* func_dan()
{
    int a,b,sum;
    int a = 34;
    int b = 364;
    sum = a+b; // Sum destroys as function returns // Local scope
    return &sum;
}
int main()
// Case-1: Allocation of a memory block:
{
    int *ptr = (int*)malloc(7*sizeof(int)); // Ptr is a dynamic array
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now a dangling pointer

// Case-2: Function returning local variable address:
    int* dang_ptr = func_dan(); // dang_ptr is a dangling pointer

// Case-3: If a variable goes out of scope:
    int* dangling_ptr;
    {
        int a = 12;
        dangling_ptr = &a; 
    }
    // Here as 'a' goes out of stock hence, dangling_ptr is a dangling pointer
    return 0;
}