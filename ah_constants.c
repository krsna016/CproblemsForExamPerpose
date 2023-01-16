// # include <stdio.h>
// int main()
// {
//     // int a = 10;
//     // float b = 7.33; // It is 'b'
//     // b = 7; // Here we changed the 'b'

// // But when we user 'const' keyword in before the 'float b' it becomes constant and when we try to change it we'll get an error.

//     int a = 10;
//     const float b = 7.5;
//     b = 8.2;
//     return 0;
// }

// ALSO:

# include <stdio.h>
# define PI 3.14 // Here we make 3.14 a constant value and call it as PI.How? ans: As this preprocessing statement opens in execution at first it assign PI == 3.14 and in function it's 7.33 and 3.14 != 7.33. Hence error comes and statements is invalid.
int main()
{   
    int a = 10;
    const float b = 4.44;
    PI = 7.33; // As PI is constant hence we can't changed.
    printf("%f\n",PI);
    return 0;
}

