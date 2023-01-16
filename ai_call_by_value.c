# include <stdio.h>
int swap(int x,int y) // Here the formal parameters are not taking the actual value (address) of 'a' and 'b' but the copy.
{
    int temp; // Local varible.
    temp = x; // Put the copy of value of 'a' in 'temp'.
    x = y; // Put the copy of value of 'b' in 'a'.
    y = temp; // Put the value of 'a' in 'b'.
    return 0;
}
int main()
{
    int a,b; // Local variable.
    printf("====Want to swap the two values====\n");
    printf("Enter the value of 'a' : ");
    scanf("%d",&a);
    printf("Enter the value of 'b' : ");
    scanf("%d",&b);
    printf("The value of 'a' and 'b' before swapping (resp.) : %d and %d\n",a,b);
    swap(a,b); // Actual parameter are the copy of 'a' and 'b' here.
    printf("The value of 'a' and 'b' after swapping (resp.) : %d and %d\n",a,b);
    return 0;
}
// Swaping is not happened as the swap() function not changing the exact value but only the copy. 