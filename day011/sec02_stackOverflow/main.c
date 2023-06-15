#include <stdio.h>
#include <string.h>

int main1()
{
    // it's too big for stack
    char arr[1024 * 1024 * 10];  // segmentation fault
    strcpy(arr, "China");

    return 0;
}

// recursive
void func(int n)
{
    if (0 == n)
    {
        return;
    }
    else
    {
        func(n-1);
    }
}

int main2()
{
    func(1000000);  // segmentation fault

    printf("finsihed\n");

    return 0;
}

void foo()
{
    printf("====foo()\n");

    int a, b, c, d;
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
}

int main()
{
    printf("====main()\n");
    int a, b, c, d;
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);

    foo();

    return 0;
}