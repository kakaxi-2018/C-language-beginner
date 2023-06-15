#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("please input a len: ");
    int len;
    int *pa;
    scanf("%d", &len);
    int oldLen = len;

    pa = (int *)malloc(len * sizeof(int));

    if (NULL == pa)
    {
        printf("malloc error\n");
        exit(-1);
    }

    for (int i = 0; i < len; i++)
    {
        pa[i] = i;
        printf("%d\n", *(pa+i));
    }

    printf("please input a larger len: ");
    scanf("%d", &len);

    pa = (int *)realloc(pa, 10 * sizeof(int));

    if (NULL == pa)
    {
        printf("malloc error\n");
        exit(-1);
    }

    for (int i = 0; i < len; i++)
    {
        if (i >= oldLen)
        {
            *(pa+i) = 100+i;
        }
        printf("%d\n", *(pa+i));
    }

    free(pa);
    pa = NULL;
    return 0;
}