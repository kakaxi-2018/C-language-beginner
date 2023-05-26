#include <stdio.h>

int main()
{
    int var;
    scanf("%d", &var);
    //int arr[var];  // compile, no warning, no error. note: size need be set integer constant expression
    //int arr[var] = {1, 2, 3, 4, 5}; // error: variable-sized object may not be initialized
    int arr[3+2] = {1, 2, 3, 4, 5};

    printf("sizeof(arr) = %d\n", sizeof(arr));

    var = 20;
    printf("sizeof(arr) = %d\n", sizeof(arr));

    return 0;
}