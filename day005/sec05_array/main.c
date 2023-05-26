#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getSum(int arr[], int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int getAvg(int arr[], int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    return (float)sum / len;
}

int  getMax(int arr[], int len)
{
    int maxValue = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }

    return maxValue;
}

int getMin(int arr[], int len)
{
    int minValue = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }

    return minValue;
}

int main()
{
    int arr[5];
    srand((unsigned)time(NULL));

    for (int i = 0; i < 5; i++)
    {
        arr[i] = rand() % 20;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    putchar('\n');

    int sum = getSum(arr, 5);
    printf("sum: %d\n", sum);

    float avg = getAvg(arr, 5);
    printf("avg: %f\n", avg);

    int maxValue = getMax(arr, 5);
    printf("max: %d\n", maxValue);

    int minValue = getMin(arr, 5);
    printf("min: %d\n", minValue);

    return 0;
}