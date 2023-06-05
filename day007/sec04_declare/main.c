#include <stdio.h>

int main()
{
    int data = 200;
    int *pd = &data;  // declare a variable
    *pd = 10;  // dereference

    // judge type of p, q
    char * p, q;  
    printf("sizeof(p) = %d, sizeof(q) = %d\n", sizeof(p), sizeof(q));

    return 0;
}