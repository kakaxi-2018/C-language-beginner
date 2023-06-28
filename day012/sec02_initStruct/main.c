#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stu
{
    char name[30];
    char sex;
    int age;
    double score;
};

typedef struct _stu
{
    char name[30];
    char sex;
    int age;
    double score;
} Student;

int main1()
{
    int a = 20;
    a = 30;

    int arr[10] = {1, 2, 3, 4, 5};
    //arr = {2, 4, 6, 8, 19};  // compile error

    struct stu s = {"JimGreen", 'm', 18, 88.0};
    //s = {"Tom", 'f', 19, 99.0};
    //s.name = "Lili";  // compile error
    strcpy(s.name, "Lili");
    s.sex = 'f';
    s.age = 20;
    s.score = 95.0;
    printf("name: %s\nsex: %c\nage: %d\nscore: %.2f\n", s.name, s.sex, s.age, s.score);

    printf("==========\n");
    // space before %c is needed, before s.name don't need &
    //scanf("%s %c%d%f", s.name, &s.sex, &s.age, &s.score); 
    scanf("%s %c%d%lf", s.name, &s.sex, &s.age, &s.score);  // %lf for double type in scanf()
    printf("name: %s\nsex: %c\nage: %d\nscore: %.2f\n", s.name, s.sex, s.age, s.score);

    return 0;
}

int main2()
{
    struct stu s = {"zhangsan", 'm', 17, 95.0};
    struct stu *ps = &s;
    printf("name: %s\nsex: %c\nage: %d\nscore: %.2f\n", ps->name, ps->sex, ps->age, ps->score);

    printf("==========\n");
    printf("name: %s\nsex: %c\nage: %d\nscore: %.2f\n", (*ps).name, (*ps).sex, (*ps).age, (*ps).score);

    return 0;
}

int main3()
{
    Student *ps = (Student *)malloc(1 * sizeof(Student));

    if (NULL == ps)
    {
        printf("malloc error\n");
        exit(1);
    }

    strcpy(ps->name, "JimGreen");  // don't need & before ps->name
    ps->sex = 'f';
    ps->age = 20;
    ps->score = 93.5;

    printf("name: %s\nsex: %c\nage: %d\nscore: %.2f\n", ps->name, ps->sex, ps->age, ps->score);

    free(ps);
    ps = NULL;

    return 0;
}

int main()
{
    struct stu s = {"wangwu", 'm', 17, 78.0};
    struct stu ss = s;
    printf("name: %s\nsex: %c\nage: %d\nscore: %.2f\n", ss.name, ss.sex, ss.age, ss.score);

    return 0;
}