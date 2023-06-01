#include <stdio.h>

int main()
{
    char arr[4][4] = {{'a', 'b', 'b', 'b'},
                      {'c', 'a', 'b', 'b'},
                      {'c', 'c', 'a', 'b'},
                      {'c', 'c', 'c', 'a'}};


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i < j)
            {
                arr[i][j] ^= arr[j][i];
                arr[j][i]  ^= arr[i][j];
                arr[i][j] ^= arr[j][i];
            }
        }
    }

    for ( int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c\t", arr[i][j]);
        }

        putchar('\n');
    }

    return 0;
}