#include <stdio.h>
#include <string.h>

int main()
{
    char *pArr[] = {"China", "Canda", "France", "America"};

    int len = sizeof(pArr) / sizeof(*pArr);

    for (int i = 0; i < len; i++)
    {
        printf("%s\n", pArr[i]);
    }

    for (int i = 0; i < len-1; i++)
    {
        int idx = i;

        for (int j = i+1; j < len; j++)
        {
            if (strcmp(pArr[idx], pArr[j]) > 0)
            {
                idx = j;
            }
        }

        if (idx != i)
        {
            char *t = pArr[idx];
            pArr[idx] = pArr[i];
            pArr[i] = t; 
        }
    }

    printf("==========\n");

    for (int i = 0; i < len; i++)
    {
        printf("%s\n", pArr[i]);
    }

    return 0;
}