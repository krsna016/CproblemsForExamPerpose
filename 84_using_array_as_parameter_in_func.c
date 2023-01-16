#include <stdio.h>
int func(int array[]) 
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + array[i];
    }
    array[0] = 123; // If we change the array here then it will also reflect in the main() function.
    printf("The sum of the items in the array is : %d\n", sum);
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    printf("The value of arr[0] before calling the function : %d\n",arr[0]);
    func(arr);
    printf("The value of arr[0] after calling the function : %d\n",arr[0]);
    return 0;
}