#include <stdio.h>

int main()
{
    int arr[10];  // arr[0]-arr[9], means: int[10] arr

    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("sizeof(int[10]) = %d\n", sizeof(int[10]));

    int arr2[100];  // means: int[10] arr2

    printf("sizeof(arr2) = %d\n", sizeof(arr2));
    printf("sizeof(int[100]) = %d\n", sizeof(arr2));

    struct {
        char a;
        short b;
        int c;
        long d;
        long long e;
        float f;
        double g; 
    } structVar;

    structVar.a;  // access

    printf("sizeof(struct) = %d\n", sizeof(struct {
               char a;
               short b;
               int c;
               long d;
               long long e;
               float f;
               double g;
           }));
    printf("sizeof(structVar) = %d\n", sizeof(structVar));

    return 0;
}