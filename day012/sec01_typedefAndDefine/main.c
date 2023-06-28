#include <stdio.h>
#include <stdlib.h>

int main1()
{
    typedef int INT;
    INT a, b, c;
    printf("sizeof(int) = %d, sizeof(INT) = %d\n", sizeof(int), sizeof(INT));

    int arr[10];
    typedef int Array[10];
    printf("sizeof(arr) = %d, sizeof(Array) = %d\n", sizeof(arr), sizeof(Array));

    Array NewArr;
    for (int i = 0; i < 10; i++)
    {
        NewArr[i] = i;
        printf("%d\n", NewArr[i]);
    }

    return 0;
}

#define DINT int

int main2()
{
    DINT a, b, c;
    printf("sizeof(DINT) = %d, sizeof(a) = %d\n", sizeof(DINT), sizeof(a));

    return 0;
}

int main()
{
    char *p, q;
    printf("sizeof(p) = %d, sizeof(q) = %d\n", sizeof(p), sizeof(q));

    typedef char* pChar;
    pChar a, b;
    printf("sizeof(a) = %d, sizeof(b) = %d\n", sizeof(a), sizeof(b));

    #define dpChar char *
    dpChar m, n;
    printf("sizeof(m) = %d, sizeof(n) = %d\n", sizeof(m), sizeof(n));

    return 0;
}