#include <stdio.h>

int main1()
{
    char arr[10] = "china";
    printf("arr = %s\n", arr);
    puts(arr);

    printf("==========\n");
    puts("");

    printf("==========");
    puts("");

    printf("sizeof(\"\\0\") = %d\n", sizeof(""));;

    return 0;
}

int main()
{
    char arr[10] = "china";

    //scanf("%[^\n]s", arr);  // note: input length
    //gets(arr);  // gets function is dangerous and should not be userd
    fgets(arr, 10, stdin);

    printf("%s\n", arr);

    return 0;
}