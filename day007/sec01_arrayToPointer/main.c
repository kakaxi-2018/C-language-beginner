#include <stdio.h>

int main1()
{
    char a = 1;
    short b = 2;
    int c = 3;
    double d = 4.56;

    printf("sizeof(a) = %d\n", sizeof(a));
    printf("sizeof(b) = %d\n", sizeof(b));
    printf("sizeof(c) = %d\n", sizeof(c));
    printf("sizeof(d) = %d\n", sizeof(d));

    printf("sizeof(&a) = %d\n", sizeof(&a));
    printf("sizeof(&b) = %d\n", sizeof(&b));
    printf("sizeof(&c) = %d\n", sizeof(&c));
    printf("sizeof(&d) = %d\n", sizeof(&d));

    // &a = (int *)0x12345678;  // compile error

    printf("&a = %#p\n", &a);
    printf("&b = %#p\n", &b);
    printf("&c = %#p\n", &c);
    printf("&d = %#p\n", &d);

    printf("a = %d\n", *(&a));
    printf("b = %d\n", *(&b));
    printf("c = %d\n", *(&c));
    printf("d = %f\n", *(&d));

    return 0;
}

int main2()
{
    int data = 0x12345678;

    printf("data = %#x\n", data);

    printf("%#x\n", *((char *)&data));
    printf("%#x\n", *((short *)&data));
    printf("%#x\n", *((int *)&data));

    return 0;
}

int main()
{
    char a = 1;
    short b = 2;
    int c = 3;
    double d = 4.56;

    printf("a = %d\n", *(&a));
    printf("b = %d\n", *(&b));
    printf("c = %d\n", *(&c));
    printf("d = %f\n", *(&d));

    printf("sizeof(&a) = %d\n", sizeof(&a));
    printf("sizeof(&b) = %d\n", sizeof(&b));
    printf("sizeof(&c) = %d\n", sizeof(&c));
    printf("sizeof(&d) = %d\n", sizeof(&d));

    printf("sizeof(char *)   = %d\n", sizeof(char *));
    printf("sizeof(short *)  = %d\n", sizeof(short *));
    printf("sizeof(int *)    = %d\n", sizeof(int *));
    printf("sizeof(double *) = %d\n", sizeof(double *));

    printf("==========\n");
    char *pa = &a;
    short *pb = &b;
    int *pc = &c;
    double *pd = &d;

    printf("sizeof(pa) = %d\n", sizeof(pa));
    printf("sizeof(pb) = %d\n", sizeof(pb));
    printf("sizeof(pc) = %d\n", sizeof(pc));
    printf("sizeof(pd) = %d\n", sizeof(pd));

    printf("%d\n", *pa);
    printf("%d\n", *pb);
    printf("%d\n", *pc);
    printf("%f\n", *pd);

    return 0;
}