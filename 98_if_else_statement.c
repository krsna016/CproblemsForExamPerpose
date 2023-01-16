// # include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age : ");
//     scanf("%d",&age);
//     printf("You have entered %d as your age.\n",age);
//     if (age>=18){
//         printf("Yes you can register for voter-Id\n");
//     }
//     return 0;
// }

// ALSO:

// # include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age : ");
//     scanf("%d",&age);
//     printf("You have entered %d as your age.\n",age);
//     if (age>=18){
//         printf("Yes you can register for voter-Id\n");
//     }
//     else{
//         printf("Sorry you can't register for voter-Id\n");
//     }
//     return 0;
// }

// ALSO:

// # include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age : ");
//     scanf("%d",&age);
//     printf("You have entered %d as your age.\n",age);
//     if (age>=18){
//         printf("Yes you can register for voter-Id.\n");
//     }
//     else if (age>10){
//         printf("You are between 10 and 18 and you'r a kid!!\n");
//     }
//     else{
//         printf("Sorry you can't register for voter-Id.\n");
//     }
//     return 0;
// }

// ALSO:

# include <stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("You have entered %d as your age.\n",age);
    if (age>=18){
        printf("Yes you can register for voter-Id.\n");
    }
    else if (age>10){
        printf("You are between 10 and 18 and you'r a kid!!\n");
    }
    return 0;
}