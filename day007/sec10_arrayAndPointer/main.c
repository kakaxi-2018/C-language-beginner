#include <stdio.h>

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int *pa = arr;

    for (int i = 0; i < 10; i++)
    {
        //printf("%d\n", arr[i]);
        //printf("%d\n", *(arr+i));
    }

    for (int i = 0; i < 10; i++)
    {
        //printf("%d\n", *pa++);
        //printf("%d\n", *(pa++));
        printf("%d\n", (*pa)++);

    }

    pa = arr;

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", pa[i]);
    }

    return 0;
}