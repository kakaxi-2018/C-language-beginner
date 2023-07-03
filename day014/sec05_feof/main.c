#include <stdio.h>
#include <stdlib.h>

#define F_PRINT_ERR(e)\
do\
{\
    if (NULL == e)\
    {\
        exit(-1);\
    }\
} while (0)\


int main()
{
    FILE *pf = fopen("aa.txt", "w+");
    F_PRINT_ERR(pf);

    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        fputc(ch, pf);
    }

    rewind(pf);

    // note: the order between &&, and priority
    /*
    while ((ch = fgetc(pf)) && !feof(pf))
    {
        printf("%x->%c\n", ch, ch);
    }
    */

    // better way
    while ((ch = fgetc(pf)) != EOF)
    {
        printf("%x->%c\n", ch, ch);
    }

    fclose(pf);

    return 0;
}