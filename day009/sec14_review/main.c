#include <stdio.h>

extern int min = 300; //  warning: ‘min’ initialized and declared ‘extern’

int main()
{
    int min = 100;
    printf("min = %d\n", min);

    {
        int min = 200;
        printf("min = %d\n", min);
    }

    return 0;
}