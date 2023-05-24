#include <stdio.h>
#include <unistd.h>

int main1()
{
    int count = 0;

    while (count < 10)
    {
        sleep(1);
        printf("%d xxxx\n", count);
        count++;
    }

    return 0;
}

// sum 1-100
int main2()
{
    int sum = 0;
    int i = 1;

    while (i < 101)
    {
        sum += i;
        i++;
    }

    printf("sum = %d\n", sum);

    return 0;
}

// factorial 10!
int main()
{
    int factorial = 1;
    int i = 1;

    while (i < 11)
    {
        factorial *= i;
        i++;
    }

    printf("factorial = %d\n", factorial);

    return 0;
}