#include <stdio.h>
union students
{
    int id; // sizeof(int) = 4 bytes
    int roll_no; // sizeof(int) = 4 bytes
    char favourite_char; // sizeof(char) = 1 bytes
} un; // union un --> Total size = 4 bytes
int main()
{
    // We can assign and use only one value at a time
    // Otherwise we will get non fabourable answers.
    un.favourite_char = 'K'; // ASCCI of K = 75
    // un.roll_no = 92;
    // un.id = 11312; 

    // It will return un.favourite_char as it's only variable which is assigned.
    printf("Harry's Id is : %d\n", un.id); 
    printf("Harry's roll no. is : %d\n", un.roll_no);
    return 0;
} 