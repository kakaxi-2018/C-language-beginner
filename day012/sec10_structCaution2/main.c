#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _stu
{
    char *name;
    double score;
} Stu;

int main()
{
    Stu *ps = (Stu *)malloc(sizeof(Stu));

    if (NULL == ps)
    {
        printf("malloc() error\n");
        exit(1);
    }

    ps->name = (char *)malloc(100 * sizeof(char));

    if (NULL == ps->name)
    {
        printf("malloc() error\n");
        exit(1);
    }

    strcpy(ps->name, "JimGreen");
    ps->score = 85.0;

    printf("name: %s\n", ps->name);
    printf("double: %.2f\n", ps->score);

    free(ps->name);
    ps->name = NULL;
    free(ps);
    ps = NULL;
}