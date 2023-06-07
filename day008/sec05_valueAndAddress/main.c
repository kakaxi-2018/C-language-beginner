#include <stdio.h>

void func(int *a);

int main()
{
    int a = 4;
    func(&a);
    printf("a = %d\n", a);

    return 0;
}

void func(int *a)
{
    (*a)++;
    printf("a = %d\n", *a);
}