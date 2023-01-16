// // // Use of malloc: Here memory is allocating at runtime not in compile time.

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int size;

//     printf("Enter the size of the array you want to create : ");
//     scanf("%d",&size);
//     ptr = (int *)malloc(size * sizeof(int)); // Here we are creating a dynamic array of size = 20 byter i.e 10 integers // As malloc() is a void pointer so we typecasted it to int.

//     for (int i = 0; i < 3; i++)            // Initializing upto element 2
//     {
//         printf("Enter the value of element %d of the array : ", i + 1);
//         scanf("%d", &ptr[i]);
//     }
//     printf("The array is : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", ptr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// // Use of calloc: Here memory is allocating at runtime not in compile time.

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int size;

//     printf("Enter the size of the array you want to create : ");
//     scanf("%d",&size);
//     ptr = (int *)calloc(size , sizeof(int)); // Here we are creating a dynamic array of size = 20 bytes i.e 10 integers // As calloc() is a void pointer so we typecasted it to int.

//     for (int i = 0; i < 3; i++)            // Initializing upto element 2
//     {
//         printf("Enter the value of element %d of the array : ", i + 1);
//         scanf("%d", &ptr[i]);
//     }
//     printf("The array is : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", ptr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// // Use of realloc: Here memory is allocating at runtime not in compile time.
// //                 This will dynamically change the size of array.

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int size;

//     printf("Enter the size of the array you want to create : ");
//     scanf("%d",&size);
//     ptr = (int *)calloc(size , sizeof(int)); // Here we are creating a dynamic array of size = 20 byter i.e 10 integers // As realloc() is a void pointer so we typecasted it to int.

//     for (int i = 0; i < 3; i++)            // Initializing upto element 2
//     {
//         printf("Enter the value of element %d of the array : ", i + 1);
//         scanf("%d", &ptr[i]);
//     }
//     printf("The array is : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", ptr[i]);
//     }
//     printf("\n");

//     printf("Enter the size of the new array you want to create : ");
//     scanf("%d",&size);
//     ptr = (int *)realloc(ptr,size*sizeof(int));  // As realloc() is a void pointer so we typecasted it to int.
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter the value of element %d of the array : ", i + 1);
//         scanf("%d", &ptr[i]);
//     }
//     printf("The array is : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", ptr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Use of free: It free up the dynamically allocated memory.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int size;

    printf("Enter the size of the array you want to create : ");
    scanf("%d", &size);
    ptr = (int *)calloc(size, sizeof(int)); // Here we are creating a dynamic array of size = 20 byter i.e 10 integers // As realloc() is a void pointer so we typecasted it to int.

    for (int i = 0; i < 3; i++) // Initializing upto element 2
    {
        printf("Enter the value of element %d of the array : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    printf("Enter the size of the new array you want to create : ");
    scanf("%d", &size);
    ptr = (int *)realloc(ptr, size * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of element %d of the array : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    printf("The array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    return 0;
}