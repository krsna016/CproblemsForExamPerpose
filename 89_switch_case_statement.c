# include <stdio.h>
int main()
{   
    int age;
    printf("Enter your age : \n");
    scanf("%d",&age);

    switch (age)
    {
    case 3: // age = 3
        printf("The age is 3.\n");
        break;
    case 13:
        printf("The age is 13.\n");
        // break;
    case 44:
        printf("The age is 44.\n");
        // break;
    default:
        printf("The age is not out of 3, 13 and 44.\n");
    }
    return 0;
}
