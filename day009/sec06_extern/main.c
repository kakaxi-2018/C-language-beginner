#include <stdio.h>

extern int a;
extern int b;
extern int c;


int main()
{
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}

int b = 30;