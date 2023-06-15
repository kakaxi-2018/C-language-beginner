#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main1()
{
    //char *p = (char *)malloc(1024 * 1024 *1024 * 2);  // note: overflow problem
    char *p = (char *)malloc(1024 * 1024 *1024 * 1);  // note: overflow problem

    if (NULL == p)
    {
        printf("malloc error\n");
        exit(-1);
    }

    strcpy(p, "China");

    printf("%s\n", p);
    free(p);
    p = NULL;
    
    return 0;
}

void func()
{
    printf("====func()\n");
    char *p, *q, *m, *n;
    p = (char *)malloc(100 * sizeof(char));
    q = (char *)malloc(100 * sizeof(char));
    m = (char *)malloc(100 * sizeof(char));
    n = (char *)malloc(100 * sizeof(char));

    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", m);
    printf("%p\n", n);

    free(p);
    free(q);
    free(m);
    free(n);

}

int main()
{
    printf("====main()\n");
    char *p, *q, *m, *n;
    p = (char *)malloc(100 * sizeof(char));
    q = (char *)malloc(100 * sizeof(char));
    m = (char *)malloc(100 * sizeof(char));
    n = (char *)malloc(100 * sizeof(char));

    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", m);
    printf("%p\n", n);

    free(p);
    free(q);
    free(m);
    free(n);

    func();

    return 0;
}