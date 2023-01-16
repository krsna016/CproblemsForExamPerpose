// #include <stdio.h>
// int sum(int *ptr)
// {
//     int sum = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         sum = (sum + (*ptr + i)); // *ptr or ptr[0], *ptr+1 or ptr[1] and so on.
//     }
//     printf("The sum of the values of the arrays is : %d\n", sum);
//     *ptr = 987;
//     return 0;
// }
// int main()
// {
//     int arr[3];
//     int m;
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter the %d number values for the array (length = 3): ", i + 1);
//         scanf("%d", &m);
//         arr[i] = m;
//     }
//     printf("The value of arr[0] before calling the function is : %d\n", arr[0]);
//     sum(arr);
//     printf("The value of arr[0] after calling the function is : %d\n", arr[0]);
//     return 0;
// }

// ALSO:(We can pass the multi-dimentional array)

#include <stdio.h>
int sum(int *ptr)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = (sum + (*ptr + i)); // *ptr or ptr[0], *ptr+1 or ptr[1] and so on.
    }
    printf("The sum of the values of the arrays is : %d\n", sum);
    *ptr = 987;
    return 0;
}
int func2(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value at %d,%d is : %d\n", i, j, array[i][j]);
        }
    }
    return 0;
}
int main()
{
    int arr[3];
    int arrays[2][2] = {
        {1, 2},
        {4, 5}};
    int m;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the %d number values for the array (length = 3): ", i + 1);
        scanf("%d", &m);
        arr[i] = m;
    }
    printf("The value of arr[0] before calling the function is : %d\n", arr[0]);
    sum(arr);
    printf("The value of arr[0] after calling the function is : %d\n", arr[0]);
    printf("\n");
    func2(arrays);
    return 0;
}
