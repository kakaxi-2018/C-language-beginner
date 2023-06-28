#include <stdio.h>

typedef char int8;
typedef short int16;
typedef int int32;
typedef long long int64;


int main()
{

    int arr[10];
    printf("sizeof(arr) = %d\n", sizeof(arr));

    typedef int Array[10];
    printf("sizeof(Array) = %d\n", sizeof(Array));
    Array arr2;
    printf("sizeof(arr2) = %d\n", sizeof(arr2));


    return 0;
}