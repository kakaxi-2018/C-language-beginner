#include <stdio.h>
#include "mystring.h"

int main()
{
    char s1[100] = "china";
    char s2[100] = "china";

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