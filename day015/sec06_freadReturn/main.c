#include <stdio.h>
#include <stdlib.h>

#define F_PRINT_ERR(e)              \
    do                              \
    {                               \
        if (NULL == e)              \
        {                           \
            printf("open error\n"); \
            exit(-1);               \
        }                           \
    } while (0)

int main1()
{
    FILE *pf = fopen("aa.txt", "w+");
    F_PRINT_ERR(pf);

    char buf[1024] = "12345678";
    //fwrite((void *)buf, 1, 8, pf);
    fwrite((void *)buf, 8, 1, pf);

    char result[10];
    int n;
    rewind(pf);

/*
    n = fread((void *)result, 1, 8, pf);
    printf("n = %d\n", n);
    n = fread((void *)result, 1, 8, pf);
    printf("n = %d\n", n);
*/

/*
    n = fread((void *)result, 8, 1, pf);
    printf("n = %d\n", n);
    n = fread((void *)result, 8, 1, pf);
    printf("n = %d\n", n);
*/

/*
    n = fread((void *)result, 3, 1, pf);
    printf("n = %d\n", n);
    n = fread((void *)result, 3, 1, pf);
    printf("n = %d\n", n);
    n = fread((void *)result, 3, 1, pf);
    printf("n = %d\n", n);
*/

/*
    n = fread((void *)result, 1, 3, pf);
    printf("n = %d\n", n);
    n = fread((void *)result, 1, 3, pf);
    printf("n = %d\n", n);
    n = fread((void *)result, 1, 3, pf);
    printf("n = %d\n", n);
    n = fread((void *)result, 1, 3, pf);
    printf("n = %d\n", n);
*/

    while ((n = fread((void *)result, 1, 3, pf)) > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%c", result[i]);
        }

        printf("----\n");
    }

    fclose(pf);

    return 0;
}

int main()
{
    FILE *pf = fopen("aa.txt", "w+");
    F_PRINT_ERR(pf);

    char buf[1024] = "123456789";
    fwrite((void *)buf, 1, 9, pf);

    rewind(pf);
    int n;
    char bufRead[1024];

    n = fread((void *)bufRead, 1, 4, pf);
    printf("n = %d\n", n);
    n = fread((void *)bufRead, 1, 4, pf);
    printf("n = %d\n", n);
    n = fread((void *)bufRead, 1, 4, pf);
    printf("n = %d\n", n);
    n = fread((void *)bufRead, 1, 4, pf);
    printf("n = %d\n", n);

    fclose(pf);

}