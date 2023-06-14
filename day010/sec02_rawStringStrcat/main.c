#include <stdio.h>
#include <string.h>

char *myStrcat(char *t, char *s) 
{
    char *res = t;

    while (*t)
    {
        t++;
    }

    while (*t++ = *s++)
        ;

    return res;
}

int main()
{
    char s1[30] = "hello";
    char mid[30] = "----";
    char s2[30] = "world";

    //strcat(strcat(s1, mid), s2);
    myStrcat(strcat(s1, mid), s2);
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    return 0;
}