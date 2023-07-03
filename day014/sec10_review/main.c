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
    FILE *pf  = fopen("aa.txt", "w+");
    F_PRINT_ERR(pf);

    char ch;

    // write content to file
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(fputc(ch, pf));
    }

    rewind(pf);
    printf("\n==========\n");

    // read content from file
    // method1
    /*
    while ((ch = fgetc(pf)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(pf);
    */

   while ((ch = fgetc(pf)) && !feof(pf))
   {
        putchar(ch);
   }

    return 0;
}

// review fgets()
int main2()
{
    FILE *pf = fopen("aa.txt", "w+");
    F_PRINT_ERR(pf);

    fputs("abcd12345", pf);

    rewind(pf);

    char buf[1024];

    while (fgets(buf, 4, pf))
    {
        printf("%s-", buf);
    }

    fclose(pf);

    return 0;
}

int main3()
{
    FILE *pf = fopen("aa.txt", "w+");
    F_PRINT_ERR(pf);

    fputs("abcd\n1234567", pf);

    rewind(pf);

    char buf[1024];

    printf("%p\n", fgets(buf, 1023, pf));
    printf("%p\n", fgets(buf, 1023, pf));
    printf("%p\n", fgets(buf, 1023, pf));

    fclose(pf);

    return 0;

}

int main()
{
    FILE *pf = fopen("aa.txt", "w+");
    F_PRINT_ERR(pf);

    fputs("abcd\n1234567", pf);

    rewind(pf);

    char buf[1024];

    while (fgets(buf, 1023, pf))
    {
        printf("%s-", buf);
    }

    fclose(pf);

    return 0;

}