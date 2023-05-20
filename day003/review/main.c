#include <stdio.h>

int main1()
{
    /*
    printf("please input a data:\n");
    int data;
    scanf("%d", &data);
    printf("%d\n", data);
    */

   /*
   char ch1; char ch2;
   scanf("%c    %c", &ch1, &ch2);
   printf("%c-%d %c-%d\n", ch1, ch1, ch2, ch2);
   */

    int in;
    char ch; 
    //scanf("%d%c", &in, &ch);
    scanf("%d %c", &in, &ch);

    printf("%d %c-%d\n", in, ch, ch);


    return 0;
}

int main2()
{
    int in1, in2;
    scanf("%d%d", &in1, &in2);
    getchar();

    char ch;
    scanf("%c", &ch);
    printf("%d-%c\n", ch, ch);

    return 0;
}

int main3()
{
    double fl = 0.3;  // note: maybe 0.299999, it's difficult to repeat.
    printf("%f\n", fl);

    printf("%d\n", (int)(fl*10));
    printf("%d\n", (int)((fl+0.000001)*10));

    return 0;
}

int main4()
{
    int n = printf("%5d", 100);
    printf("\n%d\n", n);

    int nn = printf("%5d", 1000000);
    printf("\n%d\n", nn);

    return 0;
}

void printDigit1(int num)
{
    int count;
    int division = 1;
    int tmp;
    int num2 = num;

    while(num)
    {
        num /= 10;
        count++;
        division *= 10;
    }

    division /= 10;

    while(num2)
    {
        tmp = num2 / division;
        printf("%d", tmp);
        num2 %= division;
        division /= 10;
    }
}

void printDigit2(int num)
{
    if(num<10)
    {
        printf("%d", num);
    }
    else
    {
        printDigit1(num/10);
        printf("%d", num % 10);
    }
}

int main5()
{
    // separation digital problem
    /*
    1234
    /1000    1
    /100%10  2   // tail
    %1000/100 2  // head

    /10%10  3  // tail
    %100/10 3  // top

    %10      4
    */

    int n = 1234;
    printf("please input a data:\n");
    scanf("%d", &n);
    printDigit1(n);
    printDigit2(n);

    return 0;
}

int main6()
{
    return 0;
    int x, y;
    if(x == y)  // judge two value
    {
        printf("x == y\n");
    }

    if(x = y)  // note: assign, true or false depend on y 0 or not 0.
    {
        printf("x = y\n");
    }

    return 0;
}

int main()
{
    int a = 10, b = 3;
    int c = 3, d = 4;
    //5>3?a:(++c?1:2);  // inside (), not execute, is a optimization behavior
    5<3?a:(++c?1:2);

    printf("c = %d\n", c);

    return 0;
}