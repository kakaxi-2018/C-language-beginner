#include <stdio.h>

// way1
struct
{
    char name[30];
    char sex;
    int age;
    double score;
} s0;

// way2
struct stu
{
    char name[30];
    char sex;
    int age;
    double score;
};

// way3
typedef struct _stu
{
    char name[30];
    char sex;
    int age;
    double score;
} Stu;

int main()
{
    // way1
    struct
    {
        char name[30];
        char sex;
        int age;
        double score;
    } s1;

    // way2
    struct stu s2;

    // way3
    Stu s3;

    return 0;
}