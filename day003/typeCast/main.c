#include <stdio.h>

int main2()
{
    // integral promotion
    // char short int  / char char/ char short / char int / short short/ short int / 
    char ch; short sh; int in;

    printf("sizeof(ch)    = %d\n", sizeof(ch));
    printf("sizeof(ch+ch) = %d\n", sizeof(ch+ch));


    printf("sizeof(sh)    = %d\n", sizeof(sh));
    printf("sizeof(ch+sh) = %d\n", sizeof(ch+sh));

    printf("sizeof(ch+in) = %d\n", sizeof(ch+in));

    printf("sizeof(sh+sh) = %d\n", sizeof(sh+sh));

    printf("sizeof(sh+in) = %d\n", sizeof(sh+in));

    return 0;
}

int main3()
{
    float f = 3.14;
    long long i = 5;

    printf("sizeof(f) = %d\n", sizeof(f));
    printf("sizeof(i) = %d\n", sizeof(i));
    printf("sizeof(f+i) = %d\n", sizeof(f+i));

    printf("==========\n");
    printf("f+i = %d\n", f+i);  // result is wrong. type is not match
    printf("f+i = %f\n", f+i);

    return 0;
}

int main()
{
    int in = 10;
    float fl = 3.14;
    in = fl;
    printf("in = %d\n", in);

    int m = 20;
    float f = 4.32;
    f = m;
    printf("f = %f\n", f);

    return 0;
}
