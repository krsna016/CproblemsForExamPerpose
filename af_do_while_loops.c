#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a number : \n");
    scanf("%d", &num);

    do
    {
        printf("The index is : %d\n", index);
        // printf("%d",index+1);
        index += 1; // Also,index = index + 1
    } while (index < num);

    return 0;
}
