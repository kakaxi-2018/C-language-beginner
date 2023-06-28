#include <stdio.h>

typedef struct _structTest
{
    char a;
    short b;
    int c;
} Stru;

typedef union _uniTest
{
    char a;
    short b;
    int c;
} Uni;

int main()
{
    Stru s;

    Uni u;

    printf("sizeof(s) = %d, sizeof(Stru) = %d\n", sizeof(s), sizeof(Stru));
    printf("sizeof(u) = %d, sizeof(Uni) = %d\n", sizeof(u), sizeof(Uni));

    printf("&s.a = %p, &u.b = %p, &u.c = %p\n", &s.a, &s.b, &s.c);
    printf("&u.a = %p, &u.b = %p, &u.c = %p\n", &u.a, &u.b, &u.c);

    u.c = 0x12345678;

    printf("u.a = %#x\n", u.a);
    printf("u.b = %#x\n", u.b);
    printf("u.c = %#x\n", u.c);

    return 0;
}