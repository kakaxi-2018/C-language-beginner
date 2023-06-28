#include <stdio.h>
#include <string.h>

typedef union _mix
{
    char name[30];
    int age;
} Mix;

int main()
{
    Mix m;
    strcpy(m.name, "JimGreen");
    printf("name: %s\n", m.name);
    printf("age: %d\n", m.age);

    m.age = 300;
    printf("name: %s\n", m.name);
    printf("age: %d\n", m.age);

    return 0;
}