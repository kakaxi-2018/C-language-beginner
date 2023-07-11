#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define F_PRINT_ERR(e)              \
    do                              \
    {                               \
        if (NULL == e)              \
        {                           \
            printf("open error\n"); \
            exit(-1);               \
        }                           \
    } while (0)

void encode(char buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        buf[i]++;
    }
}

void decode(char buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        buf[i]--;
    }
}

// xx -c aa.jpg bb.jpg
// xx -d bb.jpg cc.jpg


int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("use xx -c[-d] file1 file2");
        exit(-1);
    }

    FILE *pfa = fopen(argv[2], "r");
    F_PRINT_ERR(pfa);

    FILE *pfb = fopen(argv[3], "w");

    if (NULL == pfb)
    {
        fclose(pfa);  // close previous fd
        exit(-1);
    }
    
    int n;
    char buf[1024];

    if (0 == strcmp(argv[1], "-c"))
    {
        while ((n = fread((void *)buf, 1, 1024, pfa)) > 0)
        {
            encode(buf, n);
            fwrite((void *)buf, 1, n, pfb);
        }
    }
    else if (0 == strcmp(argv[1], "-d"))
    {
        while ((n = fread((void *)buf, 1, 1024, pfa)) > 0)
        {
            decode(buf, n);
            fwrite((void *)buf, 1, n, pfb);
        }
    }
    else
    {
        printf("argv error\n");
    }

    fclose(pfa);
    fclose(pfb);
    
    return 0;
}
