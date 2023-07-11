#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define F_PRINT_ERR(e) \
    do                 \
    {                  \
        if (NULL == e) \
        {              \
            exit(-1);  \
        }              \
    } while (0)

// judge username
int main()
{
    FILE *pf= fopen("xx.ini", "r");
    F_PRINT_ERR(pf);

    printf("please iput name: ");
    char name[50];
    scanf("%s", name);
    //printf("%s", name);

    char username[50];
    fgets(username, 49, pf);
    char *pName = username;
    //printf("%s--", pName);

    while (*pName)
    {
        pName++;
    }

    pName--;

    while (*pName == ' ' || *pName == '\t' || *pName == '\n')
    {
        *pName = '\0';
        pName--;
    }

    if (0 == strcmp(username, name))
    {
        printf("welcome\n");
    }
    else
    {
        printf("login failed\n");
    }

    fclose(pf);

    return 0;
}