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
    FILE *pf = fopen("aa.txt", "w+");
    F_PRINT_ERR(pf);

    fputs("aaaaaaaaaaaaaaa\n", pf);
    fputs("bbbbbbbbbbbbbbb\n", pf);
    fputs("ccccccccccccccc\n", pf);
    fputs("ddddddddddddddd", pf);

    rewind(pf);
    char buf[1024];

    /*
    while (fgets(buf, 1023, pf) && !feof(pf))
    {
        printf("%s", buf);
    }
    */

    // better wey for read
    while (fgets(buf, 1023, pf) != NULL)
    {
        printf("%s", buf);
    }

    fclose(pf);
    return 0;
}