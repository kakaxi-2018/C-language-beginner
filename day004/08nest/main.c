#include <stdio.h>

int main1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        putchar('\n');
    }

    return 0;
}

int main2()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d * %d = %2d\t", j, i, i * j);
        }
        putchar('\n');
    }

    return 0;
}

int main3()
{
    int i = 1;

    while (i < 10)
    {
        int j = 1;

        while (j <= i)
        {
            printf("%d * %d = %2d\t", j, i, i * j);
            j++;
        }

        putchar('\n');

        i++;
    }

    return 0;
}

int main4()
{
    // a hundred yuan buys a hundred chickens
    int cock;
    int hen;
    int chicken;
    int count = 0;

    for (cock = 0; cock < 20; cock++)
    {
        for (hen = 0; hen < 33; hen++)
        {
            for (chicken = 0; chicken < 100; chicken++)
            {
                if ((100 == cock + hen + chicken) && (300 == 15 * cock + 9 * hen + chicken))
                {
                    printf("cock: %d, hen: %d, chicken: %d\n", cock, hen, chicken);
                    count++;
                }
            }
        }
    }

    return 0;
}

int main()
{
    // boy send to a girl
    /*
    for (;;)
        printf("I love you!\n");
    */

    // girl send to the boy
    for (;;)
        ;
    printf("I love you!\n");

    return 0;
}