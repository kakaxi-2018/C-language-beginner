#include <stdio.h>

#define M 5
#define N 3

int main()
{
    int arr1[M] = {11, 13, 15, 17, 19};
    int arr2[N] = {2, 4, 6};

    int arr3[M+N];
    int i = 0;
    int j = 0;
    int index = 0;

    while (i < M && j < N)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[index++] = arr1[i];
            i++;
        }
        else
        {
            arr3[index++] = arr2[j];
            j++;
        }
    }

    //if (M == i && j < N)
    //{
        while ( j < N)
        {
            arr3[index++] = arr2[j++];
        }
    //}

    //if (N == j && i < M)
    //{
        while (i < M)
        {
            arr3[index++] = arr1[i++];
        }
    //}

    // print arr3
    for (int idx = 0; idx < M+N; idx++)
    {
        printf("%d\t", arr3[idx]);
    }

    putchar('\n');

    return 0;

}
