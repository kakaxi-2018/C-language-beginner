#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p =  (char *)malloc(100 * sizeof(char));

    if (NULL == p)
    {
        printf("malloc error\n");
        exit(-1);
    }

    strcpy(p, "China");
    printf("%s\n", p);
    
    free(p);
    p = NULL;

    if (p != NULL)
    {
        strcpy(p, "Frunce");
        printf("%s\n", p);
    }

    printf("==========\n");
    int arr[10];
    int *pArr = arr;
    //free(pArr);  // note: error, segmentation fault, pArr in stack space 

    return 0;
}