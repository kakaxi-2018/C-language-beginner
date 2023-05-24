#include <stdio.h>

int main1()
{
    int a = 30; 
    int b = 4;

    if (a != b)
    {
        if(a > b)
        {
            printf("a > b\n");
        }
    }
    else
    {
        printf("a == b\n");
    }

    return 0;
}

int main2()
{
    int a = 5;
    int b = 4;

    if (a != b)
    {
        if (a > b)
        {
            printf("a > b\n");
        }
        else
        {
            printf("");
        }
    }
    else
    {
        printf("a == b\n");
    }
}

int main3()
{
    int a = 5;
    int b = 4;

    if (a == b)
    {
        printf("a == b\n");
    }
    else if (a > b)
    {
        printf("a > b\n");
    }
    else
    {
        printf("a < b\n");
    }

}

int main()
{
    float score;
    scanf("%f", &score);

    if (score >= 90)
    {
        printf("excellent\n");
    }
    else if (score >= 70 && score < 80)
    {
        printf("normal\n");
    }
    else if (score >= 60 && score < 70)
    {
        printf("pass\n");
    }
    else if (score >= 80 && score < 90)
    {
        printf("good\n");
    }
    else if (score < 60)
    {
        printf("failed\n");
    }
    
    return 0;
}