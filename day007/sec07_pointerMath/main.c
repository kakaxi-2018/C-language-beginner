#include <stdio.h>

int main1()
{
    int *p = (int *)0x0001;
    int data = 0x0001;

    printf("p      = %#x, p+1    = %#x\n", p, p+1);
    printf("data+1 = %#x, data+1 = %#x\n", data, data+1);

    printf("(double *)p = %#x, (double *)p +1 = %#x\n", (double *)p, (double *)p+1);
    printf("(int)p      = %#x, (int)p+1       = %#x\n", (int)p, (int)p+1);

    printf("==========\n");
    printf("%#x\n", ++p);
    printf("%#x\n", ++data);

    int arr[10];
    int *pHead = &arr[0];
    int *pTail = &arr[9];
    printf("%d\n", pTail-pHead);
    // pHead + 9 * sizeof(int) == pTail

    printf("==========\n");
    printf("%d\n", ((int)pTail-(int)pHead)/4);

    printf("==========\n");
    printf("%d\n", (int)pTail-(int)pHead);

    return 0;
}

int main()
{
    int *p = (int *)0x0001;
    int *q = (int *)0x0005;


    if (p + 1 == q)
    {
        printf("p + 1 == q\n");  // p + 1, equal p + 1 * sizeof(int)
    }

    if (q - 1 == p)
    {
        printf("q - 1 == p\n");  // q - p, equal q - p == 4 / sizeof(int)
    }

    return 0;
}