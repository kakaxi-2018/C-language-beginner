#include <stdio.h>

int main()
{
    int a = 0;
    printf("a = %d\n", a);

    float b = 0.0;
    printf("b = %f\n", b);

    char c = '\0';
    printf("c = --%s--%d\n", c, c);

    char *p = NULL;
    printf("%p--%d\n", p, p);
    printf("%p--%d\n", NULL, NULL);


    printf("==========\n");
    char e = '0';
    printf("%c--%d\n", e, e);


    printf("sizeof(\"0\") = %d\n", sizeof("0"));
    printf("%s\n", "0");

    return 0;
}