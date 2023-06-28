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
    Stu s1 = {"JimGreen", 'm', 19, 95.0};
    Stu s2 = s1;

    printf("name: %s\n", s2.name);
    printf("sex: %c\n", s2.sex);
    printf("age: %d\n", s2.age);
    printf("score: %.2f\n", s2.score);

    return 0;
}