#include <stdio.h>

union _uni
{
    char a;
    int  b;
};

int main()
{
    union _uni un;

    // way1
    un.b = 0x12345678;

    if (0x78 == un.a)
    {
        printf("small endian\n");
    }
    else
    {
        printf("big endian\n");
    }

    // way2
    int data = 0x12345678;

    if (*(char *)&data == 0x78)
    {
        printf("small endian\n");
    }
    else
    {
        printf("big endian\n");
    }

    return 0;
}