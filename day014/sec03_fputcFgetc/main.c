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

// write to file
int main1()
{
    FILE *pf = fopen("aa.txt", "w");
    F_PRINT_ERR(pf);

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(fputc(ch, pf));
    }


    fclose(pf);

    return 0;
}

// read
int main()
{
    FILE *pf = fopen("aa.txt", "r");
    F_PRINT_ERR(pf);

    char ch;

    while ((ch = fgetc(pf)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(pf);

    return 0;
}