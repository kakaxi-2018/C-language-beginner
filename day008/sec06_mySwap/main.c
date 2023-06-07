#include <stdio.h>

void mySwap(int *pa, int *pb);

int main()
{
    int a = 3;
    int b = 5;
    printf("a = %d, b = %d\n", a, b);
    mySwap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void mySwap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}