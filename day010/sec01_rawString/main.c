#include <stdio.h>
#include <string.h>

int myStrlen(char *s)
{
    int count;

    for (count = 0; *s != '\0'; s++)
    {
        count++;
    }

    return count;
}

int main()
{
    char *p = "j";  // pointer assigned to p
    char arr[] = "china";  // content that the pointer pointed to was assigned to arr
    char *q = arr;

    //int len = strlen(q);
    int len = myStrlen(p);
    printf("len = %d\n", len);

    return 0;
}