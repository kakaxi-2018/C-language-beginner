#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func()
{
    int n = 100;
    return n;
}

int * foo()
{
    int n = 200;
    int *pn = &n;
    printf("&n = %p\n", pn);

    return pn;  // note: error, don't do it 
}

int main1()
{
    int n = func();
    printf("n = %d\n", n);

    int *p = foo();
    printf("p = %p\n", p);

    //printf("*p = %d\n", *p);  // note: error, don't do it

    return 0;
}

char * getFormatMem(int n, char content)
{
    char *pa = (char *)malloc(n * sizeof(char));

    if (NULL == pa)
    {
        printf("malloc error\n");
        exit(-1);
    }

    memset(pa, content, n * sizeof(char) - 1);
    pa[n * sizeof(char) - 1] = '\0';

    return pa;
    
}

int main()
{
    char * p = getFormatMem(20, 'a');

    printf("%s\n", p);

    free(p);
    p = NULL;

    return 0;
}