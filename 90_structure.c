// #include <string.h>
// #include <stdio.h>
// struct student
// {
//     int id;
//     int marks;
//     char favourite_char;
//     char name[40];
// };
// int main()
// {
//     struct student harry, ravi, shyam;
//     harry.id = 12;
//     harry.marks = 3;
//     harry.favourite_char = 'm';

//     ravi.id = 13;
//     ravi.marks = 5;
//     ravi.favourite_char = 'k';

//     shyam.id = 14;
//     shyam.marks = 7;
//     shyam.favourite_char = 'p';

//     strcpy(harry.name,"Harry Das");
//     printf("Harry's full name is : %s\n", harry.name);
//     printf("%s got %d marks\n", harry.name,harry.marks);

//     strcpy(shyam.name,"Shyam kumar Roy");
//     printf("Shyam's full name is : %s\n", shyam.name);
//     return 0;
// }

// ALSO:

// #include <string.h>
// #include <stdio.h>
// struct student
// {
//     int id;
//     int marks;
//     char favourite_char;
//     char name[40];
// };
// struct student harry, ravi, shyam;
// void print_global()
// {
//     printf("Shyam's ID is : %d\n", shyam.id); // As harry is a global variable so we can use harry.id else it's not possible if harry is a local variable.
// }
// int main()
// {
//     harry.id = 12;
//     harry.marks = 3;
//     harry.favourite_char = 'm';

//     ravi.id = 13;
//     ravi.marks = 5;
//     ravi.favourite_char = 'k';

//     shyam.id = 14;
//     shyam.marks = 7;
//     shyam.favourite_char = 'p';
    
//     strcpy(harry.name,"Harry Das");
//     printf("Harry's full name is : %s\n", harry.name);
//     printf("%s got %d marks\n", harry.name,harry.marks);

//     strcpy(shyam.name,"Shyam kumar Roy");
//     printf("Shyam's full name is : %s\n", shyam.name);
//     print_global();
//     return 0;
// }

// ALSO:

#include <string.h>
#include <stdio.h>
struct student
{
    int id;
    int marks;
    char favourite_char;
    char name[40];
}harry,ravi,shyam;
int main()
{
    harry.id = 12;
    harry.marks = 3;
    harry.favourite_char = 'm';

    ravi.id = 13;
    ravi.marks = 5;
    ravi.favourite_char = 'k';

    shyam.id = 14;
    shyam.marks = 7;
    shyam.favourite_char = 'p';
    
    strcpy(harry.name,"Harry Das");
    printf("Harry's full name is : %s\n", harry.name);
    printf("%s got %d marks\n", harry.name,harry.marks);

    strcpy(shyam.name,"Shyam kumar Roy");
    printf("Shyam's full name is : %s\n", shyam.name);
    return 0;
}