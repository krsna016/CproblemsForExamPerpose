# include <stdio.h>
int main()
{
    int a = 8;
    float b = 7.333;

    printf("Hello World\n");
    printf("The value of a is %d and the value of b is %f\n",a,b);
    printf("The value of a is %d and the value of b is %0.4f\n",a,b);
    printf("The value of a is %d and the value of b is %10.4f\n",a,b);
    
    printf("%f\n",b);
    printf("%0.4f\n",b);
    printf("%10.4f\n",b);
    printf("%-10.4f THIS\n",b);


    return 0;
}
