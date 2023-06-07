#include <stdio.h>

int getAge(int n)
{
    if (1 == n)
    {
        return 10;
    }
    else
    {
        return getAge(n-1) + 2;
    }
}

int getPeach(int n)
{
    if (n == 10)
    {
        return 1;
    }
    else
    {
        return 2 * (getPeach(n+1)+1);
    }
}

int getFactorial(int n)
{
    if (1 == n)
    {
        return 1;
    }
    else
    {
        return n * getFactorial(n-1);
    }
}

void func(int i)
{
    if (i > 0)
    {
        func(i / 2);
    }

    printf("%d\n", i);
}

int main()
{
    int age = getAge(5);
    printf("age = %d\n", age);

    int count = getPeach(1);
    printf("count = %d\n", count);

    int factorial = getFactorial(5);
    printf("factorial = %d\n", factorial);

    func(10);

    return 0;
}