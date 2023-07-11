#include <stdio.h>
#include <stdlib.h>

#define F_PRINT_ERR(e)              \
    do                              \
    {                               \
        if (NULL == e)              \
        {                           \
            printf("open error\n"); \
            exit(-1);               \
        }                           \
    } while (0)


typedef struct student
{
    int num;
    char name[30];
    char sex;
    double math;
    double english;
    double chinese;
} Stu;

// write content to file
int main1()
{
    Stu s[4] = 
    {
        {.num = 1001, .name = "wukong", .sex = 'm', .math = 56.0, .english = 68.0, .chinese = 69.0},
        {.num = 1002, .name = "baoyu", .sex = 'f', .math = 77.0, .english = 55.0, .chinese = 89.0},
        {.num = 1003, .name = "zhangfei", .sex = 'm', .math = 43.0, .english = 25.0, .chinese = 65.0},
        {.num = 1004, .name = "songjiang", .sex = 'm', .math = 85.0, .english = 60.0, .chinese = 95.0}
    };

    FILE *pfw = fopen("aa.txt", "w+");
    F_PRINT_ERR(pfw);

    int n;

    for (int i = 0; i < 4; i++)
    {
        fwrite((void *)&s[i], sizeof(Stu), 1, pfw);
    }

    fclose(pfw);

    return 0;
}

int main2()
{
    Stu s;

    FILE *pfr = fopen("aa.txt", "r+");
    F_PRINT_ERR(pfr);

    for (int i = 0; i < 4; i++)
    {
        fread((void *)&s, sizeof(Stu), 1, pfr);
        printf("num: %d, name: %10s, sex: %c, math: %.2f, english: %.2f, chinese: %.2f\n",
            s.num, s.name, s.sex, s.math, s.english, s.chinese);
    }

    fclose(pfr);
    return 0;
}

int main()
{
    FILE *pf = fopen("aa.txt", "r");
    F_PRINT_ERR(pf);

    Stu s[3];
    int n;

    while ((n = fread((void *)s, sizeof(Stu), 3, pf)) > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("num: %d, name: %10s, sex: %c, math: %.2f, english: %.2f, chinese: %.2f\n",
                s[i].num, s[i].name, s[i].sex, s[i].math, s[i].english, s[i].chinese);
        }
    }

    fclose(pf);

    return 0;
}
