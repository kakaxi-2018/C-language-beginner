#include <iostream>

int main()
{
    int data = 0x12345678;
    char *p = (char *)&data;
    printf("%#x\n", *p);

    return 0;
}