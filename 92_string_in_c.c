#include <stdio.h>
int main()
{
    char string[] = "anurag";
    char myname[] = {'a','n','u','r','a','g','\0'};
    printf("%s\n", string);
    printf("%c\n", string[3]);
    printf("%s\n", myname);
    printf("%c\n", myname[1]);
    return 0;
}
