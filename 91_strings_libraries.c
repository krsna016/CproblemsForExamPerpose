# include <string.h>
# include <stdio.h>
int main()
{
    int l1,l2;
    char s1[100],s2[100];
    char name[100] = "Anurag";
    char surname[]  = "Pareek";
    printf("%s\n",name);
    printf("%s\n",surname);
    printf("\n");

    strcat(name,surname);
    printf("%s\n",name); // AnuragPareek
    printf("%s\n",surname); // Pareek
    printf("\n");

    l1 = strlen(name);
    l2 = strlen(surname);
    printf("The length of the string name is %d characters.\n",l1);
    printf("The length of the string surname is %d characters.\n",l2);
    printf("\n");

    strcpy(s1,name);
    strcpy(s2,surname);
    printf("%s\n",s1);
    printf("%s\n",s2);
    printf("\n");

    printf("%d\n",strcmp(name,surname));
    return 0;
// To reverse the string we need to use the loop only.
}