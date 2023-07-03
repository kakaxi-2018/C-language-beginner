#include <stdio.h>
#include <stdlib.h>

#define F_PRINT_ERR(e)\
do\
{\
    if (NULL == e)\
    {\
        exit(-1);\
    }\
} while (0)


int main()
{
    FILE *pfr = fopen("aa.txt", "r");
    F_PRINT_ERR(pfr);

    FILE *pfw = fopen("bb.txt", "w");
    F_PRINT_ERR(pfw);

    char ch;

    while ((ch = fgetc(pfr)) != EOF)
    {
        fputc(ch, pfw);
    }

    fclose(pfr);
    fclose(pfw);

    return 0;
}