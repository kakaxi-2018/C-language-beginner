#include <stdio.h>

int main()
{
    int arr[3][4] = {{1, 2, 3, 4},
                     {4, 5, 6, 7},
                     {9, 10}};

    printf("%d\n", arr[1][1]);
    printf("%d\n", *(*(arr+1)+1));

    return 0;
}