# include <stdio.h>
int main()
{
    printf("Let's learn about pointers.\n");
    int a = 2;
    int* ptr = &a;
    int* ptr2;
    int* ptr3 = NULL;
    printf("The address value of \"pointer to 'a'\" is : %p\n",&ptr); // Give address of pointer
    printf("The address value of 'a' is : %p\n",&a); // Give address of 'a'
    printf("The address value of 'a' is : %p\n",ptr); // Give address of 'a' variable stored in pointer
    printf("The value of 'a' is : %d\n", *ptr); // Give the value of 'a' variable stored in pointer
    printf("The value of 'a' is : %d\n", a); // Give the value of 'a'
    printf("The grabage value of 'ptr2' is : %p\n",ptr2);
    printf("The grabage value of 'ptr3' is : %p\n",ptr3);
    return 0;
}

