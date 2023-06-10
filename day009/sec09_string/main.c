#include <stdio.h>

int main()
{
    char a = 'J';
    char b = 'a';
    char c = 'c';
    char d = 'k';

    printf("%c%c%c%c\n", a, b, c, d);

    char name[] = {'J', 'a', 'c', 'k'};
    printf("%c%c%c%c\n", name[0], name[1], name[2], name[3]);

    return 0;
}