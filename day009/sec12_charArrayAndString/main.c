#include <stdio.h>

int main()
{
    char arr[2] = "china";  // warning: initializer-string is too long, not include '\0'
    printf("arr = %s\n", arr);

    printf("%s\n", "chi\0na");

    return 0;
}