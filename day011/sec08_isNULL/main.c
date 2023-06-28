#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strcpy(NULL, "china");  // segmentation fault

    char *pa = (char *)malloc(10 * sizeof(char));

    if (NULL == pa)
    {
        printf("malloc error\n");
        exit(-1);
    }

    strcpy(pa, "China");
    printf("%s\n", pa);

    free(pa);
    pa = NULL;

    if (NULL == pa)
    {
        printf("error2\n");
        exit(-1);
    }

    strcpy(pa, "hello world");
    
    return 0;
}