#include <stdio.h>

int main1()
{
    printf("%d\n", 5>4?100:200);

    if(5>4)
    {
        printf("%d\n", 100);
    }
    else
    {
        printf("%d\n", 200);
    }

    return 0;
}

int main()
{
    int a = 5;
    int b = 4;
    int c = 100;
    int d = 200;

    printf("%d\n", a>b?c:d);
    printf("%d\n", a<b?c:d>55?10:20);  // nest, from right to left
    printf("%d\n", a<b?c:(d>55?10:20));

    // equal
    int tmp;
    if(d>55)
    {
        tmp = 10;
    }
    else
    {
        tmp = 20;
    }

    if(a<b)
    {
        printf("%d\n", c);
    }
    else
    {
        printf("%d\n", tmp);
    }

    return 0;
}