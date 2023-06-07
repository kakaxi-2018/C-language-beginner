#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1()
{
    int randNum;
    srand((unsigned)time(NULL));
    //srand(1);

    randNum = rand();
    printf("randNum: %d\n", randNum);
    randNum = rand();
    printf("randNum: %d\n", randNum);
    randNum = rand();
    printf("randNum: %d\n", randNum);

    
    return 0;
}

int main2()
{
    int t = time(NULL);
    printf("%u\n", t);

    return 0;
}

int main3()
{
    int arr[10];
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

int main()
{
    int arr[10];
    srand((unsigned)time(NULL));

    int count = 0;

    while (1)
    {
        int randNum = rand() % 10;
        arr[count] = randNum;
        count++;

        for (int i = 0; i < count-1; i++)
        {
            if (arr[i] == arr[count-1])
            {
                count--;
                break;
            }

        }

        if (10 == count)
        {
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(arr+i));
    }

    putchar('\n');

    return 0;
}