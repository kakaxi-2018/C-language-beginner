#include <stdio.h>

int main()
{
    int arr[3][4] = {1, 2, 3, 4,
                     10, 20, 30, 40,
                     100, 200, 300, 400};
    
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 3; j >= 0; j--)
        {
            printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
        }

        printf("==========\n");
    }

    printf("arr = %p, arr+1 = %p, arr+2 = %p\n", arr, arr+1, arr+2);
    printf("arr[0] = %p, arr[0]+1 = %p, arr[0]+2 = %p\n", arr[0], arr[0]+1, arr[0]+2);

    printf("*arr = %p, *arr+1 = %p, *arr+2 = %p\n", *arr, *arr+1, *arr+2);
    printf("&arr[0] = %p, &arr[0]+1 = %p, &arr[0]+2 = %p\n", &arr[0], &arr[0]+1, &arr[0]+2);

    printf("%d\n", *(*(arr+2)+1));
    printf("%d\n", arr[2][1]);

    return 0;
}