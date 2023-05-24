#include <stdio.h>

// sum 1-100
int main1()
{
    int sum = 0;
    int i = 1;

    do
    {
        sum += i;
        i++;
    } while (i < 101);

    printf("sum = %d\n", sum);

    return 0;
}

// factorial 10!
int main()
{
    int factorial = 1;
    int i = 1;

    do
    {
        factorial *= i;
        i++;
    } while (i < 11);

    printf("factorial = %d\n", factorial);

    return 0;
}