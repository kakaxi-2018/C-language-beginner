#include <stdio.h>

int main1()
{
    char *p = "chxna";
    printf("%c\n", p[2]);

    char arr[] = {'c', 'h', 'x', 'n', 'a'};
    printf("%c\n", arr[2]);

    arr[2] = 'i';
    printf("%c\n", arr[2]);

    return 0;
}

int main()
{
    char arr[6] = "china";

    printf("sizeof(arr) = %d, arr = %p, arr+1 = %p\n", sizeof(arr), arr, arr+1);
    printf("sizeof(\"china\") = %d, \"china\" = %p, \"china\"+1 = %p\n", sizeof("china"), "china", "china"+1);

    printf("arr = %s\n", arr);
    printf("\"china\" = %s\n", "china");

    arr[2] = 'x';
    printf("arr = %s\n", arr);

    //char *p = "china";
    //p[2] = 'x'; // Segmentation fault (core dumped)

    return 0;
}