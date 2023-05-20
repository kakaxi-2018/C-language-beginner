#include <stdio.h>

int main1()
{
    1,2,3,4,5;
    int xx;
    xx = 1+1, 2+2, 3+3, 4+4;
    printf("%d\n", xx);
    xx = (1+1, 2+2, 3+3, 4+4);
    printf("%d\n", xx);

    printf("xx = %d\n", 1+1, 2+2, 3+3);  // %d -- 1+1

    printf("yy = %d, xx = %d\n", 1+1, (2+2, 3+3));

    return 0;
}

int main()
{
    // 1+9 2+8 3+7 4+6 5+5
    for(int i = 1, j = 9; i <= j; i++, j--)
    {
        printf("%d + %d = %d\n", i, j, i+j);
    }

    return 0;
}