#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = "   \n  1\n2 34";
    int n = atoi(str);
    printf("n = %d\n", n);

    return 0;
}