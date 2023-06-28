#include <stdio.h>

//#pragma pack(1)

struct student_st
{
    char c;
    int score;
    const char *name;
};

static void show_student(struct student_st *stu)
{
    printf("c = %c, score = %d, name = %s\n", stu->c, stu->score, stu->name);
}

// initialization of struct members
int main1()
{
    // method1, initialize in the order in which members are declared
    struct student_st s1 = {'A', 91, "Alan"};
    show_student(&s1);

    // method2, specifies member initialization
    struct student_st s2 = 
    {
        .name = "YunYun",
        .c = 'B',
        .score = 92,
    };
    show_student(&s2);

    // method3, specifies member initialization
    struct student_st s3 = 
    {
        c: 'C',
        score: 93,
        name: "Wood",
    };
    show_student(&s3);

    return 0;
}

enum Day
{
    Mon = 1, Tue, Wed, Thu, Fri, Sat=100, Sun
};

// enum
int main2()
{
    printf("%d, %d, %d, %d, %d, %d, %d\n",
            Mon, Tue, Wed, Thu, Fri, Sat, Sun);

    return 0;
}

struct _info
{
    char m;
    short n;
};

struct _stu
{
    char a;
    short b;
    int c;
    //int arr[10];
    //double arr[10];
    struct _info inf;
} Stu;

// the size of struct
int main3()
{
    struct _stu s1;
    printf("sizeof(s1) = %d, sizeof(Stu) = %d\n", sizeof(s1), sizeof(Stu)) ;

    //printf("&a = %p, &b = %p, &c = %p\n", &s1.a, &s1.b, &s1.c);
    //printf("&a = %p, &b = %p, &c = %p, &arr = %p\n", &s1.a, &s1.b, &s1.c, &s1.arr);
    printf("&a = %p, &b = %p, &c = %p, &inf.m = %p, &inf.n = %p\n", &s1.a, &s1.b, &s1.c, &s1.inf.m, &s1.inf.n);

    return 0;
}

// interpret the contents of the memory
int main()
{
    int data = 0xffffffff;
    printf("%d\n", data);  // -1
    printf("%u\n", data);  // 2^31-1

    return 0;
}