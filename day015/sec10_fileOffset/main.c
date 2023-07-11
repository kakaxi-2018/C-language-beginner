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

int main()
{
    FILE *pf = fopen("aa.txt", "w");
    F_PRINT_ERR(pf);

    fputs("abcdefghhh", pf);

    long n = ftell(pf);
    printf("1->n = %d\n", n);

    // pointed to head
    rewind(pf);
    n = ftell(pf);
    printf("2->n = %d\n", n);

    // pointered tail
    fseek(pf, 0, SEEK_END);
    n = ftell(pf);
    printf("3->n = %d\n", n);

    // pointed to start
    fseek(pf, 0, SEEK_SET);
    n = ftell(pf);
    printf("4->n = %d\n", n);

    // pointed to cur position, +1
    fseek(pf, 1, SEEK_CUR);
    n = ftell(pf);
    printf("5->n = %d\n", n);

    // pointed to end position, -1
    fseek(pf, -1, SEEK_END);
    n = ftell(pf);
    printf("6->n = %d\n", n);


    // pointed to end, +100
    fseek(pf, 100, SEEK_END);
    n = ftell(pf);
    printf("7->n = %d\n", n);

    // pointed to head, -5
    fseek(pf, -5, SEEK_SET);
    n = ftell(pf);
    printf("8->n = %d\n", n);

    fseek(pf, 1, SEEK_SET);
    n = ftell(pf);
    printf("8.2->n = %d\n", n);

    rewind(pf);
    n = ftell(pf);
    printf("9->n = %d\n", n);

    fclose(pf);
    
    return 0;
}