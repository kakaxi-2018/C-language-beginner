#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LenOfArr 10

int getIndex(int arr[], int len, int target)
{
    // linear search
    int index = -1;

    for (int i = 0; i < len; i++)
    {
        if (target == arr[i])
        {
            index = i;
            break;
        }
    }

    return index;
}

int binarySearch(int arr[], int len, int target)
{
    int left = 0;
    int right = len - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (target > arr[mid])
        {
            left = mid + 1;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int arr[LenOfArr];
    srand((unsigned)time(NULL));

    for (int i = 0; i < LenOfArr; i++)
    {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < LenOfArr; i++)
    {
        printf("%d\t", arr[i]);
    }

    putchar('\n');
    int target;
    printf("please input a search num:\n");
    scanf("%d", &target);

    int index = getIndex(arr, LenOfArr, target);
    printf("index: %d\n", index);

    printf("==========\n");
    int arr2[LenOfArr] = {1, 2, 3, 4, 5, 60, 70, 80, 90, 100};

    for (int i = 0; i < LenOfArr; i++)
    {
        printf("%d\t", arr2[i]);
    }

    putchar('\n');
    index = binarySearch(arr2, LenOfArr, 100);
    printf("index: %d\n", index);

    return 0;
}