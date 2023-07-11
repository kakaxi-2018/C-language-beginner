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
    FILE *pfa = fopen("xx.txt", "w+");
    F_PRINT_ERR(pfa);

    char buf[1024] = "a\nbc\0defg";
    fputs(buf, pfa);

    rewind(pfa);
    char readArr[1024];
    fgets(readArr, 1023, pfa);
    printf("%s", readArr);

    fclose(pfa);
    printf("==========\n");

    // fwrite(), fread()
    FILE *pfb = fopen("yy.txt", "w+");
    F_PRINT_ERR(pfb)    ;

    fwrite((void *)buf, 1, 9, pfb);
    rewind(pfb);
    int n = fread((void *)readArr, 1, 9, pfb);

    printf("%s", readArr);
    printf("==========\n");

    for (int i = 0; i < n; i++)
    {
        printf("%x->%c\n", readArr[i], readArr[i]);
    }

    fclose(pfb);

    return 0;
}

int main()
{
    /*
    FILE *pf = fopen("aa.txt", "w");
    F_PRINT_ERR(pf);

    int arrRead[10] = {0, 1, 2, 0xffffffff, 3, 4};
    fputs((char *)arrRead, pf);

    fclose(pf);
    */

    FILE *pf = fopen("bb.txt", "w+");
    F_PRINT_ERR(pf);

    int arrRead[10] = {0, 1, 2, 0xffffffff, 3, 4, 5, 6, 7, 8};
    fwrite((void *)arrRead, 4, 10, pf);

    rewind(pf);
    int arrCpy[10];
    fread((void *)arrCpy, 4, 10, pf);

    for (int i = 0; i < 10; i++)
    {
        printf("%x->%d\n", arrCpy[i], arrCpy[i]);
    }

    fclose(pf);

    return 0;
}