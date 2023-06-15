#include <stdio.h>

// way 1
struct 
{
    char name[30];
    char sex;
    int age;
    double score;
} s1;

// way 2
struct stu 
{
    char name[30];
    char sex;
    int age;
    double score;
};

// way 3
typedef struct _stu
{
    char name[30];
    char sex;
    int age;
    double score;
} Stu;

int main()
{
    struct stu s2;
    struct stu s3;

    Stu s4;
    Stu s5;

    return 0;
}