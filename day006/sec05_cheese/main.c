#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10][10] = {0};

    srand((unsigned)time(NULL));

    int num = 0;

    while (num < 20)
    {
        int row = rand() % 10;
        int col = rand() % 10;

        // do nothing for seted point
        if (1 == arr[row][col])
        {
            continue;
        }

        arr[row][col] = 1;
        num++;
    }

    // print cheese
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d", arr[i][j]);
        }

        putchar('\n');
    }

    // judge good cheese or bad cheese
    for (int i = 0; i < 10; i++)
    {
        int count = 0;

        // row scan
        for (int j = 0; j < 10; j++)
        {
            if (1 == arr[i][j])
            {
                count++;

                if (3 == count)
                {
                    printf("good cheese. i: %d, j: %d\n", i, j);
                    return 0;
                }
            }
            else
            {
                count = 0;
            }
            
        }

        // column scan
        count = 0;

        for (int j = 0; j < 10; j++)
        {
            if (1 == arr[j][i])
            {
                count++;

                if (3 == count)
                {
                    printf("good cheese. i: %d, j: %d\n", j, i);
                    return 0;
                }
            }
            else
            {
                count = 0;
            }
        }

    }

    return 0;
}