// // -----1-----
// #include <stdio.h>
// int myfunc(int a,int b)
// {
//     auto int sum = a+b;
//     return sum;
// }
// int main()
// {
//     int sum = myfunc(3,4);
//     printf("The sum is : %d\n",sum);
//     return 0;
// }

// // // -------2------
// #include <stdio.h>
// int sum;
// int myfunc(int a,int b)
// {
//     auto int sum = a+b;
//     return sum;
// }
// int main()
// {
//     printf("The sum is : %d\n",sum);
//     return 0;
// }

// // -------3------
// #include <stdio.h>
// int sum;
// int myfunc(int a,int b)
// {
//     sum = a+b;
//     return sum;
// }
// int main()
// {
//     int give = myfunc(3,5);
//     printf("The sum is : %d\n",give);
//     return 0;
// }

// // -------4------
// #include <stdio.h>
// int sum;
// int myfunc(int a,int b)
// {
//     sum = a+b;
//     return sum;
// }
// int sum = 44;
// int main()
// {
//     int sum = myfunc(21,12);
//     printf("The sum is : %d\n",sum);
//     return 0;
// }

// // ----5----
// #include <stdio.h>
// int sum;
// int myfunc(int a,int b)
// {
//     extern int sum;
//     return sum;
// }
// int sum = 44;
// int main()
// {
//     int sum = myfunc(10,10);
//     printf("The sum is : %d\n",sum);
//     return 0;
// }

// // ----6----
// #include <stdio.h>
// int sum;
// int myfunc(int a,int b)
// {
//     return sum;
// }
// int sum = 44;
// int main()
// {
//     int sum = myfunc(10,10);
//     printf("The sum is : %d\n",sum);
//     return 0;
// }

// // ----7----
// #include <stdio.h>
// int sum;
// int myfunc(int a,int b)
// {
//     int sum; // Will contain the garbage value
//     return sum;
// }
// int sum = 44;
// int main()
// {
//     int sum = myfunc(10,10);
//     printf("The sum is : %d\n",sum);
//     return 0;
// }

// // ----8----
// #include <stdio.h>
// int sum;
// int myfunc(int a,int b)
// {
//     int sum = a+b;
//     return sum;
// }
// int main()
// {
//     int sum = myfunc(10,10);
//     printf("The sum is : %d\n",sum);

//     sum = myfunc(10,10);
//     printf("The sum is : %d\n",sum);

//     sum = myfunc(10,10);
//     printf("The sum is : %d\n",sum);

//     sum = myfunc(10,10);
//     printf("The sum is : %d\n",sum);
//     return 0;
// }

// // ----9----
// #include <stdio.h>
// int sum;
// int myfunc(int a,int b)
// {
//     static int sum; // Value freeze here
//     sum++;
//     printf("The sum is : %d\n",sum);
//     return sum;
// }
// int main()
// {
//     int sum = myfunc(10,10);

//     sum = myfunc(10,10);

//     sum = myfunc(10,10);

//     sum = myfunc(10,10);
//     return 0;
// }

// // ----10----
#include <stdio.h>
int sum;
int myfunc(int a, int b)
{
    static int sum; // Value freeze here
    sum++;
    printf("The sum is : %d\n", sum);
    return sum;
}
int main()
{
    register int sum = myfunc(10, 10);

    sum = myfunc(10, 10);

    sum = myfunc(10, 10);

    sum = myfunc(10, 10);
    return 0;
}
