#include <stdio.h>

int main1()
{
    int a = 3; int b = 5;
    if(a >= 5 && a < 100)
    {
        printf("xxxx\n");
    }
    else
    {
        printf("oooo\n");
    }

    return 0;
}

int main2()
{
    int a = 3;
    int b = 4;

    if(!(a>b))  // priority, add "()" when needed
    {
        printf("a<=b\n");
    }

    return 0;
}

int main3()
{
    for(int i = 0; i < 100; i++)
    {
        if(!(i%3))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

int main4()
{
    int a = 44;
    int b = 55;

    if(a>50 || (b = 66))
    {
        printf("xxxxb = %d\n", b);
    }
    else
    {
        printf("oooo%d\n", b);
    }

    return 0;
}

int main()
{
    int a = 44;
    int b = 55;

    if(a<50 && (b = 66))
    {
        printf("xxxxb = %d\n", b);
    }
    else
    {
        printf("oooo%d\n", b);
    }

    return 0;
}