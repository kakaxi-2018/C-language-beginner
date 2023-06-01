#include <stdio.h>

int main1()
{
    char a = 1;
    short b = 2;
    int c = 3;
    double d = 4.56;

    printf("sizeof(&a) = %d\n", sizeof(&a));
    printf("sizeof(&b) = %d\n", sizeof(&b));
    printf("sizeof(&c) = %d\n", sizeof(&c));
    printf("sizeof(&d) = %d\n", sizeof(&d));

    char *pa = &a;
    short *pb = &b;
    int *pc = &c;
    double *pd = &d;

    printf("sizeof(pa) = %d\n", sizeof(pa));
    printf("sizeof(pb) = %d\n", sizeof(pb));
    printf("sizeof(pc) = %d\n", sizeof(pc));
    printf("sizeof(pd) = %d\n", sizeof(pd));

    return 0;
}

int main()
{
    int a = 0x12345678;
    int *pa = &a;

    printf("a = %#x\n", *pa);

    return 0;
}