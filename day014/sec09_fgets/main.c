#include <stdio.h>
#include <stdlib.h>

#define N 1024

#define F_PRINT_ERR(e) \
    do                 \
    {                  \
        if (NULL == e) \
        {              \
            exit(-1);  \
        }              \
    } while (0)

int main()
{
    FILE *pf = fopen("aa.txt", "r");
    F_PRINT_ERR(pf);

    char buf[N];

    while (fgets(buf, N-1, pf))
    {
        printf("%s-", buf);
    }

    fclose(pf);

    return 0;
}