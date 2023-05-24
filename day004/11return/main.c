#include <stdio.h>

int main1()
{
    printf("xxxx\n");
    return 0;
    printf("xxxx\n");
    printf("xxxx\n");

    return 0;
}

void func()
{
    printf("xxxx\n");
    return;
    printf("xxxx\n");
    printf("xxxx\n");
}

int main()
{
    func();
    printf("xxxx\n");
    printf("xxxx\n");

    return 0;
}