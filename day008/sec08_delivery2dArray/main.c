#include <stdio.h>

void display(int (*pArr)[4], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", pArr[i][j]);
        }

        putchar('\n');
    }
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7}, {8, 9}};
    display(arr, 3);

    return 0;
}