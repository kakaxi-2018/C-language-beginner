#include <stdio.h>

int main()
{
    int arr[10] = {1, 3, 5, 7, 9};

    /*
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    */

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *(arr+i));
    }

    printf("arr     = %p, arr+1     = %p\n", arr, arr+1);
    printf("&arr[0] = %p, &arr[0]+1 = %p\n", &arr[0], &arr[0]+1);

    int *pa = arr;
    int *pb = &arr[0];

    return 0;
}