# include <stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age(If age>18, you result have arrived) : \n");
    scanf("%d",&age);
    printf("Enter your marks : \n");
    scanf("%d",&marks);
    switch (age)
    {
    case 17:
        printf("Your age is 17.\n");
        break;
    case 18:
        printf("Your age is 18.\n");
        switch (marks)
        {
        case 50:
            printf("You got 50 marks.\n");
            break;
        case 90:
            printf("You got 90 marks.You top the class.\n");
        default:
            break;
        }
    
    default:
        printf("Thanks!\n");
        break;
    }
    return 0;
}
