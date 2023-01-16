// #include <stdio.h>
// int main()
// {
//     typedef int integer; // Making an alias.
//     integer a = 10; // Integer is alias of int if we not use typedef we will get the error.
//     printf("The value of a is : %d\n", a);
//     return 0;
// }

// ALSO:

// #include <stdio.h>
// struct students
// {
//     int roll_no;
//     char name[40];
//     char address[40];
//     int id;
// };
// int main()
// {
//     struct students s1,s2,s3;
//     s1.roll_no = 1;
//     s2.roll_no = 3;
//     s3.roll_no = 19;
//     printf("%d\n", s1.roll_no);
//     return 0;
// }

// ALSO:

// #include <stdio.h>
// struct students
// {
//     int roll_no;
//     char name[40];
//     char address[40];
//     int id;
// };
// int main()
// {
//     typedef struct students ss;
//     ss s1,s2,s3;
//     s1.roll_no = 1;
//     s2.roll_no = 3;
//     s3.roll_no = 19;
//     printf("%d\n", s1.roll_no);
//     return 0;
// }

// ALSO:

#include <stdio.h>
typedef struct students
{
    int roll_no;
    char name[40];
    char address[40];
    int id;
} ss;
int main()
{
    ss s1,s2,s3;
    s1.roll_no = 1;
    s2.roll_no = 3;
    s3.roll_no = 19;
    printf("%d\n", s1.roll_no);
    return 0;
}