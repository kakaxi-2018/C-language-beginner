#include <stdio.h>
#include <stdlib.h>

#define F_PRINT_ERR(e) \
    do                 \
    {                  \
        if (NULL == e) \
        {              \
            printf("open error\n");\
            exit(-1);  \
        }              \
    } while (0)

int main()
{
    FILE *pf = fopen("aa.conf", "r");
    F_PRINT_ERR(pf);

    FILE *pfw = fopen("aa.conf.bak", "w");
    if (NULL == pf)
    {
        fclose(pf);
        exit(-1);
    }

    char buf[1024];

    while (fgets(buf, 1023, pf) != NULL)
    {
        if ('\n' == *buf || '#' == *buf)
        {
            continue;
        }
        printf("%s", buf);

        fputs(buf, pfw);
    }


    fclose(pf);
    fclose(pfw);

    return 0;
}