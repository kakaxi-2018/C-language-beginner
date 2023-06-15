#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *p)
{
    printf("%s\n", p);
}

void foo(char *p)
{
    printf("%s\n", p);
    strcpy(p, "America");
}

int main()
{
    char *p = (char *)malloc(100 * sizeof(char));

    if (NULL == p)
    {
        printf("malloc error\n");
        exit(-1);
    }

    strcpy(p, "China");

    func(p);
    foo(p);

    printf("%s\n", p);

    free(p);
    p = NULL;

    return 0;
}