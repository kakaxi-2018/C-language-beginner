#include <stdio.h>

int main()
{
    char a = 1;
    short b = 2;
    int c = 3;
    double d = 3.14;

    printf("&a = %p\n", &a); printf("&a = %#x\n", &a);
    printf("&b = %p\n", &b); printf("&b = %#x\n", &b);
    printf("&c = %p\n", &c); printf("&c = %#x\n", &c);
    printf("&d = %p\n", &d); printf("&d = %#x\n", &d);


    printf("a = %d\n", *(&a));
    printf("b = %d\n", *(&b));
    printf("c = %d\n", *(&c));
    printf("d = %f\n", *(&d));

    return 0;
}