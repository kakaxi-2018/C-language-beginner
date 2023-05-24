#include <stdio.h>
#include <unistd.h>

// sum 1-100
int main1()
{
    int sum = 0;

    for (int i = 0; i < 101; i++)
    {
        sum += i;
    }

    printf("sum = %d\n", sum);

    for (;;) // equal: while(1)
    {
        sleep(1);
        printf("xxxx\n");
    }

    return 0;
}

int main()
{
    // 1+9 2+8 3+7 ... 8+2 9+1
    for (int i = 1, j = 9; i<10, j> 0; i++, j--)
    {
        printf("%d + %d = %d\n", i, j, i + j);
    }

    return 0;
}