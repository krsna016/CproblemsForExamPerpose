struct structure1
{
    int a;    // sizeof(int) = 4 bytes
    float b;  // sizeof(float) = 4 bytes
    char c;   // sizeof(char) = 1 bytes
    double d; // sizeof(double) = 8 bytes
} str;        // sizeof(str) = 8 + 8 + 8 = 24 bytes
union union1
{
    int a;    // sizeof(int) = 4 bytes
    float b;  // sizeof(float) = 4 bytes
    char c;   // sizeof(char) = 1 bytes
    double d; // sizeof(double) = 8 bytes
} uni;        // sizeof(uni) = 8 bytes
#include <stdio.h>
int main()
{
    printf("The size of 'struct' data type is : %lu\n", sizeof(str));
    printf("The size of 'union' data type is : %lu\n", sizeof(uni));
    return 0;
}
