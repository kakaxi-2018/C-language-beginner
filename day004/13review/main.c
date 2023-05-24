#include <stdio.h>

int main1()
{
    // sum 1-100
    int sum = 0;
    int i = 0;

    /*
    while (i < 101)
    {
        sum += i;
        i++;
    }
    */

    /*
     do
     {
         sum += i;
         i++;
     } while (i < 101);
     */

    for (i = 0; i < 101; i++)
    {
        sum += i;
    }

    printf("sum = %d\n", sum);

    return 0;
}

int main()
{
    // print ****
    /*
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        putchar('\n');
    }
    */

    int i = 1;

    while (i < 5)
    {
        int j = 1;

        while (j <= i)
        {
            printf("*");
            j++;
        }

        putchar('\n');

        i++;
    }

    return 0;
}