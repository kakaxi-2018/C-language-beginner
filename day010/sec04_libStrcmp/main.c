#include <stdio.h>
#include <string.h>

int myStrcmp(char *t, char *s)
{
    for (; *t && *s && *t == *s; t++, s++)
        ;

    return *t - *s;
}

int main()
{
    char *s1 = "c";
    char *s2 = "d";

    //int n = strcmp(s1, s2);
    int n = myStrcmp(s1, s2);

    if (n > 0)
    {
        printf("s1 > s2\n");
    }
    else if (n < 0)
    {
        printf("s1 < s2\n");
    }
    else
    {
        printf("s1 == s2\n");
    }

    return 0;
}