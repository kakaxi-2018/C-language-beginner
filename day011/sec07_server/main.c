#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        char *p = (char *)malloc(100 * sizeof(char));

        printf("==start==================\n");
        printf("====================\n");
        printf("====================\n");
        printf("====================\n");
        printf("====================\n");
        printf("==end==================\n");

        //p = (char *)malloc(100 * sizeof(char));  // note: error, memory leak
        free(p);
        //free(p);  // note: error, double free
    }

    return 0;
}