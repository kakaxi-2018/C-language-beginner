#include <stdio.h>

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%p\n", &arr[i][j]);
        }

    }

    return 0;
}