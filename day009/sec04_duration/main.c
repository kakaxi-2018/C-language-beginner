#include <stdio.h>

int a = 5;

void func()
{
    printf("a = %d\n", a);
}

void foo()
{
    printf("a = %d\n", a);
}

int main()
{
    printf("a = %d\n", a);

    func();
    foo();

    int b = 42;

    return 0;
}