#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LenOfArr 10

void selectSort(int arr[], int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
        }
    }
}

void sortOptimization(int arr[], int len)
{
    for (int i = 0; i < len-1; i++)
    {
        int index = i;

        for (int j = i+1; j < len; j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }

        if (index != i)
        {
            arr[index] ^= arr[i];
            arr[i] ^= arr[index];
            arr[index] ^= arr[i];
        }
    }
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
    //selectSort(arr, LenOfArr);
    sortOptimization(arr, LenOfArr);

    for (int i = 0; i < LenOfArr; i++)
    {
        printf("%d\t", arr[i]);
    }

    putchar('\n');

    
    return 0;
}