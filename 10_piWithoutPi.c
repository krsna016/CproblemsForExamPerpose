// Write a program to find value of pi without using 22/7 or it's equivalents (using MonteCarlo Method): 

/*
Student name        : Anurag Pareek
University Roll no. : 2215000322
Contact             : anurag020416@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double estimate_pi(int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x*x + y*y <= 1) {
            count++;
        }
    }
    return 4.0 * count / n;
}

int main() {
    srand(time(NULL));  // seed the random number generator
    int n = 1000000;
    printf("%f", estimate_pi(n));
    return 0;
}
