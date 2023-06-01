#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] ^= arr[j+1];
                arr[j+1] ^= arr[j];
                arr[j] ^= arr[j+1];
            }
        }
    }
}

int cmpFunc(const void *pa, const void *pb)
{
    return (*((int *)pa) - *((int *)pb));
}

// 7.4.1 bubble sort
int main1()
{
    int arr[10];
    int arr2[10];

    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        arr2[i] = arr[i];
    }

    // print array
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    putchar('\n');

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr2[i]);
    }

    putchar('\n');

    bubbleSort(arr, 10);
    qsort(arr2, 10, sizeof(arr2[0]), cmpFunc);
    printf("after sort\n");

    // print array
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    putchar('\n');

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr2[i]);
    }

    putchar('\n');

}

int linerSearch(int arr[], int len, int target) 
{
    for (int i = 0; i < len; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }

    return -1;
}

// 7.4.2 line search
int main2()
{
    int arr[10] = {100,99,2,200,35,28,22,64,56,1};
    int target = 28;

    int index = linerSearch(arr, 10, target);
    printf("index: %d\n", index);

    return 0;
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

// 7.4.3 binary search
int main3()
{
    int arr[10] = {1, 2, 22, 28, 35, 56, 64, 99, 100, 200};

    int target = 35;

    int index = binarySearch(arr, 10, target);
    printf("index: %d\n", index);

    return 0;
}

int getSumOfArray(int arr[][3], int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            else if (sizeof(arr[0])/sizeof(arr[0][0]) - 1 == i + j)
            {
                sum += arr[i][j];
            }
        }
    }

    return sum;
}

// 7.4.4 the sum of the diagonal elements of the matrix
int main4()
{
    int arr[3][3] = {1, 3, 6,
                     7, 9, 11,
                     14, 15, 17};

    int sumOfDiagonal = getSumOfArray(arr, 3);
    printf("sum: %d\n", sumOfDiagonal);
}

int removeDumplicateEle1(int arr[], int len)
{
    if (0 == len ||  1 == len)
    {
        return len;
    }

    int temp[len];

    for (int i = 0; i < len; i++)
    {
        temp[i] = arr[i];
    }

    int index = 0;

    for (int i = 0; i < len; i++)
    {
        if (temp[i] == temp[i+1])
        {
            continue;
        }

        arr[index] = temp[i];
        index++;
    }

    arr[index] = temp[len-1];

    return index;
}

int removeDumplicateEle(int arr[], int len)
{
    if (0 == len || 1 == len)
    {
        return len;
    }

    int temp[len];
    int index = 0;

    for (int i = 0; i < len-1; i++)
    {
        if (arr[i] == arr[i+1])
        {
            continue;
        }

        temp[index++] = arr[i];
    }

    temp[index++] = arr[len-1];

    for (int i = 0; i < index; i++)
    {
        arr[i] = temp[i];
    }

    return index;
}

// 7.4.5 ordered array, remove duplicate elements
int main5()
{
    //int arr[] = {1, 1, 2, 2, 3, 5, 7, 7, 7};
    int arr[] = {1};
    int len = sizeof(arr) / sizeof(arr[0]);

    int n = removeDumplicateEle(arr, len);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    putchar('\n');

    return 0;
}

void moveByColumn(int arr[][3], int len)
{
    int temp[len][3];

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j > 0 && j < 3)
            {
                arr[i][j] = temp[i][j-1];
            }
            else if (0 == j)
            {
                arr[i][j] = temp[i][2-j];
            }
        }
    }
}

// 7.4.6 two-dimensional arrays move by column
int main()
{
    int arr[2][3] = {6, 4, 5,
                     3, 1, 2};

    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d  ", arr[i][j]);
        }

        putchar('\n');
    }

    moveByColumn(arr, 2);

    printf("after moved\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d  ", arr[i][j]);
        }

        putchar('\n');
    }
}