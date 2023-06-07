#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    double data = 9.0;
    double root = sqrt(data);
    printf("root = %f\n", root);

    double power = pow(data, 3);
    printf("power = %f\n", power);

    printf("%f\n", ceil(3.14));
    printf("%f\n", floor(3.14));

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c", toupper(ch));
        //printf("%c", ch-32);
    }

    putchar('\n');

    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        //printf("%c", tolower(ch));
        printf("%c", ch+32);
    }
    
    putchar('\n');

    return 0;
}
