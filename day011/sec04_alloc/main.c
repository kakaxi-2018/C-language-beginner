#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main1()
{
    // basic type 
    int a = 10;
    printf("a = %d\n", a);

    int *pa = (int *)malloc(1 * sizeof(int));
    *pa = 100;
    printf("*pa = %d\n", *pa);
    free(pa);
    pa = NULL;

    // structural type
    int arr[10];

    int *pArr = (int *)malloc(10 * sizeof(int));
    memset(pArr, 0, 10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        pArr[i] = i;
        //printf("%d\n", pArr[i]);
        printf("%d\n", *(pArr+i));
    }

    free(pArr);
    pArr = NULL;

    return 0;
}

int main()
{
    int *p = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *(p+i));
    }
    
    free(p);
    p = NULL;

    return 0;
}