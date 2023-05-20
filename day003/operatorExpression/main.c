#include <stdio.h>

int main2()
{
    int a, b, c, d, e;
    a = b = c = d = e = 5;

    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);

    a = 1, b = 2, c = 3;
    // expression has value
    c = (a+b) + (b=c);
    printf("c = %d\n", c);

    d = 4, e = 5;
    int f = (d+e) + (e=a);
    printf("f = %d\n", f);

    return 0;
}

int main()
{
    int a = 2;
    int b = 3;

    a += b;  // equal: a = a + b
    printf("a = %d\n", a);

    float priceOfNormalWorld = 34.5;
    priceOfNormalWorld += 10.0;
    printf("priceOfNormalWorld = %f\n", priceOfNormalWorld);

    a = 2;
    b = 3;
    a *= b + 4;
    printf("a = %d\n", a);

    return 0;
}