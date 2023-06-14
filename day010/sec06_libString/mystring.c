#include "mystring.h"

int myStrlen(char *s)
{
    int count;

    for (count = 0; *s != '\0'; s++)
    {
        count++;
    }

    return count;
}

char *myStrcpy(char *t, char *s)
{
    char *res = t;

    while (*t++ = *s++)
        ;

    return res;
}

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

int myStrcmp(char *t, char *s)
{
    for (; *t && *s && *t == *s; t++, s++)
        ;

    return *t - *s;
}