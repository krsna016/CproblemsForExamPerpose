// # include <stdio.h>
// int main()
// {
//     int marks[4];
//     marks[0] = 454;
//     printf("Mark of student is %d\n",marks[0]);
//     marks[0] = 4;
//     printf("Mark of student is %d\n",marks[0]);
//     marks[1] = 45;
//     printf("Mark of student is %d\n",marks[1]);
//     marks[2] = 454;
//     printf("Mark of student is %d\n",marks[2]);
//     marks[3] = 44;
//     printf("Mark of student is %d\n",marks[3]);
//     return 0;
// }

// ALSO:

// #include <stdio.h>
// int main()
// {
//     int marks[4];
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter the value for the element marks[%d] (size<4) : ", i);
//         scanf("%d", &marks[i]);
//         printf("The value of the marks[%d] is : %d\n", i, marks[i]);
//     }
//     printf("%d\n",*marks);
//     return 0;
// }

// ALSO:

// # include <stdio.h>
// int main()
// {
//     int marks[5] = {1,2,3,4,5};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value of marks[%d] is : %d\n",i,marks[i]);
//     }
// }

// AND:

// # include <stdio.h>
// int main()
// {
//     int marks[5] = {8,2,3,4,5};
//     printf("%d",marks[5]); // Will give us error.
//     return 0;
// }

// AND:

// #include <stdio.h>
// int main()
// {
//     int marks[2][4] = {{2, 3, 4, 6},
//                        {10, 23, 44, 19}};
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("The value of marks[%d][%d] is : %d\n", i, j, marks[i][j]);
//         }
//     }
//     return 0;
// }

// AND:

#include <stdio.h>
int main()
{
    int marks[2][4] = {{2, 3, 4, 6},
                       {10, 23, 44, 19}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}