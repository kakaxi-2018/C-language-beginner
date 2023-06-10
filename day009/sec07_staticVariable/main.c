#include <stdio.h>

void func()
{
    int a = 1;
    printf("a = %d\t", a++);

    static int b = 1;
    printf("b = %d\n", b++);
    printf("==========\n");
}

int main1()
{
    for (int i = 0; i < 10; i++)
    {
        func();
    }

    return 0;
}

void display(int num, char sex, int age, double score)
{
    static int flag = 1;
    if (1 == flag)
    {
        printf("num\tsex\tage\tscore\n");
        flag = 0;
    }

    printf("%d\t%c\t%d\t%.2f\n", num, sex, age, score);
}

int main()
{
    display(1001, 'm', 18, 89.0);;
    display(1002, 'f', 19, 79.0);;
    display(1003, 'm', 20, 99.0);;
    display(1004, 'f', 21, 82.0);;
    display(1005, 'f', 19, 85.0);;
    display(1006, 'm', 20, 99.0);;

    return 0;
}