#include <stdio.h>

int main()
{
    // 1. not init
    /*
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);  // element not defined
    }
    */

    // 2. partial init
    /*
    int arr2[10] = {1, 2, 3, 4};

    for (int i = 0; i < 10; i++)
    {
        printf("arr2[%d] = %d\n", i, arr2[i]);  // other element: 0
    }
    */

    // 3. all init
    /*
    int arr3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }
    */

    // 4. out of bound
    /*
    int arr4[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 101, 102, 103};  // warning: excess

    for (int i = 0; i < 13; i++)
    {
        printf("arr4[%d] = %d\n", i, arr4[i]);
    }
    */
    
    // 5. adaptive size
    int arr5[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(arr5) / sizeof(arr5[0]); i++)
    {
        printf("arr5[%d] = %d\n", i, arr5[i]);
    }


    return 0;
}