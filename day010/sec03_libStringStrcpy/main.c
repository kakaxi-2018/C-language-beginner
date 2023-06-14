#include <stdio.h>
#include <string.h>

char *myStrcpy(char *t, char *s)
{
    char *res = t;

    while (*t++ = *s++)
        ;

    return res;
}

int main()
{
    char name[200];
    char *pName = "China";
    char name2[200] = "Hello";

    strcpy(name, strcpy(name2, pName));
    myStrcpy(name, strcpy(name2, pName));
    printf("name : %s\n", name);
    printf("name2: %s\n", name2);

    return 0;
}