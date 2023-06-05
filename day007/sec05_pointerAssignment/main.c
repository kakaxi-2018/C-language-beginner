#include <stdio.h>

int main()
{
    int data = 0x12345678;
    char *p = &data;  // warning
    printf("%#x\n", *p);

    return 0;
}