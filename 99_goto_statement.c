// #include<stdio.h>
// int main()
// {
//     label:
//         printf("We are inside label.\n");
//         goto end;
//     printf("Hello world\n");
//     goto label;
//     end:
//         printf("We are at end.\n");
//     return 0;

// }

// ALSO:(Where it's used.)

// #include <stdio.h>
// int main()
// {
//     for (int i = 0;i < 10;i++)
//     {
//         int num;
//         printf("%d\n",i);
//         for (int j = 0; j < 10; j++)
//         {
//             printf("Enter the number(Enter 0 to quit) : ");
//             scanf("%d",&num);
//             if (num == 0){
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// ALSO:


#include <stdio.h>
int main()
{
    for (int i = 0;i < 10;i++)
    {
        int num;
        printf("%d\n",i);
        for (int j = 0; j < 10; j++)
        {
            printf("Enter the number(Enter 0 to quit) : ");
            scanf("%d",&num);
            if (num == 0)
            {
                goto end; // We can write anything in place of 'end'.
            }
        }
    }
    end:
    return 0;
}
