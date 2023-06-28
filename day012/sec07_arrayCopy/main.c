#include <stdio.h>

typedef struct _array
{
    int array[10];
} Array;

int * func()
{
    static int a = 10;
    return &a;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int arr2[10];
    //arr2 = arr;  // compile error

    Array newArr = {{1, 2, 3, 4 ,5}};
    Array newArr2 = newArr;
    
    for (int i = 0; i < sizeof(newArr2.array) / sizeof(newArr2.array[0]); i++)
    {
        printf("%d\n", newArr2.array[i]);
    }

    int *x = func();
    printf("*x = %d\n", *x);

    return 0;
}
