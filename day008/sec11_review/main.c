#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int getMax(int *a, int *b)
{
    return *a > *b ? *a : *b;
}
*/

int getMax(int a, int b)
{
    return a > b ? a : b;
}

int main1()
{
    int a = 3;
    int b = 5;
    //int maxValue = getMax(&a, &b);
    int maxValue = getMax(a, b);
    printf("maxValue: %d\n", maxValue);

    return 0;
}

void mySwap(int *pa, int *pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

int main2()
{
    int a = 3;
    int b = 5;
    printf("a = %d, b = %d\n", a, b);
    mySwap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}

void initArr(int *arr, int len)
{
    srand((unsigned)time(NULL));

    for (int i = 0; i < len; i++)
    {
        arr[i] = rand() % 100;
    }
}

void display(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }

    putchar('\n');
}

int getSmallIdx(int *arr, int len, int n)
{
    int smallIdx = n;

    for (int i = n+1; i < len; i++)
    {
        if (arr[i] < arr[smallIdx])
        {
            smallIdx = i;
        }
    }

    return smallIdx;
}

void selectSort(int *arr, int len)
{
    for (int i = 0; i < len-1; i++)
    {
        int index = getSmallIdx(arr, len, i);

        if (index != i)
        {
            mySwap(&arr[index], &arr[i]);
        }
    }
}

int main()
{
    int arr[10];

    initArr(arr, 10);
    display(arr, 10);
    selectSort(arr, 10);
    printf("\nafter sorted\n");
    display(arr, 10);

    return 0;
}