// -----1-----
// #include <stdio.h>
// int main()
// {
//     int a = 34;
//     int *ptr = &a; // Normal Pointer
//     int *ptr1 = NULL; // Null Pointer
//     printf("The address of 'a' is : %d\n",ptr);
//     printf("The address of 'a' is : %d\n",*ptr);
//     printf("The address of 'ptr1' is : %d\n",ptr1); // Normal Pointer can be dereferenced
//     printf("The address of 'ptr1' is : %d\n",*ptr1); // As we are dereferencing the NULL pointer hence program crashed
//     return 0;
// }

// -----2-----
#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = &a; // Normal Pointer but Initialised
    int *ptr1 = NULL; // Null Pointer
    int *ptr2; // Normal Pointer but not Initialised
    if(ptr1 != NULL)
    {
    printf("The address of 'ptr1' is : %d\n",*ptr1);
    }
    else
    {
        printf("The pointer is a NULL pointer.\n");
    }
    if(ptr != NULL)
    {
    printf("The address of 'ptr' is : %d\n",*ptr);
    }
    else
    {
    printf("The pointer is a NULL pointer.\n");
    }
    if(ptr2 != NULL)
    {
    printf("The address of 'ptr' is : %d\n",*ptr2);
    }
    else
    {
    printf("The pointer is a NULL pointer.\n");
    }
    return 0;
}