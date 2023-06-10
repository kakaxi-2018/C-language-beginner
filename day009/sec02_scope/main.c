#include <stdio.h>

int x = 100;

void func()
{
    int a = 5;
    printf("a = %d\n", a);

    printf("func x = %d\n", x);
}

int main()
{
    int a = 3;
    printf("a = %d\n", a);

    func();

    printf("x = %d\n", x);

    return 0;
}