#include <stdio.h>

int main()
{
    char ch;
    printf("sizeof(ch) = %d\n", sizeof(ch));
    printf("sizeof(char) = %d\n", sizeof(char));

    char a = 1; int b = 10;
    printf("sizeof a = %d\n", sizeof a);
    printf("sizeof a+b = %d\n", sizeof a+b);  // need consider priority, sizeof priority greater than +
    printf("sizeof(a+b) = %d\n", sizeof(a+b));


    return 0;
}