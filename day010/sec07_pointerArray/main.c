#include <stdio.h>

int main1()
{
    int iArr[] = {1, 2, 3, 4, 5};  // int array
    char cArr[] = {'a', 'b', 'c', 'd'};  // char array

    char a, b, c, d;
    char *cpArr[] = {&a, &b, &c, &d};  // char pointer array

    int m, n, j, k;
    int *ipArr[] = {&m, &n, &j, &k};  // int pointer array

    char *pa = "China", *pb = "Canda", *pc = "France", *pd = "America";
    char *pArr[] = {pa, pb, pc, pd};

    return 0;
}

int main()
{
    char *pa = "China", *pb = "Canda", *pc = "France", *pd = "America";
    printf("pa = %p\n", pa);
    printf("pb = %p\n", pb);
    printf("pc = %p\n", pc);
    printf("pd = %p\n", pd);

    char *pArr[] = {pa, pb, pc, pd};

    for (int i = 0; i < sizeof(pArr) / sizeof(*pArr); i++)
    {
        printf("%s\n", pArr[i]);
    }

    printf("==========\n");
    char *pArr2[] = {"China", "Canda", "France", "America"};

    for (int i = 0; i < sizeof(pArr2) / sizeof(*pArr2); i++)
    {
        printf("%s\n", pArr2[i]);
    }
    
    return 0;
}