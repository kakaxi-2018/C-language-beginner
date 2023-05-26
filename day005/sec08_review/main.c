#include <stdio.h>

int main1()
{
    int arr[10] = {0};  // partially init

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;  // assign for single element
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("==========\n");

    printf("sizeof(arr)     = %d\n", sizeof(arr));
    printf("sizeof(int[10]) = %d\n", sizeof(int[10]));

    printf("==========\n");
    printf("arr[1]   = %d\n", arr[1]);
    printf("*(arr+1) = %d\n", *(arr+1));

    return 0;
}

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    printf("&arr    = %p\n", &arr);
    printf("&arr[0] = %p\n", &arr[0]);

    printf("==========\n");
    printf("arr[1] = %d -- %d -- %d\n", arr[1], *(arr+1), 1[arr]);
    printf("arr[1] = %d -- %d\n", *(arr+1), *(1+arr));

    printf("==========\n");

    for (int i = 0; i < 10; i++)
    {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }

    return 0;
}