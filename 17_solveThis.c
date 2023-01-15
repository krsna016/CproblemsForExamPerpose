// Kindly solve the following question:

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int a,b,c,d,e;
    a = 10;   // a = 10
    b = a++;  // b = 10 but (a = 11)
    c = ++b;  // c = 11 also (b = 11)
    c *= a;   // c = 11*11 = 121
    d = c--;  // d = 121 but (c = 120)
    d %= a;   // (d = 121 % 11 = 0)
    e = a&&c; // (e = 11 && 120 = 1 && 1 = 1)
    printf("a = %d, b = %d, c = %d,d = %d, e = %d",a,b,c,d,e);
    printf("\n");
    return 0;
}