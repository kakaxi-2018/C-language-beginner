#include <stdio.h>

int main()
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (5 == k)
                {
                    goto Target;
                }

                printf("xxxx %d\n", k);
            }
        }
    }

Target:
    printf("oooo\n");

    return 0;
}