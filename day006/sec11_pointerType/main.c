#include <stdio.h>

int main()
{
    int data = 0x12345678;

    printf("%p\t", &data); 
    printf("%#x\n", &data);

    printf("%x\n", *(&data));

    printf("%#x\n", *((char *)(&data)));
    printf("%#x\n", *((short *)(&data)));
    printf("%#x\n", *((int *)(&data)));

    return 0;
}