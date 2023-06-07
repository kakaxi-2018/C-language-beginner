#include <stdio.h>

void func();
foo();  // default return_type is int

int myMax(int a, int b);

int main()
{
    int a = 3;
    int b = 5;

    int maxValue = myMax(a, b);
    printf("maxValue  = %d\n", maxValue);

    return 0;
}

int myMax(int a, int b)
{
    return a > b ? a : b;
}