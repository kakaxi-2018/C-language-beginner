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
    FILE *pf = fopen("aa.txt", "w+");
    F_PRINT_ERR(pf);

    fputs("aaaaa", pf);
    fputs("bbb", pf);
    fputs("ccccccc", pf);

    rewind(pf);

    char ch;

    while ((ch = fgetc(pf)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(pf);

    return 0;
}

int main()
{
    FILE *pf = fopen("aa.txt", "r");
    F_PRINT_ERR(pf);

    char buf[1024];
    fgets(buf, 1023, pf);
    printf("%s", buf);

    fclose(pf);

    return 0;
}