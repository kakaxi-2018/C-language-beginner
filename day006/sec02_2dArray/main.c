#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1()
{
    int arr[4] = {1, 2, 3, 4};

    printf("arr     = %p\n", arr);  // start address
    printf("&arr[0] = %p\n", &arr[0]);

    printf("arr = %p, arr+1 = %p\n", arr, arr+1);  // step size

    for (int i = 0; i < 4; i++)  // range
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

int main2()
{
    int arr[3][4];

    printf("arr     = %p\n", arr);  // start address
    printf("&arr[0] = %p\n", &arr[0]);

    printf("==========\n");
    printf("arr = %p, arr+1 = %p\n", arr, arr+1);  // step size

    printf("==========\n");
    printf("arr[0]     = %p\n", arr[0]);  // nest array start address
    printf("&arr[0][0] = %p\n", &arr[0][0]); 

    printf("==========\n");
    printf("arr[0] = %p, arr[0]+1 = %p\n", arr[0], arr[0]+1);  // nest array step size

    printf("==========\n");
    srand((unsigned)time(NULL));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        putchar('\n');
    }

    return 0;
}

int main()
{
    int arr[3][4] = {{}, {1, 2, 3, 4}, {}};

    printf("arr     = %p\n", arr);
    printf("&arr[0] = %p\n", &arr[0]);  // & reference
    printf("arr[0]     = %p\n", arr[0]);  // nest array start address
    printf("&arr[0][0] = %p\n", &arr[0][0]);

    printf("==========\n");
    printf("arr+1    = %p\n", arr+1);
    printf("arr[0]+1 = %p\n", arr[0]+1);

    printf("==========\n");
    printf("arr   = %p\n", arr);
    printf("arr+1 = %p\n", arr+1);

    printf("*arr     = %p\n", *arr);  // dereference
    printf("*arr+1   = %p\n", *arr+1);

    printf("*(*(arr+1)+1) = %d\n", *(*(arr+1)+1));


    return 0;
}