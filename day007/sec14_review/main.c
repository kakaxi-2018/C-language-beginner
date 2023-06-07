#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1()
{
    int *p;
    char *q;

    p = (int *)q;

    int *pp = (int *)0x0001;
    int *qq = (int *)0x0005;

    if (pp + 1 == qq)
    {
        printf("pp + 1 == qq\n");
    }

    if (qq - 1 == pp)
    {
        printf("qq - 1 == pp\n");
    }

    return 0;
}

int main2()
{
    int arr[10] = {1, 3, 5, 7, 9};

    printf("%d %d\n", arr[1], *(arr+1));

    // arr == &arr[0]
    // int *pa = &arr[0];
    // int *pa = arr;

    int *pArr = arr;

    for (int i = 0; i < 10; i++)
    {
        //printf("%d\n", *pArr++);
        //printf("%d\n", *(pArr++));
        printf("%d\n", (*pArr)++);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(arr+i));
    }

    return 0;
}

int main3()
{
    int arr[3][4] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    // size
    printf("sizeof(arr)       = %d\n", sizeof(arr));
    printf("sizeof(int[3][4]) = %d\n", sizeof(int[3][4]));


    // start address
    printf("==========\n");
    printf("arr     = %p\n", arr);
    printf("&arr[0] = %p\n", &arr[0]);
    printf("arr[0]     = %p\n", arr[0]);
    printf("&arr[0][0] = %p\n", &arr[0][0]);

    // step
    printf("==========\n");
    printf("arr = %p, arr+1 = %p\n", arr, arr+1);
    printf("arr[0] = %p, arr[0]+1 = %p\n", arr[0], arr[0]+1);

    printf("*arr = %p, *arr+1 = %p\n", *arr, *arr+1);
    printf("&arr[0] = %p, &arr[0]+1 = %p\n", &arr[0], &arr[0]+1);

    // access
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    printf("==========\n");
    int data = 0x12345678;
    int *pd = &data;

    printf("%#x\n", *(char *)pd);
    printf("%#x\n", *(short *)pd);
    printf("%#x\n", *(int *)pd);

    return 0;
}

// rand num, [100, 200]
// rand()%100 [0, 99],  +100, [100, 199]
// rand()%101 [0, 100], +100, [100, 200]
int main()
{
    srand((unsigned)time(NULL));

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 101 + 100;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}