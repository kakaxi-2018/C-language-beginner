#include <stdio.h>

//extern int xx;
static int xx = 42;

static void func()
{
    printf("func()\n");
}

int main()
{
    func();

    printf("xx = %d\n", xx);

    return 0;
}