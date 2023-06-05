#include <stdio.h>

int main()
{
    int *pa = NULL;
    //printf("*pa = %d\n", *pa);  // core dumped
    //*pa = 100;  // core dumped

    printf("sizeof(void) = %d\n", sizeof(void));
    printf("sizeof(char) = %d\n", sizeof(char));

    return 0;
}