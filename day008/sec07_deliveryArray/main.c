#include <stdio.h>

void display(int *pArr, int len)
{
    printf("sizeof(pArr) = %d\n", sizeof(pArr));

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", *pArr++);
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10, 11, 22, 33};
    printf("sizeof(arr) = %d\n", sizeof(arr));

    display(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}