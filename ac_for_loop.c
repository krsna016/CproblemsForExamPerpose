// # include <stdio.h>
// int main()
// {
//     printf("HelloWorld\n");
//     int i,j;
//     for(i = 0,j = 0;i<5;i++){
//         printf("%d %d\n",i,j);
//     }
//     return 0;
// }

// ALSO:

// # include <stdio.h>
// int main()
// {
//     printf("HelloWorld\n");
//     int i=0,j=0;
//     for(;i<5;i++){
//         printf("%d %d\n",i,j);
//     }
//     return 0;
// }

// ALSO:

// # include <stdio.h>
// int main()
// {
//     printf("HelloWorld\n");
//     int i=0,j=0;
//     for(;i<5,j<3;i++,j++){
//         printf("%d %d\n",i,j);
//     }
//     return 0;
// }

// ALSO:

// # include <stdio.h>
// int main()
// {
//     printf("HelloWorld\n");
//     int i;
//     int j = 0;
//     for(;i=5,j<3;i++,j++){
//         printf("%d %d\n",i,j);
//     }
//     return 0;
// }

// ALSO:

// # include <stdio.h>
// int main()
// {
//     printf("HelloWorld\n");
//     int i,j;
//     for(i=0,j=0;i<5;i++,j++){
//         printf("%d %d\n",i,j);
//     }
//     return 0;
// }

// ALSO:

# include <stdio.h>
int main()
{
    printf("HelloWorld\n");
    int i,j;
    for(i=0,j=0;i<5;){
        printf("%d %d\n",i,j);
        i++;j++;
    }
    return 0;
}