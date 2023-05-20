#include <stdio.h>

int main2()
{
    // todo problem
    double tmp = 0.3;
    printf("%d\n", (int)((tmp+0.000001)*10));

    return 0;
}

int main()
{
    double tmp = 0.0;
    if(tmp > 0-0.000001 && tmp < 0+0.000001)
    {
        printf("tmp == 0\n");
    }
    else
    {
        printf("tmp != 0\n");
    }

    return 0;
}