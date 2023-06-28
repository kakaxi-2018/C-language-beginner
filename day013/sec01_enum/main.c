#include <stdio.h>

enum Day
{
    Mon = 1, Tue, Wed, Thu, Fri, Sat, Sun
};

/*
#define Mon 1
#define Tue 2
#define Wed 3
#define Thu 4
#define Fri 5
#define Sat 6
#define Sun 7
*/

typedef enum _bool
{
    False,
    True,
} Bool;

int main()
{
    printf("Mon: %d\n", Mon);
    printf("Tue: %d\n", Tue);
    printf("Wed: %d\n", Wed);
    printf("Thu: %d\n", Thu);
    printf("Fri: %d\n", Fri);
    printf("Sat: %d\n", Sat);
    printf("Sun: %d\n", Sun);

    // assignment
    //enum Day day = Fri;
    //printf("day: %d\n", day);

    //day = 120;  // it's not allowed in C++
    //printf("day: %d\n", day);

    // application
    printf("please input a weekday: ");
    int weekday;
    scanf("%d", &weekday);

    switch (weekday)
    {
        case Mon:
        case Tue:
        case Wed:
        case Thu:
        case Fri:
            printf("workday\n");
            break;
        case Sat:
        case Sun:
            printf("weekkday\n");
            break;
        default:
            printf("unknown\n");
            break;
    }

    //Mon = 200;  // compile error

    Bool b;
    b = True;
    printf("b = %d\n", b);

    return 0;
}