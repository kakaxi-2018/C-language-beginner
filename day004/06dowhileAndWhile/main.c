#include <stdio.h>
#include <stdlib.h>

int main1()
{
    // infinite loop
    /*
    while (1)
    {
        printf("xxxx\n");
    }
    */

    /*
    do
    {
        printf("xxxx\n");
    } while (1);
    */

    /*
    while (0)
    {
        printf("xxxx\n");
    }
    */

    do
    {
        printf("xxxx\n");
    } while (0);

    return 0;
}

int main2()
{
    // sum
    int sum = 0;
    int i;

    scanf("%d", &i);

    /*
    while (i < 10)
    {
        sum += i;
        i++;
    }
    */

    do
    {
        sum += i;
        i++;
    } while (i < 10);

    printf("sum = %d\n", sum);

    return 0;
}

int main3()
{
    char ch;

    do
    {
        printf("please input 'y' if you agree to the agreement, or input anything:\n");
        scanf("%c", &ch);
        getchar();

        if ('y' == ch)
        {
            break;
        }
        else if ('n' == ch)
        {
            exit(-1);
        }

    } while (1);

    printf("next...\n");

    return 0;
}

int main()
{
    int name;
    int pass;

    do
    {
        printf("please input name:");
        scanf("%d", &name);
        printf("please input pass:");
        scanf("%d", &pass);
    } while (!(name == 10 && pass == 10));

    printf("next...\n");

    return 0;
}