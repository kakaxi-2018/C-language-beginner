#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char name[100] = {0};
    char pass[100] = {0};
    int count = 3;

    while (1)
    {
        printf("you have %d time%s to input. \n", count, count > 1 ? "s" : "");

        printf("name: ");
        scanf("%s", name);

        printf("pass: ");
        scanf("%s", pass);

        if (0 == strcmp(name, "jack") && 0 == strcmp(pass, "123456"))
        {
            break;
        }

        count--;

        if (0 == count)
        {
            printf("exit\n");
            exit(-1);
        }

    }

    printf("welcome login!\n");
}