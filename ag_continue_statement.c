#include<stdio.h>
int main()
{   
    printf("----Enter the number greater than 10----\n");
    int index = 0;
    while(index<5){
        int num;
        scanf("%d",&num);
        index++;
        if (num>10)
        {
            printf("Your number is : %d\n",num);
        }
        else if (num == 0)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}