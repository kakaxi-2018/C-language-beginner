#include <stdio.h>

int main()
{
    char *p = "china";

    // size
    printf("sizeof(\"china\") = %d\n", sizeof("china"));

    // step
    printf("p       = %p, p+1       = %p, p[0]      = %c, p[2] = %c\n", p, p+1, p[0], p[2]);
    printf("\"china\" = %p, \"china\"+1 = %p,       = %c,      = %c\n", "china", "china"+1, "china"[0], "china"[2]);

    p = "Canda";
    printf("%s\n", p);

    return 0;
}