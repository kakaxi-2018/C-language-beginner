#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *p)
{
    printf("%s\n", p);
}

int main()
{
    char *pa = (char *)malloc(10 * sizeof(char));

    if (NULL == pa)
    {
        printf("malloc error\n");
        exit(-1);
    }

    strcpy(pa, "China");
    func(pa);

    free(pa);
    pa = NULL;

    return 0;
}