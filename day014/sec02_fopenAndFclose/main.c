#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf = fopen("aa.txt", "w");

    if (NULL == pf)
    {
        exit(-1);
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        fputc(ch, pf);
    }


    fclose(pf);
}