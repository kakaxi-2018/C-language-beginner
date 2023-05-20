#include <stdio.h>

int main1()
{
    int a = 10;
    int b = 3;

    printf("%d\n", a/b);
    printf("%f\n", (float)a/b);

    printf("-7%%3 = %d\n", -7%3);
    //printf("-7%%3 = %f\n", -7.0%3);  // compile error

    for(int i = 0; i < 100; i++)
    {
        if(0 == i%3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

int main2()
{
    // ++ for simplicity
    int a = 10;
    printf("a = %d\n", a++);
    printf("a = %d\n", a);

    float priceOfNormalWorld = 34.5;
    priceOfNormalWorld++;
    printf("priceOfNormalWorld: %f\n", priceOfNormalWorld);

    return 0;
}

int main3()
{
    int a = 5;
    //++a++;  // compile error
    printf("a = %d\n", a);

    return 0;
}

int main()
{
    int a = 5;
    int b = 10;

    printf("a = %d\n", a+++b);  // big mouth rule
}