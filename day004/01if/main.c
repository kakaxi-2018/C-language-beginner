#include <stdio.h>

int main()
{
    int x = 4, y = 30;

    if (x > y)
    {
        printf("x > y\n");
    }
    printf("==========\n");

    if (x < y)
        printf("x < y\n");

    printf("xxxx\n");
    printf("oooo\n");

    printf("==========\n");
    if (x < y)
    {
        printf("x < y\n");
        printf("xxxx\n");
        printf("oooo\n");
    }

    printf("==========\n");
    if (x > y)
    {
        printf("x > y\n");
        printf("xxxx\n");
        printf("oooo\n");
    }
    else
    {
        printf("x <= y\n");
        printf("xxxx\n");
        printf("oooo\n");
    }

    return 0;
}