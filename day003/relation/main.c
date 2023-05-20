#include <stdio.h>

int main1()
{
    int a = 10;
    int b = 20;

    a > b; a == b; a != b; a >= b; a <= b;

    printf("%d\n", a < b);

    if(a < b)
    {
        printf("a < b\n");
    }
    else
    {
        printf("a >= b");
    }

    return 0;
}

int main2()
{
    int x = 5;
    int y = 6;

    if(x == y)
    {
        printf("x == y\n");
    }
    else
    {
        printf("x != y\n");
    }

    if(x=y)  // someone may have made a mistake. note: always true
    {
        printf("x == y\n");
    }
    else
    {
        printf("x != y\n");
    }

    return 0;
}

int main()
{
    int var;
    scanf("%d", &var);

    if(5<=var<100)  // // made a mistake. note: always true
    {
        printf("in scope\n");
    }
    else
    {
        printf("in scope\n");
    }

    if(var >= 5 && var < 100)
    {
        printf("in scope\n");
    }
    else
    {
        printf("not in scope\n");
    }

    return 0;
}