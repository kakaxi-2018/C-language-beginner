#include <stdio.h>
#include <unistd.h>

int main()
{
    int flood = 100;

    while (1)
    {
        sleep(1);
        printf("flood: %d\n", flood);

        if (flood > 110)
        {
            break;
        }

        flood++;
    }

    printf("flood discharged\n");

    return 0;
}