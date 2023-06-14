#include <stdio.h>
#include <string.h>

int main1()
{
    // 1. use directly
    printf("%s\n", "china");

    // 2. char *
    char *p = "china";
    printf("%s\n", p);

    // 3. array
    char arr[] = "china";
    printf("%s\n", arr);

    return 0;
}

int main2()
{
    char *p = "hello";
    char *q = "world";

    // strcat
    //strcat(p, q);  // note: error, segmentation fault

    char t[] = "hello";
    char s[] = "worldxxxxxxxxxxxxxxxxxxxx";
    strcat(t, s);
    //printf("t: %s\n", t);  // note: error, segmentaion fault
    
    return 0;
}

int main()
{
    char *p = "China";
    char *q = "America";

    //strcpy(p, q);  // note: error, segmentation fault

    char arr1[] = "China";
    char arr2[] = "Americaxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    //strcpy(arr1, arr2);  // note: error, segmentation fault
    printf("arr1: %s\n", arr1);

    char arr3[] = "abcdef";
    char arr4[] = "gh";

    printf("%s\n", arr3);
    strcpy(arr3, arr4);
    printf("%s\n", arr3);

    return 0;
}