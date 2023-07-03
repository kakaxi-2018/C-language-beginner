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

// read file, difference from Linux and Windows
int main()
{
    FILE *pf = fopen("aaLinux.txt", "w+");
    F_PRINT_ERR(pf);

    fputc('a', pf);
    fputc('b', pf);
    fputc('\n', pf);
    fputc('c', pf);

    rewind(pf);

    char ch;

    ch = fgetc(pf);
    printf("%x", ch);
    ch = fgetc(pf);
    printf("%x", ch);
    ch = fgetc(pf);
    printf("%x", ch);
    ch = fgetc(pf);
    printf("%x", ch);
    ch = fgetc(pf);
    printf("%x", ch);


    fclose(pf);
}