// # include<stdio.h>
// // It's a function.
// int sum(int a,int b)
// {
//     return a+b;
// }
// int main()
// {
//     int a,b,c;
//     a = 9;b=87;
//     // Here calling the function.
//     c = sum(a,b);
//     printf("The sum of two numbers are : %d\n",c);
//     return 0;
// }

// ALSO:(With argument and with return value.(Both uparwala and nichewala.))

// # include <stdio.h>
// // Declaring a function.
// int sum(int a,int b);
// int main()
// {
//     int a,b,c;
//     a = 50;b = 60;
//     c = sum(a,b);
//     printf("The sum of two numbers are : %d\n",c);
//     return 0;
// }
// int sum(int a,int b)
// {
//     return (a+b);
// }

// ALSO:(With argument and without return value.)

// # include <stdio.h>
// // Function.
// void print_star(int n) // Enter the number of stars to print.
// {
//     printf("The required number of stars are : ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c",'*');
//     }
// }
// int main()
// {
//     int k;
//     printf("Enter the number of stars to print : ");
//     scanf("%d",&k);
//     print_star(k);
//     return 0;
// }

// ALSO:(Without argument and with return value.)

// # include <stdio.h>
// int sum_two(){
//     int i,j,sum;
//     printf("Enter the first number : ");
//     scanf("%d",&i);
//     printf("Enter the second number : ");
//     scanf("%d",&j);
//     sum = i + j;
//     printf("The sum of the two numbers are : \n");
//     return sum;
// }
// int main()
// {
//     int c;
//     c = sum_two();
//     printf("%d\n",c);
//     return 0;
// }

// ALSO:(Without argument and without return value.)

# include <stdio.h>
void sum_two(){
    int i,j,sum;
    printf("Enter the first number : ");
    scanf("%d",&i);
    printf("Enter the second number : ");
    scanf("%d",&j);
    sum = i + j;
    printf("The sum of the two numbers are : %d\n",sum);
}
int main()
{
    int c;
    sum_two();
    return 0;
}


