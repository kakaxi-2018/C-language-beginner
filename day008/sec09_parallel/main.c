#include <stdio.h>

void func()
{
    printf("func\n");
}

void foo()
{
    printf("foo\n");
    // main(); // Segmentation fault (core dumped)
}

int main()
{
    func();
    foo();
}