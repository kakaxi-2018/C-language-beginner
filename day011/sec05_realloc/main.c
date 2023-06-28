#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p = (char *)malloc(10 * sizeof(char));
    if (NULL == p)
    {
        printf("malloc error\n");
        exit(-1);
    }

    p = (char *)realloc(p, 20 * sizeof(char));
    if (NULL == p)
    {
        printf("realloc error\n");
        exit(-1);
    }
    
    strcpy(p, "abcdef1234567");
    printf("%s\n", p);

    free(p);
    //free(p+1);  // note: error, invalid pointer
    p = NULL;

    return 0;
}