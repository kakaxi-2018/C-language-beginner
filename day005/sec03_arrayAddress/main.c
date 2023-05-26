#include <stdio.h>

int main()
{
    int arr[10];  // means: int[10] arr

    for (int i = 0; i < 10; i++)
    {
        printf("&arr[%d] = %p\n", i, &arr[i]);
        arr[i] = i;
    }

    printf("==========\n");

    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d -- %d\n", i, arr[i], *(arr+i));
    }

    printf("==========\n");
    printf("&arr    = %p\n", &arr);
    printf("&arr[0] = %p\n", &arr[0]);

    printf("==========\n");
    printf("arr[1] = %d -- %d -- %d\n", arr[1], *(arr+1), 1[arr]);  // [] operator

    return 0;
}