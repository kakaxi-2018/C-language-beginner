#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void bubble(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
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

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    puts("");
}

int main()
{
    int arr[N];

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100;
    }

    display(arr, N);
    bubble(arr, N);
    printf("after sort\n");
    display(arr, N);

    return 0;
}