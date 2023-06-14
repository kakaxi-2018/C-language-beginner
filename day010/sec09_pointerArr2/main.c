#include <stdio.h>

int main()
{
    char *pArr[] = {"China", "Canda", "France", "America"};

    printf("sizeof(pArr) = %d\n", sizeof(pArr));

    for (int i = 0; i < sizeof(pArr) / sizeof(*pArr); i++)
    {
        printf("sizeof(pArr[%d]) = %d\n", i, sizeof(pArr[i]));
    }

    return 0;
}