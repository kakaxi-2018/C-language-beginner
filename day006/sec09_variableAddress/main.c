#include <stdio.h>

int main()
{
    char a;
    short b;
    int c;
    double d;

    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
    printf("&c = %p\n", &c);
    printf("&d = %p\n", &d);

    printf("sizeof(&a) = %d\n", sizeof(&a));
    printf("sizeof(&b) = %d\n", sizeof(&b));
    printf("sizeof(&c) = %d\n", sizeof(&c));
    printf("sizeof(&d) = %d\n", sizeof(&d));

    return 0;
}