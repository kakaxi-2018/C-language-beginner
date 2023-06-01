#include <stdio.h>

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, 
                    {5, 6, 7, 8}, 
                    {9, 10, 11, 12}, 
                    {13, 14, 15, 16}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                printf("%2d  ", arr[i][j]);
            }
            else if (3 == i + j)
            {
                printf("%2d  ", arr[i][j]);
            }
            else
            {
                printf("\t");
            }
        }

        putchar('\n');
    }

    printf("==========\n");

    for (int i = 0; i < 4; i++)
    {
        int t = 3 - i;
        
        while (t--)
        {
            printf("  ");
        }

        printf("%2d\n", arr[i][3-i]);
    }

    return 0;
}