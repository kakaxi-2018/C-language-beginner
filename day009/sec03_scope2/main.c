#include <stdio.h>

extern int xx;

void func();

int main()
{
    int x = 10;
    printf("x = %d\n", x);

    {
        int x = 15;
        printf("x = %d\n", x);
    }

    printf("xx = %d\n", xx);

    func();

    return 0;
}