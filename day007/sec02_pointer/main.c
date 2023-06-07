#include <stdio.h>

int main()
{
    int a;
    int *p = &a;
    *p = 100;
    printf("a = %d\n", a);

    int b = 20;
    p = &b;
    *p = 200;
    printf("b = %d\n", b);

    return 0;
}