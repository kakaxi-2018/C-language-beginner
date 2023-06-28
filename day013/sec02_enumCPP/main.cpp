#include <stdio.h>

enum Day
{
    Mon = 1,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,
    Sun
};

int main()
{
    printf("Mon: %d\n", Mon);
    printf("Tue: %d\n", Tue);
    printf("Wed: %d\n", Wed);
    printf("Thu: %d\n", Thu);
    printf("Fri: %d\n", Fri);
    printf("Sat: %d\n", Sat);
    printf("Sun: %d\n", Sun);

    Day day = Sun;
    printf("day = %d\n", day);
    //day = 120;  // compile error, invalid conversion from 'int' to 'Day'

    day = Mon;
    printf("day = %d\n", day);

    return 0;
}