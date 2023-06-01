#include <stdio.h>

int main1()
{
    int arr[10] = {0};

    printf("sizeof(arr)      = %d\n", sizeof(arr));
    printf("sizeof(int [10]) = %d\n", sizeof(int[10]));

    printf("arr     = %p\n", arr);
    printf("&arr[0] = %p\n", &arr[0]);

    printf("arr[0] = %d\n", arr[0]);
    printf("*(arr+0) = %d\n", *(arr+0));

    return 0;
}

int main()
{
    int arr[3][4] = {2, 3, 4};

    printf("sizeof(arr)        = %d\n", sizeof(arr));
    printf("sizeof(int [3][4]) = %d\n", sizeof(int[3][4]));

    printf("arr     = %p\n", arr);
    printf("&arr[0] = %p\n", &arr[0]);

    printf("arr[0]     = %p\n", arr[0]);
    printf("&arr[0][0] = %p\n", &arr[0][0]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", *((*(arr+i))+j));
        }

        putchar('\n');
    }

    return 0;
}