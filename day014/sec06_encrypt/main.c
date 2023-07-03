#include <stdio.h>
#include <stdlib.h>

#define F_PRINT_ERR(e) \
do                 \
{                  \
    if (NULL == e) \
    {              \
        exit(-1);  \
    }              \
} while (0)

int main1()
{
    FILE *pfr = fopen("aa.txt", "r");
    F_PRINT_ERR(pfr);

    FILE *pfw = fopen("aaCpy.txt", "w");
    F_PRINT_ERR(pfw);

    char ch;

    while ((ch = fgetc(pfr)) != EOF)
    {
        ch += 10;  // note: may overflow
        fputc(ch, pfw);
    }

    fclose(pfr);
    fclose(pfw);

    return 0;
}

int main()
{
    FILE *pfr = fopen("aaCpy.txt", "r");
    F_PRINT_ERR(pfr);

    FILE *pfw = fopen("aaDecode.txt", "w");
    F_PRINT_ERR(pfw);

    char ch;

    while ((ch = fgetc(pfr)) != EOF)
    {
        ch -= 10;
        fputc(ch, pfw);
    }

    fclose(pfr);
    fclose(pfw);

    return 0;
}