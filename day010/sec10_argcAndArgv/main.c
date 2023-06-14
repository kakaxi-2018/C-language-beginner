#include <stdio.h>
#include <stdlib.h>

int main1(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] -- %s\n", i, argv[i]);
    }

    return 0;
}

int main(int argc, char *argv[])
{
    int num = atoi(argv[1]);

    for (int i = 0; i < num; i++)
    {
        printf("==========\n");
    }

    return 0;
}