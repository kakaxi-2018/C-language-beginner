#include <stdio.h>

typedef struct _stu
{
    char name[30];
    char sex;
    int age;
    double score;
} Stu;

int main()
{
    //Stu s0, s1, s2;

    //int arr[3][4] = {{1, 2, 3, 4}, {4, 6, 7, 8}, {9, 10}};

    Stu s[] = {{"TangSeng", 'm', 29, 99.0}, {"WuKong", 'm', 19, 95}, 
                {"BaJie", 'm', 18, 90.0}, {"ShaSeng", 'f', 20, 88.0}};

    for (int i = 0; i < sizeof(s) / sizeof(*s); i++)
    {
        printf("name: %s\nsex: %c\nage: %d\nscore: %.2f\n", 
            s[i].name, s[i].sex, s[i].age, s[i].score);
        printf("==========\n");
    }

    return 0;
}