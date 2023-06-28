#include <stdio.h>

//#pragma pack(1)

typedef struct _staff
{
    char a;
    int c;
    //short b;
    double b;
} Staff;

int main()
{
    Staff s;
    printf("sizeof(s) = %d, sizeof(Staff) = %d\n", sizeof(s), sizeof(Staff));

    printf("s = %p\n", &s);
    printf("&s.a = %p\n", &s.a);
    printf("&s.b = %p\n", &s.b);
    printf("&s.c = %p\n", &s.c);
    
    return 0;
}