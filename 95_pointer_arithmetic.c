// #include <stdio.h>
// int main()
// {
//     int a = 34;
//     int* ptra = &a;
//     printf("%d\n",ptra);
//     ptra = ptra + 1; // Also, ptra++
//     printf("%d\n",ptra); // We can't directly print ptra++ here as it will just update the ptra but not prints it.
//     return 0;
// }

// AND:

// #include <stdio.h>
// int main()
// {
//     int a = 34;
//     int* ptra = &a;
//     printf("%d\n",ptra); 
//     ptra++; // or, ptra += 1 or, ptra = ptra + 1
//     printf("%d\n",ptra);
//     ptra--;
//     printf("%d\n",ptra);
//     return 0;
// }

// AND:

// #include <stdio.h>
// int main()
// {
//     char a = 34;
//     char* ptra = &a;
//     printf("%d\n",ptra); 
//     ptra++; // or, ptra += 1 or, ptra = ptra + 1
//     printf("%d\n",ptra);
//     ptra--;
//     printf("%d\n",ptra);
//     return 0;
// }

// AND:

// #include <stdio.h>
// int main()
// {
//     int a = 34;
//     int* ptra = &a;
//     printf("%d\n",ptra); 
//     printf("%d\n",ptra+1);
//     printf("%d\n",ptra+2);
//     return 0;
// }

// AND:

// #include <stdio.h>
// int main()
// {
//     char a = 34;
//     char* ptra = &a;
//     printf("%d\n",ptra); 
//     printf("%d\n",ptra-1);
//     printf("%d\n",ptra-2);
//     return 0;
// }

// AND:

#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,44,664,645};
    int * ptra = &arr[2];
    printf("Value at position 0 of the array is : %d\n",arr[0]);
    printf("Value at position 0 of the array is : %d\n",*(&arr[0]));
    printf("Value at position 0 of the array is : %d\n",*(arr));
    printf("Value at position 4 of the array is : %d\n",arr[4]);
    printf("Value at position 4 of the array is : %d\n",*(&arr[4]));
    printf("Value at position 4 of the array is : %d\n",*(arr+4));


    printf("The address of 0th position is : %d\n",&arr[0]);
    printf("The address of 0th position is : %d\n",arr);
    printf("The address of 1th position is : %d\n",&arr[1]);
    printf("The address of 1th position is : %d\n",arr + 1);
    printf("The address of 2th position is : %d\n",&arr[2]);
    printf("The address of 2th position is : %d\n",arr + 2);

    printf("Value at position 2 of the array is : %d\n",*(ptra));// Will prints the value at the address arr[2]
    printf("Value at position 3 of the array is : %d\n",*(ptra+1));// Where + 1 ===> increment of 4 bytes as we have sizeof(int) = 4 bytes.
    printf("Value at position 4 of the array is : %d\n",*(ptra+2));// Where + 2 ===> increment of 4*2 bytes as we have sizeof(int) = 4 bytes.

    printf("Value at position 0 of the array is : %d\n",*(arr));
    printf("Value at position 1 of the array is : %d\n",*(arr+1));
    printf("Value at position 2 of the array is : %d\n",*(arr+2));
    return 0;
}